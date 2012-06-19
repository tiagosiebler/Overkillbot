/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

@class NSString;
typedef struct Music {
	float volume;
	int loops;
	int menuLoops;
	int gameLoops;
	int menuSongCounter;
	int gameSongCounter;
	NSString* songName;
	float pauseTime;
	BOOL playingMenuSongs;
	float timeToNextSong;
	float durationToNextSong;
} Music;

typedef struct _Quad2 {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
} Quad2;

typedef struct Bunker {
	float health;
	float remainingHealth;
	float armor;
	int friendlyUnit;
	BOOL destroyed;
} Bunker;

typedef struct Rank {
	int exp;
	NSString* picName;
	NSString* name;
} Rank;

typedef struct LevelInfo {
	int wavesCompleted;
	int waveSelected;
	BOOL locked;
	BOOL selected;
	int pointsToUnlock;
	int medalsToUnlock;
	NSString* name;
} LevelInfo;

typedef struct _Color4f {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
} Color4f;

typedef struct EffectFeatures {
	float _field1;
	float _field2;
	int _field3;
	CGPoint _field4;
	BOOL _field5;
} EffectFeatures;

typedef struct Color {
	float red;
	float green;
	float blue;
} Color;

typedef struct SpreadSheet {
	float headAngle;
	float chestAngle;
	float stomachAngle;
	float pelvisAngle;
	float rthighAngle;
	float lthighAngle;
	float rcalfAngle;
	float lcalfAngle;
	float rupperarmAngle;
	float lupperarmAngle;
	float rforearmAngle;
	float lforearmAngle;
	float gunAngle;
	float chassisAngle;
	float gunfireAngle;
	CGPoint headPos;
	CGPoint bodyPos;
	CGPoint chestPos;
	CGPoint stomachPos;
	CGPoint pelvisPos;
	CGPoint rthighPos;
	CGPoint lthighPos;
	CGPoint rcalfPos;
	CGPoint lcalfPos;
	CGPoint rupperarmPos;
	CGPoint lupperarmPos;
	CGPoint rforearmPos;
	CGPoint lforearmPos;
	CGPoint gunPos;
	CGPoint chassisPos;
	CGPoint gunfirePos;
	float nextStepIn;
	bool processing;
	bool done;
	bool gunfire;
} SpreadSheet;

typedef struct ALCcontext_struct* ALCcontext_structRef;

typedef struct ALCdevice_struct* ALCdevice_structRef;

typedef struct OpaqueAudioFileID OpaqueAudioFileID;

@class ScoreEffect;
typedef struct PlaceForScoreEffect {
	CGPoint position;
	BOOL free;
	ScoreEffect* scoreEffect;
} PlaceForScoreEffect;

typedef struct StunGrenade {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	float _field5;
	float _field6;
	float _field7[8];
	float _field8[12];
	BOOL _field9;
} StunGrenade;

typedef struct AmmoConfig {
	int accuracy;
	int firerate;
	int cadence;
	int cartridge;
	int remainingAmmo;
	int boughtAmmo;
	int buyQuantity;
	int price;
	BOOL autoReloading;
	BOOL reloading;
	float damage;
	float reloadingTime;
	float reloadingDelay;
	float reloadingStepTime;
	float reloadingAmmoAmount;
	float shotDelay;
	float reloadSpeed;
} AmmoConfig;

@class Texture2D;
typedef struct ForesightTexture {
	Texture2D* texture;
	BOOL useTexture;
	NSString* name;
	CGPoint offset;
} ForesightTexture;

typedef struct CompositeForesight {
	ForesightTexture foresightTexture[2];
	CGPoint muzzleOffset;
	BOOL showMuzzle;
} CompositeForesight;

