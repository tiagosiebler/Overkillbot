/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, Image, CharDef;

__attribute__((visibility("hidden")))
@interface AngelCodeFont : XXUnknownSuperclass {
@private
	Image* image;
	CharDef* charsArray[512];
	unsigned lineHeight;
	float colourFilter[4];
	float scale;
	NSMutableDictionary* KerningDictionary;
	Quad2* texCoords;
	Quad2* vertices;
	unsigned short* indices;
}
@property(retain, nonatomic) Image* image;
@property(assign, nonatomic) float scale;
-(void)dealloc;
-(void)setColourFilterRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(int)getHeightForString:(id)string;
-(int)getWidthForString:(id)string;
-(void)drawStringAt:(CGPoint)at text:(id)text alignment:(int)alignment;
-(void)drawStringAt:(CGPoint)at text:(id)text;
-(void)parseCharacterDefinition:(id)definition charDef:(id)def;
-(int)kerningAmountForFirst:(unsigned short)first second:(unsigned short)second;
-(void)parseKerningEntry:(id)entry;
-(void)parseKerningCapacity:(id)capacity;
-(void)initVertexArrays:(int)arrays;
-(void)parseFont:(id)font;
-(id)initWithFontImageNamed:(id)fontImageNamed controlFile:(id)file scale:(float)scale filter:(unsigned)filter;
@end

