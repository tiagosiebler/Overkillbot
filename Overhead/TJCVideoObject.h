/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TJCVideoObject : XXUnknownSuperclass {
@private
	NSString* videoURL_;
	NSMutableArray* buttons_;
	NSString* currencyAmount_;
	NSString* currencyName_;
	NSString* videoAdName_;
	NSString* offerID_;
	NSString* clickURL_;
	NSString* dataLocation_;
	NSString* videoFilename_;
	NSString* iconURL_;
}
@property(copy) NSString* videoFilename;
@property(copy) NSString* dataLocation;
@property(copy) NSString* clickURL;
@property(copy) NSString* offerID;
@property(copy) NSString* videoAdName;
@property(copy) NSString* currencyName;
@property(copy) NSString* currencyAmount;
@property(retain, nonatomic) NSMutableArray* buttons;
@property(copy) NSString* videoURL;
-(void)dealloc;
-(id)getDictionary;
-(id)initWithTBXML:(TBXMLElement*)tbxml;
@end

