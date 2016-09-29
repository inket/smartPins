//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <Safari/CAAnimationDelegate-Protocol.h>
#import <Safari/CALayerDelegate-Protocol.h>
#import <Safari/DelayedPopUpRolloverImageButtonDelegate-Protocol.h>
#import <Safari/NSAnimationDelegate-Protocol.h>
#import <Safari/UnifiedFieldEditorDelegate-Protocol.h>
#import <Safari/WBSFluidProgressControllerDelegate-Protocol.h>

@class CALayer, CompletionListTableView, DelayedPopUpRolloverImageButton, InteriorUnifiedField, NSButton, NSEvent, NSImage, NSImageView, NSString, NSTimer, NSTrackingArea, NSURL, NSView, OneStepBookmarkingButton, RolloverImageButton, TextFieldThatIgnoresClicks, WBSFluidProgressState, WebBookmark;
@protocol UnifiedFieldDelegate;

__attribute__((visibility("hidden")))
@interface UnifiedField : NSTextField <CAAnimationDelegate, CALayerDelegate, DelayedPopUpRolloverImageButtonDelegate, WBSFluidProgressControllerDelegate, NSAnimationDelegate, UnifiedFieldEditorDelegate>
{
    NSTimer *_truncationUpdateTimer;
    NSString *_reflectedURLString;
    NSString *_reflectedURLStringWhenNotEditing;
    BOOL _overlayStaticTextFieldShowingExpandedURLWithHiddenTextInClearColor;
    double _overlayStaticTextFieldVisibleTextOffsetX;
    double _overlayStaticTextFieldVisibleWidth;
    NSView *_containerForTextFieldForAnimation;
    NSTextField *_textFieldForAnimation;
    NSTextField *_overlayStaticTextFieldCloneForAnimation;
    BOOL _animatingToBecomeFirstResponder;
    BOOL _animatingToResignFirstResponder;
    BOOL _animateToResignFirstResponderSoon;
    BOOL _inSelectTextAsFirstResponder;
    NSTextField *_buttonDescriptionTextField;
    NSTimer *_showButtonDescriptionTimer;
    BOOL _isSettingReflectedURL;
    BOOL _detailStringIsHighlighted;
    BOOL _windowDidClose;
    BOOL _appendingSlashAndCollapsingSelection;
    BOOL _inTextDidEndEditing;
    BOOL _becomingFirstResponder;
    BOOL _settingStringValue;
    BOOL _updatingTruncation;
    NSEvent *_currentMouseDownEvent;
    struct CGSize _leftCapSize;
    struct CGSize _rightCapSize;
    NSString *_originalString;
    NSString *_detailString;
    NSString *_pageTitle;
    BOOL _updatingDetailString;
    BOOL _rightmostButtonIsForReader;
    BOOL _rightmostButtonIsForTopSites;
    BOOL _rightmostButtonShowsStopOnTopSites;
    BOOL _siteIconIsUnderMouse;
    WebBookmark *_bookmarkToDragFromSiteIcon;
    BOOL _securityPillIsUnderMouse;
    NSString *_evCertificateTitle;
    double _minProgressPosition;
    InteriorUnifiedField *_overlayStaticTextField;
    TextFieldThatIgnoresClicks *_hintTextField;
    BOOL _loadInProgress;
    BOOL _fluidAnimationInProgress;
    WBSFluidProgressState *_currentFluidProgressState;
    CALayer *_rootLayer;
    CALayer *_textAndControlsLayer;
    CALayer *_progressFillLayer;
    CALayer *_hintTextBackground;
    NSString *_rawPageStatus;
    NSString *_displayedPageStatus;
    NSString *_displayedPageTitleWithStatus;
    NSView *_mainContentView;
    NSView *_overlayStaticTextFieldClipView;
    CALayer *_overlayStaticTextFieldOverflowFadeOutMaskLayer;
    BOOL _overlayStaticTextFieldNeedsResize;
    BOOL _pageStatusTextFieldNeedUpdate;
    TextFieldThatIgnoresClicks *_pageStatusTextField;
    RolloverImageButton *_rightmostButton;
    RolloverImageButton *_magnifyingGlassButton;
    RolloverImageButton *_lockButton;
    RolloverImageButton *_readerButton;
    NSImageView *_faviconView;
    DelayedPopUpRolloverImageButton *_audioIndicator;
    BOOL _hasAudio;
    BOOL _hasActiveMediaCaptureDevice;
    NSTrackingArea *_unifiedFieldTrackingArea;
    BOOL _mouseIsInsideUnifiedField;
    OneStepBookmarkingButton *_oneStepBookmarkingButton;
    NSView *_dividerBetweenReaderButtonAndOneStepButton;
    NSTimer *_showOneStepBookmarkingButtonTimer;
    BOOL _shouldLayOutAsFirstResponder;
    BOOL _showingMagnifyingGlass;
    BOOL _showingSecurityUI;
    BOOL _reflectingSearchTerms;
    BOOL _showingEditedText;
    BOOL _showingAudioIndicator;
    BOOL _audioIndicatorShowingMutedState;
    NSString *_placeholderString;
    unsigned long long _browsingMode;
    NSURL *_reflectedURL;
    NSImage *_icon;
    long long _readerButtonState;
}

