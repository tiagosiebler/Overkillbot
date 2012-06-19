/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"

@class NSArray, UIPageControl, UIButton, UIView, UIScrollView, FAADOfferClickedWebService, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface FAADPortraitView : XXUnknownSuperclass <UIScrollViewDelegate> {
@private
	UIButton* closeButton_;
	UIButton* downloadButton_;
	UIScrollView* adsScrollView_;
	UIActivityIndicatorView* spinner_;
	UIPageControl* pageControl_;
	NSArray* currentAds_;
	FAADOfferClickedWebService* offerClickedWebService_;
	BOOL isStatusBar_;
	UIView* containerView_;
}
@property(assign) BOOL isStatusBar;
@property(retain, nonatomic) UIView* containerView;
@property(retain, nonatomic) FAADOfferClickedWebService* offerClickedWebService;
@property(retain, nonatomic) NSArray* currentAds;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(retain, nonatomic) UIActivityIndicatorView* spinner;
@property(retain, nonatomic) UIScrollView* adsScrollView;
@property(retain, nonatomic) UIButton* downloadButton;
@property(retain, nonatomic) UIButton* closeButton;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)downloadOfferForId:(int)anId;
-(void)displayLayoutWithStatusBar:(BOOL)statusBar;
-(void)loadAdsIniPad;
-(void)loadAdsIniPhone;
-(void)displayAds:(id)ads;
-(void)download;
-(void)remove;
-(void)closeView;
-(void)setiPhoneLayout;
-(void)setiPadLayout;
-(id)initWithFrame:(CGRect)frame;
@end
