//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, ResponsiveDesignContainerView;

@protocol ResponsiveDesignContainerViewDelegate <NSObject>
- (NSArray *)snapHeightsForResponsiveDesignContainerView:(ResponsiveDesignContainerView *)arg1;
- (NSArray *)snapWidthsForResponsiveDesignContainerView:(ResponsiveDesignContainerView *)arg1;
- (void)responsiveDesignContainerView:(ResponsiveDesignContainerView *)arg1 didChangeBrowserSize:(struct CGSize)arg2;
@end

