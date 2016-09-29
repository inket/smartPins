//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ManagedPlugIn, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ManagedPlugInsController : NSObject
{
    BOOL _didGetManagedPlugIns;
    NSMutableDictionary *_plugIns;
    ManagedPlugIn *_javaPlugIn;
}

+ (id)plugInNameForBundleIdentifier:(id)arg1;
+ (BOOL)isPlugInHidden:(id)arg1;
+ (BOOL)isJavaPlugIn:(id)arg1;
+ (BOOL)isFlashPlugInBundleIdentifier:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sendPoliciesToWebKit;
- (id)_hostPolicyForPlugInWithInfo:(id)arg1;
- (id)_blockedPlugInWithInfo:(id)arg1 plugInWasCreated:(char *)arg2;
- (void)_loadLegacyUserDefaultsPoliciesForJavaPlugIn:(id)arg1;
- (void)_setUpPlugIn:(id)arg1 withUserDefaults:(id)arg2 isManagedByAdmin:(BOOL)arg3;
- (void)_loadUserDefaultsPoliciesForPlugIn:(id)arg1;
- (void)reloadPlugInPoliciesFromUserDefaults;
- (void)savePlugInPoliciesToUserDefaults;
- (void)_removeDataForExpiredPlugIns;
- (void)removePlugInDataRelatedToPageWithURL:(id)arg1;
- (void)clearPlugInVersionWhenUnavailableDialogWasLastShownForPlugIns;
- (void)clearAllPoliciesForPlugInWithBundleIdentifier:(id)arg1;
- (void)turnOnPlugInWithBundleIdentifier:(id)arg1;
- (void)clearAllBlockPolicies;
- (void)clearAllPlugInPolicies;
- (void)_updateBlockedPlugInsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumeratePlugInsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_handleResultOfPromptWithUpdatedHostPolicy:(id)arg1 forPlugIn:(id)arg2 previousPolicy:(int)arg3 inBrowserContentViewController:(RefPtr_1016c1b7 *)arg4;
- (void)_handleResultOfPromptBeforeUseSheetWithUpdatedHostPolicy:(id)arg1 forPlugIn:(id)arg2 previousPolicy:(int)arg3 inBrowserContentViewController:(RefPtr_1016c1b7 *)arg4;
- (void)_showPromptBeforeUseSheetForPlugInHostPolicy:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2 forVisiblePlugInPlaceholder:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setDidShowUnavailableDialogForManagedPlugIn:(id)arg1;
- (BOOL)_didShowInitializationErrorDialogForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (void)showInitializationErrorDialogIfNecessaryForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (void)showDialogIfNecessaryForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (id)_nonAppleConnectPlugIns;
- (void)_showPromptWhenClickingToUsePlugInWithPolicy:(id)arg1 inBrowserContentViewControllerObjCAdapter:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)showPromptWhenClickingToUsePlugInForBrowserContentViewControllerIfNecessary:(id)arg1 navigatingToURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)shouldDropPromptToManagePlugInSheetForPlugIn:(id)arg1;
- (id)blockedManagedPlugInWithBundleIdentifier:(id)arg1;
- (void)enablePlugInForHostPolicy:(id)arg1 inBrowserContentViewControllerObjCAdapter:(id)arg2 onlyEnabledForThisVisit:(BOOL)arg3;
- (void)disablePlugInForHostPolicy:(id)arg1 inBrowserContentViewControllerObjCAdapter:(id)arg2;
- (id)managedPlugInHostPoliciesForBrowserContentViewControllerObjCAdapter:(id)arg1;
- (BOOL)hasPlugInsInstalled;
- (id)activeManagedPlugInHostPoliciesForBrowserContentViewControllerObjCAdapter:(id)arg1;
- (void)browserContentViewControllerWillClose:(struct BrowserContentViewController *)arg1;
- (void)browserContentViewController:(struct BrowserContentViewController *)arg1 didFinishUsingPlugInOnPageWithURL:(id)arg2;
- (unsigned int)loadPolicyForPlugInInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2 unavailabilityDescription:(id *)arg3;
- (void)getManagedPlugInsUsingBlock:(CDUnknownBlockType)arg1;
- (void)populateManagedPlugInsIfNecessaryUsingCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