typedef struct WeaponCfg {
	NSString* weaponName;
	AmmoConfig ammo_shell;
	AmmoConfig ammo_normal;
	BOOL bought;
	BOOL rented;
	BOOL grenadeLauncher;
	BOOL weaponType_grenadeLauncher;
	BOOL ammoMode_grenadeLauncher;
	CompositeForesight compositeForesight[4];
	int equipedScope;
	int equipedBarrel;
	int equipedFrontmouth;
	int weaponRating;
	int weaponID;
} WeaponCfg;

typedef struct AppConfig {
	int joystickMode;
	int scrollingMode;
	float joystickSensitivity;
	bool musicEnabled;
	bool soundEnabled;
} AppConfig;

typedef struct TargetConfig {
	int animatedShotCount;
	int shotCount;
	float damage;
	float health;
	float pauseBetweenShoots;
	float preparingTimeToShot;
	int red;
	int green;
	int blue;
} TargetConfig;

typedef struct timeval {
	int tv_sec;
	int tv_usec;
} timeval;

typedef struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
} timezone;

typedef struct tm {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	int _field5;
	int _field6;
	int _field7;
	int _field8;
	int _field9;
	long _field10;
	char* _field11;
} tm;

typedef struct MyTouch {
	BOOL ended;
	CGPoint position;
	CGPoint startPosition;
	CGPoint endPosition;
	CGPoint actualPosition;
	float touchEndedTime;
	float touchBeganTime;
} MyTouch;

typedef struct Award {
	int value;
	bool accomplished;
	NSString* name;
	NSString* picName;
	NSString* var;
} Award;

typedef struct Bonus {
	int value;
	NSString* name;
	NSString* stline;
	NSString* ndline;
	NSString* rdline;
	NSString* thline;
} Bonus;

typedef struct WaveOfEnemies {
	int easy;
	int medium;
	int hard;
	int hard2;
	int grenadier_easy;
	int grenadier_medium;
	int grenadier_hard;
	int machinegunner_easy;
	int machinegunner_medium;
	int machinegunner_hard;
	int air_easy;
	int air_medium;
	int radioman_easy;
} WaveOfEnemies;

typedef struct BossSetting {
	int waveSelector;
	int bossSelector;
	BOOL bossExist;
} BossSetting;

typedef struct WaveRange {
	int waveRange_Count;
	int waveRange[50];
	int bossWaveCount;
	BossSetting bossWave[10];
} WaveRange;

typedef struct Settings {
	BOOL pause;
	BOOL pauseScreenshot;
	BOOL pauseChangeWeapon;
	float sfxVolume;
	float musicVolume;
	float pauseTime_buyInRound;
	float pauseTime_waveClear;
	float joystickSensitivity;
	BOOL realForesight;
	BOOL turnOff_death;
	int scoreBonus_buyInRound;
	int scoreBonus_buyInRound_increaseByRank;
} Settings;

typedef struct Tutorial {
	BOOL aimingDone;
	BOOL firingDone;
	BOOL swipingDone;
	BOOL shakeDone;
	BOOL guiDone;
	BOOL waitToSwipe;
} Tutorial;

typedef struct SuppliesQuantity {
	int health;
	int ammo;
	int airstrike;
	int flashScreen;
	int doubleFireRate;
	int score;
	int armor;
	int accuracy;
	int reload;
	int stunScreen;
} SuppliesQuantity;

typedef struct TimerSupplies {
	float health;
	float ammo;
	float score;
	float armor;
	float accuracy;
	float reload;
	float stunScreen;
	float airstrike;
	float flashScreen;
	float doubleFireRate;
} TimerSupplies;

typedef struct RentWeapon {
	int weaponIndex;
	int normalAmmo;
	int shellAmmo;
} RentWeapon;

typedef struct Multiplayer_microWave {
	int difficulty;
	int place;
	int team;
	float showTime;
	BOOL invertScale;
	BOOL generated;
	int genTypeSpeed;
	int genType;
	int unitId;
} Multiplayer_microWave;

typedef struct Multiplayer_generatedWaveData {
	Multiplayer_microWave multiplayer_miniWaves[40][10];
	int multiplayer_microWaves_count[40];
	int multiplayer_miniWaves_count;
} Multiplayer_generatedWaveData;

