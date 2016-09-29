//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSTableViewDelegate-Protocol.h>

@class NSEvent, NSMenu, NSTableColumn, NSTableView;

@protocol TableViewPlusDelegate <NSTableViewDelegate>

@optional
- (void)tableViewDidEndLiveResize:(NSTableView *)arg1;
- (void)tableViewCopy:(NSTableView *)arg1;
- (BOOL)tableViewCanCopy:(NSTableView *)arg1;
- (void)tableViewDidResignFirstResponder:(NSTableView *)arg1;
- (NSMenu *)tableView:(NSTableView *)arg1 menuForEvent:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
- (BOOL)tableView:(NSTableView *)arg1 keyDown:(NSEvent *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldEditOnSingleClick:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
- (BOOL)tableView:(NSTableView *)arg1 shouldEditOnDoubleClick:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
@end
