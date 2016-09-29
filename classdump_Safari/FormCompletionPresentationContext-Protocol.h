//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL, NSView, NSWindow;

@protocol FormCompletionPresentationContext
@property(readonly, nonatomic) BOOL shouldSavePasswordsToCloudKeychain;
@property(readonly, nonatomic) BOOL shouldSaveUsernamesAndPasswords;
@property(readonly, nonatomic) struct Frame frame;
@property(readonly, nonatomic) NSView *browserView;
@property(readonly, nonatomic) NSWindow *window;
@property(readonly, nonatomic) NSURL *url;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchingPartialUsername:(NSString *)arg3 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg4;
@end
