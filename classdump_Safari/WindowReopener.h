//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface WindowReopener : NSObject
{
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;
- (void).cxx_destruct;
- (id)init;
- (void)windowWillClose:(id)arg1;
- (void)_reallySaveWindows;
- (void)saveWindows;
- (void)reopenWithArrayOfWindowControllerNames:(id)arg1;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)dealloc;

@end
