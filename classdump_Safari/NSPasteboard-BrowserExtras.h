//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPasteboard.h>

@interface NSPasteboard (BrowserExtras)
- (BOOL)containsAnyURLsViableForTopSites;
- (BOOL)containsAnyURLs;
- (id)URLsFromString;
- (id)URLs;
- (void)writeURLs:(id)arg1 andTitles:(id)arg2;
- (void)replaceContentsWithURL:(id)arg1;
@end

