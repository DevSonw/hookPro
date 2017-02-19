//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGCollectionBlockCell.h"

@class TGRelatedProductBlockViewModel, UIImageView, UILabel;

@interface TGRelatedProductBlockCell : TGCollectionBlockCell
{
    TGRelatedProductBlockViewModel *_viewModel;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_priceLabel;	// 24 = 0x18
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)touchToOpenView;
- (void)addTouchAction;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
