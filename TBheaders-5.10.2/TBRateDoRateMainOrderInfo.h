//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRateDoRateMainOrderInfo : TBJSONModel
{
    NSString *_logisticsServiceScore;	// 8 = 0x8
    NSString *_serviceQualityScore;	// 16 = 0x10
    NSString *_orderMerchandiseScore;	// 24 = 0x18
    NSString *_saleConsignmentScore;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *saleConsignmentScore; // @synthesize saleConsignmentScore=_saleConsignmentScore;
@property(retain, nonatomic) NSString *orderMerchandiseScore; // @synthesize orderMerchandiseScore=_orderMerchandiseScore;
@property(retain, nonatomic) NSString *serviceQualityScore; // @synthesize serviceQualityScore=_serviceQualityScore;
@property(retain, nonatomic) NSString *logisticsServiceScore; // @synthesize logisticsServiceScore=_logisticsServiceScore;
- (void).cxx_destruct;
- (id)init;

@end
