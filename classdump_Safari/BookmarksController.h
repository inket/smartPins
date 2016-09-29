//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/BookmarkGroupDelegate-Protocol.h>
#import <Safari/Command1Through9Receiver-Protocol.h>
#import <Safari/FileChangeObserverClient-Protocol.h>
#import <Safari/FileLockerClient-Protocol.h>
#import <Safari/OldSpotlightDataSource-Protocol.h>

@class FileChangeObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSURL, SpotlightCacheController, WebBookmark, WebBookmarkGroup, WebBookmarkList;

@interface BookmarksController : NSObject <BookmarkGroupDelegate, FileChangeObserverClient, FileLockerClient, OldSpotlightDataSource, Command1Through9Receiver>
{
    BOOL _loaded;
    NSMutableDictionary *_proxiesByIdentifier;
    NSMutableSet *_pendingSpotlightCacheAdditions;
    NSMutableSet *_pendingSpotlightCacheDeletions;
    double _bookmarksFileTimeForSpotlight;
    unsigned long long _bookmarksFileSizeForSpotlight;
    BOOL _registeredWithSpotlightCacheController;
    SpotlightCacheController *_spotlightCacheController;
    unsigned long long _bookmarksFileSize;
    double _bookmarksFileTime;
    unsigned long long _bookmarksGeneration;
    struct unique_ptr<Safari::FileLocker, std::__1::default_delete<Safari::FileLocker>> _fileLocker;
    BOOL _waitingForLock;
    NSMutableArray *_completionHandlersPendingLockAcquisition;
    NSTimer *_pendingSaveTimer;
    double _pendingSaveTimerInterval;
    FileChangeObserver *_fileChangeObserver;
    BOOL _userIsOffline;
    NSMutableArray *_bookmarksThatRequestedMetadataFetchWhileOffline;
    NSMutableArray *_migratedNonSafariBookmarkFiles;
    NSString *_bookmarksFileLockPath;
    BOOL _isReadOnly;
    BOOL _didFillWithBuiltInBookmarks;
    BOOL _reloadingBookmarks;
    BOOL _savePending;
    WebBookmarkGroup *_allBookmarks;
    WebBookmarkList *_bookmarksBarCollection;
    WebBookmarkList *_bookmarksMenuCollection;
    NSString *_bookmarksFilePath;
    NSURL *_migratedBookmarksFolder;
    struct SHA256Hash _builtInBookmarksStateHash;
}

