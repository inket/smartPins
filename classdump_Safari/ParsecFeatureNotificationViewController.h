//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray;
@protocol WBSParsecBag;

__attribute__((visibility("hidden")))
@interface ParsecFeatureNotificationViewController : NSViewController
{
    NSArray *_iconFilenamesForSupportedDomains;
    id <WBSParsecBag> _bag;
}

+ (void)_setNotificationHasEverBeenShown:(BOOL)arg1;
+ (BOOL)_notificationHasEverBeenShown;
+ (BOOL)notificationNeedsToBeShownWithBag:(id)arg1;
@property(readonly, nonatomic) id <WBSParsecBag> bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (id)_featureNotificationView;
- (id)_iconFilenames;
@property(readonly, nonatomic) double preferredHeightAtCurrentWidth;
@property(readonly, nonatomic) double preferredMinimumWidth;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithBag:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 bag:(id)arg3;

@end

