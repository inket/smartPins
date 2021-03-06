//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSPopoverDelegate-Protocol.h>
#import <Safari/SFSafariExtensionRemoteViewControllerDelegate-Protocol.h>

@class NSArray, NSImage, NSMapTable, NSString, NSUUID, SFSafariExtensionRemoteViewController;

__attribute__((visibility("hidden")))
@interface AppExtensionToolbarItem : NSObject <NSPopoverDelegate, SFSafariExtensionRemoteViewControllerDelegate>
{
    NSMapTable *_browserWindowControllerToToolbarItemMap;
    NSString *_toolbarIdentifier;
    NSString *_toolbarItemUniqueIdentifier;
    NSUUID *_extensionUUID;
    NSString *_label;
    NSImage *_image;
    NSString *_action;
    SFSafariExtensionRemoteViewController *_remotePopoverViewController;
}

+ (id)uniqueToolbarItemIdentifier:(id)arg1 toolbarIdentifier:(id)arg2;
@property(retain, nonatomic) SFSafariExtensionRemoteViewController *remotePopoverViewController; // @synthesize remotePopoverViewController=_remotePopoverViewController;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSUUID *extensionUUID; // @synthesize extensionUUID=_extensionUUID;
@property(readonly, copy, nonatomic) NSString *toolbarItemUniqueIdentifier; // @synthesize toolbarItemUniqueIdentifier=_toolbarItemUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *toolbarIdentifier; // @synthesize toolbarIdentifier=_toolbarIdentifier;
- (void).cxx_destruct;
- (void)safariExtensionRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_performClickAction:(id)arg1;
- (void)validateExtensionToolbarItem:(id)arg1;
- (void)removeFromToolbar;
- (void)insertIntoToolbar;
- (id)toolbarItemWithUUID:(id)arg1;
- (id)toolbarItemForBrowserWindowController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allToolbarItems;
- (id)initWithIdentifier:(id)arg1 composedExtensionIdentifier:(id)arg2 extensionUUID:(id)arg3 label:(id)arg4 image:(id)arg5 action:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