+ (id)allBookmarksBarProxies;
+ (id)_validBookmarkBarProxyIdentifiers;
+ (BOOL)bookmarksBarContainsProxy:(id)arg1;
+ (BOOL)removeBookmarksBarProxy:(id)arg1;
+ (BOOL)addBookmarksBarProxy:(id)arg1;
+ (id)bookmarkTitleForProxyIdentifier:(id)arg1;
+ (id)bookmarkSourceForProxyIdentifier:(id)arg1;
+ (void)_tellUserThatExternalChangePreemptedLocalChange;
+ (void)_tellUserThatSyncWon;
+ (void)requestSyncClientTriggerSync;
+ (id)_bookmarksMenuCollectionTitle;
+ (id)sharedController;
+ (id)_sharedControllerWithInstance:(id *)arg1 spotlightCacheController:(id)arg2 shouldCleanUpIconController:(BOOL)arg3;
+ (id)_defaultMigratedBookmarksFolderURL;
+ (id)defaultBookmarksFileLockURL;
+ (id)defaultBookmarksFileURL;
@property(retain, nonatomic) NSURL *migratedBookmarksFolder; // @synthesize migratedBookmarksFolder=_migratedBookmarksFolder;
@property(nonatomic, getter=isSavePending) BOOL savePending; // @synthesize savePending=_savePending;
@property(nonatomic, getter=isReloadingBookmarks) BOOL reloadingBookmarks; // @synthesize reloadingBookmarks=_reloadingBookmarks;
@property(nonatomic) BOOL didFillWithBuiltInBookmarks; // @synthesize didFillWithBuiltInBookmarks=_didFillWithBuiltInBookmarks;
@property(nonatomic) struct SHA256Hash builtInBookmarksStateHash; // @synthesize builtInBookmarksStateHash=_builtInBookmarksStateHash;
@property(readonly, copy, nonatomic) NSString *bookmarksFileLockPath; // @synthesize bookmarksFileLockPath=_bookmarksFileLockPath;
@property(readonly, copy, nonatomic) NSString *bookmarksFilePath; // @synthesize bookmarksFilePath=_bookmarksFilePath;
@property(readonly, retain, nonatomic) WebBookmarkList *bookmarksMenuCollection; // @synthesize bookmarksMenuCollection=_bookmarksMenuCollection;
@property(readonly, retain, nonatomic) WebBookmarkList *bookmarksBarCollection; // @synthesize bookmarksBarCollection=_bookmarksBarCollection;
@property(readonly, nonatomic) WebBookmarkGroup *allBookmarks; // @synthesize allBookmarks=_allBookmarks;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_stopObservingNetworkChangeNotifications;
- (void)_didReceiveNetworkChangeNotification:(id)arg1;
- (void)_beginObservingNetworkChangeNotifications;
- (BOOL)_shouldTryToFetchMetadataForBookmarkLeaf:(id)arg1;
- (void)fetchMetadataForBookmark:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleCommand1Through9ActionForIndex:(unsigned long long)arg1;
- (BOOL)canHandleCommand1Through9ActionForIndex:(unsigned long long)arg1;
- (void)displayNewBookmarksSheetForBookmark:(id)arg1 inWindow:(id)arg2;
- (void)updateDidEndForSpotlightDataType:(id)arg1;
- (void)updateWillBeginForSpotlightDataType:(id)arg1;
- (void)resetAdditionsAndDeletionsForSpotlightDataType:(id)arg1;
- (id)allItemsForSpotlightDataType:(id)arg1;
- (id)itemsToDeleteForSpotlightDataType:(id)arg1;
- (id)itemsToAddForSpotlightDataType:(id)arg1;
- (void)_updateSpotlightCacheIfFileHasChanged;
- (void)_registerWithSpotlightCacheController:(id)arg1;
- (void)_addBookmarksFromArray:(id)arg1 toSpotlightCacheArray:(id)arg2;
- (void)_addBookmark:(id)arg1 toSpotlightCacheArray:(id)arg2;
- (void)_addLeafBookmark:(id)arg1 toSpotlightCacheArray:(id)arg2;
- (void)_addBookmark:(id)arg1 parent:(id)arg2;
- (void)_addBookmarkToTopSites:(id)arg1 customizedTitle:(id)arg2;
- (void)addTopLevelBookmark:(id)arg1;
- (void)addTopLevelBookmark:(id)arg1 title:(id)arg2;
- (void)_updateDisplayedTitlesForBuiltInBookmarks:(id)arg1;
- (void)_updateBookmarkSourcesSkippingSave:(BOOL)arg1;
- (void)_fillBookmarksBarWithBuiltInBookmarksIfNecessary;
- (id)_builtInBookmarksBarBookmark;
- (void)_fillWithBuiltInBookmarks;
- (void)_copyChildBookmarksFromBookmark:(id)arg1 toBookmark:(id)arg2;
- (void)_sendFavoritesChangedNotification;
- (BOOL)_favoritesContainsBookmark:(id)arg1;
- (BOOL)_menuContainsBookmark:(id)arg1;
- (void)fetchBookmarksMenuCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBookmarksBarCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(readonly, nonatomic) WebBookmark *historyCollection;
- (id)_initWithBookmarksFilePath:(id)arg1 migratedBookmarksFolder:(id)arg2 spotlightCacheController:(id)arg3 shouldCleanUpIconController:(BOOL)arg4;
- (void)resetWithBookmarksFilePath:(id)arg1 migratedBookmarksFolder:(id)arg2 spotlightCacheController:(id)arg3 shouldCleanUpIconController:(BOOL)arg4;
- (void)_deleteMigratedNonSafariBookmarkFiles;
- (void)_importMigratedNonSafariBookmarks;
- (int)_importMigratedSafariBookmarks;
- (void)_deleteMigratedBookmarksDirectoryIfContainsNoMigratableFiles;
- (void)exportBookmarks;
- (void)exportBookmarksToPath:(id)arg1 shouldHideExtension:(BOOL)arg2;
- (void)bookmarkGroup:(id)arg1 bookmarkDidChange:(id)arg2 changeWasInteractive:(BOOL)arg3;
- (void)bookmarkGroup:(id)arg1 bookmarkWasRemoved:(id)arg2 fromParent:(id)arg3;
- (void)bookmarkGroup:(id)arg1 bookmarkWasAdded:(id)arg2 toParent:(id)arg3;
- (void)bookmarksWereReloadedInGroup:(id)arg1;
- (void)_postDidRemoveNotificationForBookmark:(id)arg1 parent:(id)arg2;
- (void)_postDidAddNotificationForBookmark:(id)arg1 parent:(id)arg2;
- (void)_postDidChangeNotificationForBookmark:(id)arg1;
- (void)_postBookmarksWereReloadedNotification;
- (void)_savePendingChangesSoonForPossiblyInteractiveBookmarkChange:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_postFavoritesChangedNotificationsIfNecessaryForChangeToBookmark:(id)arg1 parent:(id)arg2;
- (id)bookmarkForNewWindowTabsPreference;
- (void)clearProxiesByIdentifier;
- (void)insertProxyBookmarkWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)bookmarkForPersistentIdentifier:(id)arg1;
- (id)persistentIdentifierForBookmark:(id)arg1;
- (void)_savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePendingChangesSynchronously;
- (void)__savePendingChangesSoonWithPriority:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_savePendingChangesSoonWithPriority:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_savePendingChangesSoon;
- (void)_unlockFileLockerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockFileLockerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fileLocker:(const struct FileLocker *)arg1 lockWasStolen:(id)arg2;
- (int)fileLocker:(const struct FileLocker *)arg1 actionForApparentlyAbandonedLock:(id)arg2;
- (id)_createBookmarkSourceIfNeededWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 unlocalizedDisplayedTitle:(id)arg3 indexInBookmarkSources:(unsigned long long)arg4 fileNeedsUpdate:(char *)arg5;
- (id)_bookmarkSourceWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 unlocalizedDisplayedTitle:(id)arg3 bookmarkIndex:(unsigned long long *)arg4 fileNeedsUpdate:(char *)arg5;
- (void)fetchBookmarkSourceWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)reloadBookmarksFromFileIfChanged;
- (BOOL)_bookmarksFileHasChanged;
- (void)fileChangeObserverFileDidChange:(id)arg1;
- (void)_schedulePendingSaveTimerWithPriority:(int)arg1 previousTimerInterval:(double)arg2;
- (void)_invalidatePendingSaveTimer;
- (void)_pendingSaveTimerFired:(id)arg1;
- (void)_rememberBookmarksFileInfo;
- (id)_findNthFavoriteLeaf:(unsigned long long)arg1;
@property(readonly, nonatomic) WebBookmarkList *topBookmarkIfLoaded;
- (id)builtInBookmarks;
@property(readonly, nonatomic) NSString *bookmarksBarCollectionTitle;
- (BOOL)clearLocalDataForAutomatedTestingPurposes;
- (void)makePermanentAllTestDriveBookmarks;
- (void)removeAllTestDriveBookmarks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

