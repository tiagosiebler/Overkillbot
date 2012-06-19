/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UINavigationItem, UIWebView, UINavigationBar, UILabel, NSMutableArray, MPMoviePlayerController, UIImageView, NSString, UIButton, UIView;
@protocol TJCVideoAdDelegate;

__attribute__((visibility("hidden")))
@interface TJCVideoLayer : XXUnknownSuperclass {
@private
	UILabel* statusLabel_;
	UIView* videoCompleteView_;
	UIButton* replayButton_;
	UIButton* customButton1_;
	UIButton* customButton2_;
	UIButton* backToVideoButton_;
	UIButton* backButton_;
	UILabel* buttonDescriptionLabel_;
	UILabel* detailsLabel_;
	UIView* messageView_;
	UIWebView* currencyLabelWebView_;
	UIImageView* iconImageView_;
	UINavigationBar* navBar_;
	UINavigationItem* navItem_;
	UILabel* navBarLabel_;
	UIButton* doneButton_;
	UIImageView* tapjoyLogo_;
	UIButton* closeButton_;
	double duration_;
	id<TJCVideoAdDelegate> delegate_;
	NSArray* buttons_;
	NSMutableArray* buttonURLs_;
	NSString* fileName_;
	NSString* linkURLString_;
	MPMoviePlayerController* videoFeed_;
	UIWebView* webView_;
	BOOL isVideoPlaying_;
	NSString* offerID_;
	BOOL didIconDownload_;
	BOOL didLogoDownload_;
	BOOL isFinishedWatching_;
	BOOL shouldDisplayLogo_;
}
@property(assign) BOOL shouldDisplayLogo;
@property(assign) BOOL isFinishedWatching;
@property(copy) NSString* offerID;
@property(assign) BOOL isVideoPlaying;
@property(retain, nonatomic) MPMoviePlayerController* videoFeed;
@property(copy) NSString* linkURLString;
@property(copy) NSString* fileName;
@property(retain, nonatomic) UIButton* closeButton;
-(void)dealloc;
-(void)updateStatusText:(id)text;
-(void)cleanupVideo;
-(void)cancelVideo;
-(void)resumeVideo;
-(void)pauseVideo;
-(void)stopVideo;
-(void)enableLogo:(BOOL)logo;
-(void)displayLogo:(id)logo;
-(void)displayIcon:(id)icon;
-(void)loadLogoImage;
-(void)loadIconImage;
-(void)playVideo;
-(void)loadWebViewWithURL:(id)url;
-(void)movieDidFinishWatching:(id)movie;
-(void)movieDurationAvailable:(id)available;
-(void)enableShowStatusLabel:(BOOL)label;
-(void)enableShowVideoCompleteScreen:(BOOL)screen;
-(void)enableShowBackToVideoButton:(BOOL)videoButton;
-(void)prepareVideoWithDelegate:(id)delegate videoURL:(id)url shouldStream:(BOOL)stream;
-(void)transitionToVideoView;
-(void)transitionToWebView;
-(id)getDescriptionWithAmountString:(id)amountString currencyName:(id)name adText:(id)text;
-(void)buttonAction2;
-(void)buttonAction1;
-(void)updateViewPropertiesWithOfferID:(id)offerID;
-(void)refreshViewWithBounds:(CGRect)bounds;
-(void)setVideoView:(id)view;
@end

