//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/ParsecTableCellViewWithActionButton.h>

@class NSLayoutConstraint, NSStackView, ParsecActionButtonView, ParsecAuxiliaryInfoView;

__attribute__((visibility("hidden")))
@interface ParsecGenericTableCellView : ParsecTableCellViewWithActionButton
{
    NSLayoutConstraint *_auxiliaryInfoViewPrimaryLabelCenteringConstraint;
    NSStackView *_labelStackView;
    ParsecActionButtonView *_actionButton;
    ParsecAuxiliaryInfoView *_auxiliaryInfoView;
    NSLayoutConstraint *_imageViewTopToCellTopConstraint;
    NSLayoutConstraint *_cellBottomToImageViewBottomConstraint;
    NSLayoutConstraint *_labelStackViewToActionButtonTrailingConstraint;
}

+ (double)_descriptionTextLineHeight;
@property(retain, nonatomic) NSLayoutConstraint *labelStackViewToActionButtonTrailingConstraint; // @synthesize labelStackViewToActionButtonTrailingConstraint=_labelStackViewToActionButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cellBottomToImageViewBottomConstraint; // @synthesize cellBottomToImageViewBottomConstraint=_cellBottomToImageViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewTopToCellTopConstraint; // @synthesize imageViewTopToCellTopConstraint=_imageViewTopToCellTopConstraint;
@property(nonatomic) __weak ParsecAuxiliaryInfoView *auxiliaryInfoView; // @synthesize auxiliaryInfoView=_auxiliaryInfoView;
@property(nonatomic) __weak ParsecActionButtonView *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak NSStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
- (void).cxx_destruct;
- (id)_descriptionLabelWithRichText:(id)arg1 session:(id)arg2;
- (void)setShowsActionButton:(BOOL)arg1;
- (id)_actionButton;
- (void)prepareForImmediateRedisplay;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;
- (void)awakeFromNib;

@end

