//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

__attribute__((visibility("hidden")))
@interface FaviconRequest : WBSSiteMetadataRequest
{
}

@property(readonly, nonatomic) BOOL shouldReturnDefaultIconIfNoneAvailable;
@property(readonly, nonatomic) struct CGSize iconSize;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 shouldReturnDefaultIconIfNoneAvailable:(BOOL)arg3;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

@end

