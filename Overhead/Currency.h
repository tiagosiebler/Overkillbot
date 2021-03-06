/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Currency : XXUnknownSuperclass {
@private
	int money;
	int medals;
}
+(id)sharedCurrency;
-(void)load;
-(void)save;
-(void)assignMoney:(int)money;
-(void)spendMoney:(int)money;
-(void)addMoney:(int)money;
-(void)spendMedals:(int)medals;
-(void)addMedals:(int)medals;
-(void)updateMedals:(int)medals;
-(int)money;
-(int)medals;
@end

