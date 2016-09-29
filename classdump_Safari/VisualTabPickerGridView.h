//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/VisualTabPickerTileContainerDataSource-Protocol.h>
#import <Safari/VisualTabPickerTileContainerDelegate-Protocol.h>

@class FlippedView, NSMutableArray, NSMutableDictionary, NSString, VisualTabPickerViewController;
@protocol VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate;

__attribute__((visibility("hidden")))
@interface VisualTabPickerGridView : NSView <VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate>
{
    FlippedView *_gridContainerView;
    NSMutableArray *_tileContainerViews;
    NSMutableArray *_arrayOfTabItemsPerContainer;
    NSMutableArray *_additionalVerticalOffsetForTilesAtRow;
    NSMutableDictionary *_cachedSnapshots;
    unsigned long long _currentMaximumNumberOfContainersPerRow;
    double _leftGridOffset;
    double _tileWidth;
    double _tileHeight;
    BOOL _didStartEntryAnimation;
    BOOL _shouldDisplayHostnameForThumbnailContainers;
    BOOL _gridAnimationInProgress;
    id <VisualTabPickerGridViewDataSource> _dataSource;
    id <VisualTabPickerGridViewDelegate> _delegate;
    VisualTabPickerViewController *_visualTabPickerViewController;
}

@property(readonly, nonatomic) BOOL gridAnimationInProgress; // @synthesize gridAnimationInProgress=_gridAnimationInProgress;
@property(readonly, nonatomic) BOOL shouldDisplayHostnameForThumbnailContainers; // @synthesize shouldDisplayHostnameForThumbnailContainers=_shouldDisplayHostnameForThumbnailContainers;
@property(nonatomic) __weak VisualTabPickerViewController *visualTabPickerViewController; // @synthesize visualTabPickerViewController=_visualTabPickerViewController;
@property(nonatomic) __weak id <VisualTabPickerGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_snapshotOfView:(id)arg1 visibleBounds:(struct CGRect)arg2;
- (id)_snapshotOfView:(id)arg1 visibleBounds:(struct CGRect)arg2 ofType:(long long)arg3 viewWasShownInWindow:(BOOL)arg4;
- (id)_snapshotViewForView:(id)arg1 visibleBounds:(struct CGRect)arg2 ofType:(long long)arg3 viewWasShownInWindow:(BOOL)arg4;
- (void)_cacheSelectedTabSnapshotIfPossible;
- (double)_additionalHeightTakenByStackedTilesForRow:(unsigned long long)arg1;
- (void)_getHorizontalLeftOffset:(double *)arg1 rightOffset:(double *)arg2;
- (void)_computeArrayOfTabItemsPerContainer;
- (void)_addCreateNewTabContainerView;
- (void)_addContainerViewAtIndex:(unsigned long long)arg1 isVisible:(BOOL)arg2;
- (void)_setUpContainerViews;
- (double)_horizontalMargin;
- (void)_setUpGridContainer;
- (void)_containerViewForTabItem:(id)arg1 containerView:(id *)arg2 indexInContainerView:(unsigned long long *)arg3;
- (unsigned long long)_maximumNumberOfContainersPerRow;
- (unsigned long long)_indexOfContainerForTabViewItem:(id)arg1;
- (id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerView:(id)arg2;
- (id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerAtIndex:(unsigned long long)arg2;
- (unsigned long long)_indexForContainerView:(id)arg1;
- (BOOL)_shouldDisplayNewTabContainer;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_numberOfTilesInGridView;
- (struct CGRect)_frameForTileAtIndex:(unsigned long long)arg1;
- (void)_computeLayoutConstants;
- (void)_hideTilesNotVisibleDuringExitAnimation;
- (void)_willStartExitAnimation;
- (void)_entryAnimationHasFinished;
- (void)_unhideAllTiles;
- (struct _NSRange)_rangeOfVisibleTiles;
- (void)_resetGridView;
- (double)_toolbarHeight;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)_dispatchMouseEventToTileContainers:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)visualTabPickerTileContainerView:(id)arg1 didToggleMuteButtonOnTileAtIndex:(unsigned long long)arg2;
- (void)didRequestNewTabForVisualTabPickerTileContainerView:(id)arg1;
- (void)visualTabPickerTileContainerView:(id)arg1 didSelectTileAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerTileContainerView:(id)arg1 closeTileAtIndex:(unsigned long long)arg2;
- (BOOL)canCloseVisualTabPickerTileContainerView:(id)arg1;
- (int)visualTabPickerTileContainerView:(id)arg1 muteButtonStateForTileAtIndex:(unsigned long long)arg2;
- (BOOL)visualTabPickerTileContainerView:(id)arg1 shouldShowMuteButtonForTileAtIndex:(unsigned long long)arg2;
- (struct CGRect)visualTabPickerTileContainerView:(id)arg1 visibleBoundsForTileAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerTileContainerView:(id)arg1 viewForTileAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerTileContainerView:(id)arg1 titleForTileAtIndex:(unsigned long long)arg2;
- (id)titleForVisualTabPickerTileContainerView:(id)arg1;
- (unsigned long long)numberOfTilesInVisualTabPickerTileContainerView:(id)arg1;
- (void)updateMuteButtonForTab:(id)arg1;
- (void)_startGridAnimation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startGridAnimation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGRect)frameOfSelectedTile;
- (void)updateGridViewLayout;
- (double)gridViewContentHeight;
- (void)reloadTabViewItem:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)addTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)hideCloseButtons;
- (void)reloadGridView;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
