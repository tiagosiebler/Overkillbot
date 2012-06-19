/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Overkill-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SingletonTextureManager : XXUnknownSuperclass {
@private
	int count;
	NSMutableDictionary* dTextureNames;
	NSMutableDictionary* dTextureBytes;
	int bytes;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedTextureManager;
-(void)removeTextureName:(id)name;
-(void)removeTextureGLName:(int)name;
-(void)addTextureName:(id)name addMemory:(int)memory glname:(int)glname;
-(void)addTextureName:(id)name;
-(void)printTextureInMemory;
-(void)printCount;
-(void)decreaseCounter;
-(void)increaseCounter;
-(int)textureCount;
-(id)autorelease;
-(void)release;
-(unsigned)retainCount;
-(id)retain;
-(void)shutdownTextureManager;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
@end

