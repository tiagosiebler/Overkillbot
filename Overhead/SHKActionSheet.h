/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SHKItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SHKActionSheet : XXUnknownSuperclass <UIActionSheetDelegate> {
@private
	NSMutableArray* sharers;
	SHKItem* item;
}
@property(retain) SHKItem* item;
@property(retain) NSMutableArray* sharers;
+(id)actionSheetForItem:(id)item;
+(id)actionSheetForType:(int)type;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(void)dealloc;
@end
