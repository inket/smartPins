//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol SafariSocialHelper
- (void)performRepostRequestForServiceType:(NSString *)arg1 URL:(NSURL *)arg2 accountIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSNumber *, NSError *))arg4;
- (void)performGetItemsRequestForServiceType:(NSString *)arg1 URL:(NSURL *)arg2 parameters:(NSDictionary *)arg3 accountIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
@end

