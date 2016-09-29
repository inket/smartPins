//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppExtensionContextMenu, AppExtensionToolbarItem, ExtensionWebsiteAccess, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SafariAppExtensionData : NSObject
{
    AppExtensionToolbarItem *_toolbarItem;
    AppExtensionContextMenu *_contextMenu;
    NSArray *_injectedScripts;
    NSArray *_injectedStyleSheets;
    ExtensionWebsiteAccess *_websiteAccess;
    NSString *_developerIdentifier;
    NSURL *_safariExtensionBaseURI;
}

@property(retain, nonatomic) NSURL *safariExtensionBaseURI; // @synthesize safariExtensionBaseURI=_safariExtensionBaseURI;
@property(copy, nonatomic) NSString *developerIdentifier; // @synthesize developerIdentifier=_developerIdentifier;
@property(retain, nonatomic) ExtensionWebsiteAccess *websiteAccess; // @synthesize websiteAccess=_websiteAccess;
@property(copy, nonatomic) NSArray *injectedStyleSheets; // @synthesize injectedStyleSheets=_injectedStyleSheets;
@property(copy, nonatomic) NSArray *injectedScripts; // @synthesize injectedScripts=_injectedScripts;
@property(retain, nonatomic) AppExtensionContextMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) AppExtensionToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void).cxx_destruct;

@end

