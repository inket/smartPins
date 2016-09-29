//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSTouchIconRequest.h>

@class WebBookmark;

__attribute__((visibility("hidden")))
@interface BookmarkTouchIconRequest : WBSTouchIconRequest
{
    WebBookmark *_bookmark;
}

+ (id)requestWithBookmark:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3 useSiteNameInsteadOfTitle:(BOOL)arg4;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3 useSiteNameInsteadOfTitle:(BOOL)arg4;
- (id)folderUUID;

@end

