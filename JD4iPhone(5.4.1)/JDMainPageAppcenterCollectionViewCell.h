//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDImageView, JDMainPageAppcenterModel, UILabel, UIView;

@interface JDMainPageAppcenterCollectionViewCell : UICollectionViewCell
{
    JDMainPageAppcenterModel *_appCenterModel;
    JDImageView *_iconView;
    UIView *_highlightedView;
    UILabel *_nameLabel;
    JDImageView *_iconAnimationView;
}

@property(retain, nonatomic) JDImageView *iconAnimationView; // @synthesize iconAnimationView=_iconAnimationView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) JDMainPageAppcenterModel *appCenterModel; // @synthesize appCenterModel=_appCenterModel;
- (void).cxx_destruct;
- (void)setBoxAnimation;
- (void)setHighlighted:(_Bool)arg1;
- (void)configTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
