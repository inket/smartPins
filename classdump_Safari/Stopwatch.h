//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface Stopwatch : NSObject
{
    double startTime;
    double finishTime;
}

- (double)runTime;
- (void)finish;
- (void)start;

@end

