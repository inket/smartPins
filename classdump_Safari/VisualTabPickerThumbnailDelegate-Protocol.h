//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class VisualTabPickerThumbnailView;

@protocol VisualTabPickerThumbnailDelegate <NSObject>
- (void)didToggleMuteButtonInVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (void)didCloseVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (void)didSelectVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (BOOL)canCloseTabInVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
@end

