//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class SidebarTopBarView;

@protocol SidebarTopBarViewDelegate <NSObject>
@property(readonly, nonatomic) id currentSidebarModeIdentifier;
- (void)sidebarTopBarView:(SidebarTopBarView *)arg1 selectedTabIdentifierDidChange:(id)arg2;

@optional
- (void)didSelectBackButtonInSidebarTopBarView:(SidebarTopBarView *)arg1;
@end

