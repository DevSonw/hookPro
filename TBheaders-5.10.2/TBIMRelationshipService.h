//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMRelationshipServiceAdapter-Protocol.h"
#import "TBNewFriendCenterDelegate-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMRelationshipServiceAdapterDelegate;

@interface TBIMRelationshipService : NSObject <TBNewFriendCenterDelegate, TBIMRelationshipServiceAdapter>
{
    YHMuticastDelegate<TBIMRelationshipServiceAdapterDelegate> *_mutiCastDelegate;	// 8 = 0x8
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMRelationshipServiceAdapterDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)newFriendCenterDidRemarkChange:(id)arg1;
- (void)newFriendCenter:(id)arg1 totalUnreadMsgCounts:(id)arg2 dataChange:(id)arg3;
- (id)tbNewfriendID;
- (void)remarkCurrenIMNewFriendData;
- (void)setCurrentIMNewFriendDataWithNewFriendSession:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)currentTotalUnreadMsgCounts;
- (id)currentIMNewFriendData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
