//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _BookmarksAutomationEditReadingListItemCommandInput : NSObject <NSCoding>
{
    BOOL _shouldMarkAsRead;
    NSString *_urlString;
}

@property(nonatomic) BOOL shouldMarkAsRead; // @synthesize shouldMarkAsRead=_shouldMarkAsRead;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

