//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSTextFieldDelegate-Protocol.h>

@class NSPopover, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface PopoverWithTextFieldViewController : NSViewController <NSTextFieldDelegate>
{
    NSTextField *_inputField;
    NSString *_placeholderString;
    CDUnknownBlockType _didEndEditingBlock;
    NSPopover *_popover;
}

@property(readonly, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)loadView;
- (id)initWithPlaceholderString:(id)arg1 didEndEditingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

