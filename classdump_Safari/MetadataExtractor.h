//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSMetadataExtractor.h>

__attribute__((visibility("hidden")))
@interface MetadataExtractor : WBSMetadataExtractor
{
    struct BundleFrame _bundleFrame;
    struct BundleScriptWorld _isolatedWorld;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)makeContext;
- (void)dealloc;
- (id)initWithBundleFrame:(const struct BundleFrame *)arg1;

@end

