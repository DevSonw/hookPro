//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TMMarketNewCustTabModel;

@interface TMMarketNewCustDrawResultModel : TBJSONModel
{
    _Bool _drawSuccess;	// 8 = 0x8
    _Bool _bfCity;	// 9 = 0x9
    NSArray<TMMarketNewCustTabModel> *_tabs;	// 16 = 0x10
    unsigned long long _amount;	// 24 = 0x18
    NSString *_msg;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool bfCity; // @synthesize bfCity=_bfCity;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool drawSuccess; // @synthesize drawSuccess=_drawSuccess;
@property(retain, nonatomic) NSArray<TMMarketNewCustTabModel> *tabs; // @synthesize tabs=_tabs;
- (void).cxx_destruct;

@end
