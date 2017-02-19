//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSAdapterViewController.h"

#import "TBPSARCaptureViewControllerDelegate-Protocol.h"

@class NSString, TBPSARCaptureViewController, UIViewController;

@interface TBARCaptureViewController : TBPSAdapterViewController <TBPSARCaptureViewControllerDelegate>
{
    UIViewController *_navController;	// 40 = 0x28
    TBPSARCaptureViewController *_captureViewController;	// 48 = 0x30
}

@property(retain, nonatomic) TBPSARCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)backViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)forbidbackPanGestureRecognized;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
