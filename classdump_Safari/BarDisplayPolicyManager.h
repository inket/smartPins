//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BarDisplayPolicyManager : NSObject
{
    NSMutableDictionary *_windowPolicyDictionary;
    NSMutableDictionary *_fullScreenPolicyDictionary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_persistPolicy:(int)arg1 forToolbarInContext:(int)arg2;
- (void)_persistPolicy:(int)arg1 forTabBarInContext:(int)arg2;
- (void)_persistPolicy:(int)arg1 forFavoritesBarInContext:(int)arg2;
- (void)_persistPolicy:(int)arg1 forStatusBarInContext:(int)arg2;
- (void)_persistPolicy:(int)arg1 inContext:(int)arg2 forBarWithIdentifier:(id)arg3;
- (void)_loadPoliciesFromUserDefaults;
- (id)_policyStoreForContext:(int)arg1;
- (id)_init;
- (int)policyForBarWithIdentifier:(id)arg1 inContext:(int)arg2;
- (void)setPolicy:(int)arg1 inContext:(int)arg2 forBarWithIdentifier:(id)arg3;
- (id)init;

@end

