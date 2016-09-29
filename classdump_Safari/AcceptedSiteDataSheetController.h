//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import <Safari/TrackingDataControllerClient-Protocol.h>

@class AcceptedSiteDataDescriptionProvider, NSArray, NSButton, NSMutableSet, NSSearchField, NSTextField, NSTimer;

__attribute__((visibility("hidden")))
@interface AcceptedSiteDataSheetController : SheetWithTableController <TrackingDataControllerClient>
{
    NSSearchField *searchField;
    NSButton *doneButton;
    NSArray *_websiteTrackingData;
    NSArray *_unfilteredWebsiteTrackingData;
    NSMutableSet *_selectedDisplayNames;
    struct unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> _clientObjCAdapter;
    NSTimer *_updateWebsiteTrackingDataCoalescingTimer;
    NSArray *_latestWebsiteTrackingData;
    AcceptedSiteDataDescriptionProvider *_acceptedSiteDataDescriptionProvider;
    NSTextField *_emptyTablePlaceholderText;
}

@property(nonatomic) __weak NSTextField *emptyTablePlaceholderText; // @synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateTrackingDataCoalescingTimerFired;
- (void)_cancelUpdateTrackingDataCoalescingTimer;
- (void)didUpdateTrackingData:(id)arg1;
- (void)focusContentSearchField:(id)arg1;
- (BOOL)validate_focusContentSearchField:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)removeAllItems:(id)arg1;
- (BOOL)_confirmRemoveAllItems;
- (void)removeSelectedItems:(id)arg1;
- (void)search:(id)arg1;
- (void)_refreshAllIcons:(id)arg1;
- (void)_reloadDataAndRestoreSelection;
- (void)_updatePlaceholderTextValueAndVisibility;
- (void)filterTrackingData:(id)arg1;
- (void)reloadDataAndRestoreSelectedSites;
- (id)filterStringFromSearchField;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)awakeFromNib;

@end
