//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString;
@protocol WBSFormAutoFillFeedbackProcessor;

@protocol WBSFormAutoFillFeedbackDomainPolicyProvider <NSObject>
- (void)autoFillFeedbackProcessor:(id <WBSFormAutoFillFeedbackProcessor>)arg1 determineWhetherToSendFeedbackForDomain:(NSString *)arg2 resultHandler:(void (^)(BOOL))arg3;
@end

