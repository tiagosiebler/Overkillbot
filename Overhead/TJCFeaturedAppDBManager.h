/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Overkill-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TJCFeaturedAppDBManager : XXUnknownSuperclass {
@private
	NSString* currentDBPath_;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedTJCFeaturedAppDBManager;
-(void)dealloc;
-(int)getDisplayedCountForStoreID:(id)storeID;
-(BOOL)incrementDisplayedCountForStoreID:(id)storeID;
-(BOOL)addApp:(id)app;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)retain;
-(id)copyWithZone:(NSZone*)zone;
@end

