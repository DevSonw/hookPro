//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@interface WeiboContactApi : MDApiBase
{
}

- (void)inviteRenrenFriendJoinParty:(id)arg1 userID:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)inviteSinaWeiboFriendJoinParty:(id)arg1 userID:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)inviteTencentWeiboFriendJoinParty:(id)arg1 userID:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)inviteTencentFriendToGroup:(id)arg1 groupId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)inviteRenrenFriendToGroup:(id)arg1 groupId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)addMomoFriendByTencentWeiboId:(id)arg1 tencentWeiboId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)inviteTencentWeiboFriendToMomo:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)tencentWeibocontactList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)inviteRenrenFriendToMomo:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)addMomoFriendByRenrenId:(id)arg1 renrenId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)renrencontactList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)InviteWeiboFriendToMomoGroup:(id)arg1 group:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)InviteWeiboFriendToMomo:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)weiboInviteFriendWithId:(id)arg1 inviteReason:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)changeWeiboFriendState:(_Bool)arg1 withTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)confirmWeiboContactInvitation:(id)arg1 Target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)InviteWeiContact:(id)arg1 WeiboId:(id)arg2 Target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)weiboContactListWithMessage:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;

@end
