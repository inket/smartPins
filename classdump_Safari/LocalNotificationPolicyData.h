//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/UserNotificationPolicyData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LocalNotificationPolicyData : UserNotificationPolicyData
{
    NSString *_originString;
}

@property(readonly, nonatomic) NSString *originString; // @synthesize originString=_originString;
- (void).cxx_destruct;
- (void)updatePermission:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrigin:(id)arg1 policy:(int)arg2;

@end

