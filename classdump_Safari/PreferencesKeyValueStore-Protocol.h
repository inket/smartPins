//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString;

@protocol PreferencesKeyValueStore <NSObject>
- (void)removeObjectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (BOOL)boolForKey:(NSString *)arg1;
- (void)setBool:(BOOL)arg1 forKey:(NSString *)arg2;
@end
