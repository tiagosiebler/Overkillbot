/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;
@protocol CBAPIConnectionDelegate;

@interface CBAPIConnection : XXUnknownSuperclass {
@private
	NSString* endpoint;
	NSMutableDictionary* activeConnections;
	id<CBAPIConnectionDelegate> delegate;
	unsigned requestIdMax;
}
@property(assign) unsigned requestIdMax;
@property(retain, nonatomic) NSMutableDictionary* activeConnections;
@property(retain, nonatomic) NSString* endpoint;
@property(assign, nonatomic) id<CBAPIConnectionDelegate> delegate;
-(void)dealloc;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)sendRequest:(id)request;
-(id)init;
-(id)initWithEndpoint:(id)endpoint andDelegate:(id)delegate;
-(id)initWithDelegate:(id)delegate;
@end

