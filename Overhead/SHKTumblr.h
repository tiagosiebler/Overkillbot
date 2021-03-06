/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SHKSharer.h"

@class NSMutableData, NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface SHKTumblr : SHKSharer {
@private
	NSMutableData* data;
	NSHTTPURLResponse* response;
}
+(BOOL)canShare;
+(BOOL)canShareImage;
+(BOOL)canShareText;
+(BOOL)canShareURL;
+(id)sharerTitle;
-(void)finish;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)sendFinished:(id)finished;
-(BOOL)send;
-(id)shareFormFieldsForType:(int)type;
-(id)authorizationFormFields;
-(void)authFinished:(id)finished;
-(void)authorizationFormValidate:(id)validate;
-(id)authorizationFormCaption;
-(BOOL)shouldAutoShare;
-(void)dealloc;
@end

