//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyDictionaryArray, NSString, UIView;

@interface EXTableGroup : NSObject
{
    MyDictionaryArray *cells;
    NSString *title;
    NSString *footer;
    UIView *headerView;
    UIView *footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) NSString *footer; // @synthesize footer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(readonly, nonatomic) MyDictionaryArray *cells; // @synthesize cells;
- (id)addInputCell:(id)arg1 placeHolder:(id)arg2 forKey:(id)arg3 backgroundMode:(int)arg4;
- (id)addInputCell:(id)arg1 placeHolder:(id)arg2 forKey:(id)arg3;
- (id)addSwitchCell:(id)arg1 on:(_Bool)arg2 forKey:(id)arg3 backgroundMode:(int)arg4;
- (id)addSwitchCell:(id)arg1 on:(_Bool)arg2 forKey:(id)arg3;
- (id)addTextCell:(id)arg1 forKey:(id)arg2 style:(long long)arg3 accessoryType:(long long)arg4 backgroundMode:(int)arg5;
- (id)addTextCell:(id)arg1 subText:(id)arg2 forKey:(id)arg3 style:(long long)arg4 accessoryType:(long long)arg5;
- (id)addTextCell:(id)arg1 forKey:(id)arg2 style:(long long)arg3 accessoryType:(long long)arg4;
- (id)addTextCell:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end
