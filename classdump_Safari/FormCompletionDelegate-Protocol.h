//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol FormCompletionDelegate
- (void)formCompletion:(struct FormCompletionController *)arg1 collectFormMetadataForSafeAutoFillConfirmationContactProperty:(NSString *)arg2 contractIdentifier:(NSString *)arg3 contactLabel:(NSString *)arg4;
- (BOOL)formCompletion:(struct FormCompletionController *)arg1 fillFormWithSuggestedPassword:(NSString *)arg2 formMetadata:(NSDictionary *)arg3;
- (void)formCompletion:(struct FormCompletionController *)arg1 fillFormWithPassword:(NSString *)arg2 formMetadata:(NSDictionary *)arg3;
- (void)formCompletion:(struct FormCompletionController *)arg1 fillFormWithValues:(NSDictionary *)arg2;
@end
