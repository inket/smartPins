//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSImmediateActionGestureRecognizer;

@protocol NSImmediateActionAnimationController <NSObject>

@optional
- (void)recognizerDidDismissAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCompleteAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCancelAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidUpdateAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerWillBeginAnimation:(NSImmediateActionGestureRecognizer *)arg1;
@end
