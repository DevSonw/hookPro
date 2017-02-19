//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDocumentDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIViewController;
@protocol WKEasyViewBuilderDelegate;

@interface WKEasyViewBuilder : NSObject <FBDocumentDelegate>
{
    _Bool _useDefaultDocCache;	// 8 = 0x8
    id <WKEasyViewBuilderDelegate> _delegate;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    NSMutableSet *_cachedTplForQuickPay;	// 32 = 0x20
    NSMutableDictionary *_docCache;	// 40 = 0x28
    NSMutableArray *_recycleDocArray;	// 48 = 0x30
    NSMutableDictionary *_docCacheMinCountInfo;	// 56 = 0x38
    NSMutableDictionary *_docCacheMaxCountInfo;	// 64 = 0x40
    NSMutableDictionary *_docAbsoluteHeightInfo;	// 72 = 0x48
    NSMutableArray *_templateIdArray;	// 80 = 0x50
}

+ (id)obj2Info:(id)arg1;
+ (id)encodeObject:(id)arg1;
+ (void)preloadTemplates:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)readDBModel:(id)arg1;
+ (id)readLocalTemplate:(id)arg1;
+ (void)setOnlyReadLocalTemplateFile:(id)arg1;
+ (void)handlebirdResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)needDownloadTemplates:(id)arg1;
+ (id)birdParams:(id)arg1;
@property(retain, nonatomic) NSMutableArray *templateIdArray; // @synthesize templateIdArray=_templateIdArray;
@property(retain, nonatomic) NSMutableDictionary *docAbsoluteHeightInfo; // @synthesize docAbsoluteHeightInfo=_docAbsoluteHeightInfo;
@property(retain, nonatomic) NSMutableDictionary *docCacheMaxCountInfo; // @synthesize docCacheMaxCountInfo=_docCacheMaxCountInfo;
@property(retain, nonatomic) NSMutableDictionary *docCacheMinCountInfo; // @synthesize docCacheMinCountInfo=_docCacheMinCountInfo;
@property(retain, nonatomic) NSMutableArray *recycleDocArray; // @synthesize recycleDocArray=_recycleDocArray;
@property(retain, nonatomic) NSMutableDictionary *docCache; // @synthesize docCache=_docCache;
@property(retain, nonatomic) NSMutableSet *cachedTplForQuickPay; // @synthesize cachedTplForQuickPay=_cachedTplForQuickPay;
@property(nonatomic) _Bool useDefaultDocCache; // @synthesize useDefaultDocCache=_useDefaultDocCache;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WKEasyViewBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAsyncEventNotify:(id)arg1 withDocument:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)saveTemplates:(id)arg1;
- (void)saveTemplate:(id)arg1;
- (id)cachedTemplates:(id)arg1;
- (id)cachedTemplate:(id)arg1;
- (id)localDocFromPageData:(id)arg1 templateId:(id)arg2;
- (id)docWithData:(id)arg1 templateId:(id)arg2 delegate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)docWithData:(id)arg1 templateId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeCacheDoc:(id)arg1;
- (void)removeCacheDocForTemplateId:(id)arg1;
- (void)cacheDoc:(id)arg1 forTemplateId:(id)arg2;
- (void)dealloc;
- (void)observeNotifications;
- (void)handleTemplateUpdateNotification:(id)arg1;
- (void)checkRecycleDoc;
- (id)initWithViewController:(id)arg1;
- (id)init;
- (void)handleQuickPayResponse:(id)arg1 forceUpdate:(_Bool)arg2 tplData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchQuickPayTpl;
- (void)logQuickPayEvent:(id)arg1 netType:(id)arg2 reason:(_Bool)arg3 succ:(_Bool)arg4 time:(double)arg5;
- (id)buildDocByModel:(id)arg1 tplData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
