//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITableView, UITableViewCell;

@protocol MDChatTableCellDelegate <NSObject>
- (void)bindModel:(id)arg1;

@optional
- (void)tableView:(UITableView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2;
- (void)cellForRowWithTableView:(UITableView *)arg1;
@end
