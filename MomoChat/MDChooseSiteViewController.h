//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MDFeedApi, NSArray, NSString, UILabel, UITableView;

@interface MDChooseSiteViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    CDUnknownBlockType _siteChangeHandleBlock;
    NSString *_currentSiteID;
    NSArray *_listArray;
    UITableView *_listTableView;
    UILabel *_noResultTipLabel;
    NSString *_endDesc;
    UILabel *_footerLabel;
    MDFeedApi *_feedApi;
}

@property(retain, nonatomic) MDFeedApi *feedApi; // @synthesize feedApi=_feedApi;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(copy, nonatomic) NSString *endDesc; // @synthesize endDesc=_endDesc;
@property(retain, nonatomic) UILabel *noResultTipLabel; // @synthesize noResultTipLabel=_noResultTipLabel;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
@property(copy, nonatomic) NSString *currentSiteID; // @synthesize currentSiteID=_currentSiteID;
@property(copy, nonatomic) CDUnknownBlockType siteChangeHandleBlock; // @synthesize siteChangeHandleBlock=_siteChangeHandleBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)hideHud;
- (void)showHud;
- (void)closeAction;
- (void)cancelAction;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestError:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)startRequest;
- (void)viewDidLoad;
- (id)initWithSiteID:(id)arg1 selectedSiteChangedHandleBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
