//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBXSearchRequestServiceDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBSearchItemList, TBXSearchOption, TBXSearchRequestService, TBXSearchResultModel, TBXSearchTransferData;

@interface TBXSearchService : NSObject <TBXSearchRequestServiceDelegate>
{
    _Bool _isResearch;	// 8 = 0x8
    _Bool _isInitiativeSearch;	// 9 = 0x9
    CDUnknownBlockType _fixedSuccessBlock;	// 16 = 0x10
    CDUnknownBlockType _fixedFailBlock;	// 24 = 0x18
    CDUnknownBlockType _fixedStartBlock;	// 32 = 0x20
    NSString *_errorInfo;	// 40 = 0x28
    NSString *_errorInfoForShow;	// 48 = 0x30
    NSString *_errorCode;	// 56 = 0x38
    TBXSearchOption *_searchOption;	// 64 = 0x40
    TBXSearchResultModel *_resultModel;	// 72 = 0x48
    NSMutableArray *_tabArray;	// 80 = 0x50
    TBSearchItemList *_itemList;	// 88 = 0x58
    NSMutableArray *_filterArray;	// 96 = 0x60
    TBXSearchTransferData *_transferData;	// 104 = 0x68
    CDUnknownBlockType _successBlock;	// 112 = 0x70
    CDUnknownBlockType _failBlock;	// 120 = 0x78
    CDUnknownBlockType _startBlock;	// 128 = 0x80
    TBXSearchRequestService *_request;	// 136 = 0x88
    NSString *_alias;	// 144 = 0x90
    NSMutableDictionary *_bizDataCollection;	// 152 = 0x98
}

@property(retain, nonatomic) NSMutableDictionary *bizDataCollection; // @synthesize bizDataCollection=_bizDataCollection;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) TBXSearchRequestService *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) TBXSearchTransferData *transferData; // @synthesize transferData=_transferData;
@property(retain, nonatomic) NSMutableArray *filterArray; // @synthesize filterArray=_filterArray;
@property(retain, nonatomic) TBSearchItemList *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableArray *tabArray; // @synthesize tabArray=_tabArray;
@property(retain, nonatomic) TBXSearchResultModel *resultModel; // @synthesize resultModel=_resultModel;
@property(retain, nonatomic) TBXSearchOption *searchOption; // @synthesize searchOption=_searchOption;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorInfoForShow; // @synthesize errorInfoForShow=_errorInfoForShow;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) _Bool isInitiativeSearch; // @synthesize isInitiativeSearch=_isInitiativeSearch;
@property(nonatomic) _Bool isResearch; // @synthesize isResearch=_isResearch;
@property(copy, nonatomic) CDUnknownBlockType fixedStartBlock; // @synthesize fixedStartBlock=_fixedStartBlock;
@property(copy, nonatomic) CDUnknownBlockType fixedFailBlock; // @synthesize fixedFailBlock=_fixedFailBlock;
@property(copy, nonatomic) CDUnknownBlockType fixedSuccessBlock; // @synthesize fixedSuccessBlock=_fixedSuccessBlock;
- (void).cxx_destruct;
- (void)clearAllBizData;
- (void)removeBizDataForKey:(id)arg1;
- (id)bizDataForKey:(id)arg1;
- (void)setBizData:(id)arg1 forKey:(id)arg2;
- (_Bool)isInShopService;
- (_Bool)isSimilarShop;
- (id)navTitle;
- (id)getIconOrangeGroupName;
- (_Bool)onlyListStyle;
- (_Bool)isShopSearch;
- (_Bool)isSpuList;
- (_Bool)isMainSearch;
- (_Bool)isTmallSpuSearch;
- (_Bool)isTmallSearch;
- (id)getUTPageName;
- (_Bool)hideFilter;
- (id)getTItemTypeDict:(id)arg1;
- (void)parseBottomRecommand:(id)arg1;
- (void)parseSearchTips:(id)arg1;
- (void)parseUserdoc:(id)arg1;
- (void)parseSearchSKUHints:(id)arg1;
- (void)parseSearchHint:(id)arg1;
- (void)parseSearchHintAndCoupon:(id)arg1;
- (void)parseSelecthelper:(id)arg1;
- (void)parseOnesearch:(id)arg1;
- (void)parseTab:(id)arg1;
- (void)parseFooter:(id)arg1;
- (void)parseHeader:(id)arg1;
- (void)parseMySearch:(id)arg1;
- (void)processRnAndAbtest:(id)arg1 WithJSONModel:(id)arg2;
- (id)getProcessedItemList:(id)arg1;
- (void)convertDataModel:(id)arg1;
- (void)requestServiceFailed:(id)arg1 Error:(id)arg2;
- (void)requestServiceSuccess:(id)arg1;
- (void)requestServiceStart:(id)arg1;
- (id)getMtopName:(id)arg1;
- (id)getFixedParams;
- (void)doSearch;
- (void)processProtocolParams;
- (void)processTrackingParams;
- (void)processOptionParams;
- (void)processFixedParams;
- (void)doSearchStart:(CDUnknownBlockType)arg1 Success:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3 isMore:(_Bool)arg4;
- (void)searchWithFixedContext;
- (void)reset;
@property(retain, nonatomic) NSString *keyword;
@property(readonly, nonatomic) NSString *abtest;
@property(readonly, nonatomic) NSString *RN;
@property(readonly, nonatomic) NSString *style;
@property(retain, nonatomic) NSObject *itemForFooter;
@property(retain, nonatomic) NSObject *itemForHeader;
- (void)cancel;
- (void)dealloc;
- (id)initWithAlias:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
