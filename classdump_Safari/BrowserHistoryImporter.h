//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/BrowserDataImporter.h>

#import <Safari/BrowserHistoryImporterDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BrowserHistoryImporter : BrowserDataImporter <BrowserHistoryImporterDelegate>
{
    NSMutableDictionary *_existingVisits;
}

+ (long long)historyVisitOriginForSourceBrowserBundleIdentifier:(id)arg1 forTestDrive:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_insertImportedVisitWithURLString:(id)arg1 title:(id)arg2 onDate:(id)arg3;
- (void)importerDidFailToImportHistory;
- (void)importerDidFinishImportingHistory;
- (void)importerDidImportHistoryRedirectFromVisitWithID:(unsigned long long)arg1 urlString:(id)arg2 toVisitWithID:(unsigned long long)arg3 urlString:(id)arg4 title:(id)arg5 onDate:(id)arg6;
- (void)importerDidImportHistoryVisitWithID:(unsigned long long)arg1 urlString:(id)arg2 title:(id)arg3 onDate:(id)arg4;
- (void)importHistoryUsingImporterProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

