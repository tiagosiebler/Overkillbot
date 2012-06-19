/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SHKSharer.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SHKGoogleReader : SHKSharer {
@private
	NSMutableDictionary* session;
	BOOL sendAfterLogin;
}
@property(assign, nonatomic) BOOL sendAfterLogin;
@property(retain, nonatomic) NSMutableDictionary* session;
+(id)authorizationFormFields;
+(id)authorizationFormCaption;
+(BOOL)canShareURL;
+(id)sharerTitle;
-(void)sendFinished:(id)finished;
-(void)sendWithToken:(id)token;
-(void)tokenFinished:(id)finished;
-(BOOL)send;
-(void)signRequest:(id)request;
-(id)shareFormFieldsForType:(int)type;
-(void)authFinished:(id)finished;
-(void)getSession:(id)session password:(id)password;
-(void)authorizationFormValidate:(id)validate;
-(void)dealloc;
@end

