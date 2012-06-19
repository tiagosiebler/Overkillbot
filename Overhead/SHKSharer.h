/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SHKSharerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SHKFormController, SHKItem, NSError, SHKRequest;

__attribute__((visibility("hidden")))
@interface SHKSharer : XXUnknownSuperclass <SHKSharerDelegate> {
@private
	id shareDelegate;
	SHKItem* item;
	SHKFormController* pendingForm;
	SHKRequest* request;
	NSError* lastError;
	BOOL quiet;
	int pendingAction;
}
@property(assign) int pendingAction;
@property(assign) BOOL quiet;
@property(retain, nonatomic) NSError* lastError;
@property(retain) SHKRequest* request;
@property(retain) SHKFormController* pendingForm;
@property(retain) SHKItem* item;
@property(retain, nonatomic) id<SHKSharerDelegate> shareDelegate;
+(BOOL)isServiceAuthorized;
+(void)logout;
+(id)authorizationFormCaption;
+(id)authorizationFormFields;
+(id)shareFile:(id)file filename:(id)filename mimeType:(id)type title:(id)title;
+(id)shareText:(id)text;
+(id)shareImage:(id)image title:(id)title;
+(id)shareURL:(id)url title:(id)title;
+(id)shareURL:(id)url;
+(id)shareItem:(id)item;
+(BOOL)canShare;
+(BOOL)canAutoShare;
+(BOOL)canShareType:(int)type;
+(BOOL)requiresAuthentication;
+(BOOL)canShareOffline;
+(BOOL)shareRequiresInternetConnection;
+(BOOL)canShareFile;
+(BOOL)canShareImage;
+(BOOL)canShareURL;
+(BOOL)canShareText;
+(id)sharerId;
+(id)sharerTitle;
-(void)sendDidCancel;
-(void)sendDidFailWithError:(id)send shouldRelogin:(BOOL)relogin;
-(void)sendDidFailWithError:(id)send;
-(void)sendDidFailShouldRelogin;
-(void)sendDidFinish;
-(void)sendDidStart;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)tryPendingAction;
-(void)sharerCancelledSending:(id)sending;
-(void)sharer:(id)sharer failedWithError:(id)error shouldRelogin:(BOOL)relogin;
-(void)sharerFinishedSending:(id)sending;
-(void)sharerStartedSending:(id)sending;
-(BOOL)send;
-(BOOL)tryToSend;
-(BOOL)validateItem;
-(void)shareFormSave:(id)save;
-(void)shareFormValidate:(id)validate;
-(id)shareFormFieldsForType:(int)type;
-(void)show;
-(id)authorizationFormCaption;
-(id)authorizationFormFields;
-(void)authorizationFormSave:(id)save;
-(void)authorizationFormValidate:(id)validate;
-(void)authorizationFormShow;
-(void)setShouldAutoShare:(BOOL)autoShare;
-(id)getAuthValueForKey:(id)key;
-(void)promptAuthorization;
-(BOOL)authorize;
-(BOOL)isAuthorized;
-(void)share;
-(id)init;
-(BOOL)shouldAutoShare;
-(id)sharerId;
-(id)sharerTitle;
-(void)dealloc;
@end
