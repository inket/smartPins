//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@protocol WBSFormAutoFillNode <NSObject>
- (BOOL)isHTMLTextAreaElementUserEdited;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

@optional
- (void)setHTMLInputElementSpellCheckEnabled:(BOOL)arg1;
@end
