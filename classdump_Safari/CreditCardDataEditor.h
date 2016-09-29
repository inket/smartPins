//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import <Safari/CreditCardDataEditorCellViewDelegate-Protocol.h>
#import <Safari/NSTableViewDataSource-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>
#import <Safari/PanelPlusDelegate-Protocol.h>

@class AuthorizationRequest, CreditCardNumberFieldEditor, NSArray, NSButton, NSLayoutConstraint, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface CreditCardDataEditor : SheetWithTableController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _shouldPreventResigningFirstResponder;
    unsigned long long _ignoringCreditCardDataChangeNotifications;
    AuthorizationRequest *_canShowCardNumbersAuthorizationRequest;
    CreditCardNumberFieldEditor *_creditCardNumberFieldEditor;
    NSArray *_creditCardData;
    NSTextField *_emptyTablePlaceholderText;
    NSButton *_addCreditCardButton;
    NSLayoutConstraint *_addRemoveButtonEqualWidthsConstraint;
}

+ (id)_creditCardIconForNumberAllowingPartialMatch:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *addRemoveButtonEqualWidthsConstraint; // @synthesize addRemoveButtonEqualWidthsConstraint=_addRemoveButtonEqualWidthsConstraint;
@property(nonatomic) __weak NSButton *addCreditCardButton; // @synthesize addCreditCardButton=_addCreditCardButton;
@property(nonatomic) __weak NSTextField *emptyTablePlaceholderText; // @synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText;
@property(copy, nonatomic) NSArray *creditCardData; // @synthesize creditCardData=_creditCardData;
- (void).cxx_destruct;
- (void)creditCardDataEditorCellView:(id)arg1 willAbortEditingForTextFieldWithIdentifier:(id)arg2;
- (void)creditCardDataEditorCellView:(id)arg1 didSetObjectValue:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (void)creditCardDataEditorCellView:(id)arg1 textDidChangeInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)creditCardDataEditorCellView:(id)arg1 shouldEndEditingTextInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)panelPlus:(id)arg1 shouldMakeFirstResponder:(id)arg2;
- (BOOL)_isCreditCardNumberTextField:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowDidResignKey:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateCreditCard:(id)arg1 withCreditCardData:(id)arg2;
- (BOOL)_shouldSetNumberOfCreditCardData:(id)arg1 toCreditCardNumber:(id)arg2;
- (id)_indexesOfCreditCardsWithNumber:(id)arg1 excludingCard:(id)arg2;
- (id)_expirationDateForDate:(id)arg1;
- (void)_preventResigningFirstResponderWhilePerformingBlock:(CDUnknownBlockType)arg1;
- (void)_performBlockIgnoringCreditCardDataChangeNotifications:(CDUnknownBlockType)arg1;
- (void)addCreditCard:(id)arg1;
- (void)_addCreditCard:(id)arg1;
- (BOOL)_canShowCardNumbers;
- (void)removeSelectedItems:(id)arg1;
- (void)_removeCreditCardsAtIndexes:(id)arg1;
- (void)_updateVisibilityOfPlaceholderText;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)creditCardDataChanged;
- (void)resetCreditCardData;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