typedef struct MultiplayerSettings {
	float airstrike_negativeScore;
	float scoreBonus;
	float scoreHitMultiplier;
	float scoreHitMultiplier_blueTeam;
} MultiplayerSettings;

typedef struct Multiplayer_unitTypes {
	int medium;
	int grenadier_medium;
	int machinegunner_medium;
	int air_easy;
	int air_medium;
	int medium_bonus;
} Multiplayer_unitTypes;

typedef struct BuyAmmoForPrice {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} BuyAmmoForPrice;

typedef struct CGPoint3f {
	float x;
	float y;
	float z;
} CGPoint3f;

typedef struct Color4 {
	float r;
	float g;
	float b;
	float a;
} Color4;

typedef struct CGContext* CGContextRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct MultiplayerData_shot {
	float damage;
	CGPoint position;
	float scale;
	unsigned index : 7;
	unsigned isEmpty : 1;
	unsigned weapon : 5;
	unsigned isHit : 1;
	unsigned renderShotImpact : 1;
	unsigned explosionFromGround : 1;
	unsigned unitId : 9;
	unsigned isStraightHit : 1;
	unsigned isGrenadeLauncher : 1;
	unsigned alive : 1;
} MultiplayerData_shot;

typedef struct {
	unsigned _field1 : 5;
	unsigned _field2 : 5;
} XXStruct_g_mBRC;

typedef struct {
	unsigned _field1 : 5;
	int _field2;
} XXStruct_8dlm2D;

typedef struct {
	unsigned _field1 : 5;
	Multiplayer_generatedWaveData _field2;
} XXStruct_7cLWIA;

typedef struct {
	unsigned _field1 : 5;
	unsigned _field2 : 3;
	unsigned _field3 : 1;
	int _field4;
	int _field5;
} XXStruct_a8RBfB;

typedef struct {
	unsigned _field1 : 5;
} XXStruct_zPYw2A;

typedef struct {
	unsigned _field1 : 5;
	int _field2;
	int _field3;
} XXStruct_ZIZXLC;

typedef struct TBXMLAttribute {
	char* _field1;
	char* _field2;
	struct TBXMLAttribute* _field3;
} TBXMLAttribute;

typedef struct TBXMLElement {
	char* _field1;
	char* _field2;
	TBXMLAttribute* _field3;
	struct TBXMLElement* _field4;
	struct TBXMLElement* _field5;
	struct TBXMLElement* _field6;
	struct TBXMLElement* _field7;
	struct TBXMLElement* _field8;
} TBXMLElement;

typedef struct TBXMLElementBuffer {
	TBXMLElement* _field1;
	struct TBXMLElementBuffer* _field2;
	struct TBXMLElementBuffer* _field3;
} TBXMLElementBuffer;

typedef struct TBXMLAttributeBuffer {
	TBXMLAttribute* _field1;
	struct TBXMLAttributeBuffer* _field2;
	struct TBXMLAttributeBuffer* _field3;
} TBXMLAttributeBuffer;

typedef struct _ProtobufCMessageDescriptor ProtobufCMessageDescriptor;
typedef struct _ProtobufCMessageUnknownField ProtobufCMessageUnknownField;
typedef struct _ProtobufCMessage {
	ProtobufCMessageDescriptor* _field1;
	unsigned _field2;
	ProtobufCMessageUnknownField* _field3;
} ProtobufCMessage;

typedef struct _ProtobufCBinaryData {
	unsigned _field1;
	char* _field2;
} ProtobufCBinaryData;

