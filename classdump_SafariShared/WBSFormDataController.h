//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSFormDataController : NSObject
{
    NSDictionary *_allCredentialsCache;
    NSObject<OS_dispatch_queue> *_allCredentialsCacheAccessQueue;
    int _keychainChangedNotificationToken;
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    unsigned long long _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    NSMutableArray *_recentlyUsedAutoFillSets;
    NSMutableDictionary *_preferredLabelForUniqueIDOfPersonMap;
}

+ (BOOL)contactIsMe:(id)arg1;
+ (id)controlsConsideredByAutoFillInForm:(id)arg1;
+ (id)nextFieldAfterControls:(id)arg1 inForm:(id)arg2;
+ (id)domainFromURL:(id)arg1;
+ (long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id *)arg3 outPasswordElementUniqueID:(id *)arg4 outConfirmPasswordElementUniqueID:(id *)arg5;
+ (BOOL)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)specifierForControl:(id)arg1;
+ (id)allAddressBookNonAddressPropertyKeys;
+ (id)allAddressBookAddressComponentKeys;
+ (id)addressBookAddressPropertyKey;
+ (BOOL)formContainsCreditCardNumberField:(id)arg1;
+ (BOOL)formContainsCreditCardData:(id)arg1;
+ (BOOL)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long *)arg2;
+ (id)dontSaveMarker;
- (void).cxx_destruct;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (BOOL)hasCredentialsForPageWithMainFrame:(id)arg1;
- (id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(BOOL)arg3;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(BOOL)arg3;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg5;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (id)completionDBPath;
- (BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillFromAddressBook;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id *)arg2;
- (id)lastUsedUsernameForURL:(id)arg1;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id *)arg2;
- (id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 shouldUseEachExistingMatchOnce:(BOOL)arg5 contact:(id)arg6;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4;
- (void)_addControlIDToAutoFillValuesToAutoFillItems:(id)arg1 formMetadata:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg1 matchesForDoNotFill:(id)arg2;
- (unsigned long long)_addMatchesForControl:(id)arg1 startingAtIndex:(unsigned long long)arg2 formMetadata:(id)arg3 fromExistingMatches:(id)arg4 fromAllMatchesIfNecessary:(id)arg5 addToFoundMatches:(id)arg6 addToAutoFillValues:(id)arg7 multiRoundAutoFillManager:(id)arg8 propertyToIdentifierMapForFoundMatches:(id)arg9 shouldUseEachExistingMatchOnce:(BOOL)arg10;
- (BOOL)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg1 specifier:(id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4;
- (id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(BOOL)arg7 contact:(id)arg8 shouldRemoveCompanyFromAutoFillMatchesIfHomeAddressFound:(BOOL)arg9 existingMatches:(id)arg10 shouldUseEachExistingMatchOnce:(BOOL)arg11 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg12;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 shouldRemoveCompanyFromAutoFillMatchesIfHomeAddressFound:(BOOL)arg7 contact:(id)arg8 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg9;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(BOOL)arg2;
- (id)_singleFieldPhoneNumberCandidates:(id)arg1;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 contact:(id)arg3;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)cascadingAddressMatchesForMatch:(id)arg1 contact:(id)arg2;
- (id)matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(BOOL)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (id)deserializedRecentlyUsedAutoFillSets;
- (void)addRecentlyUsedAutoFillSet:(id)arg1 appendToTheEnd:(BOOL)arg2;
- (id)recentlyUsedAutoFillSets;
- (BOOL)preferredIdentifierExistsForProperty:(id)arg1 withContact:(id)arg2;
- (id)preferredIdentifierForProperty:(id)arg1 withContact:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 withContact:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (BOOL)preferredIdentifierExistsForProperty:(id)arg1;
- (id)preferredIdentifierForProperty:(id)arg1;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (void)domainsWithPreviousDataChanged;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)domainsWithPreviousData;
- (void)saveCompletionDBSoon;
- (id)allFormDataForSaving;
- (void)pruneCompletionDB;
- (void)loadCompletionDBIfNeeded;
- (void)dealloc;
- (id)init;

@end

