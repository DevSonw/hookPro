//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBMy3DCloakRoomView, TBMy3DClothDO, UIView;

@protocol TBMy3DCloakRoomViewDelegate <NSObject>
- (void)TBMy3DCloakRoomViewDidEndEdit:(TBMy3DCloakRoomView *)arg1;
- (void)TBMy3DCloakRoomViewDidEnterEdit:(TBMy3DCloakRoomView *)arg1;
- (void)ItemTapped:(NSString *)arg1;
- (void)ClothLiked:(TBMy3DClothDO *)arg1 doLike:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)SexDidSelected:(int)arg1 view:(UIView *)arg2;
@end
