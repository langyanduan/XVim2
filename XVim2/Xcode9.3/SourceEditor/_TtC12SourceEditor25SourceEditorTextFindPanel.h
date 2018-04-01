//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SourceEditor/NSControlTextEditingDelegate-Protocol.h>

@class NSImageView, NSLayoutConstraint, NSSearchField, NSSegmentedControl, NSTextField, NSView, _TtC12SourceEditor18TextFindTextButton, _TtC12SourceEditor19TextFindPopUpButton;
@protocol _TtP12SourceEditor34SourceEditorTextFindPanelFieldType_;

@interface _TtC12SourceEditor25SourceEditorTextFindPanel : NSViewController <NSControlTextEditingDelegate>
{
    // Error parsing type: , name: findPanel
    // Error parsing type: , name: replacePanel
    // Error parsing type: , name: findField
    // Error parsing type: , name: replaceField
    // Error parsing type: , name: nextPreviousControl
    // Error parsing type: , name: doneControl
    // Error parsing type: , name: replaceControl
    // Error parsing type: , name: panelModePopUp
    // Error parsing type: , name: panelModeSeparator
    // Error parsing type: , name: panelModeSeparatorHeightConstraint
    // Error parsing type: , name: matchesLabel
    // Error parsing type: , name: caseSensitiveSeparator
    // Error parsing type: , name: caseSensitiveSeparatorHeightConstraint
    // Error parsing type: , name: caseSensitiveButton
    // Error parsing type: , name: searchPatternSeparator
    // Error parsing type: , name: searchPatternSeparatorHeightConstraint
    // Error parsing type: , name: searchPatternPopUp
    // Error parsing type: , name: replaceIcon
    // Error parsing type: , name: replaceFieldTitle
    // Error parsing type: , name: replaceFieldTitleSeparator
    // Error parsing type: , name: replaceFieldTitleSeparatorHeightConstraint
    // Error parsing type: , name: replacePanelHeightConstraint
    // Error parsing type: , name: client
    // Error parsing type: , name: recentQueries
    // Error parsing type: , name: colorTheme
    // Error parsing type: , name: controlFont
    // Error parsing type: , name: boldControlFont
    // Error parsing type: , name: miniControlFont
    // Error parsing type: , name: replacePanelExpandedHeight
    // Error parsing type: , name: mode
    // Error parsing type: , name: replaceMode
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchPatternPopUpAction:(id)arg1;
- (void)caseSensitiveButtonAction:(id)arg1;
- (void)replaceAction:(id)arg1;
- (void)doneControlAction:(id)arg1;
- (void)nextPreviousControlAction:(id)arg1;
- (void)findFieldAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)popUpButtonWillDisplay:(id)arg1;
- (void)updateDisplayForColorTheme;
- (void)clearRecentQueries;
- (void)applyRecentQueryMenuItem:(id)arg1;
- (void)toggleFindReplaceMode:(id)arg1;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)performTextFinderAction:(id)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *replacePanelHeightConstraint; // @synthesize replacePanelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *replaceFieldTitleSeparatorHeightConstraint; // @synthesize replaceFieldTitleSeparatorHeightConstraint;
@property(nonatomic) __weak NSView *replaceFieldTitleSeparator; // @synthesize replaceFieldTitleSeparator;
@property(nonatomic) __weak NSTextField *replaceFieldTitle; // @synthesize replaceFieldTitle;
@property(nonatomic) __weak NSImageView *replaceIcon; // @synthesize replaceIcon;
@property(nonatomic) __weak _TtC12SourceEditor19TextFindPopUpButton *searchPatternPopUp; // @synthesize searchPatternPopUp;
@property(nonatomic) __weak NSLayoutConstraint *searchPatternSeparatorHeightConstraint; // @synthesize searchPatternSeparatorHeightConstraint;
@property(nonatomic) __weak NSView *searchPatternSeparator; // @synthesize searchPatternSeparator;
@property(nonatomic) __weak _TtC12SourceEditor18TextFindTextButton *caseSensitiveButton; // @synthesize caseSensitiveButton;
@property(nonatomic) __weak NSLayoutConstraint *caseSensitiveSeparatorHeightConstraint; // @synthesize caseSensitiveSeparatorHeightConstraint;
@property(nonatomic) __weak NSView *caseSensitiveSeparator; // @synthesize caseSensitiveSeparator;
@property(nonatomic) __weak NSTextField *matchesLabel; // @synthesize matchesLabel;
@property(nonatomic) __weak NSLayoutConstraint *panelModeSeparatorHeightConstraint; // @synthesize panelModeSeparatorHeightConstraint;
@property(nonatomic) __weak NSView *panelModeSeparator; // @synthesize panelModeSeparator;
@property(nonatomic) __weak _TtC12SourceEditor19TextFindPopUpButton *panelModePopUp; // @synthesize panelModePopUp;
@property(nonatomic) __weak NSSegmentedControl *replaceControl; // @synthesize replaceControl;
@property(nonatomic) __weak NSSegmentedControl *doneControl; // @synthesize doneControl;
@property(nonatomic) __weak NSSegmentedControl *nextPreviousControl; // @synthesize nextPreviousControl;
@property(nonatomic) __weak NSSearchField<_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_> *replaceField; // @synthesize replaceField;
@property(nonatomic) __weak NSSearchField<_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_> *findField; // @synthesize findField;
@property(nonatomic) __weak NSView *replacePanel; // @synthesize replacePanel;
@property(nonatomic) __weak NSView *findPanel; // @synthesize findPanel;

@end

