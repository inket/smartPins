//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface _ParsecContentAdvisoryTextAttachmentCell : NSTextAttachmentCell
{
    NSString *_contentAdvisoryString;
    NSColor *_color;
}

@property(readonly, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *contentAdvisoryString; // @synthesize contentAdvisoryString=_contentAdvisoryString;
- (void).cxx_destruct;
- (id)_labelAttributes;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (id)initWithString:(id)arg1 color:(id)arg2;

@end

