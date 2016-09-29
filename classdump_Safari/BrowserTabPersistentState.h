//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface BrowserTabPersistentState : NSObject
{
    Vector_81153489 _ancestorTabIdentifiers;
    BOOL _disposable;
    BOOL _pinned;
    BOOL _restoredFromPersistentData;
    BOOL _muted;
    int _processIdentifier;
    unsigned int _tabIdentifier;
    NSURL *_url;
    NSString *_title;
    double _lastVisitTime;
    NSData *_sessionStateData;
    NSDictionary *_queuedNavigation;
    NSUUID *_tabUUID;
    NSDate *_dateClosed;
    unsigned long long _tabIndex;
    NSUUID *_windowUUID;
    NSURL *_pinnedPageURL;
    NSString *_pinnedPageTitle;
}

@property(readonly, nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL restoredFromPersistentData; // @synthesize restoredFromPersistentData=_restoredFromPersistentData;
@property(readonly, copy, nonatomic) NSString *pinnedPageTitle; // @synthesize pinnedPageTitle=_pinnedPageTitle;
@property(readonly, nonatomic) NSURL *pinnedPageURL; // @synthesize pinnedPageURL=_pinnedPageURL;
@property(readonly, nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(readonly, nonatomic, getter=isDisposable) BOOL disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) NSDate *dateClosed; // @synthesize dateClosed=_dateClosed;
@property(readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
@property(readonly, nonatomic) const Vector_81153489 *ancestorTabIdentifiers; // @synthesize ancestorTabIdentifiers=_ancestorTabIdentifiers;
@property(readonly, nonatomic) unsigned int tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *queuedNavigation; // @synthesize queuedNavigation=_queuedNavigation;
@property(readonly, copy, nonatomic) NSData *sessionStateData; // @synthesize sessionStateData=_sessionStateData;
@property(readonly, nonatomic) double lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setTitleAndURLFromBrowserTabViewItem:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) BOOL shouldDeferRestorationUntilSelected;
@property(readonly, nonatomic) NSString *titleForMenu;
- (id)browserTabPersistentStateForRegisteringWithUndoForClosingBrowserTabViewItem:(id)arg1;
- (void)clearSessionState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPinnedPageURL:(id)arg1 pinnedPageTitle:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithBrowserTabViewItem:(id)arg1;

@end

