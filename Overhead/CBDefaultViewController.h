/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Overkill-Structs.h"

@class CBDefaultBackgroundView, CBLoadingView;

@interface CBDefaultViewController : XXUnknownSuperclass {
@private
	CBDefaultBackgroundView* backgroundView;
	CBDefaultBackgroundView* reversedBackgroundView;
	BOOL viewIsVisible;
	CBLoadingView* loadingView;
	BOOL loadingViewIsVisible;
}
@property(retain) CBLoadingView* loadingView;
@property(readonly, assign) BOOL loadingViewIsVisible;
@property(readonly, assign) BOOL viewIsVisible;
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedController;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)orientView:(id)view;
-(void)dismissLoadingView;
-(void)displayLoadingView;
-(void)dismissMoreAppsView:(id)view;
-(void)dismissInterstitial:(id)interstitial;
-(void)displayMoreAppsView:(id)view;
-(void)displayInterstitial:(id)interstitial;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(oneway void)release;
-(unsigned)retainCount;
-(id)retain;
-(id)copyWithZone:(NSZone*)zone;
@end

