/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FAADWebRequest.h"

@class FAADHttpRequest, NSString;

__attribute__((visibility("hidden")))
@interface FAADNetworkWebService : FAADWebRequest {
@private
	FAADHttpRequest* faadHttpRequest_;
	NSString* callBackNotification_;
}
@property(retain, nonatomic) NSString* callBackNotification;
@property(retain, nonatomic) FAADHttpRequest* faadHttpRequest;
-(void)dealloc;
-(void)reConnectedForNetworkFeed:(id)networkFeed;
-(void)processErrorCode504;
-(void)getNetworkFeedswithCallBack:(id)back;
-(void)requestFailed;
-(void)requestSucceeded:(id)succeeded;
-(void)processWebRequest;
-(id)createRestFullUrlWithToken:(id)token;
-(void)sendRequestWithToken:(id)token;
@end

