//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/TabSearchItem.h>

@class NSURL, TabSearchTabInfoForFiltering;

__attribute__((visibility("hidden")))
@interface TabSearchTabItem : TabSearchItem
{
    NSURL *_tabURL;
    TabSearchTabInfoForFiltering *_filteringInfoForTab;
}

@property(retain, nonatomic) TabSearchTabInfoForFiltering *filteringInfoForTab; // @synthesize filteringInfoForTab=_filteringInfoForTab;
@property(retain, nonatomic) NSURL *tabURL; // @synthesize tabURL=_tabURL;
- (void).cxx_destruct;

@end

