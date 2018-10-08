//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, Protocol;

@protocol NSObject
@property(nonatomic, readonly) NSString *description;
- (void *)zone;
- (long long)retainCount;
- (id)autorelease;
- (void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id *)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end

