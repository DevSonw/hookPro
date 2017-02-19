//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MDBasicView : UIView
{
    UILabel *_ageLabel;
    UILabel *_constellationLabel;
    UILabel *_distanceLabel;
    UIImageView *_genderImageView;
    UIView *_lineView;
    UIImageView *_accountIconView;
    UIImageView *_gradeImageView;
    UIImageView *_vipImageView;
    UIView *_recommendView;
    UILabel *_recommendLabel;
    UIView *_likeView;
    UILabel *_countLabel;
    UILabel *_textLabel;
    UIImageView *_likeIconView;
    UIView *_blockView;
}

@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UIImageView *gradeImageView; // @synthesize gradeImageView=_gradeImageView;
@property(retain, nonatomic) UIImageView *accountIconView; // @synthesize accountIconView=_accountIconView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *constellationLabel; // @synthesize constellationLabel=_constellationLabel;
@property(retain, nonatomic) UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
- (void)dealloc;
- (void)refreshBasedOnPersonalProfile:(id)arg1;
- (void)refreshBasedOnPersonalProfile:(id)arg1 isMiniProfile:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
