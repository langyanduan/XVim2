//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPathCell;

@protocol NSPathCellDelegate <NSObject>

@optional
- (void)pathCell:(NSPathCell *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathCell:(NSPathCell *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
@end

