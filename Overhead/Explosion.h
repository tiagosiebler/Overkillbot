/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Overkill-Structs.h"


__attribute__((visibility("hidden")))
@interface Explosion : XXUnknownSuperclass {
@private
	CGPoint position;
	float timeToExplosion;
	int explosionType;
	BOOL explode;
	float scale;
	int layer;
	BOOL screenShake;
	int screenShake_pixelRange;
	int screenShake_shakeCount;
	float screenShake_duration;
	float damage;
	BOOL hurtingTargets;
}
-(BOOL)isHurtingTargets;
-(float)damage;
-(void)setDamage:(float)damage;
-(int)screenShake_shakeCount;
-(int)screenShake_pixelRange;
-(float)screenShake_duration;
-(BOOL)screenShake;
-(int)explosionLayer;
-(float)explosionScale;
-(int)explosionType;
-(CGPoint)position;
-(BOOL)explode;
-(void)setScreenShakeWithDuration:(float)duration pixelRange:(int)range shakeCount:(int)count;
-(void)update:(float)update;
-(id)initWithExplosionType:(int)explosionType position:(CGPoint)position scale:(float)scale timeToExplosion:(float)explosion hurtingTargets:(BOOL)targets;
-(id)initWithExplosionType:(int)explosionType position:(CGPoint)position scale:(float)scale timeToExplosion:(float)explosion layer:(int)layer hurtingTargets:(BOOL)targets;
-(void)dealloc;
@end

