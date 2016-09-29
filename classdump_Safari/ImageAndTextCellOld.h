//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/TextCell.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface ImageAndTextCellOld : TextCell
{
    NSImage *_image;
    struct CGSize _imageOffset;
    double _imagePadding;
    double _bottomPadding;
}

+ (double)defaultPaddingAfterImage;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
- (void).cxx_destruct;
- (void)_getImageFrame:(struct CGRect *)arg1 andTextFrame:(struct CGRect *)arg2 fromCellFrame:(struct CGRect)arg3;
- (void)setPaddingAfterImage:(double)arg1;
- (double)paddingAfterImage;
- (void)setImageOffsetFromCenteredPosition:(struct CGSize)arg1;
- (struct CGSize)imageOffsetFromCenteredPosition;
- (struct CGRect)textFrameFromCellFrame:(struct CGRect)arg1;
- (void)setLeftImage:(id)arg1;
- (id)leftImage;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (id)initTextCell:(id)arg1;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

