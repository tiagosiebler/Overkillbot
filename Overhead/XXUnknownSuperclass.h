/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NBSImageManagerDelegate.h"


@interface XXUnknownSuperclass (NSObject_SBJSON)
-(id)JSONRepresentation;
-(id)JSONFragment;
@end

@interface XXUnknownSuperclass (NSString_SBJSON)
-(id)JSONValue;
-(id)JSONFragmentValue;
@end

@interface XXUnknownSuperclass (SHK)
-(id)pageTitle;
@end

@interface XXUnknownSuperclass (OAParameterAdditions)
-(void)setParameters:(id)parameters;
-(id)parameters;
@end

@interface XXUnknownSuperclass (OAURLEncodingAdditions)
-(id)URLDecodedString;
-(id)URLEncodedString;
@end

@interface XXUnknownSuperclass (OABaseAdditions)
-(id)URLStringWithoutQuery;
@end

@interface XXUnknownSuperclass (SHK)
-(void)SHKviewDidDisappear:(BOOL)shkview;
@end

@interface XXUnknownSuperclass (Hardware)
-(unsigned)platformType;
-(id)platformString;
-(id)platform;
@end

@interface XXUnknownSuperclass (Cache) <NBSImageManagerDelegate>
-(void)webImageManager:(id)manager didFinishWithImage:(id)image;
-(void)setImageWithUrl:(id)url placeHolder:(id)holder;
-(void)setImageWithUrl:(id)url;
@end

@interface XXUnknownSuperclass (MD5)
-(id)MD5;
@end

@interface XXUnknownSuperclass (NSObject_SBJson3Writing)
-(id)JSONRepresentation;
@end

@interface XXUnknownSuperclass (NSString_SBJson3Parsing)
-(id)JSONValue;
@end

@interface XXUnknownSuperclass (Hardware)
-(id)platformCode;
-(id)macaddress;
-(id)platformString;
-(unsigned)platformType;
-(id)freeDiskSpace;
-(id)totalDiskSpace;
-(unsigned)maxSocketBufferSize;
-(unsigned)userMemory;
-(unsigned)totalMemory;
-(unsigned)busFrequency;
-(unsigned)cpuFrequency;
-(unsigned)getSysInfo:(unsigned)info;
-(id)hwmodel;
-(id)platform;
-(id)getSysInfoByName:(char*)name;
@end

