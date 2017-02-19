//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, UIView, WCADQuestionExp, WCDataItem;

@interface WCAdvertiseActionFloatForABTest : MMUIView
{
    WCDataItem *m_item;
    WCADQuestionExp *m_questionExp;
    UIImageView *m_bgView;
    UIView *m_firstStepView;
    UIView *m_secondStepView;
    _Bool m_bEndWithOtherTouch;
    id <WCAdvertiseActionFloatForABTestDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAdvertiseActionFloatForABTestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WCADQuestionExp *m_questionExp; // @synthesize m_questionExp;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)onSecondBtnClicked:(id)arg1;
- (id)getExtButton:(id)arg1;
- (void)showExpItems;
- (id)getFirstStepBtnWithTitle:(id)arg1 Icon:(id)arg2 NeedArrow:(_Bool)arg3;
- (id)getFirstSetpBtnByAction:(unsigned int)arg1;
- (void)onFirstBtnClicked:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideWCADQuestionFloat;
- (void)setShouldReportEndWithOtherTouch;
- (void)showWithItemData:(id)arg1 QuestionExt:(id)arg2 tipPoint:(struct CGPoint)arg3;
- (id)init;

@end
