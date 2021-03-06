/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Drawable.h"
#import "Overkill-Structs.h"

@class NSMutableArray, Texture2D;

__attribute__((visibility("hidden")))
@interface Killpedia : Drawable {
@private
	Texture2D* background;
	Texture2D* front;
	Texture2D* menu;
	Texture2D* arrow;
	int counter;
	BOOL releaseKillpedia;
	BOOL firstRun;
	NSMutableArray* effect_arrow;
	BOOL menuBtn_show;
}
-(void)dealloc;
-(BOOL)touch:(CGPoint)touch;
-(void)previousTip;
-(void)nextTip;
-(void)draw;
-(void)setFirstRun:(BOOL)run;
-(id)init;
@end

