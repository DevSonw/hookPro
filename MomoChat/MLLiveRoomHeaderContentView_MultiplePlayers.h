//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MLLiveRoomHeaderContentView.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MLLiveRoomHeaderView, MLShowRoomProfile, MLShowStarProfile, NSDate, NSString, UICollectionView, UIImageView;

@interface MLLiveRoomHeaderContentView_MultiplePlayers : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MLLiveRoomHeaderContentView>
{
    MLLiveRoomHeaderView *_container;
    UICollectionView *_collectionView;
    MLShowRoomProfile *_roomProfile;
    UIImageView *_versusImageView;
    MLShowStarProfile *_currentStar;
    NSDate *_lastUIUpdateDate;
}

@property(copy, nonatomic) NSDate *lastUIUpdateDate; // @synthesize lastUIUpdateDate=_lastUIUpdateDate;
@property(retain, nonatomic) MLShowStarProfile *currentStar; // @synthesize currentStar=_currentStar;
@property(nonatomic) __weak UIImageView *versusImageView; // @synthesize versusImageView=_versusImageView;
@property(retain, nonatomic) MLShowRoomProfile *roomProfile; // @synthesize roomProfile=_roomProfile;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak MLLiveRoomHeaderView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)hideRankOnlineView:(_Bool)arg1;
- (void)hideRankScrollView:(_Bool)arg1;
- (void)updateUI;
- (void)sortStarArray;
- (void)updateRanks:(id)arg1 forStarId:(id)arg2;
- (void)updateThumbs:(unsigned long long)arg1 forStarId:(id)arg2;
@property(readonly, nonatomic) MLShowStarProfile *selectedStar;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)itemSpacing;
- (double)versusSpacing;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reselectSelectedStar;
- (void)didMoveToWindow;
- (void)setupContentView;
- (void)performVersusAnimation;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
