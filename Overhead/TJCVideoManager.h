/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TJCFetchResponseDelegate.h"
#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableData, TJCVideoRequestHandler, NSURLConnection, TJCVideoView;

__attribute__((visibility("hidden")))
@interface TJCVideoManager : XXUnknownSuperclass <TJCFetchResponseDelegate> {
@private
	TJCVideoRequestHandler* requestHandler_;
	TJCVideoView* videoView_;
	NSURLConnection* connection_;
	NSMutableData* videoData_;
	int videoCacheCount_;
	int downloadIndex_;
	NSArray* unCachedVideoObjects_;
	int currentOrientation_;
	BOOL shouldShowVideos_;
}
@property(assign) BOOL shouldShowVideos;
@property(assign) int currentOrientation;
@property(retain, nonatomic) TJCVideoView* videoView;
@property(retain, nonatomic) TJCVideoRequestHandler* requestHandler;
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedTJCVideoManager;
-(void)dealloc;
-(void)shouldDisplayLogo:(BOOL)logo;
-(void)updateViewWithOrientation:(int)orientation;
-(void)setVideoCacheCount:(int)count;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)beginVideoCaching;
-(void)fetchResponseError:(int)error errorDescription:(id)description requestTag:(int)tag;
-(void)fetchResponseSuccessWithData:(void*)data withRequestTag:(int)requestTag;
-(void)setCachedVideoObjectDict:(id)dict withKey:(id)key;
-(id)getCachedVideoDictonary;
-(void)setAllVideosObjectDict:(id)dict withKey:(id)key;
-(id)getAllVideosDictionary;
-(id)getCachedVideoIDs;
-(void)initVideoAdsWithDelegate:(id)delegate;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)retain;
-(id)copyWithZone:(NSZone*)zone;
@end

