//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class WBSParsecActionButton;
@protocol ParsecTableCellView;

@protocol ParsecTableCellViewDelegate <NSObject>

@optional
- (void)parsecTableCellViewActionButtonSelectionStateDidChange:(id <ParsecTableCellView>)arg1;
- (BOOL)parsecTableCellView:(id <ParsecTableCellView>)arg1 shouldUseITunesPunchoutForActionButton:(WBSParsecActionButton *)arg2;
- (BOOL)parsecTableCellView:(id <ParsecTableCellView>)arg1 shouldShowActionButton:(WBSParsecActionButton *)arg2;
@end

