//
//  smartPins.m
//  smartPins
//
//  Created by Mahdi Bchetnia on 26/10/15.
//  Copyright © 2015 Mahdi Bchetnia.
//

#import "smartPins.h"

static smartPins* plugin = nil;

@protocol smartPins <NSObject>

@optional
- (void)_showNextImageViewWithFinalOpacity:(double)arg1 animationDuration:(double)arg2;
- (void)setHasMouseOverHighlight:(BOOL)arg1 shouldAnimateCloseButton:(BOOL)arg2;
- (id)_imageForRequest:(id)arg1 getThemeColor:(id *)arg2;
- (id)initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5;
@end

@implementation NSObject (smartPins)

- (id)new_imageForRequest:(id)arg1 getThemeColor:(id *)arg2 {
    BOOL override = YES;

    if (override) {
        BOOL black = NO;

        if (!black) {
            *arg2 = [NSColor darkGrayColor];
        }

        return [self new_imageForRequest:nil getThemeColor:(id*)&arg2];
    } else {
        return [self new_imageForRequest:nil getThemeColor:arg2];
    }
}

- (id)new_initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(BOOL)arg5 {
    return [self new_initWithURL:arg1 image:arg2 highlightedImage:arg3 themeColor:[NSColor redColor] isMonogram:YES];
}

- (void)new_setTitle:(NSString*)title {
    // Change color when pinned Facebook tab has new notifications
    if ([title hasSuffix:@") Facebook"])
    {
        [(NSObject<smartPins>*)self setHasMouseOverHighlight:YES shouldAnimateCloseButton:NO];
    }

    [self new_setTitle:title];
}


- (void)new_showNextImageViewWithFinalOpacity:(double)arg1 animationDuration:(double)arg2 {
    if (arg1 == 0.7) {
        [self new_showNextImageViewWithFinalOpacity:1 animationDuration:arg2];
    } else {
        [self new_showNextImageViewWithFinalOpacity:arg1 animationDuration:arg2];
    }
}

@end


@implementation smartPins

#pragma mark SIMBL methods and loading

+ (smartPins*)sharedInstance {
    if (plugin == nil)
        plugin = [[smartPins alloc] init];
    
    return plugin;
}

+ (void)load {
    [[smartPins sharedInstance] loadPlugin];
    NSLog(@"smartPins loaded.");
}

- (void)loadPlugin {
    Class class = NSClassFromString(@"WBSTemplateIconCache");
    
    Method new = class_getInstanceMethod(class, @selector(new_imageForRequest:getThemeColor:));
    Method old = class_getInstanceMethod(class, @selector(_imageForRequest:getThemeColor:));
    method_exchangeImplementations(new, old);

    class = NSClassFromString(@"WBSTemplateIconResponse");
    new = class_getInstanceMethod(class, @selector(new_initWithURL:image:highlightedImage:themeColor:isMonogram:));
    old = class_getInstanceMethod(class, @selector(initWithURL:image:highlightedImage:themeColor:isMonogram:));
    method_exchangeImplementations(new, old);

    class = NSClassFromString(@"TabButton");
    new = class_getInstanceMethod(class, @selector(new_setTitle:));
    old = class_getInstanceMethod(class, @selector(setTitle:));
    method_exchangeImplementations(new, old);

    class = NSClassFromString(@"VibrancyTransitioningImageView");
    new = class_getInstanceMethod(class, @selector(new_showNextImageViewWithFinalOpacity:animationDuration:));
    old = class_getInstanceMethod(class, @selector(_showNextImageViewWithFinalOpacity:animationDuration:));
    method_exchangeImplementations(new, old);
}


@end
