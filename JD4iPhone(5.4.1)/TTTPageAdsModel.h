//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSString, TTTBuryDataModel, TTTJumpModel;

@interface TTTPageAdsModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_pictureUrl;
    TTTJumpModel *_jump;
    TTTBuryDataModel *_adsBuryData;
}

@property(retain, nonatomic) TTTBuryDataModel *adsBuryData; // @synthesize adsBuryData=_adsBuryData;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
