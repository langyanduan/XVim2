//
//  SourceCodeEditorViewWrapper.swift
//  XVim2
//
//  Created by Ant on 22/10/2017.
//  Copyright © 2017 Shuichiro Suzuki. All rights reserved.
//

// class-dump -H /Applications/Xcode.app/Contents/SharedFrameworks/DVTSourceEditor.framework/DVTSourceEditor
// class-dump -H /Applications/Xcode.app/Contents/Plugins/IDESourceEditor.framework/IDESourceEditor
// class-dump -H /Applications/Xcode.app/Contents/SharedFrameworks/SourceEditor.framework/SourceEditor

import Cocoa

// SourceEditor.SourceEditorView.addSelectedRange(_: SourceEditor.SourceEditorRange, modifiers: SourceEditor.SourceEditorSelectionModifiers, scrollPlacement: SourceEditor.ScrollPlacement?, alwaysScroll: Swift.Bool) -> ()
// _$S12SourceEditor0aB4ViewC16addSelectedRange_9modifiers15scrollPlacement12alwaysScrollyAA0abF0V_AA0aB18SelectionModifiersVAA0kI0OSgSbtF

@_silgen_name("scev_wrapper_call") func _get_cursor_style(_:UnsafeRawPointer) -> (CursorStyle)
@_silgen_name("scev_wrapper_call2") func _set_cursor_style(_:UnsafeRawPointer, _:CursorStyle) -> ()
@_silgen_name("scev_wrapper_call3") func _get_data_source(_:UnsafeRawPointer) -> (UnsafeMutableRawPointer)
@_silgen_name("scev_wrapper_call4") func _set_selected_range(_:UnsafeRawPointer, _:XVimSourceEditorRange, modifiers:UInt32) -> ()
@_silgen_name("scev_wrapper_call5") func _add_selected_range(_:UnsafeRawPointer, _:XVimSourceEditorRange, modifiers:UInt32) -> ()
@_silgen_name("scev_wrapper_call6") func _scev_voidToInt(_:UnsafeRawPointer) -> (Int)

fileprivate struct _SourceCodeEditorViewWrapper {

    let contextPtr = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: 8)

    init?(_ view : AnyObject?, _ functionPtr : UnsafeMutableRawPointer?) {
        
        guard let sourceCodeEditorView = view,
            let fp = functionPtr else {return nil}
        
        contextPtr[0] = Unmanaged.passRetained(sourceCodeEditorView).toOpaque()
        contextPtr[1] = fp
    }
    
    func voidToInt() -> Int {
        return _scev_voidToInt(contextPtr)
    }

    func getCursorStyle() -> CursorStyle {
        // return CursorStyle.block
        return _get_cursor_style(contextPtr)
    }
    func setCursorStyle(_ style: CursorStyle) {
        _set_cursor_style(contextPtr, style)
    }
    
    func getDataSource() -> AnyObject? {
        return Unmanaged.fromOpaque(_get_data_source(contextPtr).assumingMemoryBound(to: AnyObject?.self)).takeRetainedValue()
    }
    func addSelectedRange(_ range:XVimSourceEditorRange, modifiers:XVimSelectionModifiers)
    {
        _add_selected_range(contextPtr, range, modifiers: modifiers.rawValue)
    }
    func setSelectedRange(_ range:XVimSourceEditorRange, modifiers:XVimSelectionModifiers)
    {
        _set_selected_range(contextPtr, range, modifiers: modifiers.rawValue)
    }
}




class SourceCodeEditorViewWrapper: NSObject {
    private let fpSetCursorStyle                = function_ptr_from_name("_$S12SourceEditor0aB4ViewC11cursorStyleAA0ab6CursorE0Ovs", nil)
    private let fpGetCursorStyle                = function_ptr_from_name("_$S12SourceEditor0aB4ViewC11cursorStyleAA0ab6CursorE0Ovg", nil)
    private let fpGetDataSource                 = function_ptr_from_name("_$S12SourceEditor0aB4ViewC04dataA0AA0ab4DataA0Cvg", nil)
    private let fpSetSelectedRangeWithModifiers = function_ptr_from_name("_$S12SourceEditor0aB4ViewC16setSelectedRange_9modifiersyAA0abF0V_AA0aB18SelectionModifiersVtF", nil)
    private let fpAddSelectedRangeWithModifiers = function_ptr_from_name("_$S12SourceEditor0aB4ViewC16addSelectedRange_9modifiers15scrollPlacement12alwaysScrollyAA0abF0V_AA0aB18SelectionModifiersVAA0kI0OSgSbtF", nil)
    /* not work in Xcode10
    private let fpFuncLinesPerPage              = function_ptr_from_name("_$S12SourceEditor0aB4ViewC12linesPerPageSiyF", nil)
     */
    
    private weak var editorViewProxy : SourceCodeEditorViewProxy?
    
    @objc
    lazy public var dataSourceWrapper = {
        return SourceEditorDataSourceWrapper(withSourceCodeEditorViewWrapper: self)
    }()
    
    @objc
    public init(withProxy proxy:SourceCodeEditorViewProxy) {
        editorViewProxy = proxy
    }
    
    private var editorView : AnyObject? {
        return editorViewProxy?.view
    }
    
    @objc
    var cursorStyle : CursorStyle {
        get {
            if let fp = fpGetCursorStyle {
                if let w = _SourceCodeEditorViewWrapper(editorView, fp) {
                    return w.getCursorStyle()
                }
            }
            return CursorStyle.block
        }
        set {
            guard let fp = fpSetCursorStyle else { return }
            guard let w = _SourceCodeEditorViewWrapper(editorView, fp) else { return }
            w.setCursorStyle(newValue)
        }
    }
    
    @objc
    var dataSource : AnyObject? {
        guard let fp = fpGetDataSource else { return nil }
        guard let w = _SourceCodeEditorViewWrapper(editorView, fp) else { return nil }
        return w.getDataSource()
    }
    
    @objc
    public func addSelectedRange(_ range:XVimSourceEditorRange, modifiers:XVimSelectionModifiers) -> Void
    {
        guard let fp = fpAddSelectedRangeWithModifiers else { return }
        guard let w = _SourceCodeEditorViewWrapper(editorView, fp) else { return }
        w.addSelectedRange(range, modifiers: modifiers)
    }
    
    @objc
    public func setSelectedRange(_ range:XVimSourceEditorRange, modifiers:XVimSelectionModifiers)
    {
        guard let fp = fpSetSelectedRangeWithModifiers else { return }
        guard let w = _SourceCodeEditorViewWrapper(editorView, fp) else { return }
        w.setSelectedRange(range, modifiers: modifiers)
    }
    
    /* not work in Xcode10
    @objc
    public func linesPerPage() -> Int
    {
        guard let fp = fpFuncLinesPerPage else { return 0 }
        guard let w = _SourceCodeEditorViewWrapper(editorView, fp) else { return 0 }
        return w.voidToInt()
    }
     */
    
}

