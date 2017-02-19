//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOfficalAccountBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface TBOfficalAccountTableViewCell : TBOfficalAccountBaseTableViewCell
{
    UIImageView *_bubbleView;	// 8 = 0x8
    UILabel *_mailStatusTitle;	// 16 = 0x10
    UILabel *_mailCompanyNameTitle;	// 24 = 0x18
    UILabel *_contentTitle;	// 32 = 0x20
    UIImageView *_smallImageView;	// 40 = 0x28
    UILabel *_contentLabel;	// 48 = 0x30
    UILabel *_msgAttrLabel;	// 56 = 0x38
    UILabel *_mailNumLabel;	// 64 = 0x40
}

+ (double)heightForContent:(id)arg1;
+ (double)heightForContentTitle:(id)arg1;
@property(retain, nonatomic) UILabel *mailNumLabel; // @synthesize mailNumLabel=_mailNumLabel;
@property(retain, nonatomic) UILabel *msgAttrLabel; // @synthesize msgAttrLabel=_msgAttrLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *smallImageView; // @synthesize smallImageView=_smallImageView;
@property(retain, nonatomic) UILabel *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(retain, nonatomic) UILabel *mailCompanyNameTitle; // @synthesize mailCompanyNameTitle=_mailCompanyNameTitle;
@property(retain, nonatomic) UILabel *mailStatusTitle; // @synthesize mailStatusTitle=_mailStatusTitle;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
- (void)configureWithItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
