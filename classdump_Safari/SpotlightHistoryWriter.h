//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/OldSpotlightDataWriter-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SpotlightHistoryWriter : NSObject <OldSpotlightDataWriter>
{
    NSString *_cacheFilesDirectory;
    NSMutableDictionary *_trackedFilenames;
    BOOL _trackedFilenamesNeedsWrite;
}

- (void).cxx_destruct;
- (id)URLToVisitFromSpotlightCacheFile:(id)arg1 ofDataType:(id)arg2;
- (id)fileExtensionForDataType:(id)arg1;
- (void)addSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)deleteSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)_writeCacheFileForItem:(id)arg1;
- (void)_updateMappingFile;
- (id)_trackedFilenames;
- (id)_trackedFilenameForItem:(id)arg1;
- (void)_setCacheFilesDirectory:(id)arg1;
- (id)_pathForMappingFile;
- (id)_pathForItem:(id)arg1;
- (id)_pathForFilename:(id)arg1;
- (id)_generateTrackedFilenameForItem:(id)arg1;
- (void)_forgetTrackedFilenameForItem:(id)arg1;
- (id)_filenameForItem:(id)arg1;
- (void)_deleteCacheFileForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

