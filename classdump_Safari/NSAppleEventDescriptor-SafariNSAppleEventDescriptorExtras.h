//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAppleEventDescriptor.h>

@interface NSAppleEventDescriptor (SafariNSAppleEventDescriptorExtras)
+ (id)descriptorWithProcessSerialNumber:(struct ProcessSerialNumber)arg1;
- (BOOL)sendWithTenSecondTimeout;
- (BOOL)sendWithTimeout:(int)arg1;
@end

