/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Overkill-Structs.h"

@class Texture2D;

__attribute__((visibility("hidden")))
@interface Image : XXUnknownSuperclass {
@private
	Texture2D* texture;
	unsigned imageWidth;
	unsigned imageHeight;
	unsigned textureWidth;
	unsigned textureHeight;
	float maxTexWidth;
	float maxTexHeight;
	float texWidthRatio;
	float texHeightRatio;
	unsigned textureOffsetX;
	unsigned textureOffsetY;
	float rotation;
	float scale;
	BOOL flipHorizontally;
	BOOL flipVertically;
	float colourFilter[4];
	Quad2* vertices;
	Quad2* texCoords;
	unsigned short* indices;
}
@property(assign, nonatomic) Quad2* texCoords;
@property(assign, nonatomic) Quad2* vertices;
@property(assign, nonatomic) BOOL flipHorizontally;
@property(assign, nonatomic) BOOL flipVertically;
@property(assign, nonatomic) float scale;
@property(assign, nonatomic) float rotation;
@property(assign, nonatomic) unsigned textureOffsetY;
@property(assign, nonatomic) unsigned textureOffsetX;
@property(readonly, assign, nonatomic) float texHeightRatio;
@property(readonly, assign, nonatomic) float texWidthRatio;
@property(readonly, assign, nonatomic) unsigned textureHeight;
@property(readonly, assign, nonatomic) unsigned textureWidth;
@property(assign, nonatomic) unsigned imageHeight;
@property(assign, nonatomic) unsigned imageWidth;
@property(readonly, assign, nonatomic) Texture2D* texture;
-(void)setAlpha:(float)alpha;
-(void)setColourFilterRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)renderAt:(CGPoint)at texCoords:(Quad2*)coords quadVertices:(Quad2*)vertices;
-(void)renderSubImageAtPoint:(CGPoint)point offset:(CGPoint)offset subImageWidth:(float)width subImageHeight:(float)height centerOfImage:(BOOL)image;
-(void)renderAtPoint:(CGPoint)point centerOfImage:(BOOL)image;
-(void)calculateVerticesAtPoint:(CGPoint)point subImageWidth:(unsigned)width subImageHeight:(unsigned)height centerOfImage:(BOOL)image;
-(void)calculateTexCoordsAtOffset:(CGPoint)offset subImageWidth:(unsigned)width subImageHeight:(unsigned)height;
-(id)getSubImageAtPoint:(CGPoint)point subImageWidth:(unsigned)width subImageHeight:(unsigned)height scale:(float)scale;
-(id)description;
-(void)initImpl;
-(id)initWithImage:(id)image scale:(float)scale filter:(unsigned)filter name:(id)name;
-(id)initWithImage:(id)image scale:(float)scale;
-(id)initWithImage:(id)image filter:(unsigned)filter;
-(id)initWithImage:(id)image;
-(id)initWithTexture:(id)texture scale:(float)scale;
-(id)initWithTexture:(id)texture;
-(id)init;
-(void)dealloc;
@end

