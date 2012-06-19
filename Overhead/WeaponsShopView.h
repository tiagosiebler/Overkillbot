/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIAccelerometerDelegate.h"
#import "NSXMLParserDelegate.h"
#import "MultiplayerInvitationReceiver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSUserDefaults, EasyGlyph, ExperienceBar, NSTimer, SingletonTextureManager, EAGLContext, MedalStore, NSString, NSMutableDictionary, SingletonSoundManager, NSMutableArray, Texture2D;

__attribute__((visibility("hidden")))
@interface WeaponsShopView : XXUnknownSuperclass <UIScrollViewDelegate, UIAccelerometerDelegate, NSXMLParserDelegate, MultiplayerInvitationReceiver> {
@private
	int accelerometerTimer;
	int outto;
	int loadedPercent;
	int effectsCycleCounter;
	BOOL _iPad;
	BOOL _iPod4;
	BOOL _iPadNew;
	CGPoint ratio;
	float screenShift;
	float retinaScale;
	int backingWidth;
	int backingHeight;
	EAGLContext* context;
	BOOL _touchBlocked;
	unsigned viewRenderbuffer;
	unsigned viewFramebuffer;
	unsigned depthRenderbuffer;
	NSTimer* animationTimer;
	double animationInterval;
	Texture2D* _texture[31];
	Texture2D* _yourScoreIs;
	Texture2D* _characters[1];
	NSMutableArray* tPrivate;
	NSMutableArray* tRun;
	NSMutableArray* tMini;
	NSMutableArray* tMech;
	NSMutableArray* tBaja;
	NSMutableArray* tMoto;
	NSMutableArray* tTank;
	NSMutableArray* tTrans;
	NSMutableArray* tShadows;
	int speedOfMove;
	CGPoint backPosition;
	CGPoint movePosition;
	CGPoint _globalPoint;
	CGPoint _globalSpeed;
	CGPoint kControlCenter;
	CGPoint _target;
	int _prevState;
	int _state;
	int _loadingIndex;
	float dTime;
	float factor;
	BOOL lock;
	float _totalTime;
	NSMutableArray* _weapons;
	NSMutableArray* tWeapon1;
	NSMutableArray* tWeapon2;
	NSMutableArray* tWeapon3;
	NSMutableArray* tWeapon4;
	NSMutableArray* tWeapon5;
	NSMutableArray* tWeapon6;
	NSMutableArray* tWeapon7;
	NSMutableArray* tWeapon8;
	NSMutableArray* tWeapon9;
	NSMutableArray* tWeapon10;
	NSMutableArray* tWeapon11;
	NSMutableArray* tWeapon12;
	NSMutableArray* tWeapon13;
	NSMutableArray* tWeapon14;
	NSMutableArray* tWeapon15;
	NSMutableArray* tWeapon16;
	NSMutableArray* tWeapon17;
	NSMutableArray* tWeapon18;
	NSMutableArray* tPartMark;
	Bunker bunker;
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
	int sizeOfBasecamp;
	int numOfPrivate;
	int numOfRun;
	int numOfMini;
	int numOfMoto;
	int numOfBaja;
	int numOfMech;
	int numOfTank;
	int numOfTrans;
	int densityOfEnemy;
	int maxDensityOfEnemy;
	int counter;
	float busyDurationArray[10];
	float enemyNextTime;
	float methodDelay;
	BOOL places;
	BOOL dragging;
	CGPoint partWepPosition;
	int draggPart;
	float speedScreen;
	float zoomWeapon;
	float actualZoomWeapon;
	int selectedPart;
	int selectedPart_next;
	int selectedWeapon;
	int lastChangedWeapon;
	int lastBoughtSelectedWeapon;
	int selectedCamp;
	int selectedWeapon_next;
	int tmpSelectedPart;
	int selectedUpgrade;
	int totalStepUnderOne;
	int totalStepAboveOne;
	int stepCounterAboveOne;
	int stepCounterUnderOne;
	BOOL zoomIn;
	BOOL showMarks;
	CGPoint actualTransWeapon;
	CGPoint stepWeapon;
	CGPoint tmpStepWeapon;
	CGPoint centerOfZoom;
	int totalStep;
	int stepCounter;
	float mark_scale;
	float mark_scale_time;
	float mark_scale_time_default;
	int _prevShopState;
	int _shopState;
	int _shopState_next;
	int _prevSubGunUpgradesState;
	int _subGunUpgradesState;
	int _prevSubGunShopState;
	int _subGunShopState;
	float _frameTime;
	float _presetFrameTime;
	float effects_Time;
	float subEffects_Time;
	int isSelectedPart;
	int shop01Counter;
	int totalShop01;
	int upgBtnCounter;
	int totalUpgBtn;
	int weaponBtnsCounter;
	int totalWeaponBtns;
	CGPoint shop01Position;
	CGPoint weaponBtnsPosition;
	BOOL menuEffectIntro;
	BOOL subMenuEffectIntro;
	int weaponCounter;
	int totalWeapon;
	int markFadeInCounter;
	int totalMarkFadeCounter;
	int fadeDelay;
	int markFadeOutCounter;
	float effects_Duration_intro;
	float effects_Duration_outro;
	float subEffects_Duration_intro;
	float subEffects_Duration_outro;
	BOOL drawWeaponMarks;
	int markEffectCounter;
	float actualAlpha;
	BOOL displayUpgBtns;
	int moneySpent;
	int moneyBeforeShopping;
	NSNumber* weaponID;
	int weaponPart;
	NSMutableDictionary* dShopEffects;
	NSMutableDictionary* dShopTextures;
	NSMutableDictionary* dShopTexValues;
	NSMutableDictionary* dWeaponEffects;
	NSMutableDictionary* dTexts;
	NSMutableArray* shopContainer_gunShop;
	NSMutableArray* shopContainer_gunUpgrades;
	NSMutableArray* shopContainer_bunker;
	NSMutableArray* shopContainer_support;
	NSMutableArray* shopContainer_levels;
	NSMutableArray* fonts;
	NSUserDefaults* defaults;
	SingletonSoundManager* sharedSoundManager;
	BOOL goToMainmenu;
	NSString* deviceType;
	int _cfg_ammo_max_normal;
	int _cfg_ammo_max_shell;
	BOOL touch_began;
	ExperienceBar* experienceBar;
	BOOL newVersion_effectEnded;
	NSMutableArray* eContainer_levels;
	SingletonTextureManager* sharedTextureManager;
	BOOL canBuyUpgrade;
	int lowerExp;
	int higherExp;
	Rank lowerRank;
	Rank higherRank;
	Rank rank[30];
	int rankCounter;
	int higherRankIndex;
	int totalScore;
	EasyGlyph* easyGlyph;
	MedalStore* medalStore;
	LevelInfo levelInfo[5];
	int unlockingLevel;
	CGPoint levelTablesScrollOffset;
	CGPoint touchStarted;
	BOOL levelsDragging;
	float scrollingSpeed;
	BOOL _capture;
	int captureIndex;
	BOOL weaponsEffectEnded;
	int outDelay;
	int performDelayedAction;
	BOOL touchLocked;
	BOOL isScrolling_weaponTable;
	CGPoint weaponTable_lastPosition;
	BOOL showWeaponTable_arrowUP;
	BOOL showWeaponTable_arrowDOWN;
	float weaponTable_arrowDOWN_scale;
	float weaponTable_arrowDOWN_scaleInverter;
	BOOL touchToWeaponTable;
	BOOL _screenRotated;
}
@property(assign, nonatomic) NSTimer* animationTimer;
@property(retain, nonatomic) EAGLContext* context;
@property(readonly, assign) BOOL _iPod4;
@property(readonly, assign) BOOL _iPad;
@property(readonly, assign) float factor;
@property(readonly, assign) NSMutableDictionary* dShopTextures;
@property(readonly, assign) int selectedPart;
@property(readonly, assign) float screenShift;
@property(readonly, assign) CGPoint ratio;
@property(readonly, assign) float dTime;
@property(readonly, assign) float actualZoomWeapon;
@property(readonly, assign) CGPoint actualTransWeapon;
@property(assign) float _tmpTotalTime;
@property(assign) float _totalTime;
@property(readonly, assign) NSMutableArray* tPartMark;
@property(readonly, assign) NSMutableArray* tWeapon18;
@property(readonly, assign) NSMutableArray* tWeapon17;
@property(readonly, assign) NSMutableArray* tWeapon16;
@property(readonly, assign) NSMutableArray* tWeapon15;
@property(readonly, assign) NSMutableArray* tWeapon14;
@property(readonly, assign) NSMutableArray* tWeapon13;
@property(readonly, assign) NSMutableArray* tWeapon12;
@property(readonly, assign) NSMutableArray* tWeapon11;
@property(readonly, assign) NSMutableArray* tWeapon10;
@property(readonly, assign) NSMutableArray* tWeapon9;
@property(readonly, assign) NSMutableArray* tWeapon8;
@property(readonly, assign) NSMutableArray* tWeapon7;
@property(readonly, assign) NSMutableArray* tWeapon6;
@property(readonly, assign) NSMutableArray* tWeapon5;
@property(readonly, assign) NSMutableArray* tWeapon4;
@property(readonly, assign) NSMutableArray* tWeapon3;
@property(readonly, assign) NSMutableArray* tWeapon2;
@property(readonly, assign) NSMutableArray* tWeapon1;
@property(readonly, assign) NSMutableArray* tShadows;
@property(readonly, assign) NSMutableArray* tTrans;
@property(readonly, assign) NSMutableArray* tTank;
@property(readonly, assign) NSMutableArray* tMoto;
@property(readonly, assign) NSMutableArray* tBaja;
@property(readonly, assign) NSMutableArray* tMech;
@property(readonly, assign) NSMutableArray* tMini;
@property(readonly, assign) NSMutableArray* tRun;
@property(readonly, assign) NSMutableArray* tPrivate;
@property(assign) int state;
@property(assign) double animationInterval;
-(id).cxx_construct;
-(void)inviteAlert;
-(void)inviteReceived;
-(BOOL)iPod4;
-(void)drawView;
-(id)scaleAndRotateImage:(id)image;
-(void)captureToPhotoAlbum;
-(id)glToUIImage;
-(void)accelerometer:(id)accelerometer didAccelerate:(id)accelerate;
-(void)showRateIt;
-(void)setScreenRotation:(BOOL)rotation;
-(void)touchesEnded:(id)ended withEvent:(id)event withView:(id)view;
-(void)touchesMoved:(id)moved withEvent:(id)event withView:(id)view;
-(void)touchesBegan:(id)began withEvent:(id)event withView:(id)view;
-(void)setWeaponViewForType:(int)type;
-(void)unlockLevel:(int)level;
-(void)reportAchievementIdentifier:(id)identifier percentComplete:(float)complete;
-(void)sendAllAchievements;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)toCamp;
-(void)toMenu;
-(int)outto;
-(BOOL)goToMainmenu;
-(BOOL)stillPlaying;
-(void)playMenuSound;
-(void)playSound:(id)sound;
-(BOOL)isInTextureFromDictionary:(id)dictionary forKey:(id)key objectIndex:(int)index leftOffset:(float)offset rightOffset:(float)offset5 topOffset:(float)offset6 bottomOffset:(float)offset7 point:(CGPoint)point;
-(BOOL)isInRect:(CGRect)rect point:(CGPoint)point;
-(float)angleBetweenPoint:(CGPoint)point andPoint:(CGPoint)point2;
-(float)distanceFromPoint:(CGPoint)point toPoint:(CGPoint)point2;
-(void)buyWeaponWithMedals;
-(void)setWeaponTableArrows:(float)arrows;
-(void)drawNumber:(int)number atOffset:(CGPoint)offset scale:(float)scale;
-(void)drawMultidigitNumber:(int)number position:(CGPoint)position alignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale nofDigit:(int)digit digitOffset:(int)offset zerofill:(BOOL)zerofill showPlus:(BOOL)plus showMinus:(BOOL)minus;
-(void)drawText:(id)text atPosition:(CGPoint)position withAlignment:(int)alignment r:(float)r g:(float)g b:(float)b alpha:(float)alpha scale:(float)scale rotation:(float)rotation;
-(void)placeTexture:(id)texture translate:(CGPoint)translate rotate:(float)rotate scale:(CGPoint)scale alignment:(int)alignment color:(Color4f)color;
-(void)placeTexture:(id)texture translate:(CGPoint)translate scale:(CGPoint)scale;
-(void)drawObjectAtPosition:(CGPoint)position alpha:(float)alpha scale:(float)scale effectKey:(id)key;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue;
-(void)drawRectangle:(CGRect)rectangle red:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)drawRectangle:(CGRect)rectangle;
-(void)drawRectangle:(CGPoint)rectangle secondCorner:(CGPoint)corner;
-(void)renderGamut:(CGPoint)gamut grades:(int)grades gradesSelected:(int)selected additionalGrades:(int)grades4 plus:(int)plus minus:(int)minus;
-(void)drawGamut:(CGPoint)gamut;
-(void)drawTexturesWithEffect:(id)effect key:(id)key textureIndex:(int)index;
-(void)drawTexturesWithEffect:(id)effect key:(id)key;
-(void)drawWeaponWithEffect:(id)effect type:(id)type;
-(void)drawLevelTable:(int)table position:(CGPoint)position;
-(void)drawIntroAndOutroEffects;
-(void)setSubmenu_gunUpgrade_table;
-(void)updateTexturesAndTexts;
-(void)updateMedals:(int)medals;
-(void)presetIntroOutroSubEffects;
-(void)presetEffectsWithShopState:(int)shopState prevShopState:(int)state;
-(BOOL)updateTexturesWithEffect:(id)effect key:(id)key;
-(void)updateWeaponWithEffect:(id)effect type:(id)type;
-(int)resetEffect:(id)effect type:(id)type;
-(int)resetWeaponEffect:(id)effect type:(id)type;
-(void)restartGame;
-(void)drawNumber:(int)number atOffset:(CGPoint)offset fontSize:(int)size fontBold:(BOOL)bold;
-(void)newVersion_updateEffect:(id)effect;
-(int)newVersion_resetEffect:(id)effect;
-(void)setEffectContainers;
-(void)setShopEffects;
-(void)setWeaponEffects;
-(void)loadTexturesWeapon:(int)weapon loadMode:(int)mode;
-(void)loadTextures;
-(void)loadSounds;
-(void)initSound;
-(void)loadMedals:(BOOL)medals;
-(void)loadLevelInfo;
-(void)load;
-(void)saveMedals;
-(void)save;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parseXml:(id)xml;
-(void)detectDevice;
-(BOOL)runningOnOldHardware;
-(id)platform;
-(void)doStuff;
-(CGPoint)setTouchLocation:(CGPoint)location;
-(void)dealloc;
-(int)loadedPercent;
@end

