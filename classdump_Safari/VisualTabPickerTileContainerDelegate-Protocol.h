//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class VisualTabPickerTileContainerView;

@protocol VisualTabPickerTileContainerDelegate <NSObject>
- (void)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 didToggleMuteButtonOnTileAtIndex:(unsigned long long)arg2;
- (void)didRequestNewTabForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (void)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 didSelectTileAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 closeTileAtIndex:(unsigned long long)arg2;
- (BOOL)canCloseVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
@end

