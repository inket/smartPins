//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/Banner.h>

@class BrowserContentViewControllerObjCAdapter, ManagedPlugInHostPolicy, NSButton, NSTextField, RolloverImageButton;

__attribute__((visibility("hidden")))
@interface PromptToEnablePlugInBanner : Banner
{
    BrowserContentViewControllerObjCAdapter *_browserContentViewControllerObjCAdapter;
    ManagedPlugInHostPolicy *_plugInHostPolicy;
    NSButton *_turnOnButton;
    NSTextField *_textField;
    RolloverImageButton *_closeButton;
}

+ (int)bannerSortOrder;
@property(nonatomic) __weak RolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak NSButton *turnOnButton; // @synthesize turnOnButton=_turnOnButton;
- (void).cxx_destruct;
- (id)bannerNibName;
- (id)initWithBrowserContentViewControllerObjCAdapter:(id)arg1 managedPlugInHostPolicy:(id)arg2;
- (void)_turnOnPlugIn:(id)arg1;

@end

