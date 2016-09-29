//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceProtocol-Protocol.h>

@class WBSHistoryService;

@interface WBSHistoryConnection : NSObject <WBSHistoryServiceProtocol>
{
    WBSHistoryService *_historyService;
}

- (void).cxx_destruct;
- (void)debugGetDatabaseURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterForRemoteHistoryNotifications;
- (void)registerForRemoteHistoryNotifications;
- (void)removeAllTestDriveHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)makePermanentAllTestDriveHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeItemsWithURLsInResponseToUserAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateTitle:(id)arg1 forVisitWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)recordRedirectFromVisitWithUUID:(id)arg1 destinationURL:(id)arg2 origin:(long long)arg3 date:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)recordVisitToURL:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 visitWasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 origin:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getVisitedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginHistoryAccessSession:(CDUnknownBlockType)arg1;
- (void)beginURLCompletionSession:(CDUnknownBlockType)arg1;
- (id)initWithHistoryService:(id)arg1;

@end

