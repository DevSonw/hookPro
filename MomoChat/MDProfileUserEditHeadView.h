//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "MDProfileEditHeadViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class MDPersonalProfile, MDProfileEditHeadView, NSDictionary, NSString, UIButton;

@interface MDProfileUserEditHeadView : UIImageView <MDProfileEditHeadViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _isMaskTextHidden;
    id <MDProfileUserEditHeadDelegate> _delegate;
    MDProfileEditHeadView *_picHeadView;
    UIButton *_changeBackImgButton;
    NSDictionary *_imageInfo;
    MDPersonalProfile *_editProfile;
}

@property(retain, nonatomic) MDPersonalProfile *editProfile; // @synthesize editProfile=_editProfile;
@property(nonatomic) _Bool isMaskTextHidden; // @synthesize isMaskTextHidden=_isMaskTextHidden;
@property(retain, nonatomic) NSDictionary *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) UIButton *changeBackImgButton; // @synthesize changeBackImgButton=_changeBackImgButton;
@property(retain, nonatomic) MDProfileEditHeadView *picHeadView; // @synthesize picHeadView=_picHeadView;
@property(nonatomic) __weak id <MDProfileUserEditHeadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging;
- (void)scrollViewWillBeginDragging;
- (void)changeToNewItemArray:(id)arg1;
- (void)clearWebBgViewAndReplaceNormalBgView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertForReplaceBgWebView;
- (_Bool)isVip;
- (void)gotoWebBackGroudView;
- (void)showAlertForClearBgWebView;
- (void)showAlertForOpenBgView;
- (void)backgroundImageChangedTo:(id)arg1;
- (void)doChangeVipBackGroupImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)takeBackGroundPhoto;
- (void)pickBackGroundPhoto;
- (void)handleReplaceOrDeleteActionSheet:(id)arg1 ClickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickChangeImageButton;
- (void)addNewPicFromPhoto;
- (void)updateViewWithList:(id)arg1 isVip:(_Bool)arg2;
- (void)setBackImageWithUrl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
