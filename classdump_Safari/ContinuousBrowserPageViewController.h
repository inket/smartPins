//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/ContinuousPageViewDelegate-Protocol.h>

@class BrowserTabViewItem, ContinuousPageView, NSString;

__attribute__((visibility("hidden")))
@interface ContinuousBrowserPageViewController : NSViewController <ContinuousPageViewDelegate>
{
    BrowserTabViewItem *_browserTabViewItem;
    id _currentItem;
}

@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) __weak BrowserTabViewItem *browserTabViewItem; // @synthesize browserTabViewItem=_browserTabViewItem;
- (void).cxx_destruct;
- (void)_didUpdateBrowserWKViewInTabContentView:(id)arg1;
- (id)_tabContentView;
- (void)_installContinuousPageViewIfNeeded;
- (double)topContentInsetForContinuousPageView:(id)arg1;
- (BOOL)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4;
- (void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6;
- (void)continuousPageView:(id)arg1 transitionToPageViewWasCanceled:(id)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3;
- (id)continuousPageView:(id)arg1 pageViewForItem:(id)arg2;
- (id)continuousPageView:(id)arg1 itemAfter:(id)arg2;
- (id)continuousPageView:(id)arg1 itemBefore:(id)arg2;
- (void)didMoveToBrowserTabViewItem:(id)arg1;
- (void)exitContinuousMode;
- (void)loadItem:(id)arg1;
- (void)resetAllPageWithHeaderViewControllers;
- (id)pageWithHeaderViewControllerForItem:(id)arg1;
@property(readonly, retain, nonatomic) ContinuousPageView *continuousPageView;
- (void)viewDidAppear;
- (void)loadView;
- (id)initWithBrowserTabViewItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

