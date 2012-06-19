/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "AVAudioPlayerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, AVAudioPlayer;

__attribute__((visibility("hidden")))
@interface SingletonSoundManager : XXUnknownSuperclass <AVAudioPlayerDelegate> {
@private
	ALCcontext_structRef context;
	ALCdevice_structRef device;
	NSMutableArray* soundSources;
	NSMutableDictionary* soundLibrary;
	NSMutableDictionary* soundPlayed;
	NSMutableDictionary* musicLibrary;
	AVAudioPlayer* backgroundMusicPlayer;
	float backgroundMusicVolume;
	float soundVolume;
	float soundVolume2;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedSoundManager;
-(void)dealloc;
-(float)soundVolume2;
-(void)setSoundVolume2:(float)a2;
-(float)soundVolume;
-(void)setSoundVolume:(float)volume;
-(void)setGainToAllSources:(float)allSources;
-(void)setPitchToAllSources:(float)allSources;
-(id)autorelease;
-(void)release;
-(unsigned)retainCount;
-(id)retain;
-(unsigned)nextAvailableSource;
-(void)setSourcePitch:(float)pitch sourceID:(int)anId;
-(void)setSourceGain:(float)gain sourceID:(int)anId;
-(void)setSourcePosition:(CGPoint)position sourceID:(int)anId;
-(void)setBackgroundMusicVolume:(float)volume;
-(void)stopPlayingMusic;
-(float)backgroundMusicVolume;
-(void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
-(id)backgroundMusicPlayer;
-(int)numberOfLoops;
-(double)duration;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)playMusicWithKey:(id)key timesToRepeat:(unsigned)repeat;
-(void)stopSoundWithSourceID:(int)sourceID;
-(void)stopSoundWithKey:(id)key;
-(unsigned)playSoundWithKey:(id)key gain:(float)gain pitch:(float)pitch location:(CGPoint)location shouldLoop:(BOOL)loop actTime:(float)time next:(float)next;
-(unsigned long)audioFileSize:(OpaqueAudioFileID*)size;
-(OpaqueAudioFileID*)openAudioFile:(id)file;
-(void)loadBackgroundMusicWithKey:(id)key fileName:(id)name fileExt:(id)ext;
-(void)loadSoundWithKey:(id)key fileName:(id)name fileExt:(id)ext frequency:(unsigned)frequency;
-(void)shutdownSoundManager;
-(BOOL)initOpenAL;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
@end

