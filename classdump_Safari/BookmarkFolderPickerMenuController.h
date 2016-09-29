//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BookmarksController;
@protocol BookmarkFolderPickerMenuControllerDelegate;

__attribute__((visibility("hidden")))
@interface BookmarkFolderPickerMenuController : NSObject
{
    id <BookmarkFolderPickerMenuControllerDelegate> _delegate;
    BookmarksController *_bookmarksController;
}

@property(readonly, nonatomic) BookmarksController *bookmarksController; // @synthesize bookmarksController=_bookmarksController;
@property(nonatomic) __weak id <BookmarkFolderPickerMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_bookmarkMenuItemIcon;
- (id)_addMenuItemsForBookmarkFolder:(id)arg1 toMenu:(id)arg2 indentationLevel:(unsigned long long)arg3 shouldDisableMenuItems:(BOOL)arg4 disablingMenuItemsForDescendantsOfBookmarkFolder:(id)arg5;
- (void)_didPickBookmarkFolder:(id)arg1;
- (void)setUpMenu:(id)arg1 disablingMenuItemsForDescendantsOfBookmarkFolder:(id)arg2;
- (id)initWithBookmarksController:(id)arg1;
- (id)init;

@end

