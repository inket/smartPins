//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSDictionary;

@protocol FileLockerClient <NSObject>
- (void)fileLocker:(const struct FileLocker *)arg1 lockWasStolen:(NSDictionary *)arg2;
- (int)fileLocker:(const struct FileLocker *)arg1 actionForApparentlyAbandonedLock:(NSDictionary *)arg2;
@end

