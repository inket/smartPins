//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BrowserSessionPersistentState : NSObject
{
    NSArray *_pinnedTabsStates;
    NSArray *_windowStates;
}

@property(readonly, nonatomic) NSArray *windowStates; // @synthesize windowStates=_windowStates;
@property(readonly, nonatomic) NSArray *pinnedTabsStates; // @synthesize pinnedTabsStates=_pinnedTabsStates;
- (void).cxx_destruct;
- (id)data;
- (void)restoreSession;
- (BOOL)containsAnyURLs;
- (id)initFromFile:(id)arg1;
- (id)initFromCurrentSessionIgnoringPrivateWindows:(BOOL)arg1;

@end

