//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BrowserContentViewControllerObjCAdapter, CombinedFavoritesGridViewController, KeyLoopSplicingContainerView, NSLayoutConstraint, NSString, NSView, TestDriveMigrationBannerViewController, TopSitesViewController;
@protocol StartPageContentViewController;

__attribute__((visibility("hidden")))
@interface StartPageViewController : NSViewController
{
    NSView *_rootView;
    NSViewController<StartPageContentViewController> *_currentMainContainerViewController;
    CombinedFavoritesGridViewController *_favoritesGridViewController;
    TopSitesViewController *_topSitesViewController;
    TestDriveMigrationBannerViewController *_testDriveMigrationBannerViewController;
    double _defaultBottomBannerContainerToMainContainerBottomConstraintConstant;
    BOOL _canShowTestDriveMigrationBanner;
    int _mode;
    BrowserContentViewControllerObjCAdapter *_browserContentViewController;
    NSView *_externalCenteringView;
    KeyLoopSplicingContainerView *_mainContainerView;
    NSView *_bottomBanner;
    NSView *_bottomBannerContainer;
    NSLayoutConstraint *_mainContainerToBottomBannerContainerConstraint;
    NSLayoutConstraint *_bottomBannerContainerToMainContainerBottomConstraint;
}

+ (id)urlForMode:(int)arg1;
+ (int)defaultStartPageMode;
+ (id)defaultPageTitle;
@property(retain, nonatomic) NSLayoutConstraint *bottomBannerContainerToMainContainerBottomConstraint; // @synthesize bottomBannerContainerToMainContainerBottomConstraint=_bottomBannerContainerToMainContainerBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerToBottomBannerContainerConstraint; // @synthesize mainContainerToBottomBannerContainerConstraint=_mainContainerToBottomBannerContainerConstraint;
@property(nonatomic) __weak NSView *bottomBannerContainer; // @synthesize bottomBannerContainer=_bottomBannerContainer;
@property(retain, nonatomic) NSView *bottomBanner; // @synthesize bottomBanner=_bottomBanner;
@property(nonatomic) __weak KeyLoopSplicingContainerView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(nonatomic) BOOL canShowTestDriveMigrationBanner; // @synthesize canShowTestDriveMigrationBanner=_canShowTestDriveMigrationBanner;
@property(retain, nonatomic) NSView *externalCenteringView; // @synthesize externalCenteringView=_externalCenteringView;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak BrowserContentViewControllerObjCAdapter *browserContentViewController; // @synthesize browserContentViewController=_browserContentViewController;
- (void).cxx_destruct;
- (id)test_combinedFavoritesGridViewController;
- (void)_stopObservingMigrationState;
- (void)_startObservingMigrationState;
- (void)_testDriveMigrationBannerStatusDidChange:(id)arg1;
- (void)_updateTestDriveMigrationBannerVisibilityAnimated:(BOOL)arg1;
- (void)_updateBottomBanner;
- (void)_animateBottomBannerIn:(id)arg1;
- (void)_animateBottomBannerOut;
- (void)_reLayOutThenRunAnimationGroup:(CDUnknownBlockType)arg1;
- (void)setBottomBanner:(id)arg1 animated:(BOOL)arg2;
- (BOOL)handleScrollEventAsSwipeGesture:(id)arg1;
- (void)_setMainContainerViewControllerUsingMode:(int)arg1;
- (void)_updateWindowAndTabTitle;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) struct CGRect startPageViewContentRect;
@property(readonly, nonatomic) NSString *pageTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBrowserContentViewController:(id)arg1;
- (id)nibName;

@end

