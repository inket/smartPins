//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class AnnotatedBookmarksSidebarViewController, WebBookmarkList;

@protocol AnnotatedBookmarksSidebarViewControllerDelegate <NSObject>

@optional
- (void)displayedFolderWasRemovedForAnnotatedBookmarksSidebarViewController:(AnnotatedBookmarksSidebarViewController *)arg1;
- (void)annotatedBookmarksSidebarViewController:(AnnotatedBookmarksSidebarViewController *)arg1 didNavigateIntoFolder:(WebBookmarkList *)arg2;
@end

