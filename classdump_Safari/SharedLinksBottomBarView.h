//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton;

__attribute__((visibility("hidden")))
@interface SharedLinksBottomBarView : NSView
{
    NSButton *_subscriptionsButton;
}

@property(readonly, nonatomic) NSButton *subscriptionsButton; // @synthesize subscriptionsButton=_subscriptionsButton;
- (void).cxx_destruct;
- (void)setButtonState:(long long)arg1;
- (void)_setUpButtonFixedWidthAndDefaultButtonState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

