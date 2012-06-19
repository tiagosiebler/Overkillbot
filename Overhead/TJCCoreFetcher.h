/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString, NSInvocation, NSDictionary, NSMutableData, NSError, NSURLConnection;

__attribute__((visibility("hidden")))
@interface TJCCoreFetcher : XXUnknownSuperclass {
@private
	int requestTag_;
	int retryCount_;
	int responseCode_;
	double requestTimeout_;
	NSURLConnection* connection_;
	NSInvocation* invocation_;
	NSString* requestMethod_;
	NSDictionary* postParameters_;
	BOOL hasFetched_;
	NSString* baseURL_;
	NSString* alternateURL_;
	NSDictionary* bindings_;
	NSError* error_;
	NSMutableData* data_;
	NSData* POSTdata_;
}
@property(retain, nonatomic) NSURLConnection* connection;
@property(assign, nonatomic) double requestTimeout;
@property(assign) int responseCode;
@property(retain, nonatomic) NSData* POSTdata;
@property(retain, nonatomic) NSMutableData* data;
@property(retain, nonatomic) NSError* error;
@property(retain, nonatomic) NSDictionary* bindings;
@property(retain, nonatomic) NSString* alternateURL;
@property(retain, nonatomic) NSString* baseURL;
@property(assign, nonatomic) BOOL hasFetched;
@property(retain, nonatomic) NSDictionary* postParameters;
@property(retain, nonatomic) NSString* requestMethod;
@property(retain, nonatomic) NSInvocation* invocation;
@property(readonly, assign, nonatomic) int retryCount;
@property(assign) int requestTag;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)dealloc;
-(BOOL)hasError;
-(void)retry;
-(id)urlEncodedBindings;
-(id)requestURL;
-(id)createQueryStringFromDict:(id)dict;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)initiateConnection;
-(void)fetchAsynchronouslyWithCompletionInvocation:(id)completionInvocation;
-(id)init;
@end

