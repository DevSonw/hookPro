//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WJLoginKeychainInfo;

@interface WJLoginKeychainHelper : NSObject
{
    WJLoginKeychainInfo *_loginInfo;
}

+ (id)guid;
@property(retain, nonatomic) WJLoginKeychainInfo *loginInfo; // @synthesize loginInfo=_loginInfo;
- (void).cxx_destruct;
- (_Bool)a2NeedRefresh;
- (_Bool)a2Expired;
- (_Bool)existA2;
- (_Bool)existUser;
- (id)getLoginInfo;
- (id)init;

@end
