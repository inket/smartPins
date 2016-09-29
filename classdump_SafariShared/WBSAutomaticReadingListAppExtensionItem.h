//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSImage, NSString;

@interface WBSAutomaticReadingListAppExtensionItem : WBSAutomaticReadingListItem
{
    NSString *_title;
    NSImage *_profileImage;
}

@property(retain, nonatomic) NSImage *profileImage; // @synthesize profileImage=_profileImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)bestOriginatorProfileImageForSize:(struct CGSize)arg1;
- (struct _NSRange)emphasizedTextRange;
- (id)continuousBannerTitle;
- (id)continuousBannerDisplayString;
- (id)displayString;
- (id)originatorProfileURL;
- (id)sourceRecordURL;
- (id)biggerOriginatorProfileImageURL;
- (id)originatorProfileImageURL;
- (id)socialSource;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

