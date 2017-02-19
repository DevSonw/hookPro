//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, JDPriceLabel, NSString, OrderListWareGroupModel, OrderListWareModel, OrderWareCloudLabel, OrderWareGiftsView, UIImageView, UILabel;

@interface OrderWareGroupItemView : UIView
{
    UILabel *_titleLabel;
    UILabel *_heightLightLabel;
    UILabel *_clothColorLabel;
    UILabel *_clothSizeLabel;
    UILabel *_numLabel;
    JDImageView *_imageView;
    UIImageView *_imageViewTopImageView;
    UILabel *_wareStatesLabel;
    OrderWareGiftsView *_giftServiceView;
    UIImageView *_samsPrice;
    CDUnknownBlockType _response;
    OrderListWareGroupModel *_wareGroupModel;
    OrderListWareModel *_wareModel;
    OrderWareCloudLabel *_cloudLabel;
    JDPriceLabel *_priceLabel;
    NSString *_pageParam;
}

@property(retain, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(retain, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) OrderWareCloudLabel *cloudLabel; // @synthesize cloudLabel=_cloudLabel;
@property(retain, nonatomic) OrderListWareModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) OrderListWareGroupModel *wareGroupModel; // @synthesize wareGroupModel=_wareGroupModel;
@property(copy, nonatomic) CDUnknownBlockType response; // @synthesize response=_response;
- (void).cxx_destruct;
- (struct CGSize)sizeWithStr:(id)arg1 andFont:(id)arg2;
- (id)getTitleLabelPlaceholderTextWithText:(id)arg1;
- (void)setHeightLightLabelInfoWithModel:(id)arg1;
- (void)imageLabelWithString:(id)arg1 andColor:(id)arg2;
- (id)wareStatesLabelWithFrame:(struct CGRect)arg1;
- (id)imageViewTopImageViewWithFrame:(struct CGRect)arg1;
- (id)giftServiceViewWithFrame:(struct CGRect)arg1;
- (id)cloudLabelWithFrame:(struct CGRect)arg1;
- (id)priceLabelWithFrame:(struct CGRect)arg1;
- (id)numLabelWithFrame:(struct CGRect)arg1;
- (id)clothSizeLabelWithFrame:(struct CGRect)arg1;
- (id)clothColorLabelWithFrame:(struct CGRect)arg1;
- (id)heightLightLabelWithFrame:(struct CGRect)arg1;
- (id)titleLabelWithFrame:(struct CGRect)arg1;
- (id)imageViewWithFrame:(struct CGRect)arg1;
- (void)setSamsPriceIcon:(id)arg1;
- (void)setWithWareModel:(id)arg1;
- (double)setServiceOrGiftViewWithModel:(id)arg1 withViewBottom:(double)arg2;
- (void)setImageLabelWithModel:(id)arg1;
- (void)setImageWithImageUrl:(id)arg1;
- (void)resetItemSubviewsTopWithOrderListWareGroupModel:(id)arg1;
- (void)setWithModel:(id)arg1 withShowType:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
