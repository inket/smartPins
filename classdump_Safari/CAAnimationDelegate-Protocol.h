//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStop:(CAAnimation *)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(CAAnimation *)arg1;
@end
