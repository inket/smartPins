//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DashboardWebClipController : NSObject
{
}

+ (id)sharedController;
- (struct CGSize)minimumWebClipContentSize;
- (void)createClipWithBrowserContentViewController:(struct BrowserContentViewController *)arg1 pageSize:(struct CGSize)arg2 cropRect:(struct CGRect)arg3 elementInfo:(const struct Dictionary *)arg4;
- (id)_webWidgetURLWithParameters:(id)arg1;

@end

