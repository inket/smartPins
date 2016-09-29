//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSTextFieldDelegate-Protocol.h>

@class NSEvent, NSMenu, UnifiedField, WebBookmark;

@protocol UnifiedFieldDelegate <NSTextFieldDelegate>
- (void)unifiedFieldURLDropped:(UnifiedField *)arg1;
- (WebBookmark *)bookmarkToDragFromSiteIconInUnifiedField:(UnifiedField *)arg1;
- (BOOL)unifiedField:(UnifiedField *)arg1 trackSearchButtonForEvent:(NSEvent *)arg2;
- (NSMenu *)unifiedFieldReloadMenu:(UnifiedField *)arg1;
- (NSMenu *)unifiedFieldAudioIndicatorMenu:(UnifiedField *)arg1;
- (void)unifiedFieldPerformAudioIndicatorAction:(UnifiedField *)arg1;
- (void)unifiedFieldPerformSecurityPillAction:(UnifiedField *)arg1;
- (void)unifiedFieldPerformRightmostButtonAction:(UnifiedField *)arg1;
- (void)unifiedFieldWasClicked:(UnifiedField *)arg1;
- (BOOL)unifiedFieldShouldSelectAllAfterMouseDown:(UnifiedField *)arg1;
- (void)unifiedFieldMarkedTextDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldAutocompleteSelectionDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldResignedFirstResponder:(UnifiedField *)arg1;
- (void)unifiedFieldBecameFirstResponder:(UnifiedField *)arg1;
- (void)unifiedFieldDidMoveToWindow:(UnifiedField *)arg1;
@end
