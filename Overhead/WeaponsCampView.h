/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@class Effect, Particle, SingletonSoundManager, Texture2D, Options, UIActivityIndicatorView, ExperienceBar, Endround, SingletonTextureManager, Obstacle, NSTimer, CMMotionManager, EAGLContext, NSString, Multiplayer, NSMutableDictionary, FlashScreen, Chat, NSMutableArray;


@interface WeaponsCampView : UIView  {
/*@private
	BOOL goToMainmenu;
	int outto;
	BOOL loadedPercent;
	BOOL animating;
	BOOL running;
	BOOL displayLinkSupported;
	int animationFrameInterval;
	id displayLink;
	NSTimer* animationTimer;
	EAGLContext* context;
	int backingWidth;
	int backingHeight;
	unsigned defaultFramebuffer;
	unsigned colorRenderbuffer;
	unsigned viewRenderbuffer;
	unsigned viewFramebuffer;
	StunGrenade* stunGrenade;
	unsigned depthRenderbuffer;
	UIActivityIndicatorView* webSpinner;
	NSMutableDictionary* dTextures;
	NSMutableDictionary* dTexValues;
	NSMutableDictionary* dEffectTiming;
	NSMutableDictionary* dTargetZones;
	NSMutableDictionary* dTargetTexNames;
	NSMutableArray* effectContainer;
	NSMutableArray* _particles;
	NSMutableArray* _bloodScreenParticles;
	Particle* _bloodScreenParticle;
	NSMutableArray* _container;
	NSMutableArray* _templateTarget;
	NSMutableArray* _templateSupply;
	int _campPicturesCounter;
	Effect* effect;
	int effectObjectCounter;
	int campID;
	NSString* nameOfKey;
	NSString* targerZone_key;
	int effectID;
	NSMutableArray* tmpTexValuesArray;
	NSMutableArray* tmpEffectArray;
	NSMutableArray* tmpAllEffectArray;
	NSMutableArray* tmpAllAirEffectArray;
	NSMutableArray* tmpTargetZoneArray;
	NSString* targetZone_key;
	NSString* targetTextures_key;
	NSString* destroyEffect_key;
	NSMutableArray* shotTiming;
	BOOL _targetEditor;
	BOOL drawTargetZones;
	BOOL draging;
	NSString* targetEditor_key;
	int targetEditor_texturePart;
	CGPoint targetEditor_position;
	CGPoint targetEditor_shiftPosition;
	Texture2D* tNumber8[10];
	Texture2D* tNumber8B[10];
	Texture2D* tNumber10[10];
	Texture2D* tNumber10B[10];
	Texture2D* tNumber12[10];
	Texture2D* tNumber12B[10];
	Texture2D* tNumber14[10];
	Texture2D* tNumber14B[10];
	Texture2D* tNumber16[10];
	Texture2D* tNumber16B[10];
	Texture2D* tNumber18[10];
	Texture2D* tNumber18B[10];
	Texture2D* tNumber20[10];
	Texture2D* tNumber20B[10];
	Texture2D* tNumber26[10];
	Texture2D* tNumber26B[10];
	CGPoint ratio;
	float retinaScale;
	float screenShift;
	float screenShift_iPod;
	float dTime;
	float factor;
	BOOL _iPad;
	BOOL _iPod4;
	BOOL _iPod4WithScale;
	BOOL _iPadNew;
	int _totalTime;
	int score;
	int totalScore;
	int scoreForWave;
	int scoreBonus;
	int scoreBonus_forDraw;
	int scoreBonus_forDraw_negative;
	float multiplayerTimeStarted;
	float multiplayerTimeToEnd;
	float multiplayerTimeToPlaySound;
	BOOL gameOver;
	float _rate_cadence_normalAmmo;
	float _rate_cadence_shellAmmo;
	float _rate_reloadingDelay_normalAmmo;
	float _rate_reloadingDelay_shellAmmo;
	float _timeToStartGame;
	int _activeTargets;
	int _aliveTargets;
	float _health;
	float _defaultHealth;
	float _regeneration;
	float _damagePerTime_damage;
	float _damagePerTime_prev_damage;
	float _damagePerTime_time;
	int _level;
	int _weaponsCount;
	int _availableWeapons;
	int _weaponIndex;
	int _newWeaponIndex;
	int _enemiesCount[20];
	WeaponCfg _weapons[18];
	BOOL stepEnemy;
	BOOL _firing;
	BOOL _ceaseFire;
	BOOL _texturesLoaded;
	BOOL _soundsLoaded;
	CGPoint _target;
	CGPoint _accuracyShot;
	NSString* _weaponName;
	int _money;
	int _kills;
	BOOL _autoloadingArm;
	BOOL _grenadelauncher;
	BOOL _ammoMode_grenadeLauncher;
	BOOL _weaponType_grenadeLauncher;
	AmmoConfig _ammo_normal;
	AmmoConfig _ammo_shell;
	Texture2D* _texture[90];
	Texture2D* _tutorialTextures[6];
	BOOL usingJoystick;
	CGPoint lastMoveLocation;
	float sceneScale;
	float initialDistance;
	CGPoint positionOffset;
	CGPoint cameraOffset;
	CGPoint lastWorldTouch;
	CGPoint lastScreenTouch;
	CGPoint _lastJoyTouch;
	bool panning;
	int doubleClickValidCountdown;
	AppConfig options;
	SingletonSoundManager* sharedSoundManager;
	BOOL _sound_shot;
	BOOL isPlaying_heartbeat;
	unsigned heartbeat_soundSource;
	int _prevState;
	int _state;
	int _pauseState;
	Texture2D* t_strelazablesk;
	CGPoint _shootOffset;
	float _accuracyShotOffset;
	BOOL isEffectEnded;
	float _grenade_extentOfDamage;
	int _game_targetDown;
	int _game_targetNonDown;
	TargetConfig _targetConfig[13];
	int _cfg_ammo_max_normal;
	int _cfg_ammo_max_shell;
	float _cfg_accurancy_range;
	timeval tv;
	timeval last_time;
	timezone tz;
	tm* tm;
	int sec_before;
	int usec_before;
	float fps[100];
	int fpsCounter;
	MyTouch _myTouches_fire;
	MyTouch _myTouches_target;
	MyTouch _myTouches_previousWeapon;
	MyTouch _myTouches_nextWeapon;
	MyTouch _myTouches_changeWeapon_left;
	MyTouch _myTouches_changeWeapon_right;
	float touchEnded_delay;
	float touchBegan_delay;
	BOOL touchGestures_changeWeapon;
	float changeWeapon_actualOffset;
	float changeWeapon_startOffset;
	int changeWeapon_rowCounter;
	float healthBar_red;
	float healthBar_green;
	float healthBar_blue;
	NSMutableDictionary* dAwards;
	NSMutableDictionary* dBonuses;
	NSMutableDictionary* dTexturesBonuses;
	NSMutableDictionary* dBonusInWave;
	NSMutableArray* dExtras;
	ExperienceBar* experienceBar;
	Endround* endround;
	int gunScrollWidth;
	CGPoint gunScrollOffset;
	CGPoint touchStarted;
	CGPoint touchEnded;
	float scrollingSpeed;
	bool scrollTouching;
	int touch_weaponIndex_row1;
	int touch_weaponIndex_row2;
	BOOL dead;
	float deadTime;
	float recoveredTime;
	float timeInEndround;
	float pauseTime_buyInRound;
	float bonusScoreTime;
	float bonusActiveTime;
	BOOL campTexturesLoaded;
	int lowerExp;
	int higherExp;
	Rank lowerRank;
	Rank higherRank;
	Rank rank[30];
	int rankCounter;
	int higherRankIndex;
	Award award[43];
	int awardCounter;
	int firstWeaponIndex;
	Bonus bonus[6];
	Bonus multiplayer_bonus[17];
	int bonusCounter;
	int fastReloadingCount;
	float _coeficient;
	float doubleTapTime;
	int doubleTapShots;
	int doubleTapHits;
	WaveOfEnemies _waves[100][100];
	int _waves_Count[100];
	WaveOfEnemies actualWave[100];
	int actualWave_Count;
	WaveRange _waveList[100];
	int _waveList_count;
	NSMutableArray* _waveContainer;
	int actualWaveList;
	int wavesCompleted;
	BOOL loadNewContainer;
	int miniwavesCompleted;
	BOOL lastWaveGenerating;
	float pauseTime_waveClear;
	int miniWavesCount;
	int actualWave_TargetCount;
	int actualWave_TargetLeft;
	BOOL usedBuyInRound;
	BOOL enableBuyInRound;
	float _moneyMultiplier;
	float waitTimeAfterDead;
	BOOL bloodScreenGenerated;
	Settings settings;
	float _baseHealth;
	SingletonTextureManager* sharedTextureManager;
	CGPoint inaccuracyForesight;
	float gui_muzzleTime;
	int waveComplete_count;
	int _levelMoney;
	int _bonusMoney;
	int parser_id;
	int parser_compositeScopeID;
	CompositeForesight _compositeForesight;
	int scoreBonus_buyInRound;
	BOOL showRadio;
	Obstacle* tmpObstacle;
	float gui_foresightScale;
	int selectedCamp;
	CGPoint greenCircle1;
	CGPoint greenCircle2;
	CGPoint greenCircle3;
	int _manualFireTime;
	BOOL _manualFire;
	int reloadingPhase;
	int screenShake_pixelRange;
	int screenShake_shakeCount;
	float screenShake_time;
	float screenShake_nextShakeTime;
	float screenShake_presetTime;
	int touchCounter;
	CMMotionManager* motionManager;
	CGPoint buyInIconPosition;
	float buyInIconScale;
	BOOL _userLoggedIn;
	BOOL anyRemainingAmmo;
	float anyRemainingAmmo_time;
	float anyRemainingAmmo_defTime;
	BOOL show_waveClear;
	BOOL show_waveStart;
	Options* optionsMenu;
	float soundVolume;
	BOOL options_blood;
	BOOL options_autoswitch;
	BOOL options_crosshair;
	BOOL hellWave;
	BOOL hellWaveCleared;
	BOOL _tutorial;
	BOOL tutorialtexturesLoaded;
	Tutorial tutorialNeeds;
	SuppliesQuantity generatedSuppliesInWave;
	SuppliesQuantity collectedSuppliesInWave;
	SuppliesQuantity activeSupplies;
	TimerSupplies timerSupplies;
	Texture2D* explosionBack;
	BOOL showRentWeaponTable;
	float showRentWeaponTable_time;
	RentWeapon rentWeapon;
	int maxWaveCompletedInCamp;
	float timeToCheckRentWeapon;
	BOOL runningOnOldHardware;
	int outDelay;
	int performDelayedAction;
	float btn_scale_quit;
	float btn_scale_options;
	float btn_scale_resume;
	NSMutableArray* explosionTiming;
	Texture2D* minigun_animationTexture[3];
	float minigun_animationDelay;
	float minigun_animationDelayMin;
	float minigun_animationDelayMax;
	float minigun_animationTime;
	BOOL minigun_soundFire;
	BOOL minigun_soundPush;
	int minigun_frame;
	BOOL minigun_animationTexturesLoaded;
	BOOL _screenRotated;
	int multiplayer_actualMiniwave;
	Multiplayer_generatedWaveData multiplayer_generatedWaveData;
	NSMutableArray* multiplayer_shotsDataArray;
	CGPoint multiplayer_targetCoordinates1;
	CGPoint multiplayer_targetCoordinates2;
	Effect* multiplayer_targetCoordinatesEffect;
	FlashScreen* multiplayer_flashScreen;
	BOOL unloadTexturesAllowed;
	BOOL unloadParticlesAllowed;
	float multiplayerTimeToGenerateWave;
	int multiplayer_counterToGenerateSupply;
	int multiplayer_aliveTargets_teamRed;
	int multiplayer_aliveTargets_teamBlue;
	int multiplayer_aliveTargets_teamBonus;
	Multiplayer_microWave multiplayer_microWaveToGenerate;
	int multiplayer_unitId;
	MultiplayerSettings multiplayerSettings;
	BOOL _isMultiplayer;
	int shotsOnTarget;
	int shotsTotalFired;
	int kills;
	int boxesTotal;
	int boxesHit;
	BOOL canUseEndRoundMenu;
	int remainingWinsToNextUpgrade;
	BOOL buyTierAlertShoewed;
	Multiplayer_unitTypes multiplayer_unitsOnField_allies;
	Multiplayer_unitTypes multiplayer_unitsOnField_enemy;
	Multiplayer_unitTypes multiplayer_unitsOnField_bonus;
	Multiplayer* sharedMultiplayer;
	float multiplayer_countdown_time;
	float multiplayer_countdown_showNumber;
	int multiplayer_hitOpponentUnit_counter;
	int multiplayer_hitOpponentUnit_nextWarning;
	NSMutableDictionary* dEffects;
	NSMutableDictionary* dTexts;
	NSMutableArray* fonts;
	float multiplayerMaxNameWidth;
	float multiplayer_supplyItem_time;
	BOOL multiplayer_supplyItem_startEffect_recover;
	BOOL multiplayer_saveJoystickSensitivity;
	Chat* multiplayer_chat;
	float multiplayer_chat_timeToEndTyping;
	int multiplayer_game_points_limit;
 */
}
/*@property(assign) Settings settings;
@property(assign) float _damagePerTime_damage;
@property(assign) float _health;
@property(assign, nonatomic) NSMutableArray* _particles;
@property(assign) int _game_targetNonDown;
@property(assign) int _game_targetDown;
@property(assign) int state;
@property(assign) int scoreBonus;
@property(assign, nonatomic) NSMutableDictionary* dTextures;
@property(assign, nonatomic) NSMutableDictionary* dTexValues;
@property(assign, nonatomic) NSMutableDictionary* dTargetZones;
@property(assign, nonatomic) NSMutableDictionary* dEffects;
@property(assign, nonatomic) NSMutableArray* dExtras;
@property(readonly, assign) int _weaponIndex;
@property(readonly, assign) float _grenade_extentOfDamage;
@property(readonly, assign) BOOL _ammoMode_grenadeLauncher;
@property(readonly, assign) Texture2D* explosionBack;
@property(readonly, assign) Texture2D* t_strelazablesk;
@property(readonly, assign) BOOL _iPod4WithScale;
@property(readonly, assign) BOOL _iPod4;
@property(readonly, assign) BOOL _iPad;
@property(readonly, assign) float factor;
@property(readonly, assign) float screenShift;
@property(readonly, assign) CGPoint ratio;
@property(readonly, assign) float dTime;
+(Class)layerClass;
//-(id).cxx_construct;
-(void)multiplayer_updateTypingStatus:(BOOL)status;
-(id)multiplayer_chat;
-(bool)canAcceptWinIfOpponentDisconnected;
-(void)setScore:(int)score;
-(void)inviteAlert;
-(void)inviteReceived;
-(void)endMultiplayerGameAndGoTo:(int)to;
-(void)setScreenRotation:(BOOL)rotation;
-(int)selectedCamp;
-(int)outto;
-(BOOL)goToMainmenu;
-(BOOL)isInRect:(CGRect)rect point:(CGPoint)point;
-(Color)getColor:(int)color;
-(void)accelerometer:(id)accelerometer didAccelerate:(id)accelerate;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event withView:(id)view;
-(void)touchesEnded:(id)ended withEvent:(id)event withView:(id)view;
-(void)touchesMoved:(id)moved withEvent:(id)event withView:(id)view;
-(void)touchesBegan:(id)began withEvent:(id)event withView:(id)view;
-(void)destroyFramebuffer;
-(BOOL)createFramebuffer;
-(void)layoutSubviews;
-(void)drawView;
-(void)drawWarning_dontShootRedUnits:(CGPoint)units;
-(void)drawCountdownAtPosition:(CGPoint)position;
-(void)drawLine:(CGPoint3f [100])line vertexCount:(int)count fillColor:(Color4)color;
-(void)placeTexture:(id)texture translate:(CGPoint)translate rotate:(float)rotate scale:(CGPoint)scale alignment:(int)alignment color:(Color4f)color;
-(void)placeTexture:(id)texture translate:(CGPoint)translate scale:(CGPoint)scale;
-(void)drawExtras;
-(void)drawScoreEffectFromTarget:(id)target;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)drawRectangle:(CGRect)rectangle;
-(void)drawNumber:(int)number atOffset:(CGPoint)offset scale:(float)scale;
-(void)drawMultidigitNumber:(int)number position:(CGPoint)position alignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale nofDigit:(int)digit digitOffset:(int)offset zerofill:(BOOL)zerofill showPlus:(BOOL)plus showMinus:(BOOL)minus effectKey:(id)key effectType:(id)type;
-(void)drawMultidigitNumber:(int)number position:(CGPoint)position alignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale nofDigit:(int)digit digitOffset:(int)offset zerofill:(BOOL)zerofill showPlus:(BOOL)plus showMinus:(BOOL)minus effectArray:(id)array;
-(void)drawNumber:(CGPoint)number number:(int)number2 offset:(float)offset;
-(void)drawText:(id)text atPosition:(CGPoint)position withAlignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation effectArray:(id)array;
-(void)drawText:(id)text atPosition:(CGPoint)position withAlignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation effectKey:(id)key effectType:(id)type;
-(void)drawText:(id)text atPosition:(CGPoint)position r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation effectKey:(id)key effectType:(id)type;
-(void)drawTextureFromObject:(id)object;
-(void)drawTarget:(id)target drawCircleGamut:(BOOL)gamut;
-(void)showSpinner:(BOOL)spinner;
-(void)drawBuyInRound_weapon:(int)round_weapon position:(CGPoint)position;
-(void)drawForesight:(CGPoint)foresight scale:(float)scale;
-(void)drawChangeWeaponWithPosition:(CGPoint)position;
-(void)drawRentWeaponTable:(int)table atPosision:(CGPoint)posision;
-(void)renderScoreBar;
-(void)renderGUI;
-(void)drawSupportItems;
-(void)renderMultiplayerEndRoundMenu;
-(void)renderMultiplayerPauseMenu;
-(void)renderMultiplayerGamutBarWithValue:(float)value position:(CGPoint)position color:(Color)color height:(float)height pixelDensity:(float)density playerNameTextureKey:(id)key typing:(BOOL)typing;
-(void)handleFiring:(int)firing;
-(int)indexOfNextBestWeapon;
-(void)waveComplete;
-(BOOL)canGenerate;
-(void)setRecoveryTime:(float)time;
-(void)loadAwardCompleted:(id)completed picName:(id)name additionalText:(id)text;
-(void)computeNewHigherRank;
-(int)waveBonusScore;
-(int)addMoney:(int)money;
-(void)setCoeficient;
-(void)setMoneyMultiplier;
-(void)completeReloadingAllWeapons;
-(void)completeReloading;
-(void)activateReloading;
-(void)checkWeaponCartridge;
-(int)remainingAmmo;
-(BOOL)anyRemainingAmmo;
-(void)clearCartridges_AllWeapons;
-(void)storeWeapon:(int)weapon resetReloading:(BOOL)reloading;
-(void)switchWeaponWay:(int)way;
-(void)switchWeapon:(int)weapon;
-(void)loadWeaponSetting:(int)setting resetReloading:(BOOL)reloading;
-(BuyAmmoForPrice)ammoQuantityForWeapon:(int)weapon;
-(float)distanceBetweenTwoPoints:(CGPoint)points toPoint:(CGPoint)point;
-(void)setScoreBonus_buyInRound;
-(void)setDefaultHealth;
-(void)addParticleWithName:(id)name position:(CGPoint)position scale:(float)scale atIndex:(int)index;
-(int)detectObstacleLayer:(CGPoint)layer;
-(void)detectTargetInExplosion:(id)explosion;
-(void)updateBombStrike;
-(void)addBombStrike:(id)strike damage:(float)damage;
-(void)addDustOnScreen:(int)screen;
-(void)updateScreenShake;
-(void)screenShakeWithDuration:(float)duration pixelRange:(int)range shakeCount:(int)count;
-(void)supplyReward:(id)reward;
-(void)getHit:(float)hit targetObject:(id)object;
-(void)getHit:(float)hit;
-(BOOL)returnWeapon:(int)weapon;
-(void)rentWeaponWithShowTable:(int)showTable normalAmmo:(int)ammo shellAmmo:(int)ammo3 showTableDuration:(float)duration;
-(BOOL)rentWeapon:(int)weapon normalAmmo:(int)ammo shellAmmo:(int)ammo3;
-(void)rentWeaponForWave;
-(void)stopSound:(id)sound;
-(void)playSound:(id)sound;
-(void)stopWeaponSound:(int)sound type:(id)type;
-(void)playWeaponSound:(int)sound type:(id)type;
-(int)numberOfLiveEnemies;
-(void)generateTargetToPlace:(int)place difficulty:(int)difficulty type:(int)type;
-(void)generateSupplyWithType:(int)type quantity:(float)quantity showTime:(float)time place:(int)place;
-(void)generateWave;
-(int)analyseTargetCountForWave:(int)wave;
-(int)analyseTargetCountForMiniWave:(int)miniWave;
-(void)setWaveContainer:(int)container;
-(void)setActualWave:(int)wave;
-(void)setWaves;
-(BOOL)updateEffect:(id)effect;
-(BOOL)updateEffectArray:(id)array;
-(void)resetEffectArray:(id)array;
-(int)resetEffect:(id)effect;
-(void)setEffects;
-(void)reportAchievementIdentifier:(id)identifier percentComplete:(float)complete;
-(void)loadAchievements;
-(void)receiveMatchBestScores:(id)scores;
-(void)retrieveTopTenScores;
-(void)reportScore:(long long)score forCategory:(id)category;
-(void)reportAllScore;
-(void)sendAllAchievements;
-(BOOL)bonusInDictionary:(id)dictionary;
-(BOOL)miniBonusActive:(id)active;
-(BOOL)bonusActive:(id)active;
-(BOOL)activateBonus:(id)bonus team:(int)team;
-(BOOL)processBonus:(id)bonus value:(int)value position:(CGPoint)position;
-(BOOL)processAward:(id)award value:(int)value;
-(void)loadForesight:(int)foresight;
-(void)saveStats:(int)stats;
-(void)loadStats;
-(void)loadTexts;
-(void)loadSounds;
-(void)unloadTutorialTextures;
-(void)loadTutorialTextures:(int)textures;
-(void)loadTextures;
-(void)loadParticles;
-(void)loadLevel;
-(void)saveWeaponsWithActualWeapon:(BOOL)actualWeapon;
-(void)loadWeapons;
-(void)saveDifficulty:(id)difficulty;
-(void)loadDifficulty;
-(void)parseWaveRangeFile;
-(void)parseWaveFile;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parseXml:(id)xml;
-(void)restartTutorial;
-(void)restartGame;
-(void)doStuff;
-(void)multiplayer_oneTimeSupplyType:(int)type;
-(void)multiplayer_copyRealtimeWaveData:(Multiplayer_microWave)data;
-(void)multiplayer_copyWaveData;
-(void)multiplayer_searchForSupplyType:(int)supplyType supplyQuantity:(int)quantity collectedByServer:(BOOL)server;
-(void)multiplayer_createOponentShot:(id)shot;
-(void)multiplayer_generateTargetToPlace:(Multiplayer_microWave)place;
-(void)multiplayer_placeTargetsToSurface;
-(Multiplayer_microWave)multiplayer_realtimeGenerate:(int)generate difficulty:(int)difficulty type:(int)type team:(int)team unitId:(int)anId;
-(Multiplayer_microWave)multiplayer_preGenerateTargetToPlace:(int)place difficulty:(int)difficulty type:(int)type team:(int)team unitId:(int)anId actualmicroWave:(Multiplayer_microWave*)wave;
-(void)multiplayer_generateMiniwaves;
-(void)multiplayer_restartGame;
-(void)multiplayer_initRound;
-(void)multiplayer_doStuff;
-(void)multiplayer_settings;
-(void)setPause:(BOOL)pause;
-(void)detectDevice;
-(BOOL)runningOnOldHardware;
-(id)platform;
-(CGPoint)setTouchLocation:(CGPoint)location;
-(void)startAnimation;
-(void)unloadTextures;
-(void)unloadParticles;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(int)loadedPercent;
 */
-(int)numberOfLiveEnemies;
-(void)drawText:(id)text atPosition:(CGPoint)position r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation effectKey:(id)key effectType:(id)type;
-(void)drawText:(id)text atPosition:(CGPoint)position withAlignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation effectKey:(id)key effectType:(id)type;
-(void)loadTextString:(NSString*)text;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)drawRectangle:(CGRect)rectangle;
-(void)drawLine:(CGPoint3f [100])line vertexCount:(int)count fillColor:(Color4)color;
-(void)drawESP:(CGRect)rect color:(ESPColor)color;
@end

