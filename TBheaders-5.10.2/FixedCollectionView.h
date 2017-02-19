//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SingleCellControllerFactory, SingleCellViewFactory, UICollectionView;
@protocol FixedCollectionViewDelegate;

@interface FixedCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    SingleCellViewFactory *_viewFactory;	// 16 = 0x10
    SingleCellControllerFactory *_controllerFactory;	// 24 = 0x18
    long long _scrollDirection;	// 32 = 0x20
    id <FixedCollectionViewDelegate> _delegate;	// 40 = 0x28
    NSArray *_datas;	// 48 = 0x30
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(nonatomic) __weak id <FixedCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadData;
- (void)registCellController:(id)arg1;
- (void)registCollectionReusableView:(Class)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollDirection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
