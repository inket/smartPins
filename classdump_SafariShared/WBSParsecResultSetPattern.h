//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject
{
    NSRegularExpression *_regularExpression;
}

+ (id)patternWithString:(id)arg1;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)arg1;
+ (id)_regularExpressionPatternForToken:(id)arg1;
+ (id)_nextTokenInResultSetPattern:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isMatchedByString:(id)arg1;
- (id)_initWithRegularExpression:(id)arg1;

@end
