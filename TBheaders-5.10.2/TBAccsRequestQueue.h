//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBAccsRequestQueue : NSObject
{
    struct _opaque_pthread_rwlock_t _lock;	// 8 = 0x8
    NSMutableArray *_queueArray;	// 208 = 0xd0
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)printQueueRequest;
- (void)requestIsSuccess:(id)arg1;
- (void)fireRequestForHost:(id)arg1;
- (_Bool)haveHigherLevel:(id)arg1;
- (id)bindServiceIDRequestByServiceID:(id)arg1;
- (id)requestByDataID:(id)arg1;
- (void)removeRequestByDataID:(id)arg1;
- (void)removeRequestByServiceID:(id)arg1;
- (void)removeRequestByLeven:(unsigned long long)arg1;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1 error:(id *)arg2;
- (id)init;

@end
