/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SingletonSoundManager, NSString, WeaponsShopView;

__attribute__((visibility("hidden")))
@interface Effect : XXUnknownSuperclass <NSCopying> {
@private
	WeaponsShopView* eagl;
	BOOL changePart;
	BOOL changeWeapon;
	BOOL defaultChangePart;
	BOOL defaultChangeWeapon;
	float delay;
	float tmpDelay;
	float alpha;
	float fromAlpha;
	float toAlpha;
	float scale;
	float fromScale;
	float toScale;
	float rotate;
	float fromRotate;
	float toRotate;
	CGPoint position;
	CGPoint fromPosition;
	CGPoint toPosition;
	float effectTime;
	float duration;
	float factor;
	float stepDuration;
	float stepDelay;
	int textureIndex;
	BOOL keepValueAfterEffect;
	BOOL ended;
	float dTime;
	NSString* soundName;
	BOOL playSound;
	BOOL defaultPlaySound;
	SingletonSoundManager* soundManager;
	NSString* status;
	BOOL startShooting;
}
+(void)endAllEffectInArray:(id)array;
+(void)resetArray:(id)array;
+(void)updateArray:(id)array;
+(EffectFeatures)featuresFromEffectArray:(id)effectArray;
-(id).cxx_construct;
-(float)getToScale;
-(float)getFromScale;
-(void)setFactor:(float)factor;
-(void)setdTime:(float)time;
-(id)status;
-(void)setStatus:(id)status;
-(BOOL)isKeepValueAfterEffect;
-(void)setKeepValueAfterEffect:(BOOL)effect;
-(int)textureIndex;
-(void)setTextureIndex:(int)index;
-(float)stepDelay;
-(void)setStepDelay:(float)delay;
-(float)delay;
-(void)setDelay:(float)delay;
-(float)stepDuration;
-(void)setStepDuration:(float)duration;
-(float)duration;
-(void)setDuration:(float)duration;
-(float)effectTime;
-(void)setEffectTime:(float)time;
-(float)getScale;
-(float)scale;
-(void)setScale:(float)scale;
-(CGPoint)position;
-(void)setPosition:(CGPoint)position;
-(float)rotate;
-(void)setRotate:(float)rotate;
-(float)alpha;
-(void)setAlpha:(float)alpha;
-(BOOL)isChangePart;
-(void)setChangePart:(BOOL)part;
-(BOOL)isChangeWeapon;
-(void)setChangeWeapon:(BOOL)weapon;
-(void)setFromRotate:(float)rotate toRotate:(float)rotate2;
-(void)setToRotate:(float)rotate;
-(void)setFromRotate:(float)rotate;
-(void)setFromScale:(float)scale toScale:(float)scale2;
-(void)setFromPosition:(CGPoint)position toPosition:(CGPoint)position2;
-(void)setFromAlpha:(float)alpha toAlpha:(float)alpha2;
-(void)setFromScale:(float)scale;
-(void)setToScale:(float)scale;
-(void)setFromPosition:(CGPoint)position;
-(void)setToPosition:(CGPoint)position;
-(void)setFromAlpha:(float)alpha;
-(void)setToAlpha:(float)alpha;
-(BOOL)isEnded;
-(void)setEnded:(BOOL)ended;
-(void)setStartShooting:(BOOL)shooting;
-(BOOL)isStartOfShooting;
-(void)playSound:(id)sound SoundManager:(id)manager;
-(void)updateInOneFrame;
-(void)update;
-(void)endOfEffect;
-(void)startEffect;
-(void)resetEffect;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initAsTargetEffectWithDuration:(int)duration delay:(int)delay keepValueAfterEffect:(BOOL)effect textureIndex:(int)index startShooting:(BOOL)shooting factor:(float)factor dTime:(float)time;
-(id)initAsTargetEffectWithDuration:(int)duration delay:(int)delay keepValueAfterEffect:(BOOL)effect textureIndex:(int)index startShooting:(BOOL)shooting parentClass:(id)aClass;
-(id)initWithDuration:(int)duration delay:(int)delay keepValueAfterEffect:(BOOL)effect textureIndex:(int)index factor:(float)factor dTime:(float)time;
-(id)initWithDuration:(int)duration delay:(int)delay keepValueAfterEffect:(BOOL)effect textureIndex:(int)index parentClass:(id)aClass;
@end
