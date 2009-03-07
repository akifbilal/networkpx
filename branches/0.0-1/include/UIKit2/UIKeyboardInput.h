/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UITextInputTraits.h>
#import <UIKit2/UITextInputTraits_Private.h>
#import <Foundation/NSRange.h>

@class NSString, DOMRange;


@protocol UIKeyboardInput <UITextInputTraits, UITextInputTraits_Private>
- (id)delegate;
- (id)textInputTraits;
- (BOOL)hasText;
@property(copy) NSString* text;
- (void)deleteBackward;
- (void)insertText:(NSString*)txt;
- (void)selectAll;
- (BOOL)isShowingPlaceholder;
- (id)keyboardInputView;
- (void)setCaretChangeListener:(id)fp8;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)hasSelection;
- (CGRect)caretRect;
- (CGRect)rectContainingCaretSelection;
- (CGRect)rectForNSRange:(NSRange)fp8;
- (id)wordRangeContainingCaretSelection;
- (id)rangeByMovingCurrentSelection:(int)fp8;
- (id)rangeByExtendingCurrentSelection:(int)fp8;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)fp8;
- (unichar)characterAfterCaretSelection;
- (unichar)characterBeforeCaretSelection;
- (unichar)characterInRelationToCaretSelection:(int)fp8;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)moveBackward:(NSUInteger)count;
- (void)moveForward:(NSUInteger)count;
- (void)replaceCurrentWordWithText:(id)fp8;
- (BOOL)rangeAtSentenceStart:(id)fp8;
@property(readonly) NSRange selectionRange;
@property(readonly) DOMRange* selectedDOMRange;
- (void)setSelectedDOMRange:(id)fp8 affinityDownstream:(BOOL)fp12;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
@property(copy) NSString* markedText;
- (void)confirmMarkedText:(NSString*)mktext;
- (int)wordOffsetInRange:(id)fp8;
- (void)updateSelectionWithPoint:(CGPoint)pt;
- (CGRect)convertCaretRect:(CGRect)rect;
- (BOOL)isProxyFor:(id)fp8;
- (UIColor*)textColorForCaretSelection;
- (UIFont*)fontForCaretSelection;
@end
