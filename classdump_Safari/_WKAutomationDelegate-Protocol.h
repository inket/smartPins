//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, WKProcessPool;

@protocol _WKAutomationDelegate <NSObject>

@optional
- (void)_processPool:(WKProcessPool *)arg1 didRequestAutomationSessionWithIdentifier:(NSString *)arg2;
- (BOOL)_processPoolAllowsRemoteAutomation:(WKProcessPool *)arg1;
@end
