//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@protocol AnnotatedBookmarksSidebarTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface AnnotatedBookmarksSidebarTableCellView : NSTableCellView
{
    id <AnnotatedBookmarksSidebarTableCellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <AnnotatedBookmarksSidebarTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformShowMenu;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)editTitle;
- (void)didRecognizeLongPress:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

