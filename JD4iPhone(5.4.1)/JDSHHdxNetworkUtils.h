//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDSHHdxNetworkUtils : NSObject
{
}

+ (id)p_favSetupModel:(id)arg1 isFav:(_Bool)arg2;
+ (void)fav:(id)arg1 isFav:(_Bool)arg2 finished:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)p_zanListRequestSetupModel:(long long)arg1 previousLastId:(id)arg2;
+ (void)zanList:(long long)arg1 previousLastId:(id)arg2 finished:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)mainPageBannerFinished:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)p_sharedRequest;
+ (id)p_ztRequestSetupModel:(id)arg1;
+ (void)ztId:(id)arg1 finished:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)p_spRequestSetupModel:(id)arg1;
+ (void)spId:(id)arg1 finished:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)p_mainPageBannerRequestSetupModel;
+ (void)mainPagePagerId:(id)arg1 type:(id)arg2 paging:(long long)arg3 pagingString:(id)arg4 finished:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)p_mainPagePagerRequestModel:(id)arg1 type:(id)arg2 paging:(long long)arg3 pagingString:(id)arg4;

@end
