//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSColor, NSString, WBSTemplateIconMonogramConfiguration;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest
{
}

+ (id)requestWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4;
+ (id)requestWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3;
+ (id)requestWithURL:(id)arg1 title:(id)arg2;
+ (id)requestWithURL:(id)arg1;
@property(readonly, nonatomic) NSColor *overrideForegroundColor;
@property(readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property(readonly, copy, nonatomic) NSString *monogramTitle;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3;
- (id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4;

@end

