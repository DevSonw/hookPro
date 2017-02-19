//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterCell, CAEmitterLayer, TBAudioPlayer, UIImageView, UITapGestureRecognizer;

@interface TBMy3DMusicView : UIView
{
    _Bool isPlay;	// 8 = 0x8
    _Bool needsPlay;	// 9 = 0x9
    id _data;	// 16 = 0x10
    TBAudioPlayer *_musicPlayer;	// 24 = 0x18
    UITapGestureRecognizer *_tap;	// 32 = 0x20
    UIImageView *_iconImage;	// 40 = 0x28
    CAEmitterLayer *_emLayer;	// 48 = 0x30
    CAEmitterCell *_note;	// 56 = 0x38
}

@property(retain, nonatomic) CAEmitterCell *note; // @synthesize note=_note;
@property(retain, nonatomic) CAEmitterLayer *emLayer; // @synthesize emLayer=_emLayer;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) TBAudioPlayer *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)appear;
- (void)disappear;
- (void)handleTapGesture:(id)arg1;
- (void)stop;
- (void)play;
- (void)setUpView;
- (void)didBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
