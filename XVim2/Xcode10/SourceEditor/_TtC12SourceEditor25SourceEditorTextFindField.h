//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import <SourceEditor/_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_-Protocol.h>

@class NSFont, _TtC12SourceEditor25SourceEditorTextFindPanel;

__attribute__((visibility("hidden")))
@interface _TtC12SourceEditor25SourceEditorTextFindField : NSSearchField <_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_>
{
    // Error parsing type: , name: panel
    // Error parsing type: , name: insets
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cancelOperation:(id)arg1;
- (struct CGRect)rectForSearchTextWhenCentered:(BOOL)arg1;
- (struct CGRect)rectForCancelButtonWhenCentered:(BOOL)arg1;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets;
@property(nonatomic, retain) NSFont *font;
@property(nonatomic) __weak _TtC12SourceEditor25SourceEditorTextFindPanel *panel; // @synthesize panel;

@end

