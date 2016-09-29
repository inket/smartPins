//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSURLCompletionMatchData-Protocol.h>

@class NSString, WBSHistoryItem;

__attribute__((visibility("hidden")))
@interface URLCompletionMatchHistoryItemData : NSObject <WBSURLCompletionMatchData>
{
    WBSHistoryItem *_historyItem;
}

@property(readonly, nonatomic) WBSHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
- (void).cxx_destruct;
- (id)_historyItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) BOOL containsBookmark;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (id)initWithHistoryItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

