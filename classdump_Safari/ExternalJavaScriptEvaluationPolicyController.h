//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ExternalJavaScriptEvaluationPolicyController : NSObject
{
}

- (BOOL)_canToggleSecurePreferenceWithName:(id)arg1 backedByAuthorizationRight:(int)arg2;
- (void)_toggleSecurePreferenceWithName:(id)arg1 backedByAuthorizationRight:(int)arg2;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (BOOL)javaScriptIsAllowedFromAppleEvents;
- (void)toggleAllowJavaScriptInSmartSearchField;
- (BOOL)javaScriptIsAllowedInSmartSearchField;

@end
