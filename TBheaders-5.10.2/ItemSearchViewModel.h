//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MarketRequestDelegate-Protocol.h"
#import "TMSearchResponseUpdations-Protocol.h"
#import "TMSearchResultsVMProtocol-Protocol.h"

@class ItemsSearchModel, MarketShoppingCartAddRequest, NSString, TMItemSearchFilter, TMSearchItemsContainer, TMSearchPageLoader;
@protocol ItemSearchViewModelDelegate><TMCUniformSearchProtocol;

@interface ItemSearchViewModel : NSObject <MarketRequestDelegate, TMSearchResultsVMProtocol, TMSearchResponseUpdations>
{
    NSString *_lastQueryKeyword;	// 8 = 0x8
    MarketShoppingCartAddRequest *_request;	// 16 = 0x10
    TMSearchPageLoader *_pageLoader;	// 24 = 0x18
    TMItemSearchFilter *_filter;	// 32 = 0x20
    id <ItemSearchViewModelDelegate><TMCUniformSearchProtocol> _vmDelegate;	// 40 = 0x28
    ItemsSearchModel *_model;	// 48 = 0x30
}

@property(readonly, nonatomic) ItemsSearchModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <ItemSearchViewModelDelegate><TMCUniformSearchProtocol> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
@property(readonly, nonatomic) TMItemSearchFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) TMSearchPageLoader *pageLoader; // @synthesize pageLoader=_pageLoader;
- (void).cxx_destruct;
- (_Bool)isNeedShowGuide;
- (void)marketShoppingCartAddRequestFailed:(id)arg1;
- (void)marketShoppingCartAddRequestSuccess:(id)arg1;
- (void)marketShoppingCartAdd:(id)arg1 andSkuID:(id)arg2;
- (void)marketShoppingCartAdd:(id)arg1;
- (void)updateWithItemsSearchResponseFailed:(id)arg1 forRequest:(id)arg2;
- (void)updateWithItemsSearchResponse:(id)arg1 forRequest:(id)arg2;
- (void)requestFailedWithError:(id)arg1 forRequest:(id)arg2;
- (void)requestSuccessWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)cancelRequest;
- (void)sendRequest;
- (void)doAppMonitorForResponseFailedWithError:(id)arg1;
- (void)doUserTrackForResponseFinished;
- (void)updateWithPresentStyle:(long long)arg1;
- (void)searchWithNewQuery:(id)arg1 spos:(id)arg2;
- (void)selectSearchGuideTag:(id)arg1 withSpos:(id)arg2;
- (void)selectNavHot:(id)arg1;
- (void)configPageLoader;
- (id)initWithFilterModel:(id)arg1;
@property(readonly, nonatomic) TMSearchItemsContainer *itemsContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
