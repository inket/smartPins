//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSOperation;
@protocol ReusableResultBookmarksOperation;

@protocol ReusableResultBookmarksOperation <NSObject>
@property(retain, nonatomic) id result;
- (BOOL)canReuseResultOfOperation:(NSOperation<ReusableResultBookmarksOperation> *)arg1;
@end

