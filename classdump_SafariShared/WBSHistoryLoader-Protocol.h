//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSURL;

@protocol WBSHistoryLoader <NSObject>
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (id)initWithURL:(NSURL *)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
@end

