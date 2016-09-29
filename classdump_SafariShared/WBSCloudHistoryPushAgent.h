//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/APSConnectionDelegate-Protocol.h>
#import <SafariShared/NSXPCListenerDelegate-Protocol.h>
#import <SafariShared/WBSCloudHistoryPushAgent-Protocol.h>

@class APSConnection, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryPushAgent : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, WBSCloudHistoryPushAgent>
{
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setHasAcknowlegedPushNotifications:) BOOL _hasAcknowledgedPushNotifications;
@property(nonatomic, setter=_setHasUnacknowledgedPushNotifications:) BOOL _hasUnacknowledgedPushNotifications;
- (id)_pushTopic;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

