//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface TBTradeRecmdItemExtendView : UIView
{
    UIButton *_itemDetailButton;	// 8 = 0x8
    CDUnknownBlockType _touchHandler;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType touchHandler; // @synthesize touchHandler=_touchHandler;
@property(retain, nonatomic) UIButton *itemDetailButton; // @synthesize itemDetailButton=_itemDetailButton;
- (void).cxx_destruct;
- (void)touchDetailButton:(id)arg1;
- (void)layoutSubviews;
- (id)init;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
