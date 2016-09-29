//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/ExtensionBuilderIndexedItemsControllerDelegate-Protocol.h>

@class ExtensionBuilderExtension, ExtensionBuilderIndexedItemsController, ExtensionBuilderIndexedSettingItemsController, ExtensionBuilderPopUpMenuManager, NSArrayController, NSButton, NSColor, NSImage, NSLayoutConstraint, NSPopUpButton, NSStackView, NSString, NSTextField, NSView;
@protocol ExtensionBuilderContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderContentViewController : NSViewController <ExtensionBuilderIndexedItemsControllerDelegate>
{
    struct Vector<WTF::RefPtr<Safari::SignatureCreator>, 0, WTF::CrashOnOverflow, 16> _signatureCreators;
    BOOL _shouldIgnoreExtensionInstalledOrUninstalledNotifications;
    NSView *_lastContentViewInKeyViewLoop;
    ExtensionBuilderIndexedItemsController *_allowedDomainsController;
    ExtensionBuilderIndexedItemsController *_barsController;
    ExtensionBuilderIndexedItemsController *_contextMenuItemsController;
    ExtensionBuilderIndexedItemsController *_toolbarItemsController;
    ExtensionBuilderIndexedItemsController *_menusController;
    ExtensionBuilderIndexedItemsController *_popoversController;
    ExtensionBuilderIndexedItemsController *_startScriptsController;
    ExtensionBuilderIndexedItemsController *_endScriptsController;
    ExtensionBuilderIndexedItemsController *_styleSheetsController;
    ExtensionBuilderIndexedItemsController *_whitelistPatternsController;
    ExtensionBuilderIndexedItemsController *_blacklistPatternsController;
    ExtensionBuilderIndexedSettingItemsController *_settingItemsController;
    ExtensionBuilderPopUpMenuManager *_globalPageFilePopUpMenuManager;
    ExtensionBuilderPopUpMenuManager *_contentFilterFilePopUpMenuManager;
    id <ExtensionBuilderContentViewControllerDelegate> _delegate;
    ExtensionBuilderExtension *_extension;
    unsigned long long _numberOfExtensions;
    NSView *_headerView;
    NSView *_headerBottomBorderView;
    NSLayoutConstraint *_extensionNameToInstallButtonTrailingConstraint;
    NSLayoutConstraint *_extensionNameToUninstallButtonTrailingConstraint;
    NSArrayController *_certificateNamesArrayController;
    NSView *_contentView;
    NSView *_documentView;
    NSTextField *_displayNameTextField;
    NSView *_displayNameErrorContainerView;
    NSLayoutConstraint *_displayNameErrorToAuthorEditFieldVerticalConstraint;
    NSTextField *_descriptionTextField;
    NSView *_descriptionErrorContainerView;
    NSLayoutConstraint *_descriptionErrorToWebsiteEditFieldVerticalConstraint;
    NSTextField *_websiteTextField;
    NSView *_websiteErrorContainerView;
    NSLayoutConstraint *_websiteErrorToExtensionDetailsVerticalConstraint;
    NSTextField *_bundleIdentifierTextField;
    NSView *_bundleIdentifierErrorContainerView;
    NSLayoutConstraint *_bundleIdentifierErrorToCompanionBundleIdentifierVerticalConstraint;
    NSLayoutConstraint *_bundleIdentifierErrorToUpdateManifestVerticalConstraint;
    NSTextField *_companionBundleIdentifierLabelTextField;
    NSTextField *_companionBundleIdentifierTextField;
    NSLayoutConstraint *_companionBundleIdentifierErrorToUpdateManifestVerticalConstraint;
    NSTextField *_updateManifestTextField;
    NSView *_updateManifestErrorContainerView;
    NSLayoutConstraint *_updateManifestErrorToExtensionVersionsVerticalConstraint;
    NSTextField *_displayVersionTextField;
    NSView *_displayVersionErrorContainerView;
    NSLayoutConstraint *_displayVersionErrorToBundleVersionVerticalConstraint;
    NSTextField *_bundleVersionTextField;
    NSView *_bundleVersionErrorContainerView;
    NSLayoutConstraint *_bundleVersionErrorToExtensionWebsiteAccessVerticalConstraint;
    NSStackView *_websiteAccessAllowedDomainsStackView;
    NSLayoutConstraint *_includeSecurePagesCheckboxToAllowedDomainsVerticalConstraint;
    NSLayoutConstraint *_extensionContentFilterToIncludeSecurePagesCheckboxVerticalConstraint;
    NSPopUpButton *_globalPageFilePopupButton;
    NSButton *_inspectGlobalPageButton;
    NSLayoutConstraint *_extensionStorageToInspectGlobalPageButtonVerticalConstraint;
    NSPopUpButton *_contentFilterFilePopupButton;
    NSView *_contentBlockerErrorContainer;
    NSLayoutConstraint *_extensionGlobalPageToContentBlockerErrorContainerVerticalConstraint;
    NSTextField *_barsLabelTextField;
    NSStackView *_barsStackView;
    NSTextField *_contextMenuItemsLabelTextField;
    NSStackView *_contextMenuItemsStackView;
    NSTextField *_toolbarItemsLabelTextField;
    NSStackView *_toolbarItemsStackView;
    NSTextField *_menusLabelTextField;
    NSStackView *_menusStackView;
    NSTextField *_popoversLabelTextField;
    NSStackView *_popoversStackView;
    NSStackView *_startScriptsStackView;
    NSStackView *_endScriptsStackView;
    NSStackView *_styleSheetsStackView;
    NSStackView *_whitelistPatternsStackView;
    NSStackView *_blacklistPatternsStackView;
    NSLayoutConstraint *_extensionSettingsToBlacklistPatternsVerticalConstraint;
    NSView *_settingItemLabelLayoutGuide;
    NSTextField *_settingItemsLabelTextField;
    NSStackView *_settingItemsStackView;
    NSButton *_installButton;
    NSButton *_uninstallButton;
    NSButton *_reloadButton;
    NSButton *_buildPackageButton;
    NSPopUpButton *_certificateNamesPopupButton;
    NSPopUpButton *_websiteAccessLevelPopupButton;
    NSButton *_websiteAccessIncludeSecurePagesCheckbox;
    NSPopUpButton *_databaseQuotaPopupButton;
}

