/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "GKMatchmakerViewControllerDelegate.h"
#import "GKMatchDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WeaponsCampView, Multiplayer_WeaponsShopView, MenuView, MultiplayerInvitedPlayersList, NSString, NSMutableDictionary, NSArray, NSOperationQueue, GKMatch, GKInvite;
@protocol MultiplayerInvitationReceiver;

__attribute__((visibility("hidden")))
@interface Multiplayer : XXUnknownSuperclass <GKMatchmakerViewControllerDelegate, GKMatchDelegate> {
@private
	BOOL gameCenterAvailable;
	BOOL userAuthenticated;
	GKMatch* match;
	BOOL matchStarted;
	NSMutableDictionary* playersDict;
	GKInvite* pendingInvite;
	NSArray* pendingPlayersToInvite;
	NSString* otherPlayerID;
	MultiplayerData_shot shotsData[10];
	int shotsDataCounter;
	float shotsDataTime;
	CGPoint targetCoordinates;
	BOOL sendTargetCoordinatesAllowed;
	float targetCoordinatesTime;
	CGPoint receivedTargetCoordinates;
	float metricCoeficient;
	float metricXOffset;
	float metricYOffset;
	BOOL boughtWeapon[4];
	int victories[4];
	int games[4];
	id<MultiplayerInvitationReceiver> invitationReceiver;
	int timeRemainingToRematchAccept;
	float lastReceivedMessageTime;
	int otherPlayerWinsInSelectedTier;
	int otherPlayerLosesInSelectedTier;
	BOOL isServer;
	NSOperationQueue* sendingQueue;
	MultiplayerInvitedPlayersList* invitedPlayerList;
	float timeWhenSendTypingStatus;
	BOOL blockedReceiveRandomInit;
	BOOL findPlayerModalWindowActive;
	MenuView* menuView;
	WeaponsCampView* weaponsCampView;
	Multiplayer_WeaponsShopView* weaponsShopView;
	BOOL isMultiplayer;
	BOOL received_waveData;
	Multiplayer_generatedWaveData data_waves;
	BOOL used_waveData;
	BOOL readyToGenerateWave_thisDevice;
	BOOL readyToGenerateWave_anotherDevice;
	BOOL generateWaveAllowed;
	BOOL sendShotsDataAllowed;
	BOOL sendGameOverAllowed;
	float scoreWithHitMultiplier;
	BOOL blueTeam_activeNegativeScore;
	NSString* otherPlayerName;
	BOOL selectedWeapon;
	int selectedTier;
	int generatingMod;
	int selectedTier_victories;
	float sendingTime;
	int thisPlayerRoundsScore;
	int otherPlayerRoundsScore;
	bool drawingMultiplayerShop;
	bool setGamePause;
}
@property(assign) bool drawingMultiplayerShop;
@property(assign) bool setGamePause;
@property(readonly, assign) int otherPlayerRoundsScore;
@property(readonly, assign) int thisPlayerRoundsScore;
@property(assign) float sendingTime;
@property(readonly, assign) int selectedTier_victories;
@property(assign) int selectedTier;
@property(readonly, assign) int generatingMod;
@property(assign) BOOL selectedWeapon;
@property(readonly, assign) NSString* otherPlayerID;
@property(readonly, assign) NSString* otherPlayerName;
@property(assign) BOOL blueTeam_activeNegativeScore;
@property(assign) float scoreWithHitMultiplier;
@property(assign) BOOL sendGameOverAllowed;
@property(assign) BOOL sendShotsDataAllowed;
@property(assign) BOOL generateWaveAllowed;
@property(assign) BOOL readyToGenerateWave_anotherDevice;
@property(assign) BOOL readyToGenerateWave_thisDevice;
@property(assign) Multiplayer_generatedWaveData data_waves;
@property(assign) BOOL used_waveData;
@property(assign) BOOL received_waveData;
@property(assign) BOOL isServer;
@property(assign) BOOL isMultiplayer;
@property(assign) Multiplayer_WeaponsShopView* weaponsShopView;
@property(assign) WeaponsCampView* weaponsCampView;
@property(assign) MenuView* menuView;
@property(retain) NSArray* pendingPlayersToInvite;
@property(retain) GKInvite* pendingInvite;
@property(retain) NSMutableDictionary* playersDict;
@property(retain) GKMatch* match;
@property(readonly, assign) BOOL gameCenterAvailable;
+(id)sharedMultiplayer;
-(id).cxx_construct;
-(void)cancelMatch;
-(BOOL)canCallCancelMatch;
-(void)setBlock_receiveRandomInit:(BOOL)init;
-(BOOL)canBuySupportItemInGame;
-(BOOL)canUseChat;
-(BOOL)isPlaying;
-(id)invitedPlayerList;
-(void)checkMatchInitializationDeadlock;
-(void)disableMatchInitializationDeadlockCheck;
-(void)initializeMatchInitializationDeadlockCheck;
-(BOOL)isAuthenticated;
-(double)getConnectionTimeout;
-(void)setInvitationReceiver:(id)receiver;
-(void)saveMultiplayer;
-(void)loadMultiplayer;
-(void)setWeaponBought:(BOOL)bought tierIndex:(int)index;
-(BOOL)isWeaponBought:(int)bought;
-(void)update:(float)update;
-(void)recordInvitationOfPlayer;
-(CGPoint)getReceivedTargetCoordinates;
-(void)setTargetCoordinates:(CGPoint)coordinates;
-(void)resetOtherPlayerScore;
-(int)getOtherPlayerScore;
-(int)getSelectedTierVictories;
-(void)addShotsData:(MultiplayerData_shot)data;
-(void)match:(id)match didReceiveData:(id)data fromPlayer:(id)player;
-(void)receiveYouAreInviter;
-(void)receiveOtherPlayerStats:(XXStruct_ZIZXLC*)stats;
-(void)receiveRematchRequest:(XXStruct_zPYw2A*)request;
-(void)receiveGameOver:(XXStruct_a8RBfB*)over;
-(void)receiveScore:(XXStruct_8dlm2D*)score;
-(void)receiveCanStartCamp;
-(void)receiveWaveData:(XXStruct_7cLWIA*)data;
-(void)receiveRandomInitialization:(XXStruct_8dlm2D*)initialization;
-(void)receiveSelectedTier:(XXStruct_g_mBRC*)tier;
-(void)receivePing;
-(void)sendTypingStatus:(BOOL)status;
-(void)sendChatMessage:(id)message;
-(void)sendYouAreInviter;
-(void)sendOtherPlayerStatsWins:(int)wins loses:(int)loses;
-(void)sendRematchRequest;
-(void)sendOneTimeSupplyType:(int)type;
-(void)sendSupplyType:(int)type quantity:(int)quantity place:(int)place showTime:(int)time generate:(BOOL)generate collectedByServer:(BOOL)server;
-(void)sendTargetCoordinates;
-(void)sendShotsData;
-(void)sendReadyToGenerateWave;
-(void)sendGameOver:(int)over :(BOOL)arg2 :(int)arg3 :(int)arg4;
-(void)sendScore:(int)score;
-(void)sendCanStartCamp;
-(void)sendMicroWaveData:(Multiplayer_microWave)data;
-(void)sendWaveData:(Multiplayer_generatedWaveData)data;
-(void)sendRandomNumber;
-(void)sendSelectedTier;
-(void)sendPing;
-(void)sendData:(id)data :(bool)arg2;
-(bool)canSendData;
-(void)sendDataToUnreliableQueue:(id)unreliableQueue;
-(void)sendDataToReliableQueue:(id)reliableQueue;
-(int)getOtherPlayerLosesInSelectedTier;
-(int)getOtherPlayerWinsInSelectedTier;
-(int)getLosesInSelectedTier;
-(int)getGamesInSelectedTier;
-(void)loadLeaderboardGames;
-(void)loadLeaderboardGamesForCategory:(id)category tier:(int)tier;
-(void)increaseLeaderboardGames:(int)games;
-(void)increaseLeaderboardGames;
-(id)getLeaderboardCategoryGames;
-(int)getWinsInSelectedTier;
-(void)loadLeaderboardWins;
-(void)loadLeaderboardWinsForCategory:(id)category tier:(int)tier;
-(void)saveTheLostGame;
-(void)opponentAffectedLeft:(BOOL)left;
-(void)increaseLeaderboardWins;
-(id)getLeaderboardCategoryWins;
-(bool)victory;
-(void)inviteReceived;
-(bool)shouldShowMultiplayerEndMenu;
-(bool)shouldPause:(bool)pause;
-(bool)shouldWaitForRematchRematchAccept;
-(int)remainingSecsForRematchAccept;
-(void)decreaseRemainingSecsForRematchAccept;
-(bool)isOpponentLeftByThisPlayer;
-(bool)isOpponentLeftAndWin;
-(bool)isConnectionLost;
-(bool)isOpponentLeft;
-(bool)isWaitingForRematchAccept;
-(bool)isWaitingForRematch;
-(bool)isWaitingForQuit;
-(bool)canRender;
-(bool)canStartCamp;
-(bool)tierAvailable;
-(void)matchEnded;
-(void)matchEndedGoTo:(int)to;
-(void)matchStarted;
-(void)match:(id)match didFailWithError:(id)error;
-(void)match:(id)match connectionWithPlayerFailed:(id)playerFailed withError:(id)error;
-(void)match:(id)match player:(id)player didChangeState:(int)state;
-(void)matchmakerViewController:(id)controller didFindMatch:(id)match;
-(void)matchmakerViewController:(id)controller didFailWithError:(id)error;
-(void)matchmakerViewControllerWasCancelled:(id)cancelled;
-(void)cancelConnection;
-(void)findMatchWithMinPlayers:(int)minPlayers maxPlayers:(int)players;
-(void)startGame;
-(void)restartGame;
-(void)resetMultiplayer;
-(void)authenticateLocalUser;
-(void)lookupPlayers;
-(void)inviteAlert;
-(void)setInviteHandler:(BOOL)handler;
-(void)authenticationChanged;
-(id)init;
-(BOOL)isNewestVersion;
-(BOOL)isGameCenterAvailable;
@end

