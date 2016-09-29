//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/Window.h>

@class BookmarksUndoController, NSString;

__attribute__((visibility("hidden")))
@interface BrowserWindow : Window
{
    NSString *_title;
    BOOL _logAfterNextRedisplay;
    BOOL _isCapturingMiniWindowImage;
    BookmarksUndoController *_bookmarksUndoController;
    id _mouseUpEventMonitor;
    BOOL _hasMoved;
    BOOL _ignoresOrderFront;
}

+ (id)frontmostWindow;
@property(nonatomic) BOOL ignoresOrderFront; // @synthesize ignoresOrderFront=_ignoresOrderFront;
@property(retain, nonatomic) BookmarksUndoController *bookmarksUndoController; // @synthesize bookmarksUndoController=_bookmarksUndoController;
- (void).cxx_destruct;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)arg1;
- (void)replaceInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1;
- (id)orderedTabViewItems;
- (void)setCurrentTabViewItem:(id)arg1;
- (id)currentTabViewItem;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)exitFullScreenMode:(id)arg1;
- (void)enterFullScreenMode:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
@property(nonatomic, getter=isLayerBacked) BOOL layerBacked;
- (void)sendEvent:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)setWindowController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setIsCapturingMiniWindowImage:(BOOL)arg1;
- (BOOL)isMainWindow;
- (BOOL)isKeyWindow;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)close;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (void)__close;
- (void)updateTitle;
- (void)runToolbarCustomizationPalette:(id)arg1;
- (void)displayIfNeeded;
- (void)display;
- (void)logFirstPageLoaded;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (BOOL)performKeyEquivalent:(id)arg1;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)_adjustedFrameFromDefaults:(struct CGRect)arg1;
- (struct CGRect)_adjustedFrameForSaving:(struct CGRect)arg1;
- (void)_commonAwake;
- (void)updateCGSWindowTitle;
- (void)_handleLeftMouseUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_startedMoving:(id)arg1;
- (void)setUpBrowserWindow;
- (BOOL)_hasActiveControls;
- (void)zoom:(id)arg1;

@end

