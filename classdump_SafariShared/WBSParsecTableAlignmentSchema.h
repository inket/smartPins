//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray;

@interface WBSParsecTableAlignmentSchema : WBSParsecModel
{
    NSArray *_internalAlignments;
    NSArray *_columnGravities;
    NSArray *_columnsWithEqualWidths;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSArray *columnsWithEqualWidths; // @synthesize columnsWithEqualWidths=_columnsWithEqualWidths;
@property(readonly, copy, nonatomic) NSArray *columnGravities; // @synthesize columnGravities=_columnGravities;
@property(readonly, copy, nonatomic) NSArray *internalAlignments; // @synthesize internalAlignments=_internalAlignments;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

