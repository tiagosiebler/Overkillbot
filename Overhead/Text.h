/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EAGLView, Texture2D, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Text : XXUnknownSuperclass {
@private
	CGPoint position;
	CGPoint speed;
	float actTime;
	float totalTime;
	float delay;
	NSMutableArray* textures;
	int index;
	BOOL picture;
	Texture2D* tex;
	EAGLView* eagl;
}
-(id).cxx_construct;
-(BOOL)remove;
-(float)time;
-(CGPoint)position;
-(void)dealloc;
-(void)drawText;
-(id)initWithTextAtCenter:(id)center position:(CGPoint)position totalTime:(float)time parentclass:(id)parentclass;
-(id)initWithText:(id)text position:(CGPoint)position totalTime:(float)time parentclass:(id)parentclass;
-(id)initWithText:(id)text position:(CGPoint)position totalTime:(float)time delay:(float)delay parentclass:(id)parentclass;
-(id)initAtPosition:(CGPoint)position totalTime:(float)time tex:(id)tex index:(int)index parentclass:(id)parentclass;
@end

