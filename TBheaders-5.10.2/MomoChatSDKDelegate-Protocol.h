//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDBaseRequest, MDBaseResponse;

@protocol MomoChatSDKDelegate <NSObject>

@optional
- (void)onRecieveResponse:(MDBaseResponse *)arg1;
- (void)onRecieveRequest:(MDBaseRequest *)arg1;
@end
