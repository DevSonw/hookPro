//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, UTDIDKeychainItemWrapper, UTDIDPersistentFile;

@interface UTDIDPersistentConf : NSObject
{
    UTDIDKeychainItemWrapper *mKeyChainWrapper;	// 8 = 0x8
    UTDIDPersistentFile *mPersistentFile;	// 16 = 0x10
    NSMutableDictionary *mDict;	// 24 = 0x18
    NSString *mIdentifier;	// 32 = 0x20
    _Bool mIsModified;	// 40 = 0x28
    _Bool mAlwaysSyncWhenCommit;	// 41 = 0x29
}

+ (id)initWithIdentifier:(id)arg1;
@property _Bool mAlwaysSyncWhenCommit; // @synthesize mAlwaysSyncWhenCommit;
- (void).cxx_destruct;
- (void)commit;
- (void)reset;
- (void)clear;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)syncData;
- (void)syncToPF:(id)arg1;
- (void)syncToKC:(id)arg1;
- (void)create:(id)arg1;
- (void)initData;

@end
