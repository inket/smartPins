//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface ReadingListItemPruningData : NSObject
{
    NSURL *_folderURL;
    NSDate *_dateLastViewed;
    NSDate *_dateAdded;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) NSDate *dateLastViewed; // @synthesize dateLastViewed=_dateLastViewed;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
- (void).cxx_destruct;
- (id)initWithFolderURL:(id)arg1 dateLastViewed:(id)arg2 dateAdded:(id)arg3;

@end

