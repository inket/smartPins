//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface BrowserWindowContentView : NSView
{
    BOOL _isResizingSidebar;
    double _sidebarWidth;
}

- (id)_sidebarView;
- (void)_resizeSidebarToWidth:(double)arg1;
- (struct CGRect)_dividerEffectiveRectForXPosition:(double)arg1;
- (struct CGRect)_sidebarDividerEffectiveFrame;
- (id)_sidebarDividerCursor;
- (BOOL)_isShowingSidebar;
- (id)_adjacentResizableContentView;
- (void)sidebarWillHide;
- (void)sidebarDidShow;

@end
