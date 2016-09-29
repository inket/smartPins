//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSFileHandle, NSMutableArray, NSTimer, StressHUD;

__attribute__((visibility("hidden")))
@interface StressTest : NSObject
{
    NSDate *startTime;
    NSDate *webProcessStartTime;
    NSTimer *loadTimer;
    NSMutableArray *URLHistory;
    unsigned long long webProcessCrashCount;
    NSFileHandle *sessionFileHandle;
    NSMutableArray *sessionHistory;
    BOOL logNextURLForReplay;
    StressHUD *stressHUD;
}

+ (id)shared;
- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (double)upTime;
- (BOOL)isStressTestRunning;
- (void)readSession:(id)arg1;
- (void)replaySession:(id)arg1;
- (void)stop;
- (void)validatedStart;
- (void)start;
- (void)validateStressTest;
- (void)loadWillFail;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)webProcessDidCrash;
- (unsigned long long)webProcessCrashCount;
- (double)webProcessUpTime;
- (void)pageLoadFinishedWithURL:(id)arg1;
- (void)pageLoadStartedWithURL:(id)arg1;
- (void)navigateToNextStressTestPage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

