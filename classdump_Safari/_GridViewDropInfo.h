//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GridViewDropInfo : NSObject
{
    int _dropOperation;
    unsigned long long _dropIndex;
}

@property(readonly, nonatomic) int dropOperation; // @synthesize dropOperation=_dropOperation;
@property(readonly, nonatomic) unsigned long long dropIndex; // @synthesize dropIndex=_dropIndex;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDropIndex:(unsigned long long)arg1 dropOperation:(int)arg2;

@end

