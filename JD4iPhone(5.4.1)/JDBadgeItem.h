//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDBadge, NSString;

@interface JDBadgeItem : UIView
{
    JDBadge *_badge;
    NSString *_badgeValue;
}

+ (id)badge:(id)arg1;
+ (id)badge;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void)bounce2AnimationStopped;
- (void)bounce1AnimationStopped;
- (void)setBadgeColor:(id)arg1 withFont:(id)arg2;
- (void)setBadgeValue:(id)arg1 withFont:(id)arg2 animated:(_Bool)arg3;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 badgeImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

