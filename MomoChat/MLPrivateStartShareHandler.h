//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLPrivateStartShareHandler : NSObject
{
    int _platform;
}

+ (id)shareInstance;
@property(nonatomic) int platform; // @synthesize platform=_platform;
- (void)shareToQzone:(id)arg1 avatar:(id)arg2 title:(id)arg3 message:(id)arg4;
- (void)shareToWx:(id)arg1 avatar:(id)arg2 title:(id)arg3 message:(id)arg4;
- (void)startShare:(int)arg1 url:(id)arg2 avatar:(id)arg3 title:(id)arg4 message:(id)arg5;

@end
