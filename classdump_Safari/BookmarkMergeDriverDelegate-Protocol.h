//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BookmarkMergeDriver, WebBookmark;

@protocol BookmarkMergeDriverDelegate <NSObject>

@optional
- (BOOL)bookmarkMergeDriver:(BookmarkMergeDriver *)arg1 shouldMergeTitlesOfBookmark:(WebBookmark *)arg2 existingBookmark:(WebBookmark *)arg3;
@end
