//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUSDKDOBase.h"

@class JUSDKItemJuDetailData, NSMutableArray;

@interface JUSDKItemJuDetailList : JUSDKDOBase
{
    JUSDKItemJuDetailData *_item_list;	// 8 = 0x8
    NSMutableArray *_result;	// 16 = 0x10
    NSMutableArray *_model;	// 24 = 0x18
}

+ (Class)classForName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *result; // @synthesize result=_result;
@property(retain, nonatomic) JUSDKItemJuDetailData *item_list; // @synthesize item_list=_item_list;
- (void).cxx_destruct;
- (void)dealloc;

@end
