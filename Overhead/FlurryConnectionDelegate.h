/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSHTTPURLResponse, NSMutableData;

@interface FlurryConnectionDelegate : XXUnknownSuperclass {
	NSMutableData* _body;
	NSHTTPURLResponse* _response;
	NSError* _error;
	BOOL _done;
}
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) NSMutableData* body;
@property(readonly, assign, nonatomic) NSHTTPURLResponse* response;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(BOOL)isDone;
-(void)dealloc;
-(id)init;
@end

