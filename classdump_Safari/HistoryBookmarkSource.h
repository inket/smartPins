//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/BookmarkSource.h>

@class NSArray, NSDate, NSDateFormatter, NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface HistoryBookmarkSource : BookmarkSource
{
    NSMenu *_historyMenu;
    NSMenuItem *_recentlyClosedSubmenuMenuItem;
    NSMenuItem *_reopenRecentlyClosedTabsMenuItem;
    unsigned long long _builtInHistoryMenuItemsCount;
    NSArray *_sessions;
    NSDate *_oldestDateLoaded;
    NSDateFormatter *_dateFormatter;
}

+ (id)sharedSource;
- (void).cxx_destruct;
- (BOOL)validate__takeLocationFromHistoryEntry:(id)arg1;
- (int)_recentHistoryLimit;
- (id)_entriesFromMixedItems:(id)arg1;
- (id)_displayedTitleForEntry:(id)arg1;
- (void)_clearHistoryAndKeepWebsiteDataFromMenu:(id)arg1;
- (void)_clearHistoryFromMenu:(id)arg1;
- (void)_appendHistoryToMenu;
- (long long)_tabGroupItemPolicyWithWindowPolicy:(long long)arg1;
- (long long)_windowItemPolicyForClosedStates:(id)arg1;
- (void)_updateReopenRecentlyClosedTabsMenuItem;
- (void)_updateRecentlyClosedSubmenu;
- (id)_addSubmenu:(id)arg1 withTitle:(id)arg2;
- (BOOL)_addItemsForSession:(id)arg1 toMenu:(id)arg2 skip:(unsigned int)arg3 limit:(unsigned int)arg4;
- (void)_addHistoryEntry:(id)arg1 toMenu:(id)arg2;
- (void)_updateHistoryMenu;
- (void)_takeLocationFromHistoryEntry:(id)arg1;
- (id)_titleForSession:(id)arg1;
- (void)_removeHistoryFromMenu;
- (void)_recentlyClosedTabsOrWindowsDidChange;
- (void)_historySessionsDidChange;
- (id)titleStringForContentItem:(id)arg1;
- (id)parentOfContentItem:(id)arg1;
- (unsigned int)numberOfChildrenOfContentItem:(id)arg1;
- (id)imageForContentItem:(id)arg1;
- (BOOL)deleteContentItems:(id)arg1 withParentWindow:(id)arg2 undoManager:(id)arg3;
- (id)child:(unsigned int)arg1 ofContentItem:(id)arg2;
- (id)contentItemsToInitiallyExpand;
- (void)_generateSessionsAfterDate:(id)arg1;
- (void)_generateSessionsForHistoryViewIfNecessary;
- (void)_generateSessionsForHistoryMenuIfNecessary;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (BOOL)contentItemCanBeSearchResult:(id)arg1;
- (BOOL)canDeleteContents;
- (id)bookmarksFromContentItems:(id)arg1;
- (id)bookmarkSourceImage;
- (id)bookmarkFromContentItem:(id)arg1;
- (id)addressStringForContentItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)performDelayedLaunchOperations;
- (void)setHistoryMenu:(id)arg1;
- (void)dealloc;
- (id)init;

@end

