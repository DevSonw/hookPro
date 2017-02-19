//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSString;

@interface AliDetailShopHeaderModel : AliDetailComponentModel
{
    NSString *_shopIcon;	// 8 = 0x8
    NSString *_levelPic;	// 16 = 0x10
    NSString *_tagIcon;	// 24 = 0x18
    NSString *_certificateLogo;	// 32 = 0x20
    NSString *_shopName;	// 40 = 0x28
    NSString *_shopDesc;	// 48 = 0x30
    NSString *_shopTitleIcon;	// 56 = 0x38
    NSString *_endorsementText;	// 64 = 0x40
    NSString *_endorsementIcon;	// 72 = 0x48
    NSString *_sellerId;	// 80 = 0x50
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *endorsementIcon; // @synthesize endorsementIcon=_endorsementIcon;
@property(copy, nonatomic) NSString *endorsementText; // @synthesize endorsementText=_endorsementText;
@property(copy, nonatomic) NSString *shopTitleIcon; // @synthesize shopTitleIcon=_shopTitleIcon;
@property(copy, nonatomic) NSString *shopDesc; // @synthesize shopDesc=_shopDesc;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *certificateLogo; // @synthesize certificateLogo=_certificateLogo;
@property(copy, nonatomic) NSString *tagIcon; // @synthesize tagIcon=_tagIcon;
@property(copy, nonatomic) NSString *levelPic; // @synthesize levelPic=_levelPic;
@property(copy, nonatomic) NSString *shopIcon; // @synthesize shopIcon=_shopIcon;
- (void).cxx_destruct;
- (void)shopLevelAdapter;
- (void)setHeaderLevelPic:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1;

@end
