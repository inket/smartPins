//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/FormAutoFillCompletionControllerObjCAdapter.h>

__attribute__((visibility("hidden")))
@interface FormAddressBookAutoFillCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter
{
}

- (id)contactMatchAndContactLabelForNonNameFieldAutoFillCommand:(struct CompletionListAddressBookNonNameFieldAutoFillCommand *)arg1;
- (id)addressBookDataWillBeFilledOrOmittedStringForRecentlyUsedAutoFillCommand:(struct CompletionListAddressBookRecentlyUsedAutoFillCommand *)arg1;
- (id)voiceOverAnnouncementForRecentlyUsedAutoFillCommand:(struct CompletionListAddressBookRecentlyUsedAutoFillCommand *)arg1;
- (id)contactNameAndContactLabelForRecentlyUsedAutoFillCommand:(struct CompletionListAddressBookRecentlyUsedAutoFillCommand *)arg1;
- (void)_registerTableViewCellClasses;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)widthOfWidestCell;
- (id)initWithCompletionController:(struct FormCompletionController *)arg1;

@end
