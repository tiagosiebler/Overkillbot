/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface TJCFeaturedAppModel : XXUnknownSuperclass {
@private
	NSString* cost_;
	NSString* storeID_;
	NSString* name_;
	NSString* description_;
	int amount_;
	NSString* iconURL_;
	NSString* largeIconURL_;
	NSString* redirectURL_;
	int maxTimesToDisplayThisApp_;
	NSString* fullScreenAdURL_;
}
@property(copy) NSString* fullScreenAdURL;
@property(assign) int maxTimesToDisplayThisApp;
@property(assign) int amount;
@property(copy) NSString* redirectURL;
@property(copy) NSString* largeIconURL;
@property(copy) NSString* iconURL;
@property(copy) NSString* description;
@property(copy) NSString* name;
@property(copy) NSString* storeID;
@property(copy) NSString* cost;
-(void)dealloc;
-(id)initWithTBXML:(TBXMLElement*)tbxml;
@end
