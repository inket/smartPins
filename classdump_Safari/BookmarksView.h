//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BookmarksViewController;

__attribute__((visibility("hidden")))
@interface BookmarksView : NSView
{
    BOOL _isActive;
    NSView *_contents;
    BookmarksViewController *_bookmarksViewController;
}

- (void).cxx_destruct;
- (void)focusSearchField;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)pageTitle;
- (void)_setBookmarksViewControllerIfNeeded;
- (void)_controllerWillSwitchOutOfView;
- (void)_controllerDidSwitchIntoView;
- (void)setBookmarksViewController:(id)arg1;
- (id)bookmarksViewController;
- (void)updateConstraints;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
