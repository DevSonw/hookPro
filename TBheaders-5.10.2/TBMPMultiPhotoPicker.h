//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBMPMultiPhotoPicker : NSObject
{
}

+ (void)clearLocalImages;
+ (id)localImageName;
+ (id)localCacheFolder;
+ (void)setLocalCacheFolder:(id)arg1;
+ (void)pickWithType:(int)arg1 InitPhotos:(id)arg2 ViewController:(id)arg3 ResultBlock:(CDUnknownBlockType)arg4 withImageRule:(CDStruct_a90cff18 *)arg5;
+ (void)appendRatepickWithType:(int)arg1 InitPhotos:(id)arg2 ViewController:(id)arg3 ResultBlock:(CDUnknownBlockType)arg4;
+ (void)pickWithType:(int)arg1 InitPhotos:(id)arg2 ViewController:(id)arg3 ResultBlock:(CDUnknownBlockType)arg4;

@end
