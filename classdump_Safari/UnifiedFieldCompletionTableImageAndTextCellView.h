//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionTableCellView.h>

@class NSImageView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionTableImageAndTextCellView : UnifiedFieldCompletionTableCellView
{
    NSImageView *_imageView;
    NSLayoutConstraint *_imageViewCenterYConstraint;
    NSLayoutConstraint *_imageViewTrailingToTextFieldLeadingConstraint;
}

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpImageView;
- (void)prepareForReuse;
@property(nonatomic) double spaceBetweenImageViewAndTextField;
@property(nonatomic) double imageViewCenterYOffset;
- (id)initWithFrame:(struct CGRect)arg1;

@end
