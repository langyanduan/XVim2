//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIssueProvider.h>

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor33SourceCodeDiagnosticIssueProvider : IDEIssueProvider
{
    // Error parsing type: , name: filePathsWithKnownIssues
    // Error parsing type: , name: workspaceFileRemovalObserver
}

+ (int)providerType;
- (CDUnknownBlockType).cxx_destruct;
- (BOOL)allowsNewIssuesToBeCoalesced;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)blueprintFilesRemovedNotification:(id)arg1;
- (void)buildIssuesChangedNotification:(id)arg1;
- (void)diagnosticsChangedNotification:(id)arg1;
- (void)primitiveInvalidate;
- (void)dealloc;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end

