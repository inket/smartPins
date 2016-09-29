//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

@class NSArray, NSNumber, NSString, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;

@interface WBSParsecSearchGenericResult : WBSParsecSearchResult
{
    WBSParsecActionButton *_actionButton;
    NSNumber *_titleMaximumLines;
    NSArray *_descriptionRichTexts;
    NSString *_footnote;
    NSString *_secondaryTitle;
    WBSParsecImageRepresentation *_secondaryTitleGlyph;
    WBSParsecAuxiliaryInfo *_auxiliaryInfo;
    NSArray *_rowSections;
    WBSParsecImageRepresentation *_thumbnail;
}

+ (id)_specializedSchema;
@property(readonly, nonatomic) WBSParsecImageRepresentation *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) NSArray *rowSections; // @synthesize rowSections=_rowSections;
@property(readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo; // @synthesize auxiliaryInfo=_auxiliaryInfo;
@property(readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph; // @synthesize secondaryTitleGlyph=_secondaryTitleGlyph;
@property(readonly, copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, copy, nonatomic) NSArray *descriptionRichTexts; // @synthesize descriptionRichTexts=_descriptionRichTexts;
@property(readonly, nonatomic) NSNumber *titleMaximumLines; // @synthesize titleMaximumLines=_titleMaximumLines;
- (id)actionButton;
- (void).cxx_destruct;
- (id)thumbnailWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
