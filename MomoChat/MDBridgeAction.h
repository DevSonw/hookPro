//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKBridgeBase.h"

#import "MDPickImageInputBarDelegate.h"
#import "UIAlertViewDelegate.h"

@class MomoKitDecorationHandler, NSDictionary, NSMutableDictionary, NSString;

@interface MDBridgeAction : MKBridgeBase <MDPickImageInputBarDelegate, UIAlertViewDelegate>
{
    MomoKitDecorationHandler *_decorationHandler;
    CDUnknownBlockType _keyboardBlock;
    CDUnknownBlockType _asyncBlock;
    NSDictionary *_params;
    NSMutableDictionary *_handles;
    NSString *_circleFeedCallBack;
    NSDictionary *_circleParams;
}

@property(retain, nonatomic) NSDictionary *circleParams; // @synthesize circleParams=_circleParams;
@property(copy, nonatomic) NSString *circleFeedCallBack; // @synthesize circleFeedCallBack=_circleFeedCallBack;
@property(retain, nonatomic) NSMutableDictionary *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType asyncBlock; // @synthesize asyncBlock=_asyncBlock;
@property(copy, nonatomic) CDUnknownBlockType keyboardBlock; // @synthesize keyboardBlock=_keyboardBlock;
@property(retain, nonatomic) MomoKitDecorationHandler *decorationHandler; // @synthesize decorationHandler=_decorationHandler;
- (void).cxx_destruct;
- (void)setLiveBtn:(id)arg1;
- (void)sendSite:(id)arg1 callBackMethod:(id)arg2;
- (void)getUserPlace:(id)arg1;
- (void)gotoPage:(id)arg1;
- (void)complationCircleFeedSend:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleReleaseFailedState;
- (void)handleReleasingState;
- (void)circlePublish:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)sendComment:(id)arg1 imageItems:(id)arg2;
- (void)didToolbar:(id)arg1 heightChange:(double)arg2;
- (void)willToolbar:(id)arg1 sendText:(id)arg2 imageItems:(id)arg3;
- (void)removeToolbar:(id)arg1;
- (void)commonKeyboard:(id)arg1 complation:(CDUnknownBlockType)arg2 asnycBlock:(CDUnknownBlockType)arg3;
- (void)commentKeyboard:(id)arg1;
- (void)refreshGroupProfile:(id)arg1;
- (void)refreshUserProfile:(id)arg1;
- (void)getChatList:(id)arg1;
- (void)checkContacts:(id)arg1;
- (void)verifyLogin:(id)arg1;
- (void)setProfileCover:(id)arg1;
- (void)setChatBubble:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
