//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecActionButton : WBSParsecModel
{
    BOOL _forStreamingResult;
    BOOL _overlay;
    NSString *_type;
    NSString *_label;
    NSString *_labelAlignment;
    NSString *_itunesLabel;
    NSString *_offerType;
    NSString *_completion;
    NSString *_itunesCompletion;
    NSString *_mediaKind;
    NSArray *_itunesContentIdentifiers;
    WBSParsecImageRepresentation *_baseIcon;
    WBSParsecImageRepresentation *_icon;
    NSString *_punchoutAppName;
    NSString *_punchoutAppBundleIdentifier;
    NSURL *_punchoutAppInstallURL;
    NSURL *_punchoutURL;
}

+ (id)schema;
@property(readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property(readonly, nonatomic) NSURL *punchoutAppInstallURL; // @synthesize punchoutAppInstallURL=_punchoutAppInstallURL;
@property(readonly, copy, nonatomic) NSString *punchoutAppBundleIdentifier; // @synthesize punchoutAppBundleIdentifier=_punchoutAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *punchoutAppName; // @synthesize punchoutAppName=_punchoutAppName;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *baseIcon; // @synthesize baseIcon=_baseIcon;
@property(readonly, nonatomic, getter=isOverlay) BOOL overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic, getter=isForStreamingResult) BOOL forStreamingResult; // @synthesize forStreamingResult=_forStreamingResult;
@property(readonly, copy, nonatomic) NSArray *itunesContentIdentifiers; // @synthesize itunesContentIdentifiers=_itunesContentIdentifiers;
@property(readonly, copy, nonatomic) NSString *mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, copy, nonatomic) NSString *itunesCompletion; // @synthesize itunesCompletion=_itunesCompletion;
@property(readonly, copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *offerType; // @synthesize offerType=_offerType;
@property(readonly, copy, nonatomic) NSString *itunesLabel; // @synthesize itunesLabel=_itunesLabel;
@property(readonly, copy, nonatomic) NSString *labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isForAppleMusicResult) BOOL forAppleMusicResult;
- (id)initWithDictionary:(id)arg1 mediaKind:(id)arg2;

@end

