//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class BBGPUImageSlidingComposeFilter, GPUImageFilter, GPUImageOutput<GPUImageInput>;

@interface BBGPUImageSlidingFilter : GPUImageFilterGroup
{
    GPUImageOutput<GPUImageInput> *_filterA;
    GPUImageOutput<GPUImageInput> *_filterB;
    BBGPUImageSlidingComposeFilter *_composeFilter;
    GPUImageFilter *_inFilter;
}

@property(nonatomic) __weak GPUImageFilter *inFilter; // @synthesize inFilter=_inFilter;
@property(nonatomic) __weak BBGPUImageSlidingComposeFilter *composeFilter; // @synthesize composeFilter=_composeFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *filterB; // @synthesize filterB=_filterB;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *filterA; // @synthesize filterA=_filterA;
- (void).cxx_destruct;
@property(nonatomic) double offset;
- (id)init;

@end