typedef struct _Crashlytics__Session__Device Crashlytics__Session__Device;
typedef struct _Crashlytics__Session__Event Crashlytics__Session__Event;
typedef struct _Crashlytics__Session__User Crashlytics__Session__User;
typedef struct _Crashlytics__Session__Application Crashlytics__Session__Application;
typedef struct _Crashlytics__Session__OperatingSystem Crashlytics__Session__OperatingSystem;
typedef struct _Crashlytics__Session {
	ProtobufCMessage _field1;
	char* _field2;
	ProtobufCBinaryData _field3;
	unsigned long long _field4;
	int _field5;
	unsigned long long _field6;
	int _field7;
	int _field8;
	int _field9;
	unsigned _field10;
	Crashlytics__Session__User* _field11;
	Crashlytics__Session__Application* _field12;
	Crashlytics__Session__OperatingSystem* _field13;
	Crashlytics__Session__Device* _field14;
	unsigned _field15;
	Crashlytics__Session__Event** _field16;
} Crashlytics__Session;

typedef struct _CLSCrashReportDecoder {
	Crashlytics__Session* _field1;
} CLSCrashReportDecoder;

typedef struct _Crashlytics__CustomAttribute Crashlytics__CustomAttribute;

typedef struct clscrash_log_writer {
	struct {
		int _field1;
		char* _field2;
		char* _field3;
		bool _field4;
		bool _field5;
		unsigned _field6;
		float _field7;
		int _field8;
		bool _field9;
		unsigned _field10;
		unsigned _field11;
		char* _field12;
		char* _field13;
		char* _field14[1];
		unsigned _field15;
		char* _field16[16];
		unsigned _field17;
		char* _field18[16];
		unsigned _field19;
	} _field1;
	struct {
		unsigned long long _field1;
		char* _field2[16];
		unsigned _field3;
		char* _field4;
		char* _field5;
		unsigned _field6;
		Crashlytics__CustomAttribute* _field7;
	} _field2;
	struct {
		bool _field1;
	} _field3;
	struct {
		char* _field1;
		char* _field2;
		char* _field3;
	} _field4;
	struct {
		char* _field1;
		int _field2;
		char* _field3;
		char* _field4;
		int _field5;
	} _field5;
	struct {
		bool _field1;
		char* _field2;
		char* _field3;
		int* _field4;
		unsigned _field5;
	} _field6;
} clscrash_log_writer;

typedef struct __darwin_sigaltstack {
	void* ss_sp;
	unsigned ss_size;
	int ss_flags;
} darwin_sigaltstack;

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct _Crashlytics__Session__User;

struct _Crashlytics__Session__Application;

struct _Crashlytics__Session__OperatingSystem;

struct _Crashlytics__Session__Device;

struct _Crashlytics__Session__Event;

typedef struct _Crashlytics__Session__Event__Application__Execution__Thread Crashlytics__Session__Event__Application__Execution__Thread;

typedef struct _Crashlytics__Session__Event__Application__Execution__Exception Crashlytics__Session__Event__Application__Execution__Exception;

typedef struct _Crashlytics__Session__Event__Application__Execution__Signal Crashlytics__Session__Event__Application__Execution__Signal;

typedef struct _Crashlytics__Session__Event__Application__Execution__BinaryImage Crashlytics__Session__Event__Application__Execution__BinaryImage;

typedef struct _Crashlytics__Session__Event__Application__Execution {
	ProtobufCMessage _field1;
	unsigned _field2;
	Crashlytics__Session__Event__Application__Execution__Thread** _field3;
	Crashlytics__Session__Event__Application__Execution__Exception* _field4;
	Crashlytics__Session__Event__Application__Execution__Signal* _field5;
	unsigned _field6;
	Crashlytics__Session__Event__Application__Execution__BinaryImage** _field7;
} Crashlytics__Session__Event__Application__Execution;

typedef struct _Crashlytics__Session__Event__Application__Execution__Thread__Frame {
	ProtobufCMessage _field1;
	unsigned long long _field2;
	char* _field3;
	char* _field4;
	int _field5;
	unsigned long long _field6;
	int _field7;
	unsigned _field8;
} Crashlytics__Session__Event__Application__Execution__Thread__Frame;


