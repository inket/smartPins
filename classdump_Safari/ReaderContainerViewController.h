//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSColor, NSView, ReaderWKView;

__attribute__((visibility("hidden")))
@interface ReaderContainerViewController : NSViewController
{
    NSView *_backgroundView;
    double _amountOfContinuousReadingViewBannerThatIsVisible;
    long long _animationState;
    BOOL _deactivationIsAnimated;
    BOOL _shouldCoordinateAnimationsWithContinuousReadingBanners;
    ReaderWKView *_readerWKView;
    CDUnknownBlockType _deactivationAnimationDidFinishBlock;
}

+ (id)_animationWithKeyPath:(id)arg1;
+ (id)_moveAnimationWithStartingRect:(struct CGRect)arg1 endingRect:(struct CGRect)arg2;
+ (id)_fadeAnimationWithStartingOpacity:(double)arg1 endingOpacity:(double)arg2;
@property(copy) CDUnknownBlockType deactivationAnimationDidFinishBlock; // @synthesize deactivationAnimationDidFinishBlock=_deactivationAnimationDidFinishBlock;
@property(nonatomic) BOOL shouldCoordinateAnimationsWithContinuousReadingBanners; // @synthesize shouldCoordinateAnimationsWithContinuousReadingBanners=_shouldCoordinateAnimationsWithContinuousReadingBanners;
@property(nonatomic) __weak ReaderWKView *readerWKView; // @synthesize readerWKView=_readerWKView;
- (void).cxx_destruct;
- (void)setTheme:(long long)arg1;
@property(readonly) NSColor *backgroundColor;
- (void)_unmaskLayersOccludingContinuousReadingViewBanner;
- (void)_maskLayersOccludingContinuousReadingViewBanner;
- (id)_maskLayerForContinuousReadingViewBannerOfHeight:(long long)arg1;
- (struct CGRect)_frameBelowTheViewFrame;
- (double)_currentBackgroundViewOpacity;
- (struct CGRect)_readerWKViewFrameForStartOfAnimationWhenInterruptingExistingAnimation;
- (void)_updateReaderWKViewFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2 backgroundViewFromOpacity:(double)arg3 toOpacity:(double)arg4 animated:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)finishAsynchronousDeactivation;
- (void)deactivateWithAnimation:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isAnimatingDeactivation) BOOL animatingDeactivation;
@property(readonly, getter=isAnimatingActivation) BOOL animatingActivation;
- (void)finishAsynchronousActivation;
- (void)activateWithAnimation:(BOOL)arg1 verticalScrollOffsetOfBrowserPage:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear;
- (id)initWithReaderWKView:(id)arg1;
- (id)init;

@end

