//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/NSAccessibilityRadioButton-Protocol.h>

@class NSString, TabButton;

__attribute__((visibility("hidden")))
@interface _TabButtonAccessibilityHelper : NSView <NSAccessibilityRadioButton>
{
    TabButton *_parentTabButton;
}

@property(readonly, nonatomic) __weak TabButton *parentTabButton; // @synthesize parentTabButton=_parentTabButton;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityValue;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;
- (void)keyDown:(id)arg1;
- (id)initWithTabButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

