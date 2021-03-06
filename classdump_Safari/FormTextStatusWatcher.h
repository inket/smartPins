//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol FormTextStatusWatcherDelegate;

__attribute__((visibility("hidden")))
@interface FormTextStatusWatcher : NSObject
{
    NSMutableSet *_unverifiedTabs;
    id <FormTextStatusWatcherDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <FormTextStatusWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tabWasVerified:(id)arg1;
- (void)stopWatchingTab:(id)arg1;
- (void)startWatchingAllUnverifiedTabsForWindowController:(id)arg1;
- (void)startWatchingTabIfUnverified:(id)arg1;
@property(readonly, nonatomic) unsigned long long unverifiedTabCount;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

