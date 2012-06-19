/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TJCCoreFetcherHandler.h"
#import "TJCWebFetcherDelegate.h"


__attribute__((visibility("hidden")))
@interface TJCUserAccountRequestHandler : TJCCoreFetcherHandler <TJCWebFetcherDelegate> {
}
-(void)dealloc;
-(void)userAccountDataReceived:(id)received;
-(void)addTapPoints:(int)points;
-(void)subtractTapPoints:(int)points;
-(void)requestTapPoints;
-(id)initRequestWithDelegate:(id)delegate andRequestTag:(int)tag;
@end