+ (id)keyPathsForValuesAffectingHasScriptsOrStyleSheets;
+ (id)keyPathsForValuesAffectingIndexOfDatabaseQuotaMenuItem;
+ (id)keyPathsForValuesAffectingIndexOfContentFilterFileMenuItem;
+ (id)keyPathsForValuesAffectingIsContentBlockerErrorMessageVisible;
+ (id)keyPathsForValuesAffectingContentBlockerErrorMessage;
+ (id)keyPathsForValuesAffectingIsInspectGlobalPageButtonVisible;
+ (id)keyPathsForValuesAffectingIndexOfGlobalPageFileMenuItem;
+ (id)keyPathsForValuesAffectingIsWebsiteAccessIncludeSecurePagesCheckboxVisible;
+ (id)keyPathsForValuesAffectingWebsiteAccessAllowedDomainsAreEditable;
+ (id)keyPathsForValuesAffectingIndexOfWebsiteAccessLevelMenuItem;
+ (id)keyPathsForValuesAffectingIsSelectedExtensionEnabled;
+ (id)keyPathsForValuesAffectingIsSelectedExtensionInstalled;
+ (id)keyPathsForValuesAffectingIsExtensionSelected;
+ (BOOL)_stringStartsWithHTTPOrHTTPSScheme:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak NSPopUpButton *databaseQuotaPopupButton; // @synthesize databaseQuotaPopupButton=_databaseQuotaPopupButton;
@property(nonatomic) __weak NSButton *websiteAccessIncludeSecurePagesCheckbox; // @synthesize websiteAccessIncludeSecurePagesCheckbox=_websiteAccessIncludeSecurePagesCheckbox;
@property(nonatomic) __weak NSPopUpButton *websiteAccessLevelPopupButton; // @synthesize websiteAccessLevelPopupButton=_websiteAccessLevelPopupButton;
@property(nonatomic) __weak NSPopUpButton *certificateNamesPopupButton; // @synthesize certificateNamesPopupButton=_certificateNamesPopupButton;
@property(nonatomic) __weak NSButton *buildPackageButton; // @synthesize buildPackageButton=_buildPackageButton;
@property(nonatomic) __weak NSButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(nonatomic) __weak NSButton *uninstallButton; // @synthesize uninstallButton=_uninstallButton;
@property(nonatomic) __weak NSButton *installButton; // @synthesize installButton=_installButton;
@property(nonatomic) __weak NSStackView *settingItemsStackView; // @synthesize settingItemsStackView=_settingItemsStackView;
@property(nonatomic) __weak NSTextField *settingItemsLabelTextField; // @synthesize settingItemsLabelTextField=_settingItemsLabelTextField;
@property(nonatomic) __weak NSView *settingItemLabelLayoutGuide; // @synthesize settingItemLabelLayoutGuide=_settingItemLabelLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *extensionSettingsToBlacklistPatternsVerticalConstraint; // @synthesize extensionSettingsToBlacklistPatternsVerticalConstraint=_extensionSettingsToBlacklistPatternsVerticalConstraint;
@property(nonatomic) __weak NSStackView *blacklistPatternsStackView; // @synthesize blacklistPatternsStackView=_blacklistPatternsStackView;
@property(nonatomic) __weak NSStackView *whitelistPatternsStackView; // @synthesize whitelistPatternsStackView=_whitelistPatternsStackView;
@property(nonatomic) __weak NSStackView *styleSheetsStackView; // @synthesize styleSheetsStackView=_styleSheetsStackView;
@property(nonatomic) __weak NSStackView *endScriptsStackView; // @synthesize endScriptsStackView=_endScriptsStackView;
@property(nonatomic) __weak NSStackView *startScriptsStackView; // @synthesize startScriptsStackView=_startScriptsStackView;
@property(nonatomic) __weak NSStackView *popoversStackView; // @synthesize popoversStackView=_popoversStackView;
@property(nonatomic) __weak NSTextField *popoversLabelTextField; // @synthesize popoversLabelTextField=_popoversLabelTextField;
@property(nonatomic) __weak NSStackView *menusStackView; // @synthesize menusStackView=_menusStackView;
@property(nonatomic) __weak NSTextField *menusLabelTextField; // @synthesize menusLabelTextField=_menusLabelTextField;
@property(nonatomic) __weak NSStackView *toolbarItemsStackView; // @synthesize toolbarItemsStackView=_toolbarItemsStackView;
@property(nonatomic) __weak NSTextField *toolbarItemsLabelTextField; // @synthesize toolbarItemsLabelTextField=_toolbarItemsLabelTextField;
@property(nonatomic) __weak NSStackView *contextMenuItemsStackView; // @synthesize contextMenuItemsStackView=_contextMenuItemsStackView;
@property(nonatomic) __weak NSTextField *contextMenuItemsLabelTextField; // @synthesize contextMenuItemsLabelTextField=_contextMenuItemsLabelTextField;
@property(nonatomic) __weak NSStackView *barsStackView; // @synthesize barsStackView=_barsStackView;
@property(nonatomic) __weak NSTextField *barsLabelTextField; // @synthesize barsLabelTextField=_barsLabelTextField;
@property(retain, nonatomic) NSLayoutConstraint *extensionGlobalPageToContentBlockerErrorContainerVerticalConstraint; // @synthesize extensionGlobalPageToContentBlockerErrorContainerVerticalConstraint=_extensionGlobalPageToContentBlockerErrorContainerVerticalConstraint;
@property(nonatomic) __weak NSView *contentBlockerErrorContainer; // @synthesize contentBlockerErrorContainer=_contentBlockerErrorContainer;
@property(nonatomic) __weak NSPopUpButton *contentFilterFilePopupButton; // @synthesize contentFilterFilePopupButton=_contentFilterFilePopupButton;
@property(retain, nonatomic) NSLayoutConstraint *extensionStorageToInspectGlobalPageButtonVerticalConstraint; // @synthesize extensionStorageToInspectGlobalPageButtonVerticalConstraint=_extensionStorageToInspectGlobalPageButtonVerticalConstraint;
@property(retain, nonatomic) NSButton *inspectGlobalPageButton; // @synthesize inspectGlobalPageButton=_inspectGlobalPageButton;
@property(nonatomic) __weak NSPopUpButton *globalPageFilePopupButton; // @synthesize globalPageFilePopupButton=_globalPageFilePopupButton;
@property(retain, nonatomic) NSLayoutConstraint *extensionContentFilterToIncludeSecurePagesCheckboxVerticalConstraint; // @synthesize extensionContentFilterToIncludeSecurePagesCheckboxVerticalConstraint=_extensionContentFilterToIncludeSecurePagesCheckboxVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *includeSecurePagesCheckboxToAllowedDomainsVerticalConstraint; // @synthesize includeSecurePagesCheckboxToAllowedDomainsVerticalConstraint=_includeSecurePagesCheckboxToAllowedDomainsVerticalConstraint;
@property(nonatomic) __weak NSStackView *websiteAccessAllowedDomainsStackView; // @synthesize websiteAccessAllowedDomainsStackView=_websiteAccessAllowedDomainsStackView;
@property(retain, nonatomic) NSLayoutConstraint *bundleVersionErrorToExtensionWebsiteAccessVerticalConstraint; // @synthesize bundleVersionErrorToExtensionWebsiteAccessVerticalConstraint=_bundleVersionErrorToExtensionWebsiteAccessVerticalConstraint;
@property(nonatomic) __weak NSView *bundleVersionErrorContainerView; // @synthesize bundleVersionErrorContainerView=_bundleVersionErrorContainerView;
@property(nonatomic) __weak NSTextField *bundleVersionTextField; // @synthesize bundleVersionTextField=_bundleVersionTextField;
@property(retain, nonatomic) NSLayoutConstraint *displayVersionErrorToBundleVersionVerticalConstraint; // @synthesize displayVersionErrorToBundleVersionVerticalConstraint=_displayVersionErrorToBundleVersionVerticalConstraint;
@property(nonatomic) __weak NSView *displayVersionErrorContainerView; // @synthesize displayVersionErrorContainerView=_displayVersionErrorContainerView;
@property(nonatomic) __weak NSTextField *displayVersionTextField; // @synthesize displayVersionTextField=_displayVersionTextField;
@property(retain, nonatomic) NSLayoutConstraint *updateManifestErrorToExtensionVersionsVerticalConstraint; // @synthesize updateManifestErrorToExtensionVersionsVerticalConstraint=_updateManifestErrorToExtensionVersionsVerticalConstraint;
@property(nonatomic) __weak NSView *updateManifestErrorContainerView; // @synthesize updateManifestErrorContainerView=_updateManifestErrorContainerView;
@property(nonatomic) __weak NSTextField *updateManifestTextField; // @synthesize updateManifestTextField=_updateManifestTextField;
@property(retain, nonatomic) NSLayoutConstraint *companionBundleIdentifierErrorToUpdateManifestVerticalConstraint; // @synthesize companionBundleIdentifierErrorToUpdateManifestVerticalConstraint=_companionBundleIdentifierErrorToUpdateManifestVerticalConstraint;
@property(nonatomic) __weak NSTextField *companionBundleIdentifierTextField; // @synthesize companionBundleIdentifierTextField=_companionBundleIdentifierTextField;
@property(nonatomic) __weak NSTextField *companionBundleIdentifierLabelTextField; // @synthesize companionBundleIdentifierLabelTextField=_companionBundleIdentifierLabelTextField;
@property(retain, nonatomic) NSLayoutConstraint *bundleIdentifierErrorToUpdateManifestVerticalConstraint; // @synthesize bundleIdentifierErrorToUpdateManifestVerticalConstraint=_bundleIdentifierErrorToUpdateManifestVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bundleIdentifierErrorToCompanionBundleIdentifierVerticalConstraint; // @synthesize bundleIdentifierErrorToCompanionBundleIdentifierVerticalConstraint=_bundleIdentifierErrorToCompanionBundleIdentifierVerticalConstraint;
@property(nonatomic) __weak NSView *bundleIdentifierErrorContainerView; // @synthesize bundleIdentifierErrorContainerView=_bundleIdentifierErrorContainerView;
@property(nonatomic) __weak NSTextField *bundleIdentifierTextField; // @synthesize bundleIdentifierTextField=_bundleIdentifierTextField;
@property(retain, nonatomic) NSLayoutConstraint *websiteErrorToExtensionDetailsVerticalConstraint; // @synthesize websiteErrorToExtensionDetailsVerticalConstraint=_websiteErrorToExtensionDetailsVerticalConstraint;
@property(nonatomic) __weak NSView *websiteErrorContainerView; // @synthesize websiteErrorContainerView=_websiteErrorContainerView;
@property(nonatomic) __weak NSTextField *websiteTextField; // @synthesize websiteTextField=_websiteTextField;
@property(retain, nonatomic) NSLayoutConstraint *descriptionErrorToWebsiteEditFieldVerticalConstraint; // @synthesize descriptionErrorToWebsiteEditFieldVerticalConstraint=_descriptionErrorToWebsiteEditFieldVerticalConstraint;
@property(nonatomic) __weak NSView *descriptionErrorContainerView; // @synthesize descriptionErrorContainerView=_descriptionErrorContainerView;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(retain, nonatomic) NSLayoutConstraint *displayNameErrorToAuthorEditFieldVerticalConstraint; // @synthesize displayNameErrorToAuthorEditFieldVerticalConstraint=_displayNameErrorToAuthorEditFieldVerticalConstraint;
@property(nonatomic) __weak NSView *displayNameErrorContainerView; // @synthesize displayNameErrorContainerView=_displayNameErrorContainerView;
@property(nonatomic) __weak NSTextField *displayNameTextField; // @synthesize displayNameTextField=_displayNameTextField;
@property(nonatomic) __weak NSView *documentView; // @synthesize documentView=_documentView;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak NSArrayController *certificateNamesArrayController; // @synthesize certificateNamesArrayController=_certificateNamesArrayController;
@property(retain, nonatomic) NSLayoutConstraint *extensionNameToUninstallButtonTrailingConstraint; // @synthesize extensionNameToUninstallButtonTrailingConstraint=_extensionNameToUninstallButtonTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *extensionNameToInstallButtonTrailingConstraint; // @synthesize extensionNameToInstallButtonTrailingConstraint=_extensionNameToInstallButtonTrailingConstraint;
@property(nonatomic) __weak NSView *headerBottomBorderView; // @synthesize headerBottomBorderView=_headerBottomBorderView;
@property(nonatomic) __weak NSView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) unsigned long long numberOfExtensions; // @synthesize numberOfExtensions=_numberOfExtensions;
@property(retain, nonatomic) ExtensionBuilderExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <ExtensionBuilderContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)nibName;
- (id)extensionBuilderIndexedItemsController:(id)arg1 subpathsWithPathExtension:(id)arg2;
- (id)pathExtensionForFilePopupForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)popoverIdentifiersForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)menuIdentifiersForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)extensionBuilderIndexedItemsController:(id)arg1 itemForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInExtensionBuilderIndexedItemsController:(id)arg1;
- (void)extensionBuilderIndexedItemsController:(id)arg1 removeItemAtIndex:(unsigned long long)arg2;
- (void)extensionBuilderIndexedItemsController:(id)arg1 setItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_removeSettingItemAtIndex:(unsigned long long)arg1;
- (void)_setSettingItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_settingItemAtIndex:(unsigned long long)arg1;
- (void)_addSettingItem:(id)arg1;
- (void)_updateWhitelistAndBlacklistPatternsConstraints;
- (void)_removeBlacklistPatternAtIndex:(unsigned long long)arg1;
- (void)_setBlacklistPattern:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_blacklistPatternAtIndex:(unsigned long long)arg1;
- (void)_addBlacklistPattern:(id)arg1;
- (void)_removeWhitelistPatternAtIndex:(unsigned long long)arg1;
- (void)_setWhitelistPattern:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_whitelistPatternAtIndex:(unsigned long long)arg1;
- (void)_addWhitelistPattern:(id)arg1;
- (void)_removeStyleSheetAtIndex:(unsigned long long)arg1;
- (void)_setStyleSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_styleSheetAtIndex:(unsigned long long)arg1;
- (void)_addStyleSheet:(id)arg1;
- (void)_removeEndScriptAtIndex:(unsigned long long)arg1;
- (void)_setEndScript:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_endScriptAtIndex:(unsigned long long)arg1;
- (void)_addEndScript:(id)arg1;
- (void)_removeStartScriptAtIndex:(unsigned long long)arg1;
- (void)_setStartScript:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_startScriptAtIndex:(unsigned long long)arg1;
- (void)_addStartScript:(id)arg1;
- (void)_removePopoverAtIndex:(unsigned long long)arg1;
- (void)_setPopover:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_popoverAtIndex:(unsigned long long)arg1;
- (void)_addPopover:(id)arg1;
- (void)_removeMenuAtIndex:(unsigned long long)arg1;
- (void)_setMenu:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_menuAtIndex:(unsigned long long)arg1;
- (void)_addMenu:(id)arg1;
- (void)_removeToolbarItemAtIndex:(unsigned long long)arg1;
- (void)_setToolbarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_toolbarItemAtIndex:(unsigned long long)arg1;
- (void)_addToolbarItem:(id)arg1;
- (void)_removeContextMenuItemAtIndex:(unsigned long long)arg1;
- (void)_setContextMenuItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_contextMenuItemAtIndex:(unsigned long long)arg1;
- (void)_addContextMenuItem:(id)arg1;
- (void)_removeBarAtIndex:(unsigned long long)arg1;
- (void)_setBar:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_barAtIndex:(unsigned long long)arg1;
- (void)_addBar:(id)arg1;
- (void)_updateInspectGlobalPageConstraints;
- (void)_updateContentBlockerErrorContainerConstraints;
- (void)_updateWebsiteAccessAllowedDomainsConstraints;
- (void)_removeAllowedDomainAtIndex:(unsigned long long)arg1;
- (void)_setAllowedDomain:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_allowedDomainAtIndex:(unsigned long long)arg1;
- (void)_addAllowedDomainForWebsiteAccess:(id)arg1;
@property(readonly, nonatomic) BOOL hasScriptsOrStyleSheets;
@property(nonatomic) unsigned long long indexOfDatabaseQuotaMenuItem;
@property(nonatomic) unsigned long long indexOfContentFilterFileMenuItem;
@property(readonly, nonatomic) BOOL isContentBlockerErrorMessageVisible;
@property(readonly, nonatomic) NSString *contentBlockerErrorMessage;
@property(readonly, nonatomic) BOOL isInspectGlobalPageButtonVisible;
@property(nonatomic) unsigned long long indexOfGlobalPageFileMenuItem;
@property(readonly, nonatomic) BOOL isWebsiteAccessIncludeSecurePagesCheckboxVisible;
@property(readonly, nonatomic) BOOL websiteAccessAllowedDomainsAreEditable;
@property(nonatomic) unsigned long long indexOfWebsiteAccessLevelMenuItem;
@property(readonly, nonatomic) BOOL areMultipleDeveloperCertificatesInstalled;
@property(readonly, nonatomic) BOOL isAnyDeveloperCertificateInstalled;
@property(readonly, nonatomic) NSColor *colorForCertificateNameTextField;
@property(readonly, copy, nonatomic) NSString *stringForCertificateNameTextField;
@property(readonly, nonatomic) NSImage *imageForCertificateIcon;
@property(readonly, nonatomic) BOOL shouldInstallUninstallAndReloadButtonsBeEnabled;
@property(readonly, nonatomic) BOOL isSelectedExtensionEnabled;
@property(readonly, nonatomic) BOOL isSelectedExtensionInstalled;
@property(readonly, copy, nonatomic) NSString *_selectedCertificateDeveloperIdentifier;
@property(readonly, copy, nonatomic) NSString *selectedCertificateName;
@property(readonly, nonatomic) struct Extension *extensionForSelectedExtensionBuilderExtension;
@property(readonly, nonatomic) BOOL isExtensionSelected;
- (void)_inspectGlobalPage:(id)arg1;
- (void)_showBuildPackageSaveSheet:(id)arg1;
- (void)_reloadExtension:(id)arg1;
- (void)_uninstallExtension:(id)arg1;
- (void)_installExtension:(id)arg1;
- (void)_confirmUserIntendsToInstallEphemeralExtension:(id)arg1;
- (BOOL)_canInstallEphemeralExtensions;
- (void)_updateVisibilityOfBundleVersionErrorMessage;
- (void)_updateVisibilityOfDisplayVersionErrorMessage;
- (void)_updateVisibilityOfUpdateManifestErrorMessage;
- (void)_updateVisibilityOfBundleIdentifierErrorMessage;
- (void)_updateVisibilityOfWebsiteErrorMessage;
- (void)_updateVisibilityOfDescriptionErrorMessage;
- (void)_updateVisibilityOfDisplayNameErrorMessage;
- (void)_updateVisibilityOfErrorMessages;
- (void)_updateKeyViewLoopForSettingItemsSection;
- (void)_updateKeyViewLoopForBlacklistPatternsSection;
- (void)_updateKeyViewLoopForWhitelistPatternsSection;
- (void)_updateKeyViewLoopForStyleSheetsSection;
- (void)_updateKeyViewLoopForEndScriptsSection;
- (void)_updateKeyViewLoopForStartScriptsSection;
- (void)_updateKeyViewLoopForPopoversSection;
- (void)_updateKeyViewLoopForMenusSection;
- (void)_updateKeyViewLoopForToolbarItemsSection;
- (void)_updateKeyViewLoopForContextMenuItemsSection;
- (void)_updateKeyViewLoopForBarsSection;
- (void)_updateKeyViewLoopForAccessLevelSection;
- (void)_updateKeyViewLoopForGlobalPageSection;
- (void)_updateKeyViewLoopForHeader;
- (void)_updateKeyViewLoop;
- (void)_setDeveloperIdentifierAndSaveChanges;
- (id)_createTemporaryPackageWithBundleURL:(id)arg1 certificateName:(id)arg2;
- (BOOL)_packageExtensionWithBundleURL:(id)arg1 packageURL:(id)arg2 certificateName:(id)arg3;
- (struct SignatureCreator *)_signerWithCertificateName:(id)arg1;
- (void)_extensionContentBlockerErrorMessageWasUpdated:(id)arg1;
- (void)_extensionWasEnabledOrDisabled:(id)arg1;
- (void)_extensionWasInstalledOrUninstalled:(id)arg1;
- (void)_firstResponderDidChange;
- (void)_focusView:(id)arg1;
- (void)_updateContentFilterMenu;
- (void)_updateGlobalPageMenu;
- (id)_subpathsForExtensionBundleWithPathExtension:(id)arg1;
- (void)_windowDidResignMain:(id)arg1;
- (void)_windowDidBecomeMain:(id)arg1;
- (void)_selectedCertificateDidChange:(id)arg1;
- (void)_certificateHasBeenRevoked:(const struct Certificate *)arg1;
- (void)_updateSignatureCreators;
- (void)_didChangeContentOfCertificateNamesArrayController;
- (void)_willChangeContentOfCertificateNamesArrayController;
- (void)_updateExtensionNameConstraints;
- (id)_newItemViewControllerWithButtonTitle:(id)arg1 buttonAction:(SEL)arg2;
- (void)_configureContentView;
- (void)_configureCompanionBundleIdentifier;
- (void)_configureHeaderView;
- (void)_configureContainerView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

