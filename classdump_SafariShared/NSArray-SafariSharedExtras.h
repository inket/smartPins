//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (SafariSharedExtras)
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;
- (id)safari_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)safari_minimumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_maximumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_reduceObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_filterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_mapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_arrayAtIndex:(unsigned long long)arg1;
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;
- (id)safari_stringAtIndex:(unsigned long long)arg1;
- (id)safari_numberAtIndex:(unsigned long long)arg1;
@end

