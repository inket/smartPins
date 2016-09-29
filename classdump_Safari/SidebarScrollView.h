//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/ScrollViewPlus.h>

@protocol SidebarScrollViewAccessibilityDelegate;

__attribute__((visibility("hidden")))
@interface SidebarScrollView : ScrollViewPlus
{
    id <SidebarScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <SidebarScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_accessibilityElements:(id)arg1 withDelegateChildren:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

