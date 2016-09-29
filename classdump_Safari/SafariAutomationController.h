//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/_WKAutomationDelegate-Protocol.h>
#import <Safari/_WKAutomationSessionDelegate-Protocol.h>

@class NSString, _WKAutomationSession;

__attribute__((visibility("hidden")))
@interface SafariAutomationController : NSObject <_WKAutomationDelegate, _WKAutomationSessionDelegate>
{
    BOOL _userInteractionAllowed;
    _WKAutomationSession *_automationSession;
}

@property(readonly, nonatomic) _WKAutomationSession *automationSession; // @synthesize automationSession=_automationSession;
@property(nonatomic) BOOL userInteractionAllowed; // @synthesize userInteractionAllowed=_userInteractionAllowed;
- (void).cxx_destruct;
- (void)_automationSession:(id)arg1 setUserInput:(id)arg2 forCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg3;
- (id)_automationSession:(id)arg1 messageOfCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSession:(id)arg1 acceptCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSession:(id)arg1 dismissCurrentJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (BOOL)_automationSession:(id)arg1 isShowingJavaScriptDialogOnPage:(struct OpaqueWKPage *)arg2;
- (void)_automationSessionDidDisconnectFromRemote:(id)arg1;
- (struct OpaqueWKPage *)_automationSessionDidRequestNewWindow:(id)arg1;
- (void)_processPool:(id)arg1 didRequestAutomationSessionWithIdentifier:(id)arg2;
- (BOOL)_processPoolAllowsRemoteAutomation:(id)arg1;
- (BOOL)window:(id)arg1 shouldProcessAction:(SEL)arg2 to:(id)arg3 from:(id)arg4;
- (BOOL)shouldWhitelistAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (void)_allowsRemoteAutomationChanged;
@property(nonatomic) BOOL allowsRemoteAutomation;
- (BOOL)clearAutomationSession;
- (BOOL)createAutomationSessionWithIdentifier:(id)arg1;
- (void)_closeAllAutomationWindowsSkippingInspected:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

