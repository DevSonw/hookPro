//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface NewPaymentInfoModel : JDModel
{
    NSArray *_payMentShowSkuArray;
    NSArray *_paymentTypeArray;
    NSString *_payMentDocument;
    NSString *_codDocument;
    NSString *_imageDomain;
    NSString *_companyDocument;
}

@property(retain, nonatomic) NSString *companyDocument; // @synthesize companyDocument=_companyDocument;
@property(retain, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(retain, nonatomic) NSString *codDocument; // @synthesize codDocument=_codDocument;
@property(retain, nonatomic) NSString *payMentDocument; // @synthesize payMentDocument=_payMentDocument;
@property(retain, nonatomic) NSArray *paymentTypeArray; // @synthesize paymentTypeArray=_paymentTypeArray;
@property(retain, nonatomic) NSArray *payMentShowSkuArray; // @synthesize payMentShowSkuArray=_payMentShowSkuArray;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createPaymentTypeWithArr:(id)arg1;
- (id)createShowSkuWithArr:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end