+ (unsigned long long)simplificationsForReflectedURL;
@property(nonatomic) BOOL rightmostButtonIsForReader; // @synthesize rightmostButtonIsForReader=_rightmostButtonIsForReader;
@property(nonatomic) long long readerButtonState; // @synthesize readerButtonState=_readerButtonState;
@property(readonly, nonatomic) NSButton *rightmostButton; // @synthesize rightmostButton=_rightmostButton;
@property(readonly, nonatomic) NSButton *audioIndicator; // @synthesize audioIndicator=_audioIndicator;
@property(nonatomic, getter=isAudioIndicatorShowingMutedState) BOOL audioIndicatorShowingMutedState; // @synthesize audioIndicatorShowingMutedState=_audioIndicatorShowingMutedState;
@property(readonly, nonatomic, getter=isShowingAudioIndicator) BOOL showingAudioIndicator; // @synthesize showingAudioIndicator=_showingAudioIndicator;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic, getter=isShowingEditedText) BOOL showingEditedText; // @synthesize showingEditedText=_showingEditedText;
@property(readonly, nonatomic, getter=isReflectingSearchTerms) BOOL reflectingSearchTerms; // @synthesize reflectingSearchTerms=_reflectingSearchTerms;
@property(retain, nonatomic) NSURL *reflectedURL; // @synthesize reflectedURL=_reflectedURL;
@property(nonatomic) unsigned long long browsingMode; // @synthesize browsingMode=_browsingMode;
@property(nonatomic, getter=isShowingSecurityUI) BOOL showingSecurityUI; // @synthesize showingSecurityUI=_showingSecurityUI;
@property(nonatomic, getter=isShowingMagnifyingGlass) BOOL showingMagnifyingGlass; // @synthesize showingMagnifyingGlass=_showingMagnifyingGlass;
- (id)placeholderString;
- (void).cxx_destruct;
- (void)updateAudioIndicatorAppearance;
- (void)setHasAudio:(BOOL)arg1 captureDevice:(BOOL)arg2;
- (id)_audioIndicatorDescription;
- (void)_updateAudioIndicator;
- (id)_audioIndicatorImageWithMutedColor:(id)arg1 unmutedColor:(id)arg2;
- (BOOL)_isCurrentTabPlayingMutableMedia;
- (void)_audioIndicatorWasClicked:(id)arg1;
- (void)_createAudioIndicatorIfNeeded;
- (BOOL)_audioIndicatorIsVisible;
- (void)_updateFramesOfTrailingButtonsWithOldTextRect:(struct CGRect)arg1;
- (void)_layOutTrailingButtons;
- (id)_visibleTrailingButtonClosestToTextField;
- (void)oneStepBookmarkingMenuWasDismissed;
- (id)_bestReflectedURLForUserTypedString;
- (void)_stopAllAnimations;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_animateToResignFirstResponder;
- (void)_animatePlaceholderTextOrSearchTermsToResignFirstResponder;
- (void)_animateToBecomeFirstResponder;
- (void)_showFaviconViewAnimated:(BOOL)arg1;
- (void)_hideFaviconViewAnimated:(BOOL)arg1;
- (BOOL)_isAnimatingURL;
- (id)_animationWithFromValuesByKeyPathDictionary:(id)arg1;
- (void)_setUpTextFieldForAnimationWithTextSelected:(BOOL)arg1;
- (void)_setUpOverlayStaticTextFieldCloneForAnimation;
- (id)_animationWithKeyPath:(id)arg1;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)menuForDelayedPopUpRolloverImageButton:(id)arg1;
- (void)rolloverTrackingButton:(id)arg1 flagsDidChangeDuringMouseOver:(id)arg2;
- (void)rolloverTrackingButton:(id)arg1 mouseDidEnterOrExit:(BOOL)arg2;
- (void)_updateTextAndButtonsVisibility;
- (id)_urlStringWithOnlyHostNameVisible:(id)arg1 expandedURLString:(id)arg2;
- (id)_attributedStringWithDimmedPathForURL:(id)arg1 includeHiddenHTTPSProtocol:(BOOL)arg2;
- (void)_updateButtonDescriptionTextFieldVisibility;
- (void)_showButtonDescriptionNow:(id)arg1;
- (void)_cancelShowButtonDescriptionTimer;
- (void)_showButtonDescriptionSoon;
- (BOOL)_buttonDescriptionTextFieldShouldBeVisible;
- (void)_setUpButtonDescriptionTextField;
- (void)_updateButtonDescriptionTextFieldStringValue;
- (void)_createButtonDescriptionTextFieldIfNeeded;
- (id)_createTextField;
- (void)_updateFaviconViewImage;
- (void)_updateFaviconViewVisibility;
- (void)_createFaviconViewIfNeeded;
- (BOOL)_canShowFaviconView;
- (void)_layOutOneStepBookmarkingButtonAndDividerIfNeeded;
- (void)_showOneStepBookmarkingButtonNow:(id)arg1;
- (void)_cancelShowOneStepBookmarkingButtonTimer;
- (void)_showOneStepBookmarkingButtonSoon;
- (void)_updateOneStepBookmarkingButtonVisibility;
- (void)_showOneStepBookmarkingButtonWithAnimation;
- (void)_hideOneStepBookmarkingButtonWithAnimation;
- (BOOL)_oneStepBookmarkingButtonShouldBeVisible;
- (BOOL)_shouldReserveSpaceForOneStepBookmarkingButton;
@property(readonly, nonatomic) OneStepBookmarkingButton *oneStepBookmarkingButton;
- (void)_createOneStepBookmarkingButtonIfNeeded;
- (void)_updateDividerBetweenReaderButtonAndOneStepButtonVisibility;
- (BOOL)_dividerBetweenReaderButtonAndOneStepButtonIsVisible;
- (void)_createDividerBetweenReaderButtonAndOneStepButtonIfNeeded;
- (void)_updateReaderButtonVisibility;
- (BOOL)_readerButtonIsVisible;
- (void)_layOutReaderButtonIfNeeded;
- (void)_createReaderButtonIfNeeded;
- (void)_updateDisplayedEVTitleIfNeeded;
- (void)_updateLockButtonVisibility;
- (BOOL)_lockButtonIsVisible;
- (void)_updateLockButtonImageAndToolTip;
- (void)_createLockButtonIfNeeded;
- (void)_lockButtonClicked:(id)arg1;
- (void)_updateMagnifyingGlassButtonVisibility;
- (BOOL)_magnifyingGlassButtonIsVisible;
- (void)_createMagnifyingGlassButtonIfNeeded;
- (void)_magnifyingGlassButtonClicked:(id)arg1;
- (void)_createRightmostButtonIfNeeded;
- (void)_rightmostButtonClicked:(id)arg1;
- (id)_createBasicUnifiedFieldButton;
- (void)_setBasicUnifiedFieldButtonProperties:(id)arg1;
- (void)_layOutFaviconAndMainContentView;
- (void)_installOverlayStaticTextFieldFadeOutMaskLayerIfNecessary;
- (BOOL)_shouldLeftAlignContent;
- (double)_editableTextTrailingMargin;
- (double)_editableTextLeadingMargin;
- (BOOL)_shouldAnimateStateChange;
- (void)layout;
- (void)prepareToNavigateToURL:(id)arg1;
@property(readonly, nonatomic) CompletionListTableView *autocompleteDropDownTableView;
- (id)_textSelectionBackgroundColor;
- (void)startDragFromEvent:(id)arg1 withBookmark:(id)arg2 atImageOffset:(struct CGSize)arg3;
- (struct CGPoint)oneStepBookmarkingHopAnimationStartPointInScreenCoordinates;
- (void)_adjustFieldEditorFrameIfNecessaryWithOldTextRect:(struct CGRect)arg1;
- (id)_prependEmDashToUnifiedFieldString:(id)arg1;
- (struct BrowserContentViewController *)_currentBrowserContentViewController;
- (BOOL)_showsPageStatus;
- (void)_updateDisplayedPageTitleWithStatus;
- (void)_setProgressFillFrame:(struct CGRect)arg1 initialPosition:(double)arg2;
- (id)_colorLocationsForProgressFillMaskLayer:(double)arg1 blurryHeadLength:(double)arg2 widthOfProgressFill:(double)arg3;
- (void)_notifyDelegateOfResignedFirstResponderSoon;
- (void)_notifyDelegateOfBecameFirstResponderSoon;
- (void)_updateTruncationSoon;
- (void)_updateTruncationNow;
- (id)_pageStatusStringColor;
- (id)_pageStatusString;
- (id)_hintStringColor;
- (id)_hintString;
- (BOOL)_hintStringIsDetailString;
- (BOOL)_hasHintString;
- (void)_truncationUpdateTimerFired:(id)arg1;
- (void)_cancelTruncationUpdateTimer;
- (struct CGRect)_textRect;
- (void)_updateMouseForTrackingArea:(id)arg1;
- (void)_updateMouseForTrackingArea:(id)arg1 isInside:(BOOL)arg2;
- (void)_updateStringTruncationAndPlacement;
- (void)_expandTruncatedStringIfNeeded;
- (void)_editorSelectionDidChange:(id)arg1;
- (void)_updateDetailStringIsHighlighted;
- (void)_updateSecurityUIPlacementAndVisibility;
- (void)_updateRightmostButtonToolTip;
- (void)_internalSetStringValue:(id)arg1;
- (void)_shouldShowFullURLPreferenceDidChange:(id)arg1;
- (BOOL)_shouldShowFullURL;
- (void)_updateTextToMatchReflectedURL;
- (void)_computeReflectedText;
- (void)_clearReflectedURL;
- (void)_clearReflectedText;
- (id)_simplifiedUserVisibleStringForURLWhenNotEditing:(id)arg1;
- (id)_urlParagraphStyle;
- (void)_removeAllTrackingAreas;
- (id)_proxyIconDraggingImageWithTitle:(id)arg1;
- (struct CGRect)_progressBarRectForValue:(double)arg1;
- (BOOL)_dragOverlayStaticTextForMouseDownEvent:(id)arg1;
- (BOOL)_dragFaviconForMouseDownEvent:(id)arg1;
- (unsigned long long)_dragOperationForUnifiedField:(id)arg1;
- (void)_selectAllInCurrentEditor;
- (BOOL)_isEditing;
- (void)_finishInitialization;
- (BOOL)_securityPillWillRespondToClick;
- (void)_drawTopUnifiedField:(struct CGRect)arg1;
- (struct CGImage *)_siteIconMask;
- (id)_displayedSiteIconImage;
- (void)_drawHintString:(id)arg1 mainString:(id)arg2 textRect:(struct CGRect)arg3 isEditing:(BOOL)arg4;
- (void)_iconDidChange;
- (void)_drawBackground;
- (void)_updateMinimumProgressPosition;
- (void)_clearOriginalStringIfItMatchesDisplay;
- (BOOL)_canDragFromSiteIcon;
- (struct CGRect)_adjustedProgressBarRectForValue:(double)arg1;
- (void)_setProgressFillLayerToInitialPosition;
- (struct UnifiedFieldCompletionController *)_unifiedFieldCompletionController;
- (id)_unifiedFieldTrackingArea;
- (void)_updatePlaceholderAppearance;
- (id)fluidProgressController:(id)arg1 windowImageForRect:(struct CGRect)arg2;
- (void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2;
- (void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2;
- (void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2;
- (void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3;
- (void)setPageTitle:(id)arg1 pageStatus:(id)arg2;
- (BOOL)isUpdatingDisplayForDetailString;
- (void)setPlaceholderString:(id)arg1;
- (id)detailString;
- (void)setDetailString:(id)arg1;
- (BOOL)rightmostButtonIsForTopSites;
- (BOOL)_rightmostButtonShowsStop;
- (long long)_rightmostButtonType;
- (BOOL)rightmostButtonIsVisible;
- (void)setRightmostButtonIsForTopSites:(BOOL)arg1;
- (void)updateRightmostButton;
- (void)setRightmostButtonShowsStopOnTopSites:(BOOL)arg1;
- (void)setRightmostButtonIsVisible:(BOOL)arg1;
- (void)setExtendedValidationCertificateTitle:(id)arg1;
@property(readonly, nonatomic) struct CGRect urlTextFrame;
- (BOOL)_extendedValidationCertificateIsAvailable;
- (void)appendSlashAndCollapseSelection;
- (BOOL)lastCompletionListItemIsSelectedForFieldEditor:(id)arg1;
- (BOOL)firstCompletionListItemIsSelectedForFieldEditor:(id)arg1;
- (BOOL)anyCompletionListItemIsSelectedForFieldEditor:(id)arg1;
- (void)fieldEditor:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)fieldEditor:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)fieldEditor:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)fieldEditor:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)fieldEditor:(id)arg1 draggingEntered:(id)arg2;
- (void)fieldEditor:(id)arg1 willDoCommandBySelector:(SEL)arg2;
- (unsigned long long)simplificationsForReflectedURLForFieldEditor:(id)arg1;
- (BOOL)isReflectingSearchTermsForFieldEditor:(id)arg1;
- (id)reflectedURLForFieldEditor:(id)arg1;
- (id)textSelectionBackgroundColorForFieldEditor:(id)arg1;
- (BOOL)isDetailStringHighlightedForFieldEditor:(id)arg1;
- (void)markedTextDidChangeForFieldEditor:(id)arg1;
- (void)fieldEditorIsResigningFirstResponder:(id)arg1;
- (void)fieldEditorDidBecomeFirstResponder:(id)arg1;
- (id)untruncatedStringValue;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)selectText:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (id)accessibilityRoleDescription;
- (id)_accessibilityRoleSuffix;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (void)_accessibilityShowAlternateUI:(BOOL)arg1;
- (id)accessibilityChildren;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)_windowChangedKeyState;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resetCursorRects;
- (void)updateTrackingAreas;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)showProgressFillLayerIfNeeded;
- (BOOL)_shouldAnimateResignFirstResponder;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)windowWillClose;
@property __weak id <UnifiedFieldDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

