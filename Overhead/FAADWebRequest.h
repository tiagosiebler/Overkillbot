/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FAADHttpRequestDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FAADWebRequest : XXUnknownSuperclass <FAADHttpRequestDelegate> {
@private
	NSString* url_;
}
@property(copy, nonatomic) NSString* url;
-(void)dealloc;
-(void)requestFailed;
-(void)requestSucceeded:(id)succeeded;
-(void)processWebRequest;
-(id)initWithDefaultUrl;
-(id)init;
@end
