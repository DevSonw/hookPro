//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSMutableArray, NSString, UITableView;

@interface MDEGORequestListViewController : MDViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _loading;
    _Bool _autoBackWhenLoadDataError;
    UITableView *_listTableView;
    unsigned long long _currentRequestIndex;
    NSMutableArray *_dataArray;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) _Bool autoBackWhenLoadDataError; // @synthesize autoBackWhenLoadDataError=_autoBackWhenLoadDataError;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long currentRequestIndex; // @synthesize currentRequestIndex=_currentRequestIndex;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadDataFail:(id)arg1;
- (void)loadDataError:(id)arg1;
- (void)loadDataSuccess:(id)arg1;
- (void)stopRefresh;
- (void)beginLoadData;
- (void)handleViewRefreshWithDataDictionary:(id)arg1;
- (void)hideHud;
- (unsigned long long)requestCount;
- (void)didReceiveMemoryWarning;
- (void)loadMoreData;
- (void)reloadRequestData;
- (void)requestData;
- (void)refreshHasMoreDataStatus:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarTitle;
- (void)closeAction;
- (void)setListTableViewFooter;
- (void)setListTableViewHeader;
- (void)setupNavBar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
