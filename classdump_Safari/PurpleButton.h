//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class WebClipBanner;

__attribute__((visibility("hidden")))
@interface PurpleButton : NSButton
{
    WebClipBanner *_webClipBanner;
}

+ (Class)cellClass;
@property(nonatomic) __weak WebClipBanner *webClipBanner; // @synthesize webClipBanner=_webClipBanner;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (struct CGSize)intrinsicContentSize;

@end

