//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryLoader-Protocol.h>

@class NSCountedSet, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue, WBSHistoryLoaderDelegate;

@interface WBSHistoryPropertyListLoader : NSObject <WBSHistoryLoader>
{
    NSURL *_url;
    unsigned long long _itemCountLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _loadInProgress;
    NSMutableArray *_loadedItems;
    NSMutableArray *_loadedDiscardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    id <WBSHistoryLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSHistoryLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (BOOL)_loadHistoryFromDictionary:(id)arg1;
- (void)_loadHistory;
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

