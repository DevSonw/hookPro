//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "GMGridViewSortingDelegate.h"
#import "MDImageFliterDelegate.h"
#import "MDPhotoPickerAndFilterHandlerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WSAssetPickerControllerDelegate.h"

@class ALAssetsLibrary, GMGridView, MDConvenientCameraRollPhotoSelectionView, MDEmotion, MDMessageInterceptor, MDMultiSelectImageItemCell, MDNewPhotoPickerAndFilterHandler, MDPhotoPickerAndFilterHandler, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, WSAssetPickerController;

@interface MDMultiPhotoSelectEntranceView : UIView <GMGridViewDataSource, GMGridViewSortingDelegate, GMGridViewActionDelegate, UIScrollViewDelegate, WSAssetPickerControllerDelegate, MDPhotoPickerAndFilterHandlerDelegate, MDImageFliterDelegate, UIActionSheetDelegate>
{
    _Bool _hasEdited;
    _Bool _shouldGenerateHash;
    _Bool _showConvenientSelection;
    _Bool _placeHolderCheck;
    MDEmotion *_currentEmotion;
    id <MDMultiPhotoSelectDelegate> _delegate;
    id <MDMultiPhotoSelectionViewFrameDelegate> _frameChangingDelegate;
    double _arrowIndicatorCenterX;
    UIButton *_albumBtn;
    UIButton *_takePhotoBtn;
    UIButton *_emojiBtn;
    NSMutableArray *_itemArray;
    GMGridView *_contentGridView;
    MDMultiSelectImageItemCell *_emotionItemView;
    ALAssetsLibrary *_library;
    long long _selectedIndex;
    WSAssetPickerController *_pickerController;
    UIImageView *_placeHolderImgView;
    UILabel *_placeHolderLabel;
    MDPhotoPickerAndFilterHandler *_filterHandler;
    MDNewPhotoPickerAndFilterHandler *_aNewFilterHandler;
    MDMessageInterceptor *_delegateInterceptor;
    UIImageView *_arrowIndicatorView;
    MDConvenientCameraRollPhotoSelectionView *_convenientView;
    unsigned long long _currentType;
    double _buttonPadding;
    struct CGRect _originEmotionItemViewFrame;
}

