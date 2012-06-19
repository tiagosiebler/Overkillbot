/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class FAADNetworkWebService, NSArray, FAADLandscapeView, FAADPortraitView;

__attribute__((visibility("hidden")))
@interface FAADAdsController : XXUnknownSuperclass <UIScrollViewDelegate> {
@private
	FAADLandscapeView* landscapeView_;
	FAADPortraitView* portraitView_;
	NSArray* currentAds_;
	FAADNetworkWebService* networkWebService_;
	BOOL isStatusBar_;
}
@property(assign) BOOL isStatusBar;
@property(retain, nonatomic) FAADNetworkWebService* networkWebService;
@property(retain, nonatomic) NSArray* currentAds;
@property(retain, nonatomic) FAADPortraitView* portraitView;
@property(retain, nonatomic) FAADLandscapeView* landscapeView;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)displayAds;
-(void)processNoAds;
-(void)processErrorCode402;
-(void)faadReconnectedForAds:(id)ads;
-(void)processErrorCode504;
-(void)faadAdsReceived:(id)received;
-(void)faadAdsFailed:(id)failed;
-(void)unRegisterForFAADNotifications;
-(void)registerForFAADNotifications;
-(void)displayPortraitLayout;
-(void)getNetworkFeeds;
-(void)displayPortraitAdsWithStatusBar:(BOOL)statusBar;
-(void)displayLandscapeLayout;
-(void)displayLandScapeAdsWithStatusBar:(BOOL)statusBar;
-(void)didReceiveMemoryWarning;
-(void)dealloc;
@end

