//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface JDShopPromotionSuitModel : JDModel
{
    _Bool _isOpen;
    NSString *_suitPrice;
    NSString *_origPrice;
    NSString *_savePrice;
    NSArray *_combList;
    long long _rfId;
}

@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long rfId; // @synthesize rfId=_rfId;
@property(retain, nonatomic) NSArray *combList; // @synthesize combList=_combList;
@property(retain, nonatomic) NSString *savePrice; // @synthesize savePrice=_savePrice;
@property(retain, nonatomic) NSString *origPrice; // @synthesize origPrice=_origPrice;
@property(retain, nonatomic) NSString *suitPrice; // @synthesize suitPrice=_suitPrice;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
