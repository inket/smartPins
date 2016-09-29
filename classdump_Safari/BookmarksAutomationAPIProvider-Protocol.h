//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, NSURL, ReadingListItem, WebBookmark, WebBookmarkLeaf, WebBookmarkList;

@protocol BookmarksAutomationAPIProvider
- (BOOL)markReadingListItem:(ReadingListItem *)arg1 asRead:(BOOL)arg2;
- (BOOL)setTitle:(NSString *)arg1 url:(NSURL *)arg2 ofBookmark:(WebBookmarkLeaf *)arg3;
- (BOOL)setURL:(NSURL *)arg1 ofBookmark:(WebBookmarkLeaf *)arg2;
- (BOOL)setTitle:(NSString *)arg1 ofBookmark:(WebBookmark *)arg2;
- (BOOL)deleteReadingListItem:(ReadingListItem *)arg1;
- (BOOL)deleteBookmark:(WebBookmark *)arg1;
- (BOOL)addReadingListItemWithURL:(NSURL *)arg1 title:(NSString *)arg2;
- (BOOL)insertBookmark:(WebBookmark *)arg1 inList:(WebBookmarkList *)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)addBookmark:(WebBookmark *)arg1 toList:(WebBookmarkList *)arg2;
- (BOOL)clearAllLocalData;
- (BOOL)fetchBookmarkSyncEnabledState;
- (NSArray *)fetchReadingList;
- (WebBookmarkList *)fetchTopLevelBookmarkList;
@end

