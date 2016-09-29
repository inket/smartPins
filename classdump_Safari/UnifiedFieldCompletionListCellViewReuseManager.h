//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSNib, UnifiedFieldCompletionStyledTableCellView;
@protocol ParsecTableCellView;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject
{
    NSMutableDictionary *_viewArraysByClass;
    NSCountedSet *_viewIndicesByClass;
    NSNib *_generalNib;
    NSNib *_platformSpecificNib;
    NSMutableDictionary *_parsecCellReuseManagersByIdentifier;
    UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *_mostRecentlyUsedParsecCellView;
}

+ (id)sharedManager;
@property(readonly, nonatomic) UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *mostRecentlyUsedParsecCellView; // @synthesize mostRecentlyUsedParsecCellView=_mostRecentlyUsedParsecCellView;
- (void).cxx_destruct;
- (id)_identifierForParsecCellViewType:(int)arg1;
- (id)_generalNib;
- (id)_platformSpecificNib;
- (id)_createCellViewWithIdentifier:(id)arg1 fromNib:(id)arg2;
- (id)_nextCellViewOfClass:(Class)arg1;
- (id)_init;
- (void)prepareForReload;
- (id)_createParsecCellViewWithIdentifier:(id)arg1;
- (Class)_parsecCellViewClassFromIdentifier:(id)arg1;
- (BOOL)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)arg1;
- (id)_parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2;
- (id)parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2;
- (id)nextStyledOneLineTableCellView;
- (id)nextTextCellView;
- (id)nextImageAndTextCellView;
- (id)nextHeaderCellView;
- (id)init;

@end