@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) unsigned long long currentType; // @synthesize currentType=_currentType;
@property(nonatomic) struct CGRect originEmotionItemViewFrame; // @synthesize originEmotionItemViewFrame=_originEmotionItemViewFrame;
@property(retain, nonatomic) MDConvenientCameraRollPhotoSelectionView *convenientView; // @synthesize convenientView=_convenientView;
@property(retain, nonatomic) UIImageView *arrowIndicatorView; // @synthesize arrowIndicatorView=_arrowIndicatorView;
@property(retain, nonatomic) MDMessageInterceptor *delegateInterceptor; // @synthesize delegateInterceptor=_delegateInterceptor;
@property(retain, nonatomic) MDNewPhotoPickerAndFilterHandler *aNewFilterHandler; // @synthesize aNewFilterHandler=_aNewFilterHandler;
@property(retain, nonatomic) MDPhotoPickerAndFilterHandler *filterHandler; // @synthesize filterHandler=_filterHandler;
@property(nonatomic) _Bool placeHolderCheck; // @synthesize placeHolderCheck=_placeHolderCheck;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIImageView *placeHolderImgView; // @synthesize placeHolderImgView=_placeHolderImgView;
@property(retain, nonatomic) WSAssetPickerController *pickerController; // @synthesize pickerController=_pickerController;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) ALAssetsLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) MDMultiSelectImageItemCell *emotionItemView; // @synthesize emotionItemView=_emotionItemView;
@property(retain, nonatomic) GMGridView *contentGridView; // @synthesize contentGridView=_contentGridView;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) UIButton *emojiBtn; // @synthesize emojiBtn=_emojiBtn;
@property(retain, nonatomic) UIButton *takePhotoBtn; // @synthesize takePhotoBtn=_takePhotoBtn;
@property(retain, nonatomic) UIButton *albumBtn; // @synthesize albumBtn=_albumBtn;
@property(nonatomic) _Bool showConvenientSelection; // @synthesize showConvenientSelection=_showConvenientSelection;
@property(nonatomic) _Bool shouldGenerateHash; // @synthesize shouldGenerateHash=_shouldGenerateHash;
@property(nonatomic) double arrowIndicatorCenterX; // @synthesize arrowIndicatorCenterX=_arrowIndicatorCenterX;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
@property(nonatomic) id <MDMultiPhotoSelectionViewFrameDelegate> frameChangingDelegate; // @synthesize frameChangingDelegate=_frameChangingDelegate;
@property(nonatomic) id <MDMultiPhotoSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDEmotion *currentEmotion; // @synthesize currentEmotion=_currentEmotion;
- (void)pickerHandlerDidDeleteImage:(id)arg1;
- (void)pickerHandlerDidCancel:(id)arg1;
- (void)pickerHandler:(id)arg1 didHandleImage:(id)arg2 tagID:(id)arg3 addedFilter:(_Bool)arg4;
- (void)stickyTagQuickEntrance;
- (void)appDidEnterBackground:(id)arg1;
- (void)clickAnimEmoji:(id)arg1;
- (void)userDidCancelFilter;
- (void)imageFliterFinish:(id)arg1;
- (void)handleFilteredImage:(id)arg1;
- (void)imagePickerControllerDidCancel;
- (void)removeConvenientSelectionView;
- (void)handleSelectedImagesSecondStep;
- (void)handleSelectedAssets:(id)arg1;
- (void)assetPickerController:(id)arg1 didFinishPickingMediaWithAssets:(id)arg2;
- (void)assetPickerControllerDidLimitSelection:(id)arg1;
- (void)assetPickerControllerDidCancel:(id)arg1;
- (void)showStickerSelectionActionSheet;
- (_Bool)GMGridView:(id)arg1 shouldAllowShakingBehaviorWhenMovingCell:(id)arg2 atIndex:(long long)arg3;
- (void)GMGridView:(id)arg1 didEndMovingCell:(id)arg2;
- (void)GMGridView:(id)arg1 didStartMovingCell:(id)arg2;
- (void)GMGridView:(id)arg1 processDeleteActionForItemAtIndex:(long long)arg2;
- (_Bool)GMGridView:(id)arg1 canMoveItemAtIndex:(long long)arg2;
- (void)GMGridView:(id)arg1 exchangeItemAtIndex:(long long)arg2 withItemAtIndex:(long long)arg3;
- (void)GMGridView:(id)arg1 moveItemAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (_Bool)GMGridView:(id)arg1 canDeleteItemAtIndex:(long long)arg2;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)handleSelectedImgCountChanged;
- (void)handlePickedImage:(id)arg1;
- (void)handlePickedImage:(id)arg1 smallerImage:(id)arg2;
- (void)handleEmotionDownloadNoticefication:(id)arg1;
- (void)addEmotionDownloadObserver;
- (void)deleteCurrentEmotion;
- (void)getImageFromNewCamera;
- (void)getImageFromEmoji;
- (void)getImageFromCamera;
- (void)getImageFromAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEmotion:(id)arg1;
@property(retain, nonatomic) NSArray *currentImageArray;
- (void)addSeperatorViewWithReferenceButton:(id)arg1;
- (id)functionButtonWithNormalImageName:(id)arg1 disabledImageName:(id)arg2 title:(id)arg3;
- (void)hideWithAnimated:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)addSingleLineView;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 useConvenientSelection:(_Bool)arg2 viewType:(unsigned long long)arg3;
- (id)initWithSuperViewOfTagType:(id)arg1;
- (id)initWithSuperView:(id)arg1 useConvenientSelection:(_Bool)arg2;
- (id)initWithSuperView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
