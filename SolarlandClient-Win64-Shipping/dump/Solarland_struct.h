// Enum Solarland.EBoolean
enum class EBoolean : uint8 {
	BranchFalse = 0,
	BranchTrue = 1,
	EBoolean_MAX = 2
};

// Enum Solarland.EActorRegisterType
enum class EActorRegisterType : uint8 {
	EART_None = 0,
	EART_Character = 1,
	EART_Vehicle = 2,
	EART_Turret = 4,
	EART_TreasureBox = 8,
	EART_ChargingPile = 16,
	EART_Summon = 32,
	EART_HumanoidTarget = 64,
	EART_Water = 128,
	EART_MAX = 129
};

// Enum Solarland.ESolarNetMode
enum class ESolarNetMode : uint8 {
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4,
	NM_Unknown = 5
};

// Enum Solarland.ESolarPlayStage
enum class ESolarPlayStage : uint8 {
	None = 0,
	Login = 1,
	Lobby = 2,
	Battle = 3,
	Settlement = 4,
	PlaceHolder1 = 5,
	PlaceHolder2 = 6,
	PlaceHolder3 = 7,
	ESolarPlayStage_MAX = 8
};

// Enum Solarland.ERoleSkillOperation
enum class ERoleSkillOperation : uint8 {
	None = 0,
	ToNormal = 1,
	ClearCD = 2,
	ResetCD = 3,
	Forbid = 4,
	Unforbid = 5,
	ERoleSkillOperation_MAX = 6
};

// Enum Solarland.ECustomParamType
enum class ECustomParamType : uint8 {
	WeaponDamageScale = 0,
	SkillDamageScale = 1,
	HeadShootDamageScale = 2,
	VehicleDamageScale = 3,
	MoveSpeedScale = 4,
	ShieldScale = 5,
	HealthScale = 6,
	Resurgence = 7,
	GravityScale = 8,
	None = 9,
	ECustomParamType_MAX = 10
};

// Enum Solarland.EBattleEndType
enum class EBattleEndType : uint8 {
	None = 0,
	BattleOver = 1,
	PlayerNotEnough = 2,
	BeginTimeOut = 3,
	Abandoned = 4,
	EBattleEndType_MAX = 5
};

// Enum Solarland.ESCTournamentType
enum class ESCTournamentType : uint8 {
	None = 0,
	SingleRace = 1,
	PointRace = 2,
	KnockoutRace = 3,
	PointRaceV2 = 4,
	ESCTournamentType_MAX = 5
};

// Enum Solarland.ESCRoomType
enum class ESCRoomType : uint8 {
	None = 0,
	Normal = 1,
	Tournament = 2,
	CustomServer = 3,
	ESCRoomType_MAX = 4
};

// Enum Solarland.ESCMInGameState
enum class ESCMInGameState : uint8 {
	None = 0,
	InPrepare = 1,
	InBattle = 2,
	InBattleEnd = 3,
	ESCMInGameState_MAX = 4
};

// Enum Solarland.ESCMHostType
enum class ESCMHostType : uint8 {
	Global = 0,
	Side = 1,
	Player = 2,
	ESCMHostType_MAX = 3
};

// Enum Solarland.ESCMDataRankType
enum class ESCMDataRankType : uint8 {
	None = 0,
	Ascending = 1,
	AscendingReplace = 2,
	Descending = 3,
	DescendingReplace = 4,
	ESCMDataRankType_MAX = 5
};

// Enum Solarland.ESCMDataChangeType
enum class ESCMDataChangeType : uint8 {
	Add = 0,
	Change = 1,
	Delete = 2,
	DeleteAll = 3,
	ESCMDataChangeType_MAX = 4
};

// Enum Solarland.EStatisticsType
enum class EStatisticsType : uint8 {
	None = 0,
	DSTime = 1,
	G_UnBattleEndPlayerCount = 2,
	G_UnBattleEndTeamCount = 3,
	S_KillCount = 4,
	S_KillDownCount = 5,
	S_AssistCount = 6,
	S_DeathCount = 7,
	S_SaveCount = 8,
	S_UnBattleEndPlayerCount = 9,
	G_KillNum = 10,
	G_KillDown = 11,
	KillNum = 12,
	KillNumToRealPlayer = 13,
	P_KillStreak = 14,
	KillStreakHistory = 15,
	CharacterKillNumWithID = 16,
	KillDownNum = 17,
	AssistNum = 18,
	KillNpcNum = 19,
	KillMonster = 20,
	KillPlayer = 21,
	KillTeammate = 22,
	KillDownTeammate = 23,
	TotalWeaponKillNum = 24,
	WeaponAssistWithID = 25,
	WeaponKillNumWithID = 26,
	KillNumWithIDByVechile = 27,
	TotalVehicleKillNum = 28,
	RevengeNum = 29,
	AccurateKillTimes = 30,
	AccurateKillDownTimes = 31,
	WeaponSkillKillNum = 32,
	PunchKill = 33,
	AreaKillNum_Bubble = 34,
	DeathNum = 35,
	DyingCount = 36,
	DyingByNpc = 37,
	DyingByMonster = 38,
	DeathByVechile = 39,
	DeathByBombingArea = 40,
	CauseDamage = 41,
	CauseDamageToRealPlayer = 42,
	WeaponDamageWithIDToPlayer = 43,
	WeaponDamageWithTypeToPlayer = 44,
	VechileDamageWithIDToPlayer = 45,
	TotalVehicleDamage = 46,
	ReceivedDamage = 47,
	DamageByAI = 48,
	DamageByMonster = 49,
	DamageToMonster = 50,
	DamageToNpc = 51,
	AccurateDamage = 52,
	AttackTimes = 53,
	HitTimes = 54,
	HitedTimes = 55,
	AccurateDameageTimes = 56,
	BeAccurateDameageTimes = 57,
	LifeTime = 58,
	HealSelf = 59,
	SaveCount = 60,
	TeammateHeal = 61,
	ReceivedHeal = 62,
	ResurrectionCount = 63,
	CarSkillCount = 64,
	VechileDistance = 65,
	TotalVechileDistance = 66,
	VehicleTime = 67,
	UseVehicleTypes = 68,
	LastUseVehicleID = 69,
	TakeTheCarOfEnemy = 70,
	DriveCarInAirTime = 71,
	DriveHoverCarInWaterDistance = 72,
	WeaponID1 = 73,
	WeaponID2 = 74,
	WeaponLevel1 = 75,
	WeaponLevel2 = 76,
	UseWeaponSkillNum = 77,
	WeaponUseStartTimeWithID = 78,
	WeaponUseTimeWithID = 79,
	MaxGodWeaponNum = 80,
	CollectEnergy = 81,
	EscapeTimes = 82,
	CollectBoxNum = 83,
	CollectBoxNumWithHighQuality = 84,
	FlyCount = 85,
	ArmorUseCount = 86,
	ShieldRechargeCount = 87,
	EChestOpenNumForID = 88,
	DeathPos = 89,
	LandingPos = 90,
	LandingTime = 91,
	DropoutEvent = 92,
	DropoutTime = 93,
	MedicineUseCount = 94,
	RadarUseCount = 95,
	P_BattleResult = 96,
	OpenAirBoxNum = 97,
	KillInAirNum = 98,
	KillDownInAirNum = 99,
	ResurrectionNum = 100,
	ResurrectionCapsule = 101,
	TeamFriendRevive = 102,
	BuyESElectricNum = 103,
	CarFireCount = 104,
	HangTimeDuration = 105,
	SkydiveLandingDuration = 106,
	SwimDistance = 107,
	DanceCount = 108,
	PosionWalkDistance = 109,
	ShieldExpGainCount = 110,
	UpgradeShieldCount = 111,
	UpgradeRedShieldCount = 112,
	JumpBoardUseCount = 113,
	TerminaterCount = 114,
	UltimateSkillUseCount = 115,
	TacticalSkillUseCount = 116,
	UltimateSkillDamage = 117,
	TacticalSkillDamage = 118,
	UltimateSkillTakenDamage = 119,
	TacticalSkillTakenDamage = 120,
	UltimateSkillKillNum = 121,
	TacticalSkillKillNum = 122,
	HasHighlight = 123,
	WeaponID3 = 124,
	BackpackItems = 125,
	CurrentWeaponID = 126,
	MAX = 127
};

// Enum Solarland.EPlayHighlightEntryType
enum class EPlayHighlightEntryType : uint8 {
	Settlement = 0,
	Lobby = 1,
	TournamentList = 2,
	CustomRoomList = 3,
	EPlayHighlightEntryType_MAX = 4
};

// Enum Solarland.ERecordingType
enum class ERecordingType : uint8 {
	None = 0,
	Local = 1,
	NormalMatch = 2,
	Tournament = 3,
	LiveWatchOnly = 4,
	LocalHighlight = 5,
	ERecordingType_MAX = 6
};

// Enum Solarland.EReplayManagerState
enum class EReplayManagerState : uint8 {
	Initializing = 0,
	Idle = 1,
	Recording = 2,
	PlayingTryToStart = 3,
	PlayingStarted = 4,
	PlayingLoadLevelsStarted = 5,
	PlayingLevelLoaded = 6,
	PlayingStreamReadied = 7,
	PlayingFirstScrubing = 8,
	Playing = 9,
	PlayingAtEnd = 10,
	EReplayManagerState_MAX = 11
};

// Enum Solarland.EReplayPlayingFinishReason
enum class EReplayPlayingFinishReason : uint8 {
	Normal = 0,
	GMForce = 1,
	StreamerDownloadChunkTimeout = 2,
	StreamerServiceUnavailable = 3,
	EReplayPlayingFinishReason_MAX = 4
};

// Enum Solarland.EMultiplePassMaterialChangeCompatibilityMode
enum class EMultiplePassMaterialChangeCompatibilityMode : uint8 {
	Compatible = 0,
	Incompatible = 1,
	CompatibleWithSpecifiedPriorityTags = 2,
	IncompatibleWithSpecifiedPriorityTags = 3,
	EMultiplePassMaterialChangeCompatibilityMode_MAX = 4
};

// Enum Solarland.EMaterialChangeConflictResolveStrategy
enum class EMaterialChangeConflictResolveStrategy : uint8 {
	KeepAll = 0,
	KeepNew = 1,
	KeepOld = 2,
	EMaterialChangeConflictResolveStrategy_MAX = 3
};

// Enum Solarland.EWalkMode
enum class EWalkMode : uint8 {
	Idle = 0,
	Run = 1,
	Sprint = 2,
	CrouchIdle = 3,
	CrouchRun = 4,
	CrouchSprint = 5,
	Crawl = 6,
	EWalkMode_MAX = 7
};

// Enum Solarland.EAirMoveMode
enum class EAirMoveMode : uint8 {
	None = 0,
	Jump = 1,
	JetFly = 2,
	Cruise = 3,
	Skydive = 4,
	Launch = 5,
	Fall = 6,
	Fly = 7,
	WallRun = 8,
	SkywardFly = 9,
	ZipLine = 10,
	EAirMoveMode_MAX = 11
};

// Enum Solarland.EClientMoveTrustType
enum class EClientMoveTrustType : uint8 {
	TrustLocation = 0,
	TrustLocationAndMovementMode = 1,
	EClientMoveTrustType_MAX = 2
};

// Enum Solarland.EItemModifyResult
enum class EItemModifyResult : uint8 {
	Succeed = 0,
	Overflow = 1,
	Deficient = 2,
	IllegalParam = 3,
	Error = 4,
	EItemModifyResult_MAX = 5
};

// Enum Solarland.EEnergyUsage
enum class EEnergyUsage : uint8 {
	Box = 0,
	Weapon = 1,
	Ability = 2,
	Jet = 3,
	Pile = 4,
	Armor = 5,
	Shield = 6,
	Sky = 7,
	RadarStation = 8,
	ElectricShop = 9,
	DeathBox = 10,
	EEnergyUsage_MAX = 11
};

// Enum Solarland.EItemAppearanceType
enum class EItemAppearanceType : uint8 {
	EApprenace_None = 0,
	EApprenace_Outline = 1,
	EApprenace_Float = 2,
	EApprenace_All = 3,
	EApprenace_MAX = 4
};

// Enum Solarland.EItemType
enum class EItemType : int32 {
	NONE = 0,
	SHIELD = 101,
	ARMOR = 102,
	BULLET = 103,
	CARIRIDGE_BAG = 104,
	ARMOR_MATERIAL = 105,
	ENERGY_MODULE = 106,
	EXTRA_ENERGY = 107,
	RADAR_OPERATOR = 108,
	BACKPACK_ENERGY = 109,
	BACKUP_ENERGY = 110,
	SHIELD_RECHARGER = 112,
	BACKPACK_ITEM = 113,
	WEAPON_PARTS = 114,
	JETPACK_MODULE_HORIZONTAL = 111,
	JETPACK_MODULE_VERTICAL = 115,
	REVIVE_ITEM = 116,
	TREASUREBOX = 120,
	AIRDROPBOX = 121,
	DEATHBOX = 122,
	NEUTRAL_CARD = 130,
	COLLECTION_ITEM = 131,
	SHIELD_UPGRADE_MATERIAL = 148,
	EXP_ITEM = 149,
	WEAPON = 151,
	WEAPON_SKIN = 171,
	BACKPACK = 201,
	TAILFLAME = 202,
	CARDPOSE = 203,
	CARDBACKGROUND = 204,
	CAPSULE = 251,
	CHAR_SKIN_MIN = 301,
	CHAR_ANIMATION_MVP = 302,
	CHAR_SKIN_MAX = 350,
	CHARACTER = 351,
	EXPERIENCE = 401,
	GIFTBAG = 404,
	CHARACTER_TRIALCARD = 405,
	CHARACTERSKIN_TRIALCARD = 406,
	ACTIVENESS = 411,
	WEAPONSKIN_TRIALCARD = 412,
	GIFTBAG_ONBACKPACK = 414,
	BACKPACK_TRIALCARD = 415,
	TAILFLAME_TRIALCARD = 416,
	DIAMOND_VOUCHER = 417,
	LOTCOIN = 421,
	ZOMBORG = 422,
	WISHCOIN = 423,
	SURPRISECOIN = 424,
	TOKEN = 430,
	BUSINESSCARDFRAME = 432,
	AVATARFRAME = 434,
	CHARACTER_SHARD = 435,
	CHARACTER_SKIN_SHARD = 436,
	WEAPON_SKIN_SHARD = 437,
	BACKPACK_SHARD = 438,
	TAILFLAME_SHARD = 439,
	CAPSULE_SHARD = 440,
	VEHICLE_SKIN_SHARD = 441,
	ACCOUNT_AVATAR = 443,
	EMOTE = 444,
	SIGNIN_CARD = 447,
	RAFFLE_TICKET = 448,
	HOMEBUILD = 501,
	HOMEINSTALLATION = 502,
	HOMEITEM = 503,
	HOMEDRAWING = 504,
	HOMEPART = 505,
	HOMEDEVICE = 506,
	HOMEMAX = 520,
	VEHICLE_SKIN = 701,
	SUPPLYBOX = 801,
	DISPLAY_ITEM = 999,
	EItemType_MAX = 1000
};

// Enum Solarland.EWeaponSlotType
enum class EWeaponSlotType : int32 {
	EWeaponSlotType_UnArm = -1,
	EWeaponSlotType_Primary = 0,
	EWeaponSlotType_Secondary = 1,
	EWeaponSlotType_Tertiary = 2,
	EWeaponSlotType_MAX = 3
};

// Enum Solarland.EGmType
enum class EGmType : uint8 {
	Fetch = 0,
	Discard = 1,
	ClearBackPack = 2,
	Use = 3,
	RemoveWeapon = 4,
	EGmType_MAX = 5
};

// Enum Solarland.EEnergyState
enum class EEnergyState : uint8 {
	NORMAL = 0,
	SKY = 1,
	PILE = 2,
	BOX = 4,
	E2M = 8,
	M2E = 16,
	EEnergyState_MAX = 17
};

// Enum Solarland.ESocialActionType
enum class ESocialActionType : uint8 {
	None = 0,
	Like = 1,
	Unlike = 2,
	Gift = 3,
	SendTask = 4,
	IncreaseTaskLevel = 5,
	FinishTask = 6,
	ESocialActionType_MAX = 7
};

// Enum Solarland.EVehicleWeaponScopeType
enum class EVehicleWeaponScopeType : uint8 {
	None = 0,
	Magnifier_X2 = 1,
	Magnifier_X4 = 2,
	Magnifier_X8 = 3,
	Max = 4
};

// Enum Solarland.EInteractiveTaskType
enum class EInteractiveTaskType : uint8 {
	None = 0,
	KillWithWeaponType = 1,
	KillWithAnyVehicle = 2,
	KillByFist = 3,
	OpenAirdrop = 4,
	EInteractiveTaskType_MAX = 5
};

// Enum Solarland.ESocialCurrencyType
enum class ESocialCurrencyType : uint8 {
	None = 0,
	Gold = 1,
	Diamond = 2,
	ESocialCurrencyType_MAX = 3
};

// Enum Solarland.EFindSpectateTargetType
enum class EFindSpectateTargetType : uint8 {
	Teammate = 0,
	PlayerKiller = 1,
	AIKiller = 2,
	AllNonBot = 3,
	All = 4,
	EFindSpectateTargetType_MAX = 5
};

// Enum Solarland.ESpectatePhase
enum class ESpectatePhase : uint8 {
	NotSpectate = 0,
	LookAtSelfDeathBox = 1,
	SpectateTeammates = 2,
	BlockWhenAllTeammatesDead = 3,
	SpectateAllPlayers = 4,
	ESpectatePhase_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_BattleUpgradeEffectType
enum class ESolarTablesEnum_BattleUpgradeEffectType : uint8 {
	MaxHp = 0,
	BulletDamage = 1,
	CharacterSkillDamage = 2,
	VehicleWeaponDamage = 3,
	VehicleSkillDamage = 4,
	VehicleStrikeDamage = 5,
	CharacterPunchDamage = 6,
	CharacterUpgradeDamage = 7,
	_Count = 8,
	ESolarTablesEnum_MAX = 9
};

// Enum Solarland.EPlayerStateRepType
enum class EPlayerStateRepType : uint8 {
	Character = 0,
	Controller = 1,
	EPlayerStateRepType_MAX = 2
};

// Enum Solarland.EPlayerChangedGoldResult
enum class EPlayerChangedGoldResult : uint8 {
	None = 0,
	Success = 1,
	GoldIsNotEnough = 2,
	NetworkError = 3,
	EPlayerChangedGoldResult_MAX = 4
};

// Enum Solarland.EPlayerChangedGoldType
enum class EPlayerChangedGoldType : uint8 {
	None = 0,
	CostedGold = 1,
	ReceivedGold = 2,
	EPlayerChangedGoldType_MAX = 3
};

// Enum Solarland.EExpBehaviorType
enum class EExpBehaviorType : uint8 {
	None = 0,
	Kill = 1,
	Assist = 2,
	Damage = 3,
	Pickup = 4,
	Survival = 5,
	Spawner = 6,
	Device = 7,
	TreasureBox = 8,
	DeathBox = 9,
	Airdrop = 10,
	PureDrop = 11,
	EExpBehaviorType_MAX = 12
};

// Enum Solarland.ECharacterStateInGame
enum class ECharacterStateInGame : uint8 {
	None = 0,
	InVehicle = 1,
	Dying = 2,
	Dead = 4,
	MaxState = 7,
	ECharacterStateInGame_MAX = 8
};

// Enum Solarland.EPlayerStateInGame
enum class EPlayerStateInGame : uint8 {
	None = 0,
	AppHasDeactivated = 1,
	AppHasReactivated = 2,
	Talking = 4,
	MaxState = 7,
	EPlayerStateInGame_MAX = 8
};

// Enum Solarland.EPassiveTriggeredVoice
enum class EPassiveTriggeredVoice : int32 {
	NOVOICE = 0,
	Personality = 1,
	TakeIt = 1002,
	Alright = 1003,
	GotIt = 1004,
	MarkLocation = 1005,
	AirdropsDelivering = 4001,
	AirdropsDelivered = 4002,
	Remaining3EnemySuqads = 4003,
	Remaining2EnemySuqads = 4004,
	Remaining1EnemySuqads = 4005,
	SafeZoneRetract30s = 4006,
	ResurrectionPeriodEnded = 4007,
	WelcomeToFarlight84 = 4008,
	AirdropsArriveIn60 = 4009,
	AirdropsArriveIn45 = 4010,
	AirdropsArriveIn30 = 4011,
	CharAppear = 5000,
	UsingMedicine = 5001,
	AddingShield = 5002,
	Reloading = 5003,
	HelpingTeammate = 5004,
	HitEnemy = 5005,
	KillEnemy = 5006,
	DestroyOtherTeam = 5007,
	ReviveTeammate = 5008,
	TakeDamage = 5009,
	Defeated = 5010,
	GetKilled = 5011,
	TeammataDefeated = 5012,
	TooFarApart = 5013,
	Charging50 = 5014,
	ChargingFinish = 5015,
	BecomeKillLeader = 5016,
	BackInTheFight = 5017,
	ParachuteFollowMe = 5018,
	ParachuteStartJump = 5019,
	NeedWeapons = 2009,
	NeedVehicle = 2010,
	NeedMuzzle = 3001,
	NeedGrip = 3002,
	NeedMagazine = 3003,
	NeedStock = 3004,
	NeedScope = 3005,
	NeedShield = 3006,
	NeedBatteryPack = 3007,
	NeedHorizontalCooldown = 3008,
	NeedVerticalCooldown = 3009,
	NeedSMGAmmo = 3010,
	NeedShutGunAmmo = 3011,
	NeedRifleAmmo = 3012,
	NeedSniperAmmo = 3013,
	NeedMedKit = 3014,
	NeedShieldRestorer = 3015,
	NeedSpecialWeapon = 3016,
	NeedRespawnPod = 3017,
	NeedBigShield = 3018,
	UseSuperSkill = 5021,
	Level1 = 2301,
	Level2 = 2303,
	Level3 = 2303,
	Level4 = 2304,
	Level5 = 2305,
	RemindTeammateRevive = 2006,
	EPassiveTriggeredVoice_MAX = 5022
};

// Enum Solarland.EPlayerNetStateInGame
enum class EPlayerNetStateInGame : uint8 {
	None = 0,
	Online = 1,
	Offline = 2,
	EPlayerNetStateInGame_MAX = 3
};

// Enum Solarland.ETeamType
enum class ETeamType : uint8 {
	PlayerTeam = 0,
	AITeam = 1,
	OnlyPlayerTeam = 2,
	EmptyTeam = 3,
	AnyTeam = 4,
	ETeamType_MAX = 5
};

// Enum Solarland.ETalentState
enum class ETalentState : uint8 {
	Activating = 0,
	CoolingDown = 1,
	Unactivated = 2,
	Invalid = 3,
	ETalentState_MAX = 4
};

// Enum Solarland.EInteractableType
enum class EInteractableType : uint8 {
	FIRECIRCLE = 0,
	JUMPPAD = 1,
	VEHICLEPAD = 2,
	RADARSTATION = 3,
	ELECTRICSHOP = 4,
	CHARGINGPILE = 5,
	SHIELDUPGRADEITEM = 6,
	SHIELDCREATOR = 7,
	MAX = 8
};

// Enum Solarland.EWorldMarkType
enum class EWorldMarkType : uint8 {
	ITEM = 0,
	INVALID = 1,
	WARNING = 2,
	MINIMAP = 3,
	BIGMAP = 4,
	VEHICLE = 5,
	INTERACTABLEACTOR = 6,
	QUICKCHATWHEEL = 7,
	ATTACHED = 8,
	SUMMONACTOR = 9,
	MAX = 10
};

// Enum Solarland.EAppLifetimeState
enum class EAppLifetimeState : uint8 {
	NONE = 0,
	NORMAL = 1,
	Background = 2,
	Deactive = 3,
	Terminated = 4,
	EAppLifetimeState_MAX = 5
};

// Enum Solarland.ESkydivingState
enum class ESkydivingState : uint8 {
	NotStarted = 0,
	PreStart = 1,
	InProgress = 2,
	Completed = 3,
	ESkydivingState_MAX = 4
};

// Enum Solarland.ESCMPlayerOutPath
enum class ESCMPlayerOutPath : uint8 {
	None = 0,
	OutFromSettingUI = 1,
	OutBySelf = 2,
	KickOutByServer = 3,
	OBSwitchScene = 4,
	ESCMPlayerOutPath_MAX = 5
};

// Enum Solarland.ESCMPlayerPunishType
enum class ESCMPlayerPunishType : uint8 {
	None = 0,
	HangUp = 1,
	DropOut = 2,
	IsolationPool = 3,
	KillTeammate = 4,
	ESCMPlayerPunishType_MAX = 5
};

// Enum Solarland.EReplayCameraMode
enum class EReplayCameraMode : uint8 {
	None = 0,
	ThirdPersonMode = 1,
	LockMode = 2,
	FreeMode = 3,
	LookAtMode = 4,
	CircularMode = 5,
	FreeLookAtMode = 6,
	EReplayCameraMode_MAX = 7
};

// Enum Solarland.ESolarSummonDeathReason
enum class ESolarSummonDeathReason : uint8 {
	SelfTimeDecay = 0,
	SelfLifeDecay = 1,
	OtherDestroy = 2,
	ESolarSummonDeathReason_MAX = 3
};

// Enum Solarland.ESkydiveStage
enum class ESkydiveStage : uint8 {
	None = 0,
	Flying = 1,
	Landing = 2,
	ESkydiveStage_MAX = 3
};

// Enum Solarland.ESolarCharacterType
enum class ESolarCharacterType : uint8 {
	ESolarCharacterType_None = 0,
	ESolarCharacterType_Player = 1,
	ESolarCharacterType_Bot = 2,
	ESolarCharacterType_Monster = 3,
	ESolarCharacterType_MAX = 4
};

// Enum Solarland.ECharacterSoundOpt
enum class ECharacterSoundOpt : uint8 {
	None = 0,
	Shield_Hit_1P = 1,
	Shield_Hit_3P = 2,
	Shield_Broken_1P = 3,
	Shield_Broken_3P = 4,
	Vehicle_Speedboard_1P = 5,
	Body_Hit_With_Bullet_Common_1P = 6,
	Body_Hit_By_Bullet_Common_1P = 7,
	Body_Hit_With_Punch_Common_1P = 8,
	Body_Hit_By_Punch_Common_1P = 9,
	Headshot_1P = 10,
	Headshot_Kill_UI = 11,
	Shot_Down_UI = 12,
	Shot_Down_1P = 13,
	Shot_Down_3P = 14,
	Shot_Down_3P_Enemy = 15,
	Death_UI = 16,
	Death_1P = 17,
	Death_3P = 18,
	Airborne_Fall_Start_1P = 19,
	Water_Fall_1P = 20,
	Water_Fall_3P = 21,
	Water_Fall_3P_Enemy = 22,
	Squat_1P = 23,
	Squat_3P = 24,
	Squat_3P_Enemy = 25,
	Stop_Climb_1P = 26,
	Stop_Climb_3P = 27,
	Stop_Climb_3P_Enemy = 28,
	Loop_Knapsack_Solar_Percent_1P = 29,
	Stop_Knapsack_Solar_Percent_1P = 30,
	Knapsack_Solar_Charging_Done_1P = 31,
	Knapsack_Solar_On_1P = 32,
	Knapsack_Solar_Off_1P = 33,
	Sniper_B01_Skill_On_1P = 34,
	Sniper_B01_Skill_Off_1P = 35,
	B9A04_Skill_Loop_1P = 36,
	B9A04_Skill_Loop_3P = 37,
	B9A04_Skill_Loop_3P_Enemy = 38,
	B9A04_Skill_Loop_End_1P = 39,
	B9A04_Skill_Loop_End_3P = 40,
	B9A04_Skill_Loop_End_3P_Enemy = 41,
	Knapsack_Landing_1P = 42,
	Knapsack_Landing_3P = 43,
	Knapsack_Landing_3P_Enemy = 44,
	Knapsack_Fly_Water_1P = 45,
	Knapsack_Fly_Water_3P = 46,
	Knapsack_Fly_Water_3P_Enemy = 47,
	Play_Shield_OneSet_1P = 48,
	Play_Shield_OneSet_3P = 49,
	Play_Shield_OneSet_3P_Enemy = 50,
	Play_Shield_Charging_1P = 51,
	Play_Shield_Multi_Charging_1P = 52,
	Play_Shield_Charging_3P = 53,
	Play_Shield_Charging_3P_Enemy = 54,
	Play_Shield_Charged_1P = 55,
	Play_Shield_Charged_3P = 56,
	Play_Shield_Charged_3P_Enemy = 57,
	Play_Shield_Charge_To_Max_1P = 58,
	Play_Shield_Charge_To_Max_3P = 59,
	Play_Shield_Charge_To_Max_3P_Enemy = 60,
	Play_Shield_Charge_Break_1P = 61,
	Play_Shield_Charge_Break_3P = 62,
	Play_Shield_Charge_Break_3P_Enemy = 63,
	Play_Hit_By_EMP_1P = 64,
	Play_Hit_By_EMP_3P = 65,
	Play_Hit_By_EMP_3P_Enemy = 66,
	Stop_Hit_By_EMP_1P = 67,
	Stop_Hit_By_EMP_3P = 68,
	Stop_Hit_By_EMP_3P_Enemy = 69,
	Play_Monster_Appear = 70,
	Play_Monster_Die = 71,
	Play_Heal_Wrap_1P = 72,
	Play_Heal_Wrap_3P = 73,
	Play_Heal_Wrap_3P_Enemy = 74,
	Stop_Heal_Wrap_1P = 75,
	Stop_Heal_Wrap_3P = 76,
	Stop_Heal_Wrap_3P_Enemy = 77,
	Play_Heal_Wrap_Cancel_1P = 78,
	Play_Heal_Wrap_Cancel_3P = 79,
	Play_Heal_Wrap_Cancel_3P_Enemy = 80,
	Play_Heal_Wrap_Complete_1P = 81,
	Play_Heal_Wrap_Complete_3P = 82,
	Play_Heal_Wrap_Complete_3P_Enemy = 83,
	Stop_Shield_Charging_1P = 84,
	Stop_Shield_Charging_3P = 85,
	Stop_Shield_Charging_3P_Enemy = 86,
	Mark_Select_Dial_UI = 87,
	Mark_Select_Pin_UI = 88,
	Mark_Select_Cancel_UI = 89,
	Mark_Select_Common_UI = 90,
	Mark_Danger_UI = 91,
	Play_Skill_Fast_Reload = 92,
	Play_char_skill_passive_targetlock = 93,
	Max = 94
};

// Enum Solarland.ESCMDamageType
enum class ESCMDamageType : uint8 {
	Point = 0,
	Poison = 1,
	Bomb = 2,
	AirDrop = 3,
	Dying = 4,
	VehicleHit = 5,
	VehicleExplosion = 6,
	Weapon = 7,
	UnarmWeapon = 8,
	VehicleWeapon = 9,
	SummonWeapon = 10,
	VehicleAbility = 11,
	WeaponAbility = 12,
	HelplessDeathVerge = 13,
	DeathVergeInWater = 14,
	GMCmd = 15,
	BackToLobby = 16,
	AppEnterBackground = 17,
	LongTimeDisconnect = 18,
	ClassSkill = 19,
	TacticalSkill = 20,
	ESCMDamageType_MAX = 21
};

// Enum Solarland.EDamageResultType
enum class EDamageResultType : uint8 {
	Normal = 0,
	Down = 1,
	Die = 2,
	EDamageResultType_MAX = 3
};

// Enum Solarland.EHealthChangeType
enum class EHealthChangeType : uint8 {
	Normal = 0,
	Self = 1,
	Ability = 2,
	Ability_Deadly = 3,
	Item = 4,
	Teammate = 5,
	Environment = 6,
	EHealthChangeType_MAX = 7
};

// Enum Solarland.ESolarAttributeType
enum class ESolarAttributeType : uint8 {
	ESolarAttributeType_None = 0,
	ESolarAttributeType_BasePhysicalDamage = 1,
	ESolarAttributeType_BaseEnergyDamage = 2,
	ESolarAttributeType_Health = 3,
	ESolarAttributeType_DeadlyDamage = 4,
	ESolarAttributeType_Energy = 5,
	ESolarAttributeType_Shield = 6,
	ESolarAttributeType_Weapon = 7,
	ESolarAttributeType_Mark = 8,
	ESolarAttributeType_MaxHealth = 9,
	ESolarAttributeType_MaxItemPile = 10,
	ESolarAttributeType_MoveSpeed = 11,
	ESolarAttributeType_ShieldRechargeCost = 12,
	ESolarAttributeType_Max = 13
};

// Enum Solarland.EShieldUpgradeInteractAckType
enum class EShieldUpgradeInteractAckType : uint8 {
	Success = 0,
	ItemReachLimit = 1,
	AlreadyInteracted = 2,
	SuccessWithReconnect = 3,
	EShieldUpgradeInteractAckType_MAX = 4
};

// Enum Solarland.EShieldCancelRechargeReason
enum class EShieldCancelRechargeReason : uint8 {
	None = 0,
	StopAutoRecharge = 1,
	EShieldCancelRechargeReason_MAX = 2
};

// Enum Solarland.ESolarHitType
enum class ESolarHitType : uint8 {
	None = 0,
	Character_Hit = 1,
	Character_Kill = 2,
	Character_BreakArmor = 3,
	Character_BreakShield = 4,
	Character_PendingKill = 5,
	Character_Headshot = 6,
	Character_HitShield = 7,
	Character_HitArmor = 8,
	Character_HitDown = 9,
	Character_HeadshotKill = 10,
	Vehicle_Hit = 51,
	Vehicle_HitWeakness = 52,
	ESolarHitType_MAX = 53
};

// Enum Solarland.EPlayerWeaponMsgType
enum class EPlayerWeaponMsgType : uint8 {
	EPlayerWeaponMsgType_HitPawn = 0,
	EPlayerWeaponMsgType_PlayerAssist = 1,
	EPlayerWeaponMsgType_NpcAssist = 2,
	EPlayerWeaponMsgType_SafeAreaUpdate = 3,
	EPlayerWeaponMsgType_ForbidShooting = 4,
	EPlayerWeaponMsgType_AddExp = 5,
	EPlayerWeaponMsgType_Max = 6
};

// Enum Solarland.EShieldRechargeState
enum class EShieldRechargeState : uint8 {
	AutoRecharge = 0,
	ManualRecharge = 1,
	None = 2,
	EShieldRechargeState_MAX = 3
};

// Enum Solarland.ECharacterOperation
enum class ECharacterOperation : uint8 {
	ECharacterOperation_None = 0,
	ECharacterOperation_OpenScope = 1,
	ECharacterOperation_CloseScope = 2,
	ECharacterOperation_OpenScopeInstant = 3,
	ECharacterOperation_MAX = 4
};

// Enum Solarland.EItemChangeType
enum class EItemChangeType : uint8 {
	Default = 0,
	PickUp = 1,
	Drop = 2,
	EItemChangeType_MAX = 3
};

// Enum Solarland.ECustomJumpType
enum class ECustomJumpType : uint8 {
	None = 0,
	Jump = 1,
	Launch = 2,
	ECustomJumpType_MAX = 3
};

// Enum Solarland.EDriveState
enum class EDriveState : uint8 {
	None = 0,
	Driver = 1,
	Passenger = 2,
	EDriveState_MAX = 3
};

// Enum Solarland.ERoleSkillStatus
enum class ERoleSkillStatus : uint8 {
	Normal = 0,
	WaitTriggerAgain = 1,
	Disable = 2,
	InCD = 3,
	Forbidden = 4,
	ERoleSkillStatus_MAX = 5
};

// Enum Solarland.ESpecAnimInstType
enum class ESpecAnimInstType : uint8 {
	Base = 0,
	Vehicle = 1,
	OneHandThrow = 2,
	KeepFiring = 3,
	Gatling = 4,
	CardsThrow = 5,
	DuckRolling = 6,
	InvisibleZone = 7,
	ESpecAnimInstType_MAX = 8
};

// Enum Solarland.EWeaponPartType
enum class EWeaponPartType : uint8 {
	Muzzle = 0,
	Scope = 1,
	Clip = 2,
	Rune = 3,
	Grip = 4,
	GunStock = 5,
	Scope2x = 6,
	Scope4x = 7,
	Scope8x = 8,
	MAX = 9
};

// Enum Solarland.EVelocityStatus
enum class EVelocityStatus : uint8 {
	Any = 0,
	Stationary = 1,
	Moving = 2,
	EVelocityStatus_MAX = 3
};

// Enum Solarland.EWeaponType
enum class EWeaponType : uint8 {
	AssualtRifle = 0,
	Submachinegun = 1,
	Shotgun = 2,
	Sniper = 3,
	VehicleMounted = 4,
	ItemWeapon = 5,
	SummonWeapon = 6,
	AntiVehicle = 7,
	Unarm = 8,
	Unknown = 9,
	EWeaponType_MAX = 10
};

// Enum Solarland.EShieldWidgetState
enum class EShieldWidgetState : uint8 {
	None = 0,
	PreAdd = 1,
	DoAdd = 2,
	CancelAdd = 3,
	DoSub = 4,
	EShieldWidgetState_MAX = 5
};

// Enum Solarland.EEnterBattleType
enum class EEnterBattleType : uint8 {
	OnHit = 0,
	OnWeaponFire = 1,
	NotEnter = 2,
	EEnterBattleType_MAX = 3
};

// Enum Solarland.EJetFlyType
enum class EJetFlyType : uint8 {
	None = 0,
	VerticalJetFly = 1,
	HorizontalJetFly = 2,
	CustomJetFly = 3,
	EJetFlyType_MAX = 4
};

// Enum Solarland.EShieldState
enum class EShieldState : uint8 {
	NONE = 0,
	SPAWN = 1,
	NORMAL = 2,
	RECHARGE = 3,
	BREAK = 4,
	PILE = 5,
	MAX = 6
};

// Enum Solarland.EHitSoundTargetType
enum class EHitSoundTargetType : uint8 {
	Default = 0,
	CharacterBody = 1,
	CharacterHead = 2,
	CharacterShieldBody = 3,
	CharacterShieldHead = 4,
	CharacterHitDown = 5,
	CharacterKill = 6,
	CharacterKill2 = 7,
	Vehicle = 8,
	VehicleWeakPoint = 9,
	SummonItemSolid = 10,
	SummonItemVirtual = 11,
	EHitSoundTargetType_MAX = 12
};

// Enum Solarland.EHitSoundSourceType
enum class EHitSoundSourceType : uint8 {
	Default = 0,
	Weapon = 1,
	Melee = 2,
	Skill = 3,
	VehicleWeapon = 4,
	VehicleSkill = 5,
	VehicleHit = 6,
	Poison = 7,
	AirDrop = 8,
	Bomb = 9,
	EHitSoundSourceType_MAX = 10
};

// Enum Solarland.ESingleCruiseState
enum class ESingleCruiseState : uint8 {
	NONE = 0,
	Fly = 1,
	Parachute = 2,
	ESingleCruiseState_MAX = 3
};

// Enum Solarland.ESolarTreatmentState
enum class ESolarTreatmentState : uint8 {
	None = 0,
	Treating = 1,
	End = 2,
	ESolarTreatmentState_MAX = 3
};

// Enum Solarland.EShieldSoundType
enum class EShieldSoundType : uint8 {
	StartRecharge = 0,
	Charging = 1,
	Charged = 2,
	ChargedToMax = 3,
	ChargeBreak = 4,
	ShieldHitted = 5,
	ShieldBroken = 6,
	StopRecharge = 7,
	MultiCharging = 8,
	EShieldSoundType_MAX = 9
};

// Enum Solarland.EShieldSoundEventType
enum class EShieldSoundEventType : uint8 {
	Type_1P = 0,
	Type_3P = 1,
	Type_3P_Enemy = 2,
	Type_MAX = 3
};

// Enum Solarland.EIdleTurnType
enum class EIdleTurnType : uint8 {
	Turn_Idle = 0,
	Turn_Left = 1,
	Turn_Right = 2,
	Turn_MAX = 3
};

// Enum Solarland.ETreasureBoxState
enum class ETreasureBoxState : uint8 {
	None = 0,
	Close = 1,
	Open = 2,
	ETreasureBoxState_MAX = 3
};

// Enum Solarland.EWallRunState
enum class EWallRunState : uint8 {
	WallRunning = 0,
	Success = 1,
	EWallRunState_MAX = 2
};

// Enum Solarland.ESkillAnimRightHandType
enum class ESkillAnimRightHandType : uint8 {
	Default = 0,
	Card = 1,
	ESkillAnimRightHandType_MAX = 2
};

// Enum Solarland.ESkillAnimType
enum class ESkillAnimType : uint8 {
	None = 0,
	SkillWithoutAnim = 1,
	OneHandThrow = 2,
	DoubleHandsThrow = 3,
	KeepFiring = 4,
	Gatling = 5,
	CardsThrow = 6,
	DuckRolling = 7,
	InvisibleZone = 8,
	ESkillAnimType_MAX = 9
};

// Enum Solarland.EBGMInBattle
enum class EBGMInBattle : uint8 {
	None = 0,
	Curise = 1,
	Skydiving = 2,
	Land = 3,
	End = 4,
	EBGMInBattle_MAX = 5
};

// Enum Solarland.ECruiseState
enum class ECruiseState : uint8 {
	None = 0,
	Boarded = 1,
	CruisePendingStarted = 2,
	CruiseStarted = 3,
	ParachuteAllowed = 4,
	ParachutePendingStarted = 5,
	ParachuteStarted = 6,
	End = 7,
	Max = 8
};

// Enum Solarland.ERescueState
enum class ERescueState : uint8 {
	EState_None = 0,
	EState_Dying = 1,
	EState_Rescuing = 2,
	EState_BeingRescue = 3,
	EState_MAX = 4
};

// Enum Solarland.EBackpackPropellingMode
enum class EBackpackPropellingMode : uint8 {
	Default = 0,
	Skydive = 1,
	EBackpackPropellingMode_MAX = 2
};

// Enum Solarland.EFXJetType
enum class EFXJetType : uint8 {
	JetDefault = 0,
	JetSingle = 1,
	JetLoop = 2,
	VerticalLaunch = 3,
	WallRun = 4,
	EFXJetType_MAX = 5
};

// Enum Solarland.ECharacterBodyScaleType
enum class ECharacterBodyScaleType : uint8 {
	None = 0,
	Woman = 1,
	Man = 2,
	DuckMan = 3,
	SmallWoman = 4,
	ECharacterBodyScaleType_MAX = 5
};

// Enum Solarland.EVehicleClass
enum class EVehicleClass : uint8 {
	All = 0,
	Wheeled = 1,
	Legged = 2,
	Hover = 3,
	EVehicleClass_MAX = 4
};

// Enum Solarland.EWeaponUIType
enum class EWeaponUIType : uint8 {
	All = 0,
	AssualtRifle = 1,
	Submachinegun = 2,
	Shotgun = 3,
	Sniper = 4,
	Others = 5,
	EWeaponUIType_MAX = 6
};

// Enum Solarland.ECustomParamValueType
enum class ECustomParamValueType : uint8 {
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	Percent = 4,
	Enum_S = 5,
	Enum_M = 6,
	AvailableWeapons = 7,
	AvailableVehicles = 8,
	ECustomParamValueType_MAX = 9
};

// Enum Solarland.ERemovedReasonType
enum class ERemovedReasonType : uint8 {
	None = 0,
	TimeOut = 1,
	Abandoned = 2,
	OwnerKick = 3,
	NotEnough = 4,
	ServerKick = 5,
	ERemovedReasonType_MAX = 6
};

// Enum Solarland.ESolarSupportLanguages
enum class ESolarSupportLanguages : uint8 {
	DefaultLanguage = 0,
	SimplifiedChinese = 1,
	TraditionalChinese = 2,
	Arabic = 3,
	German = 4,
	English = 5,
	Spanish = 6,
	French = 7,
	Hindi = 8,
	Indonesian = 9,
	Italian = 10,
	Japanese = 11,
	Korean = 12,
	Malay = 13,
	Polish = 14,
	Portuguese = 15,
	Russian = 16,
	Thai = 17,
	Turkish = 18,
	Vietnamese = 19,
	Tagalog = 20,
	PO = 253,
	OP = 254,
	ESolarSupportLanguages_MAX = 255
};

// Enum Solarland.EReplayActivityHeatKillUseType
enum class EReplayActivityHeatKillUseType : uint8 {
	None = 0,
	Weapon = 1,
	Vehicle = 2,
	Skill = 3,
	EReplayActivityHeatKillUseType_MAX = 4
};

// Enum Solarland.EPlayerActivityHeatType
enum class EPlayerActivityHeatType : uint8 {
	None = 0,
	Parachute = 1,
	ResurrectionParachute = 2,
	KillDown = 3,
	MultiKill = 4,
	BeKillDown = 5,
	Death = 6,
	Win = 7,
	Max = 8
};

// Enum Solarland.EShotMomentFlag
enum class EShotMomentFlag : uint8 {
	shotting = 0,
	hit = 1,
	killed = 2,
	invalid = 3,
	EShotMomentFlag_MAX = 4
};

// Enum Solarland.EShotModeFlag
enum class EShotModeFlag : uint8 {
	orgin = 0,
	d3d = 1,
	dwm = 2,
	rand = 3,
	EShotModeFlag_MAX = 4
};

// Enum Solarland.ESolarInputMode
enum class ESolarInputMode : uint8 {
	GameOnly = 0,
	GameAndUI = 1,
	UIOnly = 2,
	ESolarInputMode_MAX = 3
};

// Enum Solarland.EInputSwitchType
enum class EInputSwitchType : uint8 {
	ActionBinding = 0,
	ActionRemove = 1,
	AxisBinding = 2,
	AxisRemove = 3,
	EInputSwitchType_MAX = 4
};

// Enum Solarland.ESolarIgnoreCollisionType
enum class ESolarIgnoreCollisionType : uint8 {
	EnergyShield = 0,
	SummonItemCore = 1,
	SummonItem = 2,
	Character = 3,
	Vehicle = 4,
	UAV = 5,
	Water = 6,
	ESolarIgnoreCollisionType_MAX = 7
};

// Enum Solarland.EAlertDirection
enum class EAlertDirection : uint8 {
	Forward = 0,
	Backward = 1,
	Left = 2,
	Right = 3,
	EAlertDirection_MAX = 4
};

// Enum Solarland.ECustomNoticeColor
enum class ECustomNoticeColor : uint8 {
	None = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Yellow = 4,
	ECustomNoticeColor_MAX = 5
};

// Enum Solarland.ECustomNoticeType
enum class ECustomNoticeType : uint8 {
	SmallNotice = 0,
	MediumNotice = 1,
	BigNotice = 2,
	KillEffectNotice = 3,
	GlobalKillNotice = 4,
	LocalKillNotice = 5,
	PickUpNotice = 6,
	WeaponExpNotice = 7,
	EquipReplaceNotice = 8,
	TaskNotice = 9,
	ECustomNoticeType_MAX = 10
};

// Enum Solarland.EResurrectionState
enum class EResurrectionState : uint8 {
	Alive = 0,
	WaitingTeammatesHelp = 1,
	TimeOut = 2,
	AllTeammatesDied = 3,
	LeaveBattle = 4,
	EResurrectionState_MAX = 5
};

// Enum Solarland.ESCMDataType
enum class ESCMDataType : uint8 {
	None = 0,
	Byte = 1,
	Int = 2,
	Float = 3,
	Bool = 4,
	FVector = 5,
	FString = 6,
	ESCMDataType_MAX = 7
};

// Enum Solarland.ETaskPage
enum class ETaskPage : uint8 {
	TPNone = 0,
	TPDaily = 1,
	TPGrow = 2,
	TPHomeDaily = 3,
	TPSeason = 4,
	TPPassDaily = 5,
	TPPassWelfare = 6,
	TPPassWeek = 7,
	TPMonthlyDaily = 8,
	TPMonthlyWeek = 9,
	TPHalMonth = 10,
	TPWeekChallenge = 11,
	TPShareCodeDaily = 12,
	TPShareCodePersonal = 13,
	TPShareCodeFriend = 14,
	TPCollectRedeem = 15,
	ETaskPage_MAX = 16
};

// Enum Solarland.ESCMPlayerGameRole
enum class ESCMPlayerGameRole : uint8 {
	StandBy = 0,
	OBPlayer = 1,
	Player = 2,
	Spectator = 3,
	ESCMPlayerGameRole_MAX = 4
};

// Enum Solarland.ESCMPlayerType
enum class ESCMPlayerType : uint8 {
	None = 0,
	Player = 1,
	BotAI = 2,
	Monster = 3,
	ESCMPlayerType_MAX = 4
};

// Enum Solarland.ESCMPlayerOutType
enum class ESCMPlayerOutType : uint8 {
	None = 0,
	SelfLogout = 1,
	BattleEnd = 2,
	SelfEnd = 3,
	OfflineEnd = 4,
	Cheating = 5,
	Abnormal = 6,
	ESCMPlayerOutType_MAX = 7
};

// Enum Solarland.ESCMPlayerState
enum class ESCMPlayerState : uint8 {
	None = 0,
	PreLogin = 1,
	NotJoin = 2,
	InBattle = 4,
	Suspend = 8,
	BattleEnd = 16,
	ESCMPlayerState_MAX = 17
};

// Enum Solarland.EPersonalScoreType
enum class EPersonalScoreType : uint8 {
	None = 0,
	Kill = 1,
	Assist = 2,
	OccupyingPerSec = 3,
	Capture = 4,
	Release = 5,
	EPersonalScoreType_MAX = 6
};

// Enum Solarland.EBattlegroundPlayerStatus
enum class EBattlegroundPlayerStatus : uint8 {
	WaitForBattle = 0,
	Battle = 1,
	WaitForRebirth = 2,
	Deploying = 3,
	EBattlegroundPlayerStatus_MAX = 4
};

// Enum Solarland.EDeploymentType
enum class EDeploymentType : uint8 {
	None = 0,
	BlueHome = 1,
	RedHome = 2,
	A = 3,
	B = 4,
	C = 5,
	D = 6,
	EDeploymentType_MAX = 7
};

// Enum Solarland.EMatchResult
enum class EMatchResult : uint8 {
	None = 0,
	Victory = 1,
	Fail = 2,
	Draw = 3,
	EMatchResult_MAX = 4
};

// Enum Solarland.EFactionType
enum class EFactionType : uint8 {
	Neutral = 0,
	Blue = 1,
	Red = 2,
	EFactionType_MAX = 3
};

// Enum Solarland.EBasicSettingBool
enum class EBasicSettingBool : uint8 {
	NotInit = 0,
	Off = 1,
	On = 2,
	EBasicSettingBool_MAX = 3
};

// Enum Solarland.ESolarDamageTextDisplayModeType
enum class ESolarDamageTextDisplayModeType : uint8 {
	DamageTextDisplayMode_Off = 0,
	DamageTextDisplayMode_Stacked = 1,
	DamageTextDisplayMode_Floating = 2,
	DamageTextDisplayMode_Combined = 3,
	DamageTextDisplayMode_MAX = 4
};

// Enum Solarland.ESolarGyroscopeChooseType
enum class ESolarGyroscopeChooseType : uint8 {
	DefaultGyroscope = 0,
	ALWAYS = 1,
	FOCUS = 2,
	NEVER = 3,
	ESolarGyroscopeChooseType_MAX = 4
};

// Enum Solarland.ESolarChatOperatorType
enum class ESolarChatOperatorType : uint8 {
	All = 0,
	Team = 1,
	Off = 2,
	ESolarChatOperatorType_MAX = 3
};

// Enum Solarland.EWheeledVehicleDriveUserType
enum class EWheeledVehicleDriveUserType : uint8 {
	DirectionalInput = 0,
	SteeringInput = 1,
	JoyStickInput = 2,
	EWheeledVehicleDriveUserType_MAX = 3
};

// Enum Solarland.ESolarGraphicsQualityLevel
enum class ESolarGraphicsQualityLevel : uint8 {
	ESGQL_Invalid = 0,
	ESGQL_Level1 = 1,
	ESGQL_Level2 = 2,
	ESGQL_Level3 = 3,
	ESGQL_Level4 = 4,
	ESGQL_Level5 = 5,
	ESGQL_Level6 = 6,
	ESGQL_Level7 = 7,
	ESGQL_VALUE_MIN = 1,
	ESGQL_VALUE_MAX = 7,
	ESGQL_MAX = 8
};

// Enum Solarland.ESolarColorTheme
enum class ESolarColorTheme : uint8 {
	ESCT_Default = 0,
	ESCT_Bright = 1,
	ESCT_Soft = 2,
	ESCT_Cold = 3,
	ESCT_MAX = 4
};

// Enum Solarland.ESolarContentScaleFactorLevel
enum class ESolarContentScaleFactorLevel : uint8 {
	ESCSFL_NONE = 0,
	ESCSFL_Low = 1,
	ESCSFL_Mid = 2,
	ESCSFL_High = 3,
	ESCSFL_HighEnd = 4,
	ESCSFL_MAX = 5
};

// Enum Solarland.ESolarFrameRateLevel
enum class ESolarFrameRateLevel : uint8 {
	ESFRL_NONE = 0,
	ESFRL_Low = 1,
	ESFRL_Mid = 2,
	ESFRL_High = 3,
	ESFRL_HighEnd = 4,
	ESFRL_EXTREME = 5,
	ESFRL_MAX = 6
};

// Enum Solarland.ESolarTouchAccMode
enum class ESolarTouchAccMode : uint8 {
	Velocity = 0,
	Constant = 1,
	Distance = 2,
	ESolarTouchAccMode_MAX = 3
};

// Enum Solarland.ESolarShakeMainType
enum class ESolarShakeMainType : uint8 {
	OFF = 0,
	LOW = 1,
	MEDIUM = 2,
	HIGH = 3,
	ESolarShakeMainType_MAX = 4
};

// Enum Solarland.ESolarAudioMode
enum class ESolarAudioMode : uint8 {
	PushToTalk = 0,
	FreeToTalk = 1,
	ESolarAudioMode_MAX = 2
};

// Enum Solarland.ESolarSoundQuality
enum class ESolarSoundQuality : uint8 {
	NotInit = 0,
	Low = 1,
	High = 2,
	Ultra = 3,
	ESolarSoundQuality_MAX = 4
};

// Enum Solarland.ESolarWeaponDoScopeMode
enum class ESolarWeaponDoScopeMode : uint8 {
	Click = 0,
	Press = 1,
	Mixed = 2,
	ESolarWeaponDoScopeMode_MAX = 3
};

// Enum Solarland.EConfigVersion
enum class EConfigVersion : uint8 {
	BeforeCustomVersionWasAdded = 0,
	FixedCanAutoSteering = 1,
	FixedDefaultFOV = 2,
	VersionPlusOne = 3,
	LatestVersion = 2,
	EConfigVersion_MAX = 4
};

// Enum Solarland.ESolarColorBlindMode
enum class ESolarColorBlindMode : uint8 {
	Default = 0,
	RedGreen = 1,
	RedBlue = 2,
	YellowGreen = 3,
	ESolarColorBlindMode_MAX = 4
};

// Enum Solarland.ESolarGraphicQuality
enum class ESolarGraphicQuality : uint8 {
	Default = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ESolarGraphicQuality_MAX = 4
};

// Enum Solarland.ESolarRenderingResolutionScaleLevel
enum class ESolarRenderingResolutionScaleLevel : uint8 {
	Default = 0,
	Percent25 = 1,
	Percent50 = 2,
	Percent75 = 3,
	Percent100 = 4,
	Invalid = 255,
	ESolarRenderingResolutionScaleLevel_MAX = 256
};

// Enum Solarland.ESolarPostProcessingEffectsLevel
enum class ESolarPostProcessingEffectsLevel : uint8 {
	Default = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ExtraHigh = 4,
	ESolarPostProcessingEffectsLevel_MAX = 5
};

// Enum Solarland.ESolarReflectionQualityLevel
enum class ESolarReflectionQualityLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ExtraHigh = 4,
	Invalid = 255,
	ESolarReflectionQualityLevel_MAX = 256
};

// Enum Solarland.ESolarSSGIQualityLevel
enum class ESolarSSGIQualityLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ExtraHigh = 4,
	Invalid = 255,
	ESolarSSGIQualityLevel_MAX = 256
};

// Enum Solarland.ESolarAmbientOcclusionQualityLevel
enum class ESolarAmbientOcclusionQualityLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Invalid = 255,
	ESolarAmbientOcclusionQualityLevel_MAX = 256
};

// Enum Solarland.ESolarPointLightShadowDetailsLevel
enum class ESolarPointLightShadowDetailsLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	VeryHigh = 4,
	ExtraHigh = 5,
	ESolarPointLightShadowDetailsLevel_MAX = 6
};

// Enum Solarland.ESolarMaxCSMResolutionLevel
enum class ESolarMaxCSMResolutionLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Invalid = 255,
	ESolarMaxCSMResolutionLevel_MAX = 256
};

// Enum Solarland.ESolarSunlightShadowDetailLevel
enum class ESolarSunlightShadowDetailLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Invalid = 255,
	ESolarSunlightShadowDetailLevel_MAX = 256
};

// Enum Solarland.ESolarAnisotropicFilterLevel
enum class ESolarAnisotropicFilterLevel : uint8 {
	Default = 0,
	Level1X = 1,
	Level2X = 2,
	Level4X = 3,
	Level8X = 4,
	Level16X = 5,
	Invalid = 255,
	ESolarAnisotropicFilterLevel_MAX = 256
};

// Enum Solarland.ESolarAntiAliasingLevel
enum class ESolarAntiAliasingLevel : uint8 {
	Off = 0,
	FXAA = 1,
	TAA = 2,
	MSAA = 3,
	Invalid = 255,
	ESolarAntiAliasingLevel_MAX = 256
};

// Enum Solarland.ESolarMotionBlurLevel
enum class ESolarMotionBlurLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Ultra = 4,
	Invalid = 255,
	ESolarMotionBlurLevel_MAX = 256
};

// Enum Solarland.ESolarRayTracingLevel
enum class ESolarRayTracingLevel : uint8 {
	Off = 0,
	HighPerformance = 1,
	HighQuality = 2,
	ESolarRayTracingLevel_MAX = 3
};

// Enum Solarland.ESolarNvdiaReflexLevel
enum class ESolarNvdiaReflexLevel : uint8 {
	Off = 0,
	On = 1,
	High = 2,
	ESolarNvdiaReflexLevel_MAX = 3
};

// Enum Solarland.ESolarGraphicsMode
enum class ESolarGraphicsMode : uint8 {
	Default = 0,
	HighPerformance = 1,
	HighQuality = 2,
	ESolarGraphicsMode_MAX = 3
};

// Enum Solarland.ESolarFPS
enum class ESolarFPS : uint8 {
	Default = 0,
	FPS30 = 1,
	FPS60 = 2,
	FPS90 = 3,
	FPS120 = 4,
	FPS144 = 5,
	FPS240 = 6,
	FPS360 = 7,
	FPS500 = 8,
	SameWithMonitor = 9,
	ESolarFPS_MAX = 10
};

// Enum Solarland.ESolarMonitor
enum class ESolarMonitor : uint8 {
	Default = 0,
	Monitor1 = 1,
	Monitor2 = 2,
	Monitor3 = 3,
	ESolarMonitor_MAX = 4
};

// Enum Solarland.ESolarResolution
enum class ESolarResolution : uint8 {
	Default = 0,
	Resolution1 = 1,
	Resolution2 = 2,
	Resolution3 = 3,
	Resolution4 = 4,
	Resolution5 = 5,
	ESolarResolution_MAX = 6
};

// Enum Solarland.ESolarWheelModeType
enum class ESolarWheelModeType : uint8 {
	Default = 0,
	Click = 1,
	Release = 2,
	ESolarWheelModeType_MAX = 3
};

// Enum Solarland.ESolarSprintModeType
enum class ESolarSprintModeType : uint8 {
	Default = 0,
	Pressing = 1,
	Toggle = 2,
	Auto = 3,
	ESolarSprintModeType_MAX = 4
};

// Enum Solarland.ESolarITemHUDStyle
enum class ESolarITemHUDStyle : uint8 {
	Spread = 0,
	Wheel = 1,
	ESolarITemHUDStyle_MAX = 2
};

// Enum Solarland.EFileDownloadError
enum class EFileDownloadError : uint8 {
	None = 0,
	ConnectFailed = 1,
	RequestHeadFailed = 2,
	CreateFileFailed = 3,
	DownloadFailed = 4,
	WriteFailed = 5,
	DeleteOldFailed = 6,
	MoveFailed = 7,
	EFileDownloadError_MAX = 8
};

// Enum Solarland.EDownloadFailedStep
enum class EDownloadFailedStep : uint8 {
	DownloadServerListFailed = 0,
	DownloadPakListFailed = 1,
	DownloadPakFileFailed = 2,
	MountPakFileFailed = 3,
	EDownloadFailedStep_MAX = 4
};

// Enum Solarland.EBuffEffectTagType
enum class EBuffEffectTagType : uint8 {
	None = 0,
	TopHalfPart = 1,
	BottomHalfPart = 2,
	TwoSidePart = 3,
	BorderPart = 4,
	FullPart = 5,
	EBuffEffectTagType_MAX = 6
};

// Enum Solarland.ESolarTablesEnum_InputTriggerType
enum class ESolarTablesEnum_InputTriggerType : uint8 {
	InputTriggerPressed = 0,
	InputTriggerTap = 1,
	InputTriggerDoubleTap = 2,
	InputTriggerHold = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_InputActionType
enum class ESolarTablesEnum_InputActionType : uint8 {
	Action = 0,
	Axis = 1,
	_Count = 2,
	ESolarTablesEnum_MAX = 3
};

// Enum Solarland.EPickupItemType
enum class EPickupItemType : uint8 {
	None = 0,
	Normal = 1,
	TreasureBox = 2,
	DeathBox = 3,
	HomeItem = 4,
	EPickupItemType_MAX = 5
};

// Enum Solarland.EJetFlyForbiddenType
enum class EJetFlyForbiddenType : uint8 {
	Water = 0,
	Climb = 1,
	EJetFlyForbiddenType_MAX = 2
};

// Enum Solarland.ECountDownState
enum class ECountDownState : uint8 {
	CD_Normal = 0,
	CD_Buff = 1,
	CD_MAX = 2
};

// Enum Solarland.EInputButton
enum class EInputButton : uint8 {
	EInputButton_None = 0,
	EInputButton_Jump = 1,
	EInputButton_RechargeShield = 2,
	EInputButton_BigRechargeShield = 3,
	EInputButton_Crouch = 4,
	EInputButton_JetVertical = 5,
	EInputButton_JetHorizontal = 6,
	EInputButton_Fire = 7,
	EInputButton_LeftFire = 8,
	EInputButton_AltFire = 9,
	EInputButton_QuickAds = 10,
	EInputButton_CancelAction = 11,
	EInputButton_FreeLook = 12,
	EInputButton_Interact = 13,
	EInputButton_InteractAlternative = 14,
	EInputButton_Reload = 15,
	EInputButton_TogglePrimaryWeapon = 16,
	EInputButton_ToggleSecondaryWeapon = 17,
	EInputButton_ToggleTertiaryWeapon = 18,
	EInputButton_TogglePrimaryWeapon_Checkbox = 19,
	EInputButton_ToggleSecondaryWeapon_Checkbox = 20,
	EInputButton_ToggleTertiaryWeapon_Checkbox = 21,
	EInputButton_ToggleGunsight = 22,
	EInputButton_Gunsight = 23,
	EInputButton_SprintFreeOnPC = 24,
	EInputButton_SprintFreeOnMobile = 25,
	EInputButton_SprintLock = 26,
	EInputButton_Equip1 = 27,
	EInputButton_Equip2 = 28,
	EInputButton_Map = 29,
	EInputButton_Eject = 30,
	EInputButton_OutVehicle = 31,
	EInputButton_Backpack = 32,
	EInputButton_UseMedicine = 33,
	EInputButton_UseRecommendItem = 34,
	EInputButton_Pickup = 35,
	EInputButton_TogglePickup = 36,
	EInputButton_SwitchFireMode = 37,
	EInputButton_SwitchToSeat1 = 38,
	EInputButton_SwitchToSeat2 = 39,
	EInputButton_SwitchToSeat3 = 40,
	EInputButton_SwitchToSeat4 = 41,
	EInputButton_VehicleAbility1 = 42,
	EInputButton_VehicleAbility2 = 43,
	EInputButton_RoleSkillSuper = 44,
	EInputButton_RoleSkillTactical = 45,
	EInputButton_ShieldUpgrade = 46,
	EInputButton_ShieldUpgradeCancel = 47,
	EInputButton_TogglePutAwayWeapon = 48,
	EInputButton_Max = 49
};

// Enum Solarland.EKillParamsCompressInfo
enum class EKillParamsCompressInfo : int32 {
	Default = 0,
	bKillLeaderChange = 1,
	bKillLeaderShutDown = 2,
	bRevenge = 4,
	bShutDown = 8,
	bDown = 16,
	bClearTeam = 32,
	bKillDefender = 64,
	bKillerDead = 128,
	bHitHead = 256,
	bKillLeaderKill = 512,
	EKillParamsCompressInfo_MAX = 513
};

// Enum Solarland.ESpectateReferToState
enum class ESpectateReferToState : uint8 {
	Invalid = 0,
	Enter = 1,
	Change = 2,
	Exit = 3,
	ESpectateReferToState_MAX = 4
};

// Enum Solarland.EVehicleInterationUIState
enum class EVehicleInterationUIState : uint8 {
	None = 0,
	Repair = 1,
	Drive = 2,
	Passenger = 4,
	Backpacker = 8,
	EVehicleInterationUIState_MAX = 9
};

// Enum Solarland.ETransformerType
enum class ETransformerType : uint8 {
	Wheeled = 0,
	Legged = 1,
	Max = 2
};

// Enum Solarland.EPlayerNamePanelScale
enum class EPlayerNamePanelScale : uint8 {
	ExtraSmallSize = 0,
	SmallSize = 1,
	DefaultSize = 2,
	LargeSize = 3,
	ExtraLargeSize = 4,
	EPlayerNamePanelScale_MAX = 5
};

// Enum Solarland.EBattleOBHUDType
enum class EBattleOBHUDType : uint8 {
	None = 0,
	SpectatePlayer = 1,
	FreeView = 2,
	FreeLookAt = 3,
	Director = 4,
	EBattleOBHUDType_MAX = 5
};

// Enum Solarland.EOBPlayerHeadInfoWidgetStyle
enum class EOBPlayerHeadInfoWidgetStyle : uint8 {
	NearMode = 0,
	MiddleMode = 1,
	FarMode = 2,
	MAX = 3
};

// Enum Solarland.EUIPanelName
enum class EUIPanelName : uint8 {
	None = 0,
	SolarBattleControll = 1,
	WorldMarkPanel = 2,
	WeaponCrosshairPanel = 3,
	SolarBattle_Backpack = 4,
	Separate_Discarded_MultiItem = 5,
	HUD_ElectricShop = 6,
	BigMapUMG = 7,
	HUD_CustomizedNotice = 8,
	UI_Settings = 9,
	UI_OB_Root = 10,
	UI_OB_GlobalControl = 11,
	UI_OB_BigMap = 12,
	UI_OB_Settlement = 13,
	UI_OB_Settlement_InputMask = 14,
	UI_OB_HeadInfo = 15,
	UI_OB_ShortKeyboard = 16,
	UI_OpeningShow = 17,
	UI_Eliminate = 18,
	UI_Skill_Scan = 19,
	UI_HeroPick = 20,
	JobEffectDetailPanel = 21,
	UI_BuffEffectScreenPanel = 22,
	UI_TestCustomPanel = 23,
	Solarland_DevDebugUI_Widget = 24,
	UI_Highlight_Overview = 25,
	UI_BattleGround_End = 26,
	EUIPanelName_MAX = 27
};

// Enum Solarland.EWidgetBackKeyType
enum class EWidgetBackKeyType : uint8 {
	Invalid = 0,
	FromKey = 1,
	FromClose = 2,
	EWidgetBackKeyType_MAX = 3
};

// Enum Solarland.EWidgetLayerLevel
enum class EWidgetLayerLevel : uint8 {
	NormalWidget = 0,
	SameLevelCacheWidget = 1,
	SameLevelReplaceWidget = 2,
	CloseAllBackKeyWidget = 3,
	CloseAllBackKeyAndNormalWidget = 4,
	EWidgetLayerLevel_MAX = 5
};

// Enum Solarland.EWidgetScope
enum class EWidgetScope : uint8 {
	World = 0,
	Global = 1,
	EWidgetScope_MAX = 2
};

// Enum Solarland.ELayoutPreviewType
enum class ELayoutPreviewType : uint8 {
	Mobile = 0,
	Desktop = 1,
	ELayoutPreviewType_MAX = 2
};

// Enum Solarland.EInputCapture
enum class EInputCapture : uint8 {
	EIC_None = 0,
	EIC_Start = 1,
	EIC_End = 2,
	EIC_Move = 4,
	EIC_Transient = 3,
	EIC_All = 7,
	EIC_MAX = 8
};

// Enum Solarland.ESpecialItemID
enum class ESpecialItemID : int32 {
	NONE = 0,
	CARIRIDGE_BAG = 1040101,
	REVIVE_ITEM = 1160501,
	RADAR_SCANNER = 1080101,
	SHIELD_RECHARGER = 1120100,
	SHIELD_BIG_RECHARGER = 1120101,
	AMMO_ASSAULT_RIFLE = 1030101,
	AMMO_RIFLE = 1030102,
	AMMO_SNIPER = 1030103,
	AMMO_SHOTGUN = 1030104,
	SHIELD_UPGRADE_MATERIAL = 148023,
	EXP_ITEM = 149022,
	ESpecialItemID_MAX = 1160502
};

// Enum Solarland.EImageURLDownloadState
enum class EImageURLDownloadState : uint8 {
	NotStarted = 0,
	Processing = 1,
	Success = 2,
	Failed = 3,
	EImageURLDownloadState_MAX = 4
};

// Enum Solarland.ECustomGameModeTypeForUI
enum class ECustomGameModeTypeForUI : uint8 {
	Type_Default = 0,
	Type_Sabotage = 1,
	Type_MAX = 2
};

// Enum Solarland.EShopWeaponUpgradeState
enum class EShopWeaponUpgradeState : uint8 {
	Upgrade_None = 0,
	Upgrade_Enable = 1,
	Upgrade_Max = 2,
	Upgrade_NotEnoughEnergy = 3
};

// Enum Solarland.EActionWheelOperateType
enum class EActionWheelOperateType : uint8 {
	NeedClick = 0,
	AutoCommand = 1,
	EActionWheelOperateType_MAX = 2
};

// Enum Solarland.EActionWheelCommandType
enum class EActionWheelCommandType : uint8 {
	None = 0,
	UseItem = 1,
	WorldMark = 2,
	UseSticker = 3,
	PlayAnimation = 4,
	PlaySound = 5,
	Max = 6
};

// Enum Solarland.EActorMaterialChangeRebuildReason
enum class EActorMaterialChangeRebuildReason : uint8 {
	OriginalMeshChanged = 0,
	MeshAddedOrRemoved = 1,
	EActorMaterialChangeRebuildReason_MAX = 2
};

// Enum Solarland.EMaterialChangeTextureOverrideMode
enum class EMaterialChangeTextureOverrideMode : uint8 {
	None = 0,
	OverrideAllTextures = 1,
	OverrideSpecifiedTextures = 2,
	EMaterialChangeTextureOverrideMode_MAX = 3
};

// Enum Solarland.EMaterialParameterTypeFlags
enum class EMaterialParameterTypeFlags : uint8 {
	None = 0,
	Scaler = 1,
	Vector = 2,
	Texture = 4,
	Font = 8,
	AllWithoutFont = 7,
	All = 15,
	EMaterialParameterTypeFlags_MAX = 16
};

// Enum Solarland.EMaterialParameterType2
enum class EMaterialParameterType2 : uint8 {
	Scaler = 0,
	Vector = 1,
	Texture = 2,
	Font = 3,
	EMaterialParameterType2_MAX = 4
};

// Enum Solarland.EMaterialChangeType
enum class EMaterialChangeType : uint8 {
	Normal = 0,
	MultiplePass = 1,
	EMaterialChangeType_MAX = 2
};

// Enum Solarland.EActorParticleEffectAttachOption
enum class EActorParticleEffectAttachOption : uint8 {
	None = 0,
	AttachToActor = 1,
	AttachToMesh = 2,
	EActorParticleEffectAttachOption_MAX = 3
};

// Enum Solarland.EOperator
enum class EOperator : uint8 {
	IDLE = 0,
	ADD = 1,
	MINUS = 2,
	CANCEL = 3,
	EOperator_MAX = 4
};

// Enum Solarland.EAirDropOpenState
enum class EAirDropOpenState : uint8 {
	Closed = 0,
	Opening = 1,
	Opened = 2,
	EAirDropOpenState_MAX = 3
};

// Enum Solarland.EAirDropMovementState
enum class EAirDropMovementState : uint8 {
	None = 0,
	Waiting = 1,
	FreeFalling = 2,
	UniformFalling = 3,
	DecelerateFalling = 4,
	Landing = 5,
	Landed = 6,
	Removed = 7,
	EAirDropMovementState_MAX = 8
};

// Enum Solarland.EBulletTraceTargetType
enum class EBulletTraceTargetType : uint8 {
	None = 0,
	Character = 1,
	Vehicle = 4,
	SummonItem = 8,
	EBulletTraceTargetType_MAX = 9
};

// Enum Solarland.EBounceType
enum class EBounceType : uint8 {
	NONE = 0,
	ONCE = 1,
	STICK = 2,
	MAX = 3
};

// Enum Solarland.ETriggerType
enum class ETriggerType : uint8 {
	KEY_DOWN = 0,
	KEY_UP = 1,
	KEY_HOLD = 2,
	MAX = 3
};

// Enum Solarland.EHoldActionType
enum class EHoldActionType : uint8 {
	HT_Charge = 0,
	HT_Projectile = 1,
	HT_None = 2,
	HT_MAX = 3
};

// Enum Solarland.EVirtualBulletType
enum class EVirtualBulletType : uint8 {
	LinearBullet = 0,
	CurveBullet = 1,
	GravityBullet = 2,
	TracingBullet = 3,
	EVirtualBulletType_MAX = 4
};

// Enum Solarland.ETrajectoryType
enum class ETrajectoryType : uint8 {
	LINE = 0,
	LINE_GRAVITY = 1,
	CURVE = 2,
	CANISTER = 3,
	BEAM = 4,
	Rocket = 5,
	VirtualBullet = 6,
	MAX = 7
};

// Enum Solarland.EWeaponSkillChargedState
enum class EWeaponSkillChargedState : uint8 {
	PREPARE = 0,
	START = 1,
	COMPLETECHARGE = 2,
	EXECUTE = 3,
	EWeaponSkillChargedState_MAX = 4
};

// Enum Solarland.EFireMethodType
enum class EFireMethodType : uint8 {
	BULLET = 0,
	SKILL = 1,
	SUMMONBULLET = 2,
	MAX = 3
};

// Enum Solarland.ECostFireType
enum class ECostFireType : uint8 {
	DESCRETE = 0,
	CONTINUOUS = 1,
	MAX = 2
};

// Enum Solarland.EShootingSoundOpt
enum class EShootingSoundOpt : uint8 {
	EShootingSound_SINGLE_1P = 0,
	EShootingSound_SINGLE_3P = 1,
	EShootingSound_SINGLE_3P_ENEMY = 2,
	EShootingSound_AUTO_1P = 3,
	EShootingSound_AUTO_3P = 4,
	EShootingSound_AUTO_3P_ENEMY = 5,
	EShootingSound_BURST_1P = 6,
	EShootingSound_BURST_3P = 7,
	EShootingSound_BURST_3P_ENEMY = 8,
	EShootingSound_FIRE_LAST_1P = 9,
	EShootingSound_FIRE_LAST_3P = 10,
	EShootingSound_SKILL_CAST_1P = 11,
	EShootingSound_SKILL_CAST_3P = 12,
	EShootingSound_LAND_COMMON_HIT_3P = 13,
	EShootingSound_SKILL_FX_START_1P = 14,
	EShootingSound_SKILL_FX_START_3P = 15,
	EShootingSound_SHIELD_HIT_1P = 16,
	EShootingSound_SHIELD_HIT_3P = 17,
	EShootingSound_SHIELD_BROKEN_1P = 18,
	EShootingSound_SHIELD_BROKEN_3P = 19,
	EShootingSound_BODY_HIT_1P = 20,
	EShootingSound_BODY_HIT_3P = 21,
	EShootingSound_FIRE_OVERLOAD_1P = 22,
	EShootingSound_FIRE_OVERLOAD_3P = 23,
	EShootingSound_Fly_Loop = 24,
	EShootingSound_Fly_Once = 25,
	EShootingSound_Vehicle_Gun_On = 26,
	EShootingSound_Vehicle_Gun_Off = 27,
	EShootingSound_Smoke_Loop = 28,
	EShootingSound_B9A04Skill = 29,
	EShootingSound_Reload_1P_2 = 30,
	EShootingSound_Reload_3P_2 = 31,
	EShootingSound_Reload_1P_3 = 32,
	EShootingSound_Reload_3P_3 = 33,
	EShootingSound_Reload_1P_4 = 34,
	EShootingSound_Reload_3P_4 = 35,
	EShootingSound_Bolt_1P = 36,
	EShootingSound_Bolt_3P = 37,
	EShootingSound_MAX = 38
};

// Enum Solarland.EShootingOpt
enum class EShootingOpt : uint8 {
	EShootingOpt_SINGLE = 0,
	EShootingOpt_AUTO = 1,
	EShootingOpt_BURST = 2,
	EShootingOpt_MAX = 3
};

// Enum Solarland.EFootEffectType
enum class EFootEffectType : uint8 {
	Effect_None = 0,
	Effect_Water = 1,
	Effect_MAX = 2
};

// Enum Solarland.EAttributeSubBehavior
enum class EAttributeSubBehavior : uint8 {
	Apply = 0,
	Cancel = 1,
	Update = 2,
	EAttributeSubBehavior_MAX = 3
};

// Enum Solarland.EBackPackTransitionAnimState
enum class EBackPackTransitionAnimState : int32 {
	TransitionAnimStateDefault = 0,
	SkyCharge2NoCharge_NoFly = 535,
	SkyCharge2NoEnergy_NoFly = 545,
	SkyCharge2NoCharge_Fly = 636,
	SkyCharge2NoEnergy_Fly = 646,
	SkyCharge2NoCharge_IntoFly = 536,
	SkyCharge2NoEnergy_IntoFly = 546,
	NoCharge2SkyCharge_NoFly = 3505,
	NoEnergy2SkyCharge_NoFly = 4505,
	NoCharge2SkyCharge_Fly = 3606,
	NoEnergy2SkyCharge_Fly = 4606,
	NoCharge2SkyCharge_OutFly = 3605,
	NoEnergy2SkyCharge_OutFly = 4605,
	PileCharge2NoCharge_NoFly = 1535,
	PileCharge2NoEnergy_NoFly = 1545,
	PileCharge2NoCharge_Fly = 1636,
	PileCharge2NoEnergy_Fly = 1646,
	PileCharge2NoCharge_IntoFly = 1536,
	PileCharge2NoEnergy_IntoFly = 1546,
	NoCharge2PileCharge_NoFly = 3515,
	NoEnergy2PileCharge_NoFly = 4515,
	NoCharge2PileCharge_Fly = 3616,
	NoEnergy2PileCharge_Fly = 4616,
	NoCharge2PileCharge_OutFly = 3615,
	NoEnergy2PileCharge_OutFly = 4615,
	BoxCharge2NoCharge_NoFly = 2535,
	BoxCharge2NoEnergy_NoFly = 2545,
	BoxCharge2NoCharge_Fly = 2636,
	BoxCharge2NoEnergy_Fly = 2646,
	BoxCharge2NoCharge_IntoFly = 2536,
	BoxCharge2NoEnergy_IntoFly = 2546,
	NoCharge2BoxCharge_NoFly = 3525,
	NoEnergy2BoxCharge_NoFly = 4525,
	NoCharge2BoxCharge_Fly = 3626,
	NoEnergy2BoxCharge_Fly = 4626,
	NoCharge2BoxCharge_OutFly = 3625,
	NoEnergy2BoxCharge_OutFly = 4625,
	NoCharge2NoEnergy_NoFly = 3545,
	NoCharge2NoEnergy_IntoFly = 3546,
	NoEnergy2NoCharge_NoFly = 4535,
	NoEnergy2NoCharge_OutFly = 4635,
	EBackPackTransitionAnimState_MAX = 4636
};

// Enum Solarland.EBackPackFixedAnimState
enum class EBackPackFixedAnimState : uint8 {
	FixedAnimStateDefault = 0,
	FixedSkyChargeNoFly = 5,
	FixedPileChargeNoFly = 15,
	FixedBoxChargeNoFly = 25,
	FixedNoChargeNoFly = 35,
	FixedNoEnergyNoFly = 45,
	FixedSkyChargeIsFly = 6,
	FixedPileChargeIsFly = 16,
	FixedBoxChargeIsFly = 26,
	FixedNoChargeIsFly = 36,
	FixedNoEnergyIsFly = 46,
	EBackPackFixedAnimState_MAX = 47
};

// Enum Solarland.EBackPackAnimSubType
enum class EBackPackAnimSubType : uint8 {
	SkyChargeNoFly = 1,
	PileChargeNoFly = 2,
	BoxChargeNoFly = 3,
	NoChargeNoFly = 4,
	NoEnergyNoFly = 5,
	SkyChargeIsFly = 6,
	PileChargeIsFly = 7,
	BoxChargeIsFly = 8,
	NoChargeIsFly = 9,
	NoEnergyIsFly = 10,
	Charge2NoCharge_NoFly = 50,
	Charge2NoEnergy_NoFly = 51,
	Charge2NoCharge_Fly = 52,
	Charge2NoEnergy_Fly = 53,
	Charge2NoCharge_IntoFly = 54,
	Charge2NoEnergy_IntoFly = 55,
	NoCharge2Charge_NoFly = 56,
	NoEnergy2Charge_NoFly = 57,
	NoCharge2Charge_Fly = 58,
	NoEnergy2Charge_Fly = 59,
	NoCharge2Charge_OutFly = 60,
	NoEnergy2Charge_OutFly = 61,
	NoCharge2NoEnergy_NoFly = 62,
	NoCharge2NoEnergy_IntoFly = 63,
	NoEnergy2NoCharge_NoFly = 64,
	NoEnergy2NoCharge_OutFly = 65,
	ETypeDefault = 0,
	EBackPackAnimSubType_MAX = 66
};

// Enum Solarland.EBackPackAnimType
enum class EBackPackAnimType : uint8 {
	SkyCharge = 0,
	PileCharge = 1,
	BoxCharge = 2,
	NoCharge = 3,
	NoEnergy = 4,
	NoFly = 5,
	IsFly = 6,
	EBackPackAnimType_MAX = 7
};

// Enum Solarland.EProgressStatus
enum class EProgressStatus : uint8 {
	Min = 0,
	Max = 1,
	NoChange = 2,
	Increase = 3,
	Decrease = 4
};

// Enum Solarland.EControlPointStatus
enum class EControlPointStatus : uint8 {
	None = 0,
	Neutral = 1,
	Owned = 2,
	Enemy = 3,
	EControlPointStatus_MAX = 4
};

// Enum Solarland.EBattlegroundPlayerStartRegion
enum class EBattlegroundPlayerStartRegion : uint8 {
	Default = 0,
	Inner = 1,
	Outer = 2,
	EBattlegroundPlayerStartRegion_MAX = 3
};

// Enum Solarland.EBattlegroundMapElementType
enum class EBattlegroundMapElementType : uint8 {
	None = 0,
	Home = 1,
	ControlPoint = 2,
	AirWall = 3,
	PlayerStart = 4,
	VehicleSpawner = 5,
	Custom = 6,
	EBattlegroundMapElementType_MAX = 7
};

// Enum Solarland.EBattleRoyalTimeLineEnum
enum class EBattleRoyalTimeLineEnum : uint8 {
	None = 0,
	CreateBombingZone = 1,
	CreateAirdrop = 2,
	ModifyEnvironmentState = 3,
	EBattleRoyalTimeLineEnum_MAX = 4
};

// Enum Solarland.EBattleUpgradeEffectCategory
enum class EBattleUpgradeEffectCategory : uint8 {
	None = 0,
	Attack = 1,
	Defence = 2,
	Speed = 3,
	Bag = 4,
	Cooldown = 5,
	PlaceHolder1 = 6,
	PlaceHolder2 = 7,
	PlaceHolder3 = 8,
	PlaceHolder4 = 9,
	EBattleUpgradeEffectCategory_MAX = 10
};

// Enum Solarland.EBombingZoneState
enum class EBombingZoneState : uint8 {
	Waiting = 0,
	Firing = 1,
	Ending = 2,
	End = 3,
	EBombingZoneState_MAX = 4
};

// Enum Solarland.EBotAttrOperator
enum class EBotAttrOperator : uint8 {
	Equal = 0,
	Greater = 1,
	Less = 2,
	EBotAttrOperator_MAX = 3
};

// Enum Solarland.EBotAttrValueType
enum class EBotAttrValueType : uint8 {
	Current = 0,
	Max = 1,
	Percent = 2
};

// Enum Solarland.EBotAttrType
enum class EBotAttrType : uint8 {
	Health = 0,
	Shield = 1,
	Energy = 2,
	Difficulty = 3,
	EBotAttrType_MAX = 4
};

// Enum Solarland.EBotCheckCondition
enum class EBotCheckCondition : uint8 {
	AlwaysPass = 0,
	ReadyFight = 1,
	CanJetVertical = 2,
	CanJetHorizontal = 3,
	ReadyWeaponSkill = 4,
	IsIndependent = 5,
	NeedReloading = 6,
	EBotCheckCondition_MAX = 7
};

// Enum Solarland.EBotCheckAIServer
enum class EBotCheckAIServer : uint8 {
	AlwaysPass = 0,
	AIServerIsOnline = 1,
	EBotCheckAIServer_MAX = 2
};

// Enum Solarland.EBotCheckNgaiMLAction
enum class EBotCheckNgaiMLAction : uint8 {
	AlwaysPass = 0,
	DoOnceFire = 1,
	DoJump = 2,
	DoJetVertical = 3,
	DoJetForward = 4,
	DoUseRoleSkillOne = 5,
	DoUseRoleSkillTwo = 6,
	DoContinueFire = 7,
	DoMoveTo = 8,
	DoUseMedicine = 9,
	DoUseShieldRecharger = 10,
	DoVehicleFire = 11,
	DoUseVehicleFirstSkill = 12,
	DoUseVehicleSecondSkill = 13,
	EBotCheckNgaiMLAction_MAX = 14
};

// Enum Solarland.EBotCheckState
enum class EBotCheckState : uint8 {
	None = 0,
	Falling = 1,
	Driving = 2,
	Passager = 3,
	Swiming = 4,
	Dying = 5,
	Dead = 6,
	WeaponReloading = 7,
	ShootAiming = 8,
	SiegeVehicleLocated = 9,
	BeingRescued = 10,
	Cruising = 11,
	Skydiving = 12,
	SkydivingInitially = 13,
	SkydivingAfterRebirth = 14,
	SkydivingByLauncher = 15,
	EBotCheckState_MAX = 16
};

// Enum Solarland.EDistanceComparison
enum class EDistanceComparison : uint8 {
	Equal = 0,
	Greater = 1,
	Less = 2,
	EDistanceComparison_MAX = 3
};

// Enum Solarland.ESameScreenEffectHandleType
enum class ESameScreenEffectHandleType : uint8 {
	Ignore = 0,
	StopPrev = 1,
	ESameScreenEffectHandleType_MAX = 2
};

// Enum Solarland.EBuffEffectDurationType
enum class EBuffEffectDurationType : uint8 {
	Instant = 0,
	HasDuration = 1,
	EBuffEffectDurationType_MAX = 2
};

// Enum Solarland.ELevelLoadType
enum class ELevelLoadType : uint8 {
	ClientAntServer = 0,
	ClientOnly = 1,
	ServerOnly = 2,
	ELevelLoadType_MAX = 3
};

// Enum Solarland.EVaultType
enum class EVaultType : uint8 {
	None = 0,
	Step = 1,
	Step_Cross = 2,
	Step_Sprint = 3,
	Step_Sprint_Cross = 4,
	Vault = 5,
	Vault_Cross = 6,
	Vault_Sprint = 7,
	Vault_Sprint_Cross = 8,
	Climb = 9,
	Climb_Cross = 10,
	Climb_Sprint = 11,
	Climb_Sprint_Cross = 12,
	Climb_Water = 13,
	HighClimb = 14,
	HighClimb_Cross = 15,
	HighClimb_Sprint = 16,
	HighClimb_Sprint_Cross = 17,
	WallRun = 18,
	WallRunFailed = 19,
	EVaultType_MAX = 20
};

// Enum Solarland.EObstacleDetectorType
enum class EObstacleDetectorType : uint8 {
	Knee = 0,
	Waist = 1,
	Chest = 2,
	Overhead = 3,
	Nullifier = 7,
	EObstacleDetectorType_MAX = 8
};

// Enum Solarland.EMatActionOnRemoved
enum class EMatActionOnRemoved : uint8 {
	None = 0,
	ResetToBeginValue = 1,
	ResetToEndValue = 2,
	EMatActionOnRemoved_MAX = 3
};

// Enum Solarland.EBuffEffectType
enum class EBuffEffectType : uint8 {
	Both = 0,
	ScreenEffect = 1,
	ActorEffect = 2,
	EBuffEffectType_MAX = 3
};

// Enum Solarland.EActorEffectAffectedActorType
enum class EActorEffectAffectedActorType : uint8 {
	CharacterOnly = 0,
	All = 1,
	EActorEffectAffectedActorType_MAX = 2
};

// Enum Solarland.ECueContentVisibleTargetFlag
enum class ECueContentVisibleTargetFlag : uint8 {
	None = 0,
	Self = 1,
	Teammate = 2,
	Other = 4,
	Observer = 8,
	Anyone = 15,
	ECueContentVisibleTargetFlag_MAX = 16
};

// Enum Solarland.ECueContentPlayTiming
enum class ECueContentPlayTiming : uint8 {
	OnExecute = 0,
	OnActive = 1,
	WhileActive = 2,
	OnRemove = 3,
	OnCustomEvent = 4,
	ECueContentPlayTiming_MAX = 5
};

// Enum Solarland.EUseType
enum class EUseType : uint8 {
	NORMAL = 0,
	HANDSETTING = 101,
	EUseType_MAX = 102
};

// Enum Solarland.EWeaponEquipSlot
enum class EWeaponEquipSlot : uint8 {
	None = 0,
	First = 1,
	Second = 2,
	EWeaponEquipSlot_MAX = 3
};

// Enum Solarland.ECrossHairState
enum class ECrossHairState : uint8 {
	None = 0,
	Normal = 1,
	Reload = 2,
	Overload = 3,
	Forbid = 4,
	ECrossHairState_MAX = 5
};

// Enum Solarland.ESpreadType
enum class ESpreadType : uint8 {
	Absolute = 0,
	Relative = 1,
	ESpreadType_MAX = 2
};

// Enum Solarland.ECrossHairSpecialFireState
enum class ECrossHairSpecialFireState : uint8 {
	PrepareFire = 0,
	ActivateFire = 1,
	KeepFiring = 2,
	EndFire = 3,
	ECrossHairSpecialFireState_MAX = 4
};

// Enum Solarland.ECurvedEffectControllerStopMode
enum class ECurvedEffectControllerStopMode : uint8 {
	KeepCurrentProgress = 0,
	SetProgressToBegin = 1,
	SetProgressToEnd = 2,
	ECurvedEffectControllerStopMode_MAX = 3
};

// Enum Solarland.EUsePlayerType
enum class EUsePlayerType : uint8 {
	Self = 0,
	Teammate = 1,
	Enemy = 2,
	EUsePlayerType_MAX = 3
};

// Enum Solarland.EUseEmojiScene
enum class EUseEmojiScene : uint8 {
	None = 0,
	Lobby = 1,
	Battle = 2,
	EUseEmojiScene_MAX = 3
};

// Enum Solarland.EAnimationType
enum class EAnimationType : uint8 {
	Overload = 0,
	Overlay = 1,
	EAnimationType_MAX = 2
};

// Enum Solarland.EWeaponInfiniteAmmoMode
enum class EWeaponInfiniteAmmoMode : uint8 {
	Default = 0,
	InfiniteClip = 1,
	InfinitePkg = 2,
	InfiniteBoth = 3,
	EWeaponInfiniteAmmoMode_MAX = 4
};

// Enum Solarland.EJetAltitudeLimitationMode
enum class EJetAltitudeLimitationMode : uint8 {
	Default = 0,
	Home = 1,
	EJetAltitudeLimitationMode_MAX = 2
};

// Enum Solarland.EWeaponVibrateFactor
enum class EWeaponVibrateFactor : uint8 {
	Off = 0,
	Low = 10,
	Middle = 20,
	High = 30,
	EWeaponVibrateFactor_MAX = 31
};

// Enum Solarland.EWeaponVibrateType
enum class EWeaponVibrateType : uint8 {
	None = 0,
	Fire = 1,
	Reload_GetOld = 2,
	Reload_Restore = 3,
	Bolt = 4,
	Charge = 5,
	EWeaponVibrateType_MAX = 6
};

// Enum Solarland.EGameplayVibrateIntensity
enum class EGameplayVibrateIntensity : uint8 {
	Off = 0,
	Low = 10,
	Middle = 20,
	High = 30,
	EGameplayVibrateIntensity_MAX = 31
};

// Enum Solarland.EGameplayVibrateCategory
enum class EGameplayVibrateCategory : uint8 {
	None = 0,
	SelfBeingHit = 1,
	SelfJetpackFlying = 2,
	SelfContinuousDamaged = 3,
	TriggerCharacterDown = 4,
	TriggerCharacterDie = 5,
	EGameplayVibrateCategory_MAX = 6
};

// Enum Solarland.EVibrateDeviceType
enum class EVibrateDeviceType : uint8 {
	Nonsupport = 0,
	Mobile = 1,
	Gamepad = 2,
	EVibrateDeviceType_MAX = 3
};

// Enum Solarland.ESCMDataGatherType_Settle
enum class ESCMDataGatherType_Settle : uint8 {
	None = 0,
	Self = 1,
	Side = 2,
	All = 3,
	ESCMDataGatherType_MAX = 4
};

// Enum Solarland.ESCMDataReplicateType
enum class ESCMDataReplicateType : uint8 {
	None = 0,
	RepOwner = 1,
	RepSide = 2,
	RepGlobal = 3,
	ESCMDataReplicateType_MAX = 4
};

// Enum Solarland.ESCMRankCheckType
enum class ESCMRankCheckType : uint8 {
	New = 0,
	Change = 1,
	Delete = 2,
	ESCMRankCheckType_MAX = 3
};

// Enum Solarland.ESCMDataSetType
enum class ESCMDataSetType : uint8 {
	None = 0,
	Array = 1,
	Map = 2,
	ESCMDataSetType_MAX = 3
};

// Enum Solarland.EGaugeType
enum class EGaugeType : uint8 {
	None = 0,
	Degree_361 = 1,
	Degree_181 = 2,
	Degree_91 = 3,
	DownUp = 4,
	LeftRight = 5,
	EGaugeType_MAX = 6
};

// Enum Solarland.EAimOffsetAdjustType
enum class EAimOffsetAdjustType : uint8 {
	None = 0,
	AdjustPitch = 1,
	AdjustYaw = 2,
	AdjustBoth = 3,
	EAimOffsetAdjustType_MAX = 4
};

// Enum Solarland.EPosture
enum class EPosture : uint8 {
	Stand = 0,
	Crouch = 1,
	EPosture_MAX = 2
};

// Enum Solarland.EAimTraceOriginType
enum class EAimTraceOriginType : uint8 {
	Default = 0,
	Muzzle = 1,
	Camera = 2,
	EAimTraceOriginType_MAX = 3
};

// Enum Solarland.EUIHeroPickListCellState
enum class EUIHeroPickListCellState : uint8 {
	Show = 0,
	Lock = 1,
	Forbidden = 2,
	EUIHeroPickListCellState_MAX = 3
};

// Enum Solarland.EHeroOwnedType
enum class EHeroOwnedType : uint8 {
	Own = 0,
	OwnForNow = 1,
	NotOwn = 2,
	EHeroOwnedType_MAX = 3
};

// Enum Solarland.EHeroPickType
enum class EHeroPickType : uint8 {
	AllSidePlayer = 0,
	SpecificPlayer = 1,
	AllPlayer = 2,
	EHeroPickType_MAX = 3
};

// Enum Solarland.EUIHeroPickPlayerState
enum class EUIHeroPickPlayerState : uint8 {
	Waiting = 0,
	Selecting = 1,
	Confirm = 2,
	Done = 3,
	EUIHeroPickPlayerState_MAX = 4
};

// Enum Solarland.EHomeJetPackflag
enum class EHomeJetPackflag : uint8 {
	NONE = 0,
	Horizontal = 1,
	Vertical = 2,
	Stop = 3,
	EHomeJetPackflag_MAX = 4
};

// Enum Solarland.ESkillStateType
enum class ESkillStateType : uint8 {
	Normal = 0,
	CD = 1,
	NoneSkill = 2,
	ESkillStateType_MAX = 3
};

// Enum Solarland.EKeyMappingStatus
enum class EKeyMappingStatus : uint8 {
	EMPTY = 0,
	BASE = 1,
	OTHER = 2,
	OTHERANDBASE = 3,
	INVALID = 4,
	DONE = 5,
	EKeyMappingStatus_MAX = 6
};

// Enum Solarland.EKillNoticeType
enum class EKillNoticeType : uint8 {
	BeKillLeader = 0,
	ShutDownKillLeader = 1,
	Revenge = 2,
	ShutDown = 3,
	CumulativeKill = 4,
	Down = 5,
	ClearTeam = 6,
	KillDefender = 7,
	SelfKillNotify = 8,
	KillLeaderChange = 9,
	KillLeaderShutDown = 10,
	GlobalKillNotify = 11,
	EKillNoticeType_MAX = 12
};

// Enum Solarland.EMapCellSelectionAccess
enum class EMapCellSelectionAccess : uint8 {
	Can = 0,
	Cannot = 1,
	EMapCellSelectionAccess_MAX = 2
};

// Enum Solarland.EMassInvState
enum class EMassInvState : uint8 {
	Begin = 0,
	Prepare = 1,
	Normal = 2,
	Sprint = 3,
	End = 4,
	EMassInvState_MAX = 5
};

// Enum Solarland.EMapState
enum class EMapState : uint8 {
	Idle = 0,
	FOVScale = 1,
	EMapState_MAX = 2
};

// Enum Solarland.EMapFOVParamType
enum class EMapFOVParamType : uint8 {
	VehicleSpeed = 0,
	PoisonCircle = 1,
	EMapFOVParamType_MAX = 2
};

// Enum Solarland.EMapFOVState
enum class EMapFOVState : uint8 {
	Default = 0,
	Fov1 = 1,
	Fov2 = 2,
	EMapFOVState_MAX = 3
};

// Enum Solarland.EAirdropStatus
enum class EAirdropStatus : uint8 {
	Default = 0,
	Coming = 1,
	Available = 2,
	Opening = 3,
	Opened = 4,
	EAirdropStatus_MAX = 5
};

// Enum Solarland.EMeshWidgetDisplayType
enum class EMeshWidgetDisplayType : uint8 {
	Icon = 0,
	Flash = 1,
	Diffuse = 2,
	EMeshWidgetDisplayType_MAX = 3
};

// Enum Solarland.EMissileSwarmDebugFlag
enum class EMissileSwarmDebugFlag : uint8 {
	Aim = 0,
	Trail = 1,
	Trace = 2,
	Explode = 3,
	Mesh = 4,
	EMissileSwarmDebugFlag_MAX = 5
};

// Enum Solarland.EMeshProgressType
enum class EMeshProgressType : uint8 {
	Normal = 0,
	Damage = 1,
	Background = 2,
	EMeshProgressType_MAX = 3
};

// Enum Solarland.E_Type_OB_Scoreboard
enum class E_Type_OB_Scoreboard : uint8 {
	OB_Settlement = 0,
	OB_InGame = 1,
	Lobby_League_Settlement = 2,
	Lobby_CreateRoom_Settlement = 3,
	E_Type_OB_MAX = 4
};

// Enum Solarland.EOBPithyPlayerState
enum class EOBPithyPlayerState : uint8 {
	Alive = 0,
	Dying = 1,
	Dead = 2,
	EOBPithyPlayerState_MAX = 3
};

// Enum Solarland.EOBTeamListTab
enum class EOBTeamListTab : uint8 {
	Pithy = 0,
	All = 1,
	Nearby = 2,
	EOBTeamListTab_MAX = 3
};

// Enum Solarland.ERoleWidgetStatus
enum class ERoleWidgetStatus : uint8 {
	Normal = 0,
	WaitTriggerAgain = 1,
	Disable = 2,
	InCD = 3,
	Forbidden = 4,
	ERoleWidgetStatus_MAX = 5
};

// Enum Solarland.ERoleWidgetType
enum class ERoleWidgetType : uint8 {
	Super = 0,
	Tactical = 1,
	ERoleWidgetType_MAX = 2
};

// Enum Solarland.ESCMMapElementVisibilityType
enum class ESCMMapElementVisibilityType : uint8 {
	Visible = 0,
	Hidden = 1,
	ESCMMapElementVisibilityType_MAX = 2
};

// Enum Solarland.ESCMMapElementStateType
enum class ESCMMapElementStateType : uint8 {
	Normal = 0,
	Suspend = 1,
	ESCMMapElementStateType_MAX = 2
};

// Enum Solarland.ESCMMapElementType
enum class ESCMMapElementType : uint8 {
	PlayerStart = 0,
	ItemSpawner = 1,
	AirDrop = 2,
	ChargingPile = 3,
	JumpPad = 4,
	CarPad = 5,
	Vehicle = 6,
	Poison = 7,
	Custom = 8,
	ESCMMapElementType_MAX = 9
};

// Enum Solarland.EMatchType
enum class EMatchType : uint8 {
	NONE = 0,
	Team = 1,
	AverageSide = 2,
	SingleSide = 3,
	EMatchType_MAX = 4
};

// Enum Solarland.EPlayerResurrectType
enum class EPlayerResurrectType : uint8 {
	NONE = 0,
	SelfResurrectionCoin = 1,
	RequestTeamResurrect = 2,
	EPlayerResurrectType_MAX = 3
};

// Enum Solarland.EPlayerPawnType
enum class EPlayerPawnType : uint8 {
	NONE = 0,
	Character = 1,
	Vehicle = 2,
	Other = 3,
	EPlayerPawnType_MAX = 4
};

// Enum Solarland.ESCMGameSceneType
enum class ESCMGameSceneType : uint8 {
	None = 0,
	InBattle = 1,
	Settlement = 2,
	ESCMGameSceneType_MAX = 3
};

// Enum Solarland.EDownloadState
enum class EDownloadState : uint8 {
	None = 0,
	Downloading = 1,
	Successful = 2,
	Failed = 3,
	EDownloadState_MAX = 4
};

// Enum Solarland.EShieldUpgradeItemShopOpenState
enum class EShieldUpgradeItemShopOpenState : uint8 {
	Closed = 0,
	Opening = 1,
	Open = 2,
	Closing = 3,
	EShieldUpgradeItemShopOpenState_MAX = 4
};

// Enum Solarland.ESolarWeaponBrand
enum class ESolarWeaponBrand : uint8 {
	WeaponBrand_None = 0,
	WeaponBrand_9A = 1,
	WeaponBrand_Wasteland = 2,
	WeaponBrand_Murphy = 3,
	WeaponBrand_Prism = 4,
	WeaponBrand_MAX = 5
};

// Enum Solarland.ERoleAbilityVoiceTriggerTiming
enum class ERoleAbilityVoiceTriggerTiming : uint8 {
	None = 0,
	Active = 1,
	Commit = 2,
	ERoleAbilityVoiceTriggerTiming_MAX = 3
};

// Enum Solarland.ESolarAbilityInstanceType
enum class ESolarAbilityInstanceType : uint8 {
	ESolarAbilityInstanceType_Multiple = 0,
	ESolarAbilityInstanceType_SingleReplace = 1,
	ESolarAbilityInstanceType_SingleYield = 2,
	ESolarAbilityInstanceType_Max = 3
};

// Enum Solarland.ESolarAttributeDurationType
enum class ESolarAttributeDurationType : uint8 {
	Instant = 0,
	HasDuration = 1,
	Infinite = 2,
	ESolarAttributeDurationType_MAX = 3
};

// Enum Solarland.ESolarAttributeValueSourceType
enum class ESolarAttributeValueSourceType : uint8 {
	Value = 0,
	FromConfig = 1,
	ESolarAttributeValueSourceType_MAX = 2
};

// Enum Solarland.EAchievementCondition
enum class EAchievementCondition : uint8 {
	None = 0,
	AchTSubAchievement = 1,
	AchTMinuteKill = 2,
	AchTUseVehicle = 3,
	AchTHPKill = 4,
	AchTLimitWin = 5,
	AchTDyingWin = 6,
	AchTAssistWin = 7,
	AchTRescue = 8,
	AchTLevel = 9,
	AchTSkyKill = 10,
	AchTOnlyLiveWin = 11,
	AchTFirstKill = 12,
	AchTBlindSniper = 13,
	AchTFriendNum = 14,
	AchTOpenBoxNum = 15,
	AchTenemyVehicle = 16,
	AchTDie = 17,
	AchTMarsWin = 18,
	AchTFistKill = 19,
	AchTAirUmbrella = 20,
	AchTAirTrapeze = 21,
	AchTAirSpeed = 22,
	AchTBubbleKill = 23,
	AchTCharacterNum = 24,
	AchAdvancedWeapon = 25,
	AchTBombingDie = 26,
	AchTRevengeKill = 27,
	EAchievementCondition_MAX = 28
};

// Enum Solarland.EAchievementReportType
enum class EAchievementReportType : uint8 {
	None = 0,
	SingleBattlle = 1,
	MultiBattle = 2,
	NoBattle = 3,
	EAchievementReportType_MAX = 4
};

// Enum Solarland.ESigninItemState
enum class ESigninItemState : uint8 {
	Got = 0,
	UnGot = 1,
	No = 2,
	ESigninItemState_MAX = 3
};

// Enum Solarland.EWidgetOverrideParamType
enum class EWidgetOverrideParamType : uint8 {
	None = 0,
	Text = 1,
	Image = 2,
	Custom = 3,
	GameplayTag = 4,
	EWidgetOverrideParamType_MAX = 5
};

// Enum Solarland.EWidgetLoadType
enum class EWidgetLoadType : uint8 {
	Start = 0,
	Delay = 1,
	EWidgetLoadType_MAX = 2
};

// Enum Solarland.EProgressBoardChannelState
enum class EProgressBoardChannelState : uint8 {
	None = 0,
	Add = 1,
	Minus = 2,
	HoldOn = 3,
	EProgressBoardChannelState_MAX = 4
};

// Enum Solarland.ESolarAIValueCompareOp
enum class ESolarAIValueCompareOp : uint8 {
	Equal = 0,
	Greater = 1,
	Less = 2,
	ESolarAIValueCompareOp_MAX = 3
};

// Enum Solarland.ESolarAudioDetailCatalog
enum class ESolarAudioDetailCatalog : uint8 {
	SADC_Common = 0,
	SADC_Music = 1,
	SADC_UI = 2,
	SADC_Gun = 3,
	SADC_Vehicle = 4,
	SADC_Object = 5,
	SADC_Character = 6,
	SADC_Voice = 7,
	SADC_VoiceEx = 8,
	SADC_MAX = 9
};

// Enum Solarland.ESolarAudioDetailUnloadMode
enum class ESolarAudioDetailUnloadMode : uint8 {
	SADU_NeverUnload = 0,
	SADU_SwitchLevel = 1,
	SADU_Manual = 2,
	SADU_EnterOtherScene = 3,
	SADU_LeaveLobby = 4,
	SADU_LeaveTutorial = 5,
	SADU_LeaveHome = 6,
	SADU_LeaveWaiting = 7,
	SADU_LeaveGame = 8,
	SADU_DontCare = 9,
	SADU_MAX = 10
};

// Enum Solarland.ESolarAudioDetailLoadMode
enum class ESolarAudioDetailLoadMode : uint8 {
	SADL_BeginPlay = 0,
	SADL_OnDemand = 1,
	SADL_Manual = 2,
	SADL_EnterBindScene = 3,
	SADL_EnterLobby = 4,
	SADL_EnterTutorial = 5,
	SADL_EnterHome = 6,
	SADL_EnterWaiting = 7,
	SADL_EnterGame = 8,
	SADL_NeverLoad = 9,
	SADL_MAX = 10
};

// Enum Solarland.EBankLoadState
enum class EBankLoadState : uint8 {
	NotLoaded = 0,
	Loaded = 1,
	AsyncLoading = 2,
	AsyncUnloading = 3,
	EBankLoadState_MAX = 4
};

// Enum Solarland.EAnimBlendDirection
enum class EAnimBlendDirection : uint8 {
	Idle = 0,
	Forward = 1,
	Back = 2,
	Right = 3,
	Left = 4,
	Max = 5
};

// Enum Solarland.EInVehicleState
enum class EInVehicleState : uint8 {
	None = 0,
	Driving = 1,
	Riding = 2,
	StickingOut = 3,
	EInVehicleState_MAX = 4
};

// Enum Solarland.ECruiseAnimState
enum class ECruiseAnimState : uint8 {
	None = 0,
	Looping = 1,
	Leaving = 2,
	End = 3,
	ECruiseAnimState_MAX = 4
};

// Enum Solarland.ECharacterMontage
enum class ECharacterMontage : uint8 {
	Invalid = 0,
	Bolt = 1,
	Equip = 2,
	PreFire = 3,
	Rechamber = 4,
	Fire1 = 5,
	Reload = 6,
	ReloadWithBolt = 7,
	Max = 8
};

// Enum Solarland.EVehicleAnimationType
enum class EVehicleAnimationType : uint8 {
	None = 0,
	Suv = 1,
	Sports = 2,
	MotorBike = 3,
	Hover = 4,
	Legged = 5,
	IronMan = 6,
	Backpacker = 7,
	EVehicleAnimationType_MAX = 8
};

// Enum Solarland.EDriveTurnType
enum class EDriveTurnType : uint8 {
	EDriveTurnType_Idle = 0,
	EDriveTurnType_Left = 1,
	EDriveTurnType_Right = 2,
	EDriveTurnType_MAX = 3
};

// Enum Solarland.EWeaponStatus
enum class EWeaponStatus : uint8 {
	NoWeapon = 0,
	Peace = 1,
	Aiming = 2,
	EWeaponStatus_MAX = 3
};

// Enum Solarland.EAnoAntiDataType
enum class EAnoAntiDataType : uint8 {
	Unknown = 0,
	SecAntiDataFlow = 1,
	SecAttackFlow = 2,
	EAnoAntiDataType_MAX = 3
};

// Enum Solarland.EMeerkatSubComponentType
enum class EMeerkatSubComponentType : uint8 {
	MB = 0,
	Hp = 1,
	AE = 2,
	AR = 3,
	EMeerkatSubComponentType_MAX = 4
};

// Enum Solarland.EMeerkatGameDispatchEvents
enum class EMeerkatGameDispatchEvents : uint8 {
	ServerFire = 0,
	ServerHit = 1,
	ServerKill = 2,
	ServerKilled = 3,
	ClientFire = 4,
	ClientHit = 5,
	ClientKill = 6,
	ClientKilled = 7,
	ClientHitDown = 8,
	ClientBeHitDown = 9,
	ClientTick = 10,
	ServerTick = 11,
	ClientBeginPlay = 12,
	ServerBeginPlay = 13,
	ClientEndPlay = 14,
	ServerEndPlay = 15,
	EventMax = 16,
	EMeerkatGameDispatchEvents_MAX = 17
};

// Enum Solarland.EItemLoadPriority
enum class EItemLoadPriority : int32 {
	DEFAULT = 0,
	ITEM_MIN = 1,
	ITEM_MAX = 99,
	WEAPON_MIN = 100,
	WEAPON_MAX = 199,
	VEHICLE_MIN = 200,
	VEHICLE_MAX = 299,
	CHARACTER_MIN = 300,
	CHARACTER_MAX = 399,
	CLASS_PRIORITY = 4294967295,
	EItemLoadPriority_MAX = 4294967296
};

// Enum Solarland.EAutoSaveType
enum class EAutoSaveType : uint8 {
	Weapon = 0,
	ItemActor = 1,
	EAutoSaveType_MAX = 2
};

// Enum Solarland.ESolarBotMemberState
enum class ESolarBotMemberState : uint8 {
	None = 0,
	Leader = 1,
	OnCall = 2,
	Separate = 3,
	Leaving = 4,
	Invalid = 5,
	ESolarBotMemberState_MAX = 6
};

// Enum Solarland.EBotTeleportReason
enum class EBotTeleportReason : uint8 {
	Unknown = 0,
	SolveBlock = 1,
	SolveOffMesh = 2,
	BTTask = 3,
	PreservePop = 4,
	EBotTeleportReason_MAX = 5
};

// Enum Solarland.ESolarAITagStateTimeType
enum class ESolarAITagStateTimeType : uint8 {
	DurationInCurrentState = 0,
	TimeSinceLastExitToState = 1,
	ESolarAITagStateTimeType_MAX = 2
};

// Enum Solarland.EBotInteractCondition
enum class EBotInteractCondition : uint8 {
	Invalid = 0,
	NeedToResponsePoison = 1,
	FoundEnemyActor = 2,
	TeammateKillEnemy = 3,
	WeAreTheChampion = 4,
	TeammateMarkTargetLocation = 5,
	TeammateMarkTargetDangerPoint = 6,
	TeammateMarkTargetItem = 7,
	TeammateMarkTargetFootstep = 8,
	TeammateMarkFollowHe = 9,
	TeammateMarkGetOnVehicle = 10,
	TeammateMarkNeedVehicle = 11,
	TeammateMarkNeedWeapon = 12,
	TeammateMarkNeedHelp = 13,
	TeammateMarkAttack = 14,
	TeammateMarkDefend = 15,
	MockEnemy = 16,
	MockDyingEnemy = 17,
	EnterDying = 18,
	BoringEnough = 19,
	EBotInteractCondition_MAX = 20
};

// Enum Solarland.EBotFocusType
enum class EBotFocusType : uint8 {
	FocusToNothing = 0,
	FocusToActor = 1,
	FocusToPoint = 2,
	FocusToDirection = 3,
	EBotFocusType_MAX = 4
};

// Enum Solarland.ENgaiMLType
enum class ENgaiMLType : uint8 {
	None = 0,
	OnlyImitationLearning = 1,
	OnlyReinforcementLearning = 2,
	Both = 3,
	ENgaiMLType_MAX = 4
};

// Enum Solarland.EBotAIType
enum class EBotAIType : uint8 {
	BehaviorTree = 0,
	ImitationLearning = 1,
	ReinforcementLearning = 2,
	MAX = 3
};

// Enum Solarland.EPopLocationType
enum class EPopLocationType : uint8 {
	Default = 0,
	ShowFight = 1,
	Guarantee = 2,
	EPopLocationType_MAX = 3
};

// Enum Solarland.ESolarBotTimelineTriggerAction
enum class ESolarBotTimelineTriggerAction : uint8 {
	None = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESolarBotTimelineTriggerAction_MAX = 4
};

// Enum Solarland.ESolarBotTimelineFilterParameterType
enum class ESolarBotTimelineFilterParameterType : uint8 {
	None = 0,
	MoreThan = 1,
	LessThan = 2,
	Equal = 3,
	NotEqual = 4,
	Contain = 5,
	NotContain = 6,
	Radius = 7,
	Target = 8,
	ESolarBotTimelineFilterParameterType_MAX = 9
};

// Enum Solarland.ESolarBotTimelineFilterType
enum class ESolarBotTimelineFilterType : uint8 {
	None = 0,
	RankPoint = 1,
	Equipment = 2,
	Disengagement = 3,
	KillNum = 4,
	DamageNum = 5,
	ItemNum = 6,
	SkillCoolingDown = 7,
	SurroundingTeammate = 8,
	SurroundingEnemy = 9,
	ESolarBotTimelineFilterType_MAX = 10
};

// Enum Solarland.ESolarBotTimelineAIDataSettingType
enum class ESolarBotTimelineAIDataSettingType : uint8 {
	None = 0,
	Health = 1,
	Shield = 2,
	ESolarBotTimelineAIDataSettingType_MAX = 3
};

// Enum Solarland.ESolarBotTimelineWeaponPartType
enum class ESolarBotTimelineWeaponPartType : uint8 {
	None = 0,
	Muzzle = 1,
	Grip = 2,
	Clip = 3,
	Scope = 4,
	GunStock = 5,
	ESolarBotTimelineWeaponPartType_MAX = 6
};

// Enum Solarland.ESolarBotTimelineEquipmentSettingType
enum class ESolarBotTimelineEquipmentSettingType : uint8 {
	None = 0,
	PrimaryWeapon = 1,
	SecondaryWeapon = 2,
	Shield = 3,
	VerticalJet = 4,
	HorizontalJet = 5,
	SummonGun = 6,
	ESolarBotTimelineEquipmentSettingType_MAX = 7
};

// Enum Solarland.ESolarBotTimelineTriggerType
enum class ESolarBotTimelineTriggerType : uint8 {
	None = 0,
	Timeline = 1,
	Guarantee = 2,
	ESolarBotTimelineTriggerType_MAX = 3
};

// Enum Solarland.ESolarBotWarmSystemType
enum class ESolarBotWarmSystemType : uint8 {
	Regular = 0,
	Script = 1,
	Unknown = 2,
	ESolarBotWarmSystemType_MAX = 3
};

// Enum Solarland.EBotShotTargetCtlType
enum class EBotShotTargetCtlType : uint8 {
	Player = 0,
	Bot = 1,
	Any = 2,
	EBotShotTargetCtlType_MAX = 3
};

// Enum Solarland.EBotShotTargetType
enum class EBotShotTargetType : uint8 {
	Character = 0,
	Vehicle = 1,
	SummonItem = 2,
	Any = 3,
	EBotShotTargetType_MAX = 4
};

// Enum Solarland.EBotOnVehicleFireType
enum class EBotOnVehicleFireType : uint8 {
	EBotOnVehicleFireType_None = 0,
	EBotOnVehicleFireType_FireOn = 1,
	EBotOnVehicleFireType_FireOnDelayOff = 2,
	EBotOnVehicleFireType_MAX = 3
};

// Enum Solarland.EBotOnVehicleStopType
enum class EBotOnVehicleStopType : uint8 {
	EBotOnVehicleStopType_None = 0,
	EBotOnVehicleStopType_Delay = 1,
	EBotOnVehicleStopType_Stop = 2,
	EBotOnVehicleStopType_MAX = 3
};

// Enum Solarland.EBotFirePolicy
enum class EBotFirePolicy : uint8 {
	AlwaysFire = 0,
	FirstRoughMoveDone = 1,
	FirstPreciseMoveDone = 2,
	PreciseMoveOrGreater = 3,
	FollowMoveOrGreater = 4,
	OnlyWhenHitSimulatedTarget = 5,
	OnlyWhenHitLockedTarget = 6,
	EBotFirePolicy_MAX = 7
};

// Enum Solarland.EBotActionState
enum class EBotActionState : uint8 {
	EBotActionState_Sprite = 0,
	EBotActionState_Crouch = 1,
	EBotActionState_GunAim = 2,
	EBotActionState_MAX = 3
};

// Enum Solarland.EBotBunkerType
enum class EBotBunkerType : uint8 {
	Invalid = 0,
	FullSize = 1,
	HalfSize = 2,
	EBotBunkerType_MAX = 3
};

// Enum Solarland.EBotTeamVehicleDrivePolicy
enum class EBotTeamVehicleDrivePolicy : uint8 {
	DirectlyMove = 0,
	HoldAndWaitPassenger = 1,
	MoveAndTakePassenger = 2,
	EBotTeamVehicleDrivePolicy_MAX = 3
};

// Enum Solarland.EPoisonResponseType
enum class EPoisonResponseType : uint8 {
	NoResponse = 0,
	LowPriority = 1,
	HighPriority = 2,
	Immediately = 3,
	EPoisonResponseType_MAX = 4
};

// Enum Solarland.ESolarTaskScoringItemType
enum class ESolarTaskScoringItemType : uint8 {
	None = 0,
	CurrentHP = 1,
	IfSelfInBattle = 2,
	IfSelfInSafeArea = 3,
	IfSelfInPoisonCircle = 4,
	TimeToEnterSafeArea = 5,
	TimeToEnterPoisonCircleXPoisonDamage = 6,
	IfRelativeActorInSafeArea = 7,
	IfRelativeActorInPoisonCircle = 8,
	IfRescueTargetIsPlayer = 9,
	TimeToMovetoRescueTarget = 10,
	DistanceFromRescueTargetToSafeArea = 11,
	DistanceFromRescueTargetToPoisonCircleXPoisonDamage = 12,
	IfRescuingThisTarget = 13,
	IfRescuingOtherTarget = 14,
	TimePoisonToRescueTarget = 15,
	CurrentPoisonDamage = 16,
	ESolarTaskScoringItemType_MAX = 17
};

// Enum Solarland.ESolarTeamTaskType
enum class ESolarTeamTaskType : uint8 {
	RescueTeammate = 0,
	ESolarTeamTaskType_MAX = 1
};

// Enum Solarland.EJetTaskFinishMode
enum class EJetTaskFinishMode : uint8 {
	AfterResponded = 0,
	AfterDone = 1,
	EJetTaskFinishMode_MAX = 2
};

// Enum Solarland.EJetPackMode
enum class EJetPackMode : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EJetPackMode_MAX = 2
};

// Enum Solarland.EJumpTaskFinishMode
enum class EJumpTaskFinishMode : uint8 {
	AfterResponded = 0,
	AfterApex = 1,
	AfterDone = 2,
	EJumpTaskFinishMode_MAX = 3
};

// Enum Solarland.EBotShootTargetType
enum class EBotShootTargetType : uint8 {
	Player = 0,
	Bot = 1,
	Vehicle = 2,
	Monster = 3,
	EBotShootTargetType_MAX = 4
};

// Enum Solarland.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8 {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3
};

// Enum Solarland.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8 {
	ApplyAsAbsolute = 1,
	SkipAutoScale = 2,
	SkipAutoPlaySpace = 4,
	Default = 0,
	ECameraShakeUpdateResultFlags_MAX = 5
};

// Enum Solarland.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3
};

// Enum Solarland.ECruiseStatePrivate
enum class ECruiseStatePrivate : uint8 {
	None = 0,
	Start = 1,
	CanParachute = 2,
	ForceParachute = 3,
	End = 4,
	ECruiseStatePrivate_MAX = 5
};

// Enum Solarland.EAntiCheatType
enum class EAntiCheatType : uint8 {
	CheckLastShotWeapon = 0,
	ShootWhileNoAmmo = 1,
	ShootIntervalInvalid = 2,
	InvalidLaser = 3,
	ShootWhileOverload = 4,
	CheckRealShot = 5,
	VerifyHitInValid = 6,
	ReloadTooFast = 7,
	CanisterShotAbnormal = 8,
	EAntiCheatType_MAX = 9
};

// Enum Solarland.ERoleAbilityCancelPhase
enum class ERoleAbilityCancelPhase : uint8 {
	None = 0,
	Pressing = 1,
	Continuous = 2,
	All = 3,
	ERoleAbilityCancelPhase_MAX = 4
};

// Enum Solarland.CharacterRoleAbilityEnum
enum class CharacterRoleAbilityEnum : uint8 {
	Super = 0,
	Tactical = 1,
	Count = 2,
	CharacterRoleAbilityEnum_MAX = 3
};

// Enum Solarland.EMovementComponentEnableType
enum class EMovementComponentEnableType : uint8 {
	Default = 0,
	Dying = 1,
	OnLevelStreaming = 2,
	EMovementComponentEnableType_MAX = 3
};

// Enum Solarland.EHitTraceType
enum class EHitTraceType : uint8 {
	None = 0,
	Sniper = 1,
	Default = 2,
	Bump = 3,
	Vehicle = 4,
	EHitTraceType_MAX = 5
};

// Enum Solarland.EAntiCheatGameEvents
enum class EAntiCheatGameEvents : uint8 {
	ServerFire = 0,
	ServerHit = 1,
	ServerKill = 2,
	ServerKilled = 3,
	ClientFire = 4,
	ClientHit = 5,
	ClientKill = 6,
	ClientKilled = 7,
	ClientHitDown = 8,
	ClientBeHitDown = 9,
	ClientTick = 10,
	ServerTick = 11,
	ClientBeginPlay = 12,
	ServerBeginPlay = 13,
	ClientEndPlay = 14,
	ServerEndPlay = 15,
	EventMax = 16,
	EAntiCheatGameEvents_MAX = 17
};

// Enum Solarland.EClipAttachType
enum class EClipAttachType : uint8 {
	Weapon = 0,
	CharacterLeftHand = 1,
	CharacterRightHand = 2,
	EClipAttachType_MAX = 3
};

// Enum Solarland.EAnimReloadNotifyType
enum class EAnimReloadNotifyType : uint8 {
	InHand = 0,
	InHandAndDrop = 1,
	GetOld = 2,
	InPocket = 3,
	Restore = 4,
	SpawnFakeOldClip = 5,
	PhysicsDropOldClip = 6,
	SpawnFakeNewClip = 7,
	RestoreClip = 8,
	EAnimReloadNotifyType_MAX = 9
};

// Enum Solarland.EWeaponSystemState
enum class EWeaponSystemState : uint8 {
	None = 0,
	PreReload = 1,
	PreOpenScope = 2,
	PreCloseScope = 3,
	PreFire = 4,
	PreSwitchWeapon = 5,
	PreDropCurrentWeapon = 6,
	PreFireOverload = 7,
	PreNeedBolt = 8,
	PreCharging = 9,
	PreReplaceWeapon = 10,
	PrePickupWeapon = 11,
	PreSwapWeapon = 12,
	Max = 13
};

// Enum Solarland.ECamShakeType
enum class ECamShakeType : uint8 {
	Default = 0,
	JumpBegin = 1,
	JumpEndLight = 2,
	JumpEndHeavy = 3,
	FullBodyMeleeWithTarget = 4,
	FullBodyMeleeWithoutTarget = 5,
	TacticalDodgeForward = 6,
	TacticalDodgeBackward = 7,
	TacticalDodgeLeft = 8,
	TacticalDodgeRight = 9,
	ECamShakeType_MAX = 10
};

// Enum Solarland.EGunsightCameraSwitchMode
enum class EGunsightCameraSwitchMode : uint8 {
	CloseScope = 0,
	CloseShoulderShot = 1,
	OpenShoulderShot = 2,
	OpenScope = 3,
	EGunsightCameraSwitchMode_MAX = 4
};

// Enum Solarland.ESolarCameraSmoothType
enum class ESolarCameraSmoothType : uint8 {
	Default = 0,
	Instant = 1,
	Constant = 2,
	EaseOut = 3,
	EaseInEaseOut = 4,
	FloatCurve = 5,
	ESolarCameraSmoothType_MAX = 6
};

// Enum Solarland.EReconnectionStatus
enum class EReconnectionStatus : uint8 {
	None = 0,
	Reconnecting = 1,
	Reconnected = 2,
	EReconnectionStatus_MAX = 3
};

// Enum Solarland.EAnimDirection
enum class EAnimDirection : uint8 {
	AnimNone = 0,
	AnimForward = 1,
	AnimBackward = 2,
	AnimLeft = 3,
	AnimRight = 4,
	EAnimDirection_MAX = 5
};

// Enum Solarland.ESkydiveEffectLifetime
enum class ESkydiveEffectLifetime : uint8 {
	DuringFlying = 0,
	DuringLanding = 1,
	DuringWholeSkydiving = 2,
	ESkydiveEffectLifetime_MAX = 3
};

// Enum Solarland.RoleAbilityCommitPhase
enum class RoleAbilityCommitPhase : uint8 {
	OnActive = 0,
	Custom = 1,
	RoleAbilityCommitPhase_MAX = 2
};

// Enum Solarland.EUpdateWarmServiceEventType
enum class EUpdateWarmServiceEventType : uint8 {
	None = 0,
	CharacterUpgrade = 1,
	WeaponUpgrade = 2,
	ShieldUpgrade = 3,
	SuperAbilityReady = 4,
	TacticalAbilityReady = 5,
	BattleStation = 6,
	EUpdateWarmServiceEventType_MAX = 7
};

// Enum Solarland.EMassInVisibilityWarningType
enum class EMassInVisibilityWarningType : uint8 {
	None = 0,
	Character = 1,
	Vehicle = 2,
	EMassInVisibilityWarningType_MAX = 3
};

// Enum Solarland.EHitRecoverType
enum class EHitRecoverType : uint8 {
	EHRT_Normal = 0,
	EHRT_DeathVerge = 1,
	EHRT_MAX = 2
};

// Enum Solarland.EBResurrectionState
enum class EBResurrectionState : uint8 {
	NoneState = 0,
	WaitForApply = 1,
	NotApply = 2,
	Resurrected = 3,
	WaitForResurrect = 4,
	GiveUp = 5,
	Timeout = 6,
	AllTeammatesDied = 7,
	EBResurrectionState_MAX = 8
};

// Enum Solarland.EDroppedItemType
enum class EDroppedItemType : uint8 {
	Weapons = 0,
	WeaponParts = 1,
	Consumables = 2,
	Equipments = 3,
	EDroppedItemType_MAX = 4
};

// Enum Solarland.EBagScopeSlotType
enum class EBagScopeSlotType : uint8 {
	None = 0,
	Primary = 10,
	Second = 11,
	Bag = 12,
	EBagScopeSlotType_MAX = 13
};

// Enum Solarland.EBagGridType
enum class EBagGridType : uint8 {
	None = 0,
	Pick = 1,
	Normal = 2,
	Lock = 3,
	Fix = 4,
	EBagGridType_MAX = 5
};

// Enum Solarland.ETreatmentSoundType
enum class ETreatmentSoundType : uint8 {
	Healing = 0,
	Cancel = 1,
	StopHealing = 2,
	Completed = 3,
	ETreatmentSoundType_MAX = 4
};

// Enum Solarland.EShieldAutoRechargeStopReason
enum class EShieldAutoRechargeStopReason : uint8 {
	SwitchShield = 0,
	OnWeaponFire = 1,
	OnHit = 2,
	Die = 3,
	ShieldFull = 4,
	ManualRecharge = 5,
	EShieldAutoRechargeStopReason_MAX = 6
};

// Enum Solarland.ECharacterStateForWeapon
enum class ECharacterStateForWeapon : uint8 {
	Unknown = 0,
	Standing = 1,
	Crouching = 2,
	Running = 3,
	Sprinting = 4,
	Jumping = 5,
	Flying = 6,
	ECharacterStateForWeapon_MAX = 7
};

// Enum Solarland.EPoseMode
enum class EPoseMode : uint8 {
	Stand = 0,
	Crouch = 1,
	Crawl = 2,
	Skydive = 3,
	EPoseMode_MAX = 4
};

// Enum Solarland.EPickUpTargetType
enum class EPickUpTargetType : uint8 {
	Invalid = 0,
	Item = 1,
	Weapon = 2,
	TreasureItem = 3,
	HomeItem = 4,
	BoxHomeItem = 5,
	EPickUpTargetType_MAX = 6
};

// Enum Solarland.ESolarExpBehaviorType
enum class ESolarExpBehaviorType : uint8 {
	SurvivalTime = 1,
	Kills = 2,
	Assists = 3,
	Selfhealing = 4,
	TeammateHealing = 5,
	Unpacking = 6,
	CollectElectricity = 7,
	PickExpPack = 8,
	EveryDamageDealt = 9,
	ESolarExpBehaviorType_MAX = 10
};

// Enum Solarland.ESolarCheckButtonSelectType
enum class ESolarCheckButtonSelectType : uint8 {
	None = 0,
	Next = 1,
	Prev = 2,
	ESolarCheckButtonSelectType_MAX = 3
};

// Enum Solarland.EClassLevelUpRewardType
enum class EClassLevelUpRewardType : uint8 {
	BattleUpgradeEffect = 0,
	UpgradeSkill1 = 1,
	UpgradeSkill2 = 2,
	ClassCommonPassiveSkill = 3,
	ClassSpecificPassiveSkill = 4,
	Max = 5
};

// Enum Solarland.EClassType
enum class EClassType : uint8 {
	None = 0,
	Assault = 1,
	Defence = 2,
	Support = 3,
	Scout = 4,
	EClassType_MAX = 5
};

// Enum Solarland.ESolarCrosshairType
enum class ESolarCrosshairType : uint8 {
	Weapon = 0,
	Feedback = 1,
	BulletContainer = 2,
	ESolarCrosshairType_MAX = 3
};

// Enum Solarland.ESolarDamageTextType
enum class ESolarDamageTextType : uint8 {
	DamageTextType_None = 0,
	DamageTextType_Common = 1,
	DamageTextType_Headshot = 2,
	DamageTextType_HitShield = 3,
	DamageTextType_HeadshotWithShield = 4,
	DamageTextType_HitVehicle = 5,
	DamageTextType_HitVehicleWeak = 6,
	DamageTextType_BrokenShiled = 7,
	DamageTextType_BrokenShieldWithHeadShot = 8,
	DamageTextType_HitSummonItem = 9,
	DamageTextType_MAX = 10
};

// Enum Solarland.EUIDragSourceType
enum class EUIDragSourceType : uint8 {
	Default = 0,
	Weapon1 = 1,
	Weapon2 = 2,
	Weapon3 = 3,
	PickupList = 4,
	BackpackConsumable = 5,
	BackpackEquip = 6,
	BackpackPickupList = 7,
	EUIDragSourceType_MAX = 8
};

// Enum Solarland.EShopStatisticType
enum class EShopStatisticType : uint8 {
	OnActivated = 0,
	OnUpgradeWeapon = 1,
	OnPurchaseItem = 2,
	OnItemRefresh = 3,
	OnUpgradeShield = 4,
	EShopStatisticType_MAX = 5
};

// Enum Solarland.EShopModelAnimType
enum class EShopModelAnimType : uint8 {
	Idle = 0,
	Upgrade = 1,
	Purchase = 2,
	EShopModelAnimType_MAX = 3
};

// Enum Solarland.AIVehicleState
enum class AIVehicleState : uint8 {
	AIVehicleState_Forward = 0,
	AIVehicleState_ReverseSolveBlock = 1,
	AIVehicleState_SolveBlockFoward = 2,
	AIVehicleState_ReverseToTarget = 3,
	AIVehicleState_MAX = 4
};

// Enum Solarland.EAntiCheatReportType
enum class EAntiCheatReportType : uint8 {
	Player = 0,
	Weapon = 1,
	Vehicle = 2,
	EAntiCheatReportType_MAX = 3
};

// Enum Solarland.EActiveEffectDurationChangeProxy
enum class EActiveEffectDurationChangeProxy : uint8 {
	MaintainCurrent = 0,
	MaintainRemain = 1,
	ScalingCurrent = 2,
	EActiveEffectDurationChangeProxy_MAX = 3
};

// Enum Solarland.ESolarGAInputID
enum class ESolarGAInputID : uint8 {
	None = 0,
	Jump = 1,
	Crouch = 2,
	Sprint = 3,
	JetVertical = 4,
	JetHorizontal = 5,
	Parachute = 6,
	SkydiveAccelerate = 7,
	Fire = 8,
	OutVehicle = 9,
	SkillTest = 10,
	RoleSkillOne = 11,
	RoleSkillTwo = 12,
	ESolarGAInputID_MAX = 13
};

// Enum Solarland.ELogChannel
enum class ELogChannel : uint8 {
	General = 0,
	Mode = 1,
	Hunt = 2,
	BattleRoyal = 3,
	Weapon = 4,
	Character = 5,
	Vehicle = 6,
	Camera = 7,
	Animation = 8,
	Physics = 9,
	Inventory = 10,
	World = 11,
	ELogChannel_MAX = 12
};

// Enum Solarland.ESolarGameUserSettingPart
enum class ESolarGameUserSettingPart : uint8 {
	PickupSettings = 0,
	GraphicsSettings = 1,
	WeaponSettings = 2,
	LanguageSettings = 3,
	SoundSettings = 4,
	BasicSettings = 5,
	PersonalitySettings = 6,
	SensitivitySettings = 7,
	ShakeSettings = 8,
	DriverSettings = 9,
	ChatOperatorSettings = 10,
	SensitivitySettingsKeyboard = 11,
	SensitivitySettingsGamepad = 12,
	KeyboardControlSettings = 13,
	GamepadSettings = 14,
	GamepadAdvancedSettings = 15,
	All = 16,
	ESolarGameUserSettingPart_MAX = 17
};

// Enum Solarland.EGraphicQualitySelect
enum class EGraphicQualitySelect : uint8 {
	Default = 0,
	Lobby = 1,
	InGame = 2,
	EGraphicQualitySelect_MAX = 3
};

// Enum Solarland.ESolarAimModeType
enum class ESolarAimModeType : uint8 {
	Default = 0,
	Change = 1,
	Press = 2,
	ESolarAimModeType_MAX = 3
};

// Enum Solarland.ESolarDeviceType
enum class ESolarDeviceType : uint8 {
	ESDT_Invalid = 0,
	ESDT_Windows = 1,
	ESDT_Android = 2,
	ESDT_IOS = 3,
	ESDT_Switch = 4,
	ESDT_Other = 5,
	ESDT_MAX = 6
};

// Enum Solarland.ESolarDeviceLevel
enum class ESolarDeviceLevel : uint8 {
	ESDL_Invalid = 0,
	ESDL_Level1 = 1,
	ESDL_Level2 = 2,
	ESDL_Level3 = 3,
	ESDL_Level4 = 4,
	ESDL_Level5 = 5,
	ESDL_Level6 = 6,
	ESDL_Level7 = 7,
	ESDL_VALUE_MIN = 1,
	ESDL_VALUE_MAX = 7,
	ESDL_MAX = 8
};

// Enum Solarland.EHomeCameraMode
enum class EHomeCameraMode : uint8 {
	Normal = 0,
	Ceiling = 1,
	Panoramic = 2,
	Orthographic = 3,
	EHomeCameraMode_MAX = 4
};

// Enum Solarland.EHomeLoadingChangeType
enum class EHomeLoadingChangeType : uint8 {
	NONE = 0,
	OPEN = 1,
	CLOSE = 2,
	EHomeLoadingChangeType_MAX = 3
};

// Enum Solarland.EHomeOperationType
enum class EHomeOperationType : uint8 {
	NONE = 0,
	CREATE = 1,
	UPDATE = 2,
	REMOVE = 3,
	EHomeOperationType_MAX = 4
};

// Enum Solarland.EHomeDragUIType
enum class EHomeDragUIType : uint8 {
	NONE = 0,
	ARROW = 1,
	ROUND = 2,
	EHomeDragUIType_MAX = 3
};

// Enum Solarland.EHomeActorOwner
enum class EHomeActorOwner : uint8 {
	NOBODY = 0,
	SELF = 1,
	OTHERS = 2,
	EHomeActorOwner_MAX = 3
};

// Enum Solarland.EHomeActorSurfaceDir
enum class EHomeActorSurfaceDir : uint8 {
	NONE = 0,
	FORWARD = 1,
	BACKWARD = 2,
	LEFT = 3,
	RIGHT = 4,
	UP = 5,
	DOWN = 6,
	EHomeActorSurfaceDir_MAX = 7
};

// Enum Solarland.EHomeActor_SecondType
enum class EHomeActor_SecondType : uint8 {
	NONE = 0,
	CONSTRUCT_BASE = 1,
	CONSTRUCT_FLOOR = 2,
	CONSTRUCT_WALL = 3,
	DEVICE_ON_FLOOR = 4,
	DEVICE_ON_WALL = 5,
	DEVICE_ON_CEILING = 6,
	EHomeActor_MAX = 7
};

// Enum Solarland.EHomeActor_FirstType
enum class EHomeActor_FirstType : uint8 {
	NONE = 0,
	CONSTRUCT = 1,
	DEVICE = 2,
	EHomeActor_MAX = 3
};

// Enum Solarland.EHoverCraftHitType
enum class EHoverCraftHitType : uint8 {
	Default = 0,
	HoverCraftVehicle = 1,
	HoverVehicle = 2,
	LeggedVehicle = 3,
	WheeledVehicle = 4,
	EHoverCraftHitType_MAX = 5
};

// Enum Solarland.EInputKeyMappingType
enum class EInputKeyMappingType : uint8 {
	KeyAndMouse1 = 0,
	KeyAndMouse2 = 1,
	Gamepad = 2,
	Count = 3,
	EInputKeyMappingType_MAX = 4
};

// Enum Solarland.EInputActionContextType
enum class EInputActionContextType : uint8 {
	Pawn = 0,
	Controller = 1,
	LevelScriptActor = 2,
	UserWidget = 3,
	Count = 4,
	EInputActionContextType_MAX = 5
};

// Enum Solarland.EGamepadDPad
enum class EGamepadDPad : uint8 {
	None = 0,
	Reset = 1,
	Up = 2,
	Down = 3,
	Right = 4,
	Left = 5,
	EGamepadDPad_MAX = 6
};

// Enum Solarland.EInputActionFlags
enum class EInputActionFlags : uint8 {
	None = 0,
	FlagBigMap = 1,
	FlagBackpack = 2,
	FlagChatWheel = 3,
	FlagParachute = 4,
	FlagSpectate = 5,
	FlagTeamDeath = 6,
	FlagRelive = 7,
	FlagBlockAll = 31,
	FlagMax = 32,
	EInputActionFlags_MAX = 33
};

// Enum Solarland.ESolarInteractionType
enum class ESolarInteractionType : uint8 {
	Invalid = 0,
	RescueTeammate = 1,
	ReviveTeammate = 2,
	OpenAirdrop = 3,
	ESolarInteractionType_MAX = 4
};

// Enum Solarland.ESolarItemPrivilegeType
enum class ESolarItemPrivilegeType : uint8 {
	NONE = 0,
	NETBAR = 1,
	ESolarItemPrivilegeType_MAX = 2
};

// Enum Solarland.ESolarItemShowType
enum class ESolarItemShowType : uint8 {
	NOTSHOW = 0,
	SHOW = 1,
	ESolarItemShowType_MAX = 2
};

// Enum Solarland.ESolarRedHintType
enum class ESolarRedHintType : uint8 {
	ZERO = 0,
	SHOW = 1,
	HIDE = 2,
	ESolarRedHintType_MAX = 3
};

// Enum Solarland.ESolarItemOwnType
enum class ESolarItemOwnType : uint8 {
	ZERO = 0,
	NOOWN = 1,
	OWN = 2,
	ESolarItemOwnType_MAX = 3
};

// Enum Solarland.ESolarItemBuyType
enum class ESolarItemBuyType : uint8 {
	ZERO = 0,
	NOBUY = 1,
	BUY = 2,
	CANTBUY = 3,
	ESolarItemBuyType_MAX = 4
};

// Enum Solarland.ESolarItemUseType
enum class ESolarItemUseType : uint8 {
	ZERO = 0,
	NOUSE = 1,
	USING = 2,
	ESolarItemUseType_MAX = 3
};

// Enum Solarland.ESolarItemLimitType
enum class ESolarItemLimitType : uint8 {
	ZERO = 0,
	NOLIMIT = 1,
	LIMITING = 2,
	ESolarItemLimitType_MAX = 3
};

// Enum Solarland.ESolarItemMarkType
enum class ESolarItemMarkType : uint8 {
	ZERO = 0,
	NOMARK = 1,
	MARKED = 2,
	ESolarItemMarkType_MAX = 3
};

// Enum Solarland.ESolarItemDownloadType
enum class ESolarItemDownloadType : uint8 {
	ZERO = 0,
	NOTDOWNLOAD = 1,
	DOWNLOADING = 2,
	DOWNLOADED = 3,
	PAUSING = 4,
	ESolarItemDownloadType_MAX = 5
};

// Enum Solarland.ESolarItemLockType
enum class ESolarItemLockType : uint8 {
	ZERO = 0,
	NOLOCK = 1,
	LOCKED = 2,
	TEMPUNLOCK = 3,
	ESolarItemLockType_MAX = 4
};

// Enum Solarland.ESolarItemSelectType
enum class ESolarItemSelectType : uint8 {
	ZERO = 0,
	NOTSELECT = 1,
	SELECTED = 2,
	ESolarItemSelectType_MAX = 3
};

// Enum Solarland.ESolarItemQualityType
enum class ESolarItemQualityType : uint8 {
	ZERO = 0,
	N = 1,
	R = 2,
	SR = 3,
	SSR = 4,
	SSRPLUS = 5,
	ESolarItemQualityType_MAX = 6
};

// Enum Solarland.EBurstMethod
enum class EBurstMethod : uint8 {
	ParabCurveFitting = 0,
	GoldenSpiral = 1,
	EBurstMethod_MAX = 2
};

// Enum Solarland.EItemConfirmID
enum class EItemConfirmID : int32 {
	DropExtraEnergyConfirmID = 110003,
	ReplaceExtraEnergyConfirmID = 110004,
	DropEnergyModuleConfirmID = 110007,
	ReplaceEnergyModuleConfirmID = 110008,
	EItemConfirmID_MAX = 110009
};

// Enum Solarland.EItemLocalTextID
enum class EItemLocalTextID : uint8 {
	LevelNumTextID = 40,
	EItemLocalTextID_MAX = 41
};

// Enum Solarland.EItemNoticeID
enum class EItemNoticeID : int32 {
	BoxBeUsing = 900016,
	CantEquipThisScope = 900080,
	CantEquipThisPart = 900081,
	WillEquipLowLevelScope = 900082,
	WillEquipLowLevelPart = 900083,
	HasBetterPart = 900084,
	HasBetterScope = 900085,
	GetItem = 900003,
	GetHomeItem = 900005,
	EquipReplace = 900091,
	DropItemNotAutoPickup = 900094,
	ItemMaxPile = 900095,
	ReviveItemMaxPile = 900104,
	CantPickupReviveItem = 900105,
	EItemNoticeID_MAX = 900106
};

// Enum Solarland.ESpawnStage
enum class ESpawnStage : uint8 {
	STAGE_NONE = 0,
	STAGE_READY = 1,
	STAGE_BATTLE = 2,
	STAGE_ALL = 3,
	STAGE_MAX = 4
};

// Enum Solarland.EOutcomeType
enum class EOutcomeType : uint8 {
	None = 0,
	Single = 1,
	Pool = 2,
	DynamicPool = 3,
	EOutcomeType_MAX = 4
};

// Enum Solarland.EItemSourceType
enum class EItemSourceType : uint8 {
	None = 0,
	DeathTreasureBox = 1,
	TreasureBox = 2,
	AirDropTreasureBox = 3,
	Max = 4
};

// Enum Solarland.EItemDiscardState
enum class EItemDiscardState : uint8 {
	EItemDiscardState_DEFAULT = 0,
	EItemDiscardState_DEATHBOX = 1,
	EItemDiscardState_MAX = 2
};

// Enum Solarland.EItemState
enum class EItemState : uint8 {
	EItemState_NONE = 0,
	EItemState_POSSESS = 1,
	EItemState_DISCARD = 2,
	EItemState_MAX = 3
};

// Enum Solarland.EItemQualityType
enum class EItemQualityType : uint8 {
	None = 0,
	White = 1,
	Green = 2,
	Blue = 3,
	Purple = 4,
	Orange = 5,
	Red = 6,
	EItemQualityType_MAX = 7
};

// Enum Solarland.ESpawnerLevel
enum class ESpawnerLevel : uint8 {
	LEVEL_1 = 0,
	LEVEL_2 = 1,
	LEVEL_3 = 2,
	LEVEL_4 = 3,
	LEVEL_MAX = 4
};

// Enum Solarland.ESpawnerType
enum class ESpawnerType : uint8 {
	NONE = 0,
	NORMAL = 1,
	TREASUREBOX = 2,
	AIRDROP = 3,
	VEHICLE = 4,
	ESpawnerType_MAX = 5
};

// Enum Solarland.OnLSDestroyStrategy
enum class OnLSDestroyStrategy : uint8 {
	Custom = 0,
	SelfDestroy = 1,
	FreeFall = 2,
	OnLSDestroyStrategy_MAX = 3
};

// Enum Solarland.OnLSModifiedStrategy
enum class OnLSModifiedStrategy : uint8 {
	Custom = 0,
	UpdateHeight = 1,
	OnLSModifiedStrategy_MAX = 2
};

// Enum Solarland.ELayoutDataType
enum class ELayoutDataType : uint8 {
	Invalid = 0,
	Mobile = 1,
	Desktop = 2,
	ELayoutDataType_MAX = 3
};

// Enum Solarland.EWalkingDirection
enum class EWalkingDirection : uint8 {
	None = 0,
	Forward = 1,
	Backward = 2,
	Left = 4,
	Right = 8,
	EWalkingDirection_MAX = 9
};

// Enum Solarland.EVehicleShrinkCapsuleExtent
enum class EVehicleShrinkCapsuleExtent : uint8 {
	SHRINK_None = 0,
	SHRINK_RadiusCustom = 1,
	SHRINK_HeightCustom = 2,
	SHRINK_AllCustom = 3,
	SHRINK_MAX = 4
};

// Enum Solarland.EVehicleLocomotionState
enum class EVehicleLocomotionState : uint8 {
	Walk = 0,
	Run = 1,
	Sprint = 2,
	Max = 3
};

// Enum Solarland.ESolarBuildConfiguration
enum class ESolarBuildConfiguration : uint8 {
	Unknown = 0,
	Debug = 1,
	Development = 2,
	Shipping = 3,
	Test = 4,
	ESolarBuildConfiguration_MAX = 5
};

// Enum Solarland.EElementVisibilityType
enum class EElementVisibilityType : uint8 {
	Visible = 0,
	Hidden = 1,
	EElementVisibilityType_MAX = 2
};

// Enum Solarland.EElementStateType
enum class EElementStateType : uint8 {
	Normal = 0,
	Suspend = 1,
	EElementStateType_MAX = 2
};

// Enum Solarland.ESolarMapElementPropertyType
enum class ESolarMapElementPropertyType : uint8 {
	String = 0,
	Float = 1,
	Int = 2,
	Bool = 3,
	ESolarMapElementPropertyType_MAX = 4
};

// Enum Solarland.ESGameMode_ElementType
enum class ESGameMode_ElementType : uint8 {
	PlayerStart = 0,
	ItemSpawner = 1,
	AirDrop = 2,
	ChargingPile = 3,
	JumpPad = 4,
	CarPad = 5,
	Vehicle = 6,
	Poison = 7,
	Custom = 8,
	ESGameMode_MAX = 9
};

// Enum Solarland.EMapDarkDataType
enum class EMapDarkDataType : uint8 {
	POISONCIRCLE = 0,
	EMapDarkDataType_MAX = 1
};

// Enum Solarland.EMapAirlineType
enum class EMapAirlineType : uint8 {
	Default = 0,
	Capsule = 1,
	Airdrop = 2,
	EMapAirlineType_MAX = 3
};

// Enum Solarland.EDirection
enum class EDirection : uint8 {
	TOP = 0,
	BOTTOM = 1,
	LEFT = 2,
	RIGHT = 3,
	EDirection_MAX = 4
};

// Enum Solarland.EBattlePromptType
enum class EBattlePromptType : uint8 {
	None = 0,
	Player = 1,
	Vehicle = 4,
	Move = 8,
	Fire = 16,
	HeavyWeapon = 32,
	Crouch = 64,
	Skydive = 128,
	PlayerStep = 9,
	VehicleMove = 12,
	PlayerCrouchMove = 73,
	PlayerSkydive = 137,
	PlayerFire = 17,
	VehicleFire = 20,
	PlayerHeavyFire = 49,
	VehicleHeavyFire = 52,
	EBattlePromptType_MAX = 138
};

// Enum Solarland.EMarkerType
enum class EMarkerType : uint8 {
	NONE = 0,
	ENEMYSTEP = 101,
	ENEMYFIGHT = 102,
	AIRDROPBOX = 103,
	REDZONE = 104,
	VEHICLEVOICE = 105,
	VEHICLEMARK = 106,
	ENEMYLAUNCH = 107,
	VEHICLELAUNCH = 108,
	SKILLBUFFMARK = 109,
	RADARCharacter = 110,
	RADARCharacterWithAngle = 111,
	RADARVehicle = 112,
	RADARTreasureBox = 113,
	RADARChargingPile = 114,
	RADAR = 115,
	ELECTRICSHOP = 116,
	PARACHUTE = 117,
	RESPAWN = 118,
	SHIELDUPGRADEITEMSHOP = 119,
	ReviveTeammate = 120,
	BLUECIRCLE = 121,
	EMarkerType_MAX = 122
};

// Enum Solarland.EMovablePadLimitationFlag
enum class EMovablePadLimitationFlag : uint8 {
	None = 0,
	NoPress = 1,
	NoRelease = 2,
	NoMove = 4,
	NoPressAndRelease = 3,
	NoPressAndMove = 5,
	NoReleaseAndMove = 6,
	EMovablePadLimitationFlag_MAX = 7
};

// Enum Solarland.ENavLinkType
enum class ENavLinkType : uint8 {
	Jet = 0,
	Vault = 1,
	None = 2,
	ENavLinkType_MAX = 3
};

// Enum Solarland.EOwnerType
enum class EOwnerType : uint8 {
	None = 0,
	Vehicle = 1,
	TreasureBox = 2,
	EOwnerType_MAX = 3
};

// Enum Solarland.ERestState
enum class ERestState : uint8 {
	AT_REST = 0,
	JUST_STARTED_MOVING = 1,
	MOVING = 2,
	ERestState_MAX = 3
};

// Enum Solarland.EExtrapolationMode
enum class EExtrapolationMode : uint8 {
	UNLIMITED = 0,
	LIMITED = 1,
	NONE = 2,
	EExtrapolationMode_MAX = 3
};

// Enum Solarland.ESyncMode
enum class ESyncMode : uint8 {
	NONE = 0,
	X = 1,
	Y = 2,
	Z = 4,
	XY = 3,
	XZ = 5,
	YZ = 6,
	XYZ = 7,
	ESyncMode_MAX = 8
};

// Enum Solarland.ENightComesState
enum class ENightComesState : uint8 {
	None = 0,
	Begin = 1,
	Ongoing = 2,
	End = 3,
	ENightComesState_MAX = 4
};

// Enum Solarland.EPerceivableEffectAreaTendency
enum class EPerceivableEffectAreaTendency : uint8 {
	Hostile = 0,
	Neutral = 1,
	Friendly = 2,
	EPerceivableEffectAreaTendency_MAX = 3
};

// Enum Solarland.EPerceivableEffectAreaType
enum class EPerceivableEffectAreaType : uint8 {
	Unknow = 0,
	SmokeGrenade = 1,
	NightCome = 2,
	AutomaticTurret = 3,
	BlackHole = 4,
	Incendiary = 5,
	EnergyBubble = 6,
	SummonWall = 7,
	UAVShield = 8,
	UAVRescue = 9,
	HealPile = 10,
	EPerceivableEffectAreaType_MAX = 11
};

// Enum Solarland.EPickupListItemType
enum class EPickupListItemType : uint8 {
	None = 0,
	Single = 1,
	Merge = 2,
	Customize = 3,
	EPickupListItemType_MAX = 4
};

// Enum Solarland.EPickupListChangeReason
enum class EPickupListChangeReason : uint8 {
	Default = 0,
	Backpack = 1,
	Skill = 2,
	Weapon = 3,
	EPickupListChangeReason_MAX = 4
};

// Enum Solarland.ESolarPileType
enum class ESolarPileType : uint8 {
	ChargingPile = 0,
	HealPile = 1,
	ESolarPileType_MAX = 2
};

// Enum Solarland.EChargingChannel
enum class EChargingChannel : uint8 {
	MAIN = 0,
	EXTRA = 1,
	EChargingChannel_MAX = 2
};

// Enum Solarland.EPileHealingType
enum class EPileHealingType : uint8 {
	None = 0,
	Health = 1,
	Armor = 2,
	EPileHealingType_MAX = 3
};

// Enum Solarland.ELevelTickType
enum class ELevelTickType : uint8 {
	LEVELTICK_TimeOnly = 0,
	LEVELTICK_ViewportsOnly = 1,
	LEVELTICK_All = 2,
	LEVELTICK_PauseTick = 3,
	LEVELTICK_MAX = 4
};

// Enum Solarland.EInteractiveFlag
enum class EInteractiveFlag : uint8 {
	None = 0,
	DanceLearder = 1,
	EInteractiveFlag_MAX = 2
};

// Enum Solarland.ESolarPlayerSensitivitysType
enum class ESolarPlayerSensitivitysType : uint8 {
	None = 0,
	HoldWeaponSensitivity = 1,
	WeaponShootSensitivity = 2,
	WeaponShoulderNoShotSensitivity = 3,
	WeaponShoulderShotSensitivity = 4,
	WeaponSkillSensitivity = 5,
	SightSensitivity = 6,
	ScopeSensitivity = 7,
	ScopeShootSensitivity = 8,
	VehicleDriverSensitivity = 9,
	VehicleFireSensitivity = 10,
	SuperSkillSensitivity = 11,
	TacticalSkillSensitivity = 12,
	ESolarPlayerSensitivitysType_MAX = 13
};

// Enum Solarland.ECharacterOwnerType
enum class ECharacterOwnerType : uint8 {
	CSITNone = 0,
	CSITOwn = 1,
	CSITExperience = 2,
	CSITLimit = 4,
	CSITPrivilege = 8,
	ECharacterOwnerType_MAX = 9
};

// Enum Solarland.EWeaponAttachState
enum class EWeaponAttachState : uint8 {
	NONE = 0,
	AttachOnHand = 1,
	AttachOnBackpack = 2,
	EWeaponAttachState_MAX = 3
};

// Enum Solarland.EWeaponRVCmd
enum class EWeaponRVCmd : uint8 {
	Cmd_None = 0,
	LocalHold = 1,
	OtherHold = 2,
	Dropped = 4,
	ReplacePart = 8,
	SkinRefresh = 16,
	EWeaponRVCmd_MAX = 17
};

// Enum Solarland.EPreservedBotType
enum class EPreservedBotType : uint8 {
	PendingInit = 0,
	OnCall = 1,
	WaitingForSend = 2,
	Killer = 3,
	WaitingToDie = 4,
	EPreservedBotType_MAX = 5
};

// Enum Solarland.ESolarProjBulletCollisionType
enum class ESolarProjBulletCollisionType : uint8 {
	Shape = 0,
	Box = 1,
	ESolarProjBulletCollisionType_MAX = 2
};

// Enum Solarland.ERadarType
enum class ERadarType : uint8 {
	ERT_WholeMap = 0,
	ERT_FollowSpawner = 1,
	ERT_FixedRound = 2,
	ERT_UAV = 3,
	ERT_OneTimeScan = 4,
	ERT_MAX = 5
};

// Enum Solarland.ERedHintPath
enum class ERedHintPath : uint8 {
	None = 0,
	Root = 1,
	Social = 2,
	Arsenal = 3,
	Arsenal_Weapon = 4,
	Arsenal_Skin = 5,
	Arsenal_Part = 6,
	Shop = 7,
	Mail = 8,
	Capsulers = 9,
	Capsulers_Detail = 10,
	Capsulers_Story = 11,
	Capsulers_Skin = 12,
	Capsulers_LevelUp = 13,
	Capsulers_Pose = 14,
	Capsulers_PoseTab = 15,
	Capsulers_BG = 16,
	Capsulers_BGTab = 17,
	Capsulers_BGFrame = 18,
	Capsulers_BGFrameTab = 19,
	Capsulers_DeathBox = 20,
	Capsulers_DeathBoxTab = 21,
	Capsulers_Voice = 22,
	Capsulers_VoiceKillVoice = 23,
	Capsulers_VoiceTeamDie = 24,
	Capsulers_VoiceTopKill = 25,
	Capsulers_VoiceParachute = 26,
	Capsulers_VoiceBattleTab = 27,
	Capsulers_VoicePersonalityTab = 28,
	Capsulers_VoiceTab = 29,
	WareHouse = 30,
	Task = 31,
	Activity = 32,
	RankFight = 33,
	Achievement = 34,
	EditBusinessCard = 35,
	PlayerInfo = 36,
	GameMode = 37,
	Raffle = 38,
	Vehicle = 39,
	Vehicle_Skin = 40,
	Clan = 41,
	ClanPermission = 42,
	Collection = 43,
	Tournament = 44,
	VipCard = 45,
	ClanMember = 46,
	Max = 47
};

// Enum Solarland.ERedHintValueType
enum class ERedHintValueType : uint8 {
	Single = 0,
	MultiValue = 1,
	ERedHintValueType_MAX = 2
};

// Enum Solarland.ECharacterSkydivingState
enum class ECharacterSkydivingState : uint8 {
	EveryBattle = 0,
	Flying = 1,
	Skydiving = 2,
	Landing = 3,
	Num = 4,
	ECharacterSkydivingState_MAX = 5
};

// Enum Solarland.EReplayDamageSourceType
enum class EReplayDamageSourceType : uint8 {
	None = 0,
	Weapon = 1,
	Vehicle = 2,
	Skill = 3,
	EReplayDamageSourceType_MAX = 4
};

// Enum Solarland.ENarrateActivityType
enum class ENarrateActivityType : uint8 {
	None = 0,
	OnEngage = 1,
	OnScramble = 2,
	WeaponKnockdown = 3,
	VehicleKnockdown = 4,
	AbilityKnockdown = 5,
	OnKilled = 6,
	OnPickUpItem = 7,
	OnDriveVehicle = 8,
	OnGameStart = 9,
	OnChangeScene = 10,
	OnTeamEliminate = 11,
	OnReaperKilled = 12,
	OnVictory = 13,
	OnMultiKill = 14,
	OnChatInformative = 15,
	OnGameEnd = 16,
	OnInterrupt = 17,
	OnCheatKickOut = 18,
	ENarrateActivityType_MAX = 19
};

// Enum Solarland.EAutoDirectorActivityType
enum class EAutoDirectorActivityType : uint8 {
	None = 0,
	PlayerWeaponHit = 1,
	PlayerWeaponDown = 2,
	PlayerWeaponKill = 3,
	PickupItem = 4,
	DriveVehicle = 5,
	VehicleWeaponHit = 6,
	VehicleWeaponDown = 7,
	VehicleWeaponKill = 8,
	BandagePlayer = 9,
	RevivePlayer = 10,
	UseTacticalAbility = 11,
	UseUltimateAbility = 12,
	AbilityDown = 13,
	AbilityKill = 14,
	StartSkydive = 15,
	EAutoDirectorActivityType_MAX = 16
};

// Enum Solarland.EAutoDirectorCameraMode
enum class EAutoDirectorCameraMode : uint8 {
	Free = 0,
	Follow = 1,
	EAutoDirectorCameraMode_MAX = 2
};

// Enum Solarland.EReplayFindSpectateTargetApproach
enum class EReplayFindSpectateTargetApproach : uint8 {
	None = 0,
	SuggestTarget = 1,
	LastTarget = 2,
	ClosestToCamera = 3,
	FirstInPlayerList = 4,
	EReplayFindSpectateTargetApproach_MAX = 5
};

// Enum Solarland.EPlayerHighlightMarkType
enum class EPlayerHighlightMarkType : uint8 {
	B = 0,
	A = 1,
	S = 2,
	Ex = 3,
	Max = 4
};

// Enum Solarland.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	Missing = 0,
	NotRouted = 1,
	CustomRelevancy = 2,
	RelevantAllConnections = 3,
	Spatialize_Static = 4,
	Spatialize_Dynamic = 5,
	Spatialize_Dormancy = 6,
	EClassRepNodeMapping_MAX = 7
};

// Enum Solarland.EIncreaseAndDecreaseTransitionMode
enum class EIncreaseAndDecreaseTransitionMode : uint8 {
	Continuously = 0,
	BreakAndKeepLast = 1,
	EIncreaseAndDecreaseTransitionMode_MAX = 2
};

// Enum Solarland.EActorInSafeAreaStatus
enum class EActorInSafeAreaStatus : uint8 {
	InSafeArea = 0,
	NotInSafeArea = 1,
	InTargetSafeArea = 2,
	EActorInSafeAreaStatus_MAX = 3
};

// Enum Solarland.ESafeAreaStatus
enum class ESafeAreaStatus : uint8 {
	None = 0,
	WaitingForStart = 1,
	WaitingForShrink = 2,
	Shrink = 4,
	ShrinkEnd = 8,
	Pause = 16,
	End = 32,
	NoEffect = 33,
	ESafeAreaStatus_MAX = 34
};

// Enum Solarland.ENeverShowDuration
enum class ENeverShowDuration : uint8 {
	Day = 0,
	Week = 1,
	Month = 2,
	Year = 3,
	Never = 4,
	None = 5,
	ENeverShowDuration_MAX = 6
};

// Enum Solarland.EShieldUpgradeItemShopState
enum class EShieldUpgradeItemShopState : uint8 {
	None = 0,
	Upgrading = 1,
	Done = 2,
	EShieldUpgradeItemShopState_MAX = 3
};

// Enum Solarland.EParticleOptimization
enum class EParticleOptimization : uint8 {
	Origin = 0,
	LowPriorityOptimization = 1,
	MidPriorityOptimization = 2,
	HighPriorityOptimization = 3,
	UltraHighPriorityOptimization = 4,
	EParticleOptimization_MAX = 5
};

// Enum Solarland.ESolarEMPParticleType
enum class ESolarEMPParticleType : uint8 {
	FadeIn = 0,
	FadeOut = 1,
	Loop = 2,
	ESolarEMPParticleType_MAX = 3
};

// Enum Solarland.ESolarEMPForceFieldState
enum class ESolarEMPForceFieldState : uint8 {
	None = 0,
	Ready = 1,
	Active = 2,
	End = 3,
	ESolarEMPForceFieldState_MAX = 4
};

// Enum Solarland.ESolarDamageShapeType
enum class ESolarDamageShapeType : uint8 {
	Capsule = 0,
	Sphere = 1,
	Box = 2,
	ESolarDamageShapeType_MAX = 3
};

// Enum Solarland.ESolarSurroundLightningApplyType
enum class ESolarSurroundLightningApplyType : uint8 {
	SurroundLightningApplyType_Character = 0,
	SurroundLightningApplyType_Vehicle = 1,
	SurroundLightningApplyType_Other = 2,
	SurroundLightningApplyType_MAX = 3
};

// Enum Solarland.ESpectatorMode
enum class ESpectatorMode : uint8 {
	DeathWatch = 0,
	Replay = 1,
	ESpectatorMode_MAX = 2
};

// Enum Solarland.ESolarSummonItemType
enum class ESolarSummonItemType : uint8 {
	Default = 0,
	Skill_Tower = 1,
	ESolarSummonItemType_MAX = 2
};

// Enum Solarland.ETabControlListStyle
enum class ETabControlListStyle : uint8 {
	None = 0,
	Text = 1,
	Icon = 2,
	ETabControlListStyle_MAX = 3
};

// Enum Solarland.ETabControlListSlotType
enum class ETabControlListSlotType : uint8 {
	Leaf = 0,
	Compound = 1,
	ETabControlListSlotType_MAX = 2
};

// Enum Solarland.ESolarTablesEnum_CalculatingSign
enum class ESolarTablesEnum_CalculatingSign : uint8 {
	Plus = 0,
	Multiplication = 1,
	Equal = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_PartsType
enum class ESolarTablesEnum_PartsType : uint8 {
	Muzzle = 0,
	Scope = 1,
	Clip = 2,
	Runes = 3,
	Grip = 4,
	GunStock = 5,
	Scope2x = 6,
	Scope4x = 7,
	Scope8x = 8,
	_Count = 9,
	ESolarTablesEnum_MAX = 10
};

// Enum Solarland.ESolarTablesEnum_AccessoryType
enum class ESolarTablesEnum_AccessoryType : uint8 {
	WeaponParts = 0,
	WeaponAmmo = 1,
	_Count = 2,
	ESolarTablesEnum_MAX = 3
};

// Enum Solarland.ESolarTablesEnum_FireCostType
enum class ESolarTablesEnum_FireCostType : uint8 {
	Descrete = 0,
	Continuous = 1,
	_Count = 2,
	ESolarTablesEnum_MAX = 3
};

// Enum Solarland.ESolarTablesEnum_TriggerType
enum class ESolarTablesEnum_TriggerType : uint8 {
	KeyDown = 0,
	KeyUp = 1,
	KeyHold = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_TrajectoryType
enum class ESolarTablesEnum_TrajectoryType : uint8 {
	Line = 0,
	LineGravity = 1,
	Curve = 2,
	Canister = 3,
	Beam = 4,
	Rocket = 5,
	VirtualBullet = 6,
	_Count = 7,
	ESolarTablesEnum_MAX = 8
};

// Enum Solarland.ESolarTablesEnum_FireMethodType
enum class ESolarTablesEnum_FireMethodType : uint8 {
	Bullet = 0,
	Skill = 1,
	SummonBullet = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_WeaponType
enum class ESolarTablesEnum_WeaponType : uint8 {
	AssualtRifle = 0,
	Submachinegun = 1,
	Shotgun = 2,
	Sniper = 3,
	Vehicle = 4,
	ItemWeapon = 5,
	SummonWeapon = 6,
	AntiVehicle = 7,
	_Count = 8,
	ESolarTablesEnum_MAX = 9
};

// Enum Solarland.ESolarTablesEnum_TrigerType
enum class ESolarTablesEnum_TrigerType : uint8 {
	GameTime = 0,
	AliveCount = 1,
	RealTime = 2,
	MatchRoundTime = 3,
	GameWorldTime = 4,
	_Count = 5,
	ESolarTablesEnum_MAX = 6
};

// Enum Solarland.ESolarTablesEnum_CategoryType
enum class ESolarTablesEnum_CategoryType : uint8 {
	CategoryType_None = 0,
	CategoryType_Reco = 1,
	CategoryType_Character = 2,
	CategoryType_CharacterSkin = 3,
	CategoryType_WeaponSkin = 4,
	CategoryType_Capsule = 5,
	CategoryType_Bag = 6,
	CategoryType_Tail = 7,
	CategoryType_Home = 8,
	CategoryType_Others = 9,
	_Count = 10,
	ESolarTablesEnum_MAX = 11
};

// Enum Solarland.ESolarTablesEnum_ShareType
enum class ESolarTablesEnum_ShareType : uint8 {
	ActionType_None = 0,
	ShareType_RankShare = 1,
	ShareType_BattlePassShare = 2,
	ShareType_AchieveItemShare = 3,
	ShareType_ScoreShare = 4,
	ShareType_LoginActivityShare = 5,
	ShareType_MedalShare = 6,
	ShareType_UserGrowthShare = 7,
	ShareType_FollowCommunity = 8,
	ShareType_PersonalHistory = 9,
	ShareType_IdolShare = 10,
	_Count = 11,
	ESolarTablesEnum_MAX = 12
};

// Enum Solarland.ESolarTablesEnum_LobbyMatchEnterType
enum class ESolarTablesEnum_LobbyMatchEnterType : uint8 {
	CanClick = 0,
	PartialClick = 1,
	ForbidClick = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_StackType
enum class ESolarTablesEnum_StackType : uint8 {
	StackByQTY = 0,
	StackByTime = 1,
	_Count = 2,
	ESolarTablesEnum_MAX = 3
};

// Enum Solarland.ESolarTablesEnum_InputRelatedType
enum class ESolarTablesEnum_InputRelatedType : uint8 {
	InputRelatedNone = 0,
	Input_F = 1,
	InputRelated2 = 2,
	InputRelated3 = 3,
	InputRelated4 = 4,
	InputRelated5 = 5,
	InputRelated6 = 6,
	InputRelated7 = 7,
	InputRelated8 = 8,
	InputRelated9 = 9,
	InputRelated10 = 10,
	Input_J = 11,
	_Count = 12,
	ESolarTablesEnum_MAX = 13
};

// Enum Solarland.ESolarTablesEnum_InputContextType
enum class ESolarTablesEnum_InputContextType : uint8 {
	InputCommon = 0,
	InputPlayer = 1,
	InputVehicle = 2,
	InputOB = 3,
	InputPlayerSkill = 4,
	InputActionWheel = 5,
	_Count = 6,
	ESolarTablesEnum_MAX = 7
};

// Enum Solarland.ESolarTablesEnum_InputTabType
enum class ESolarTablesEnum_InputTabType : uint8 {
	InputTabPlayer = 0,
	InputTabVehicle = 1,
	InputTabOB = 2,
	InputTabMisc = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_InputCtrlType
enum class ESolarTablesEnum_InputCtrlType : uint8 {
	InputCtrlHide = 0,
	InputCtrlShow = 1,
	InputCtrlCustom = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_InputGroupType
enum class ESolarTablesEnum_InputGroupType : uint8 {
	InputNone = 0,
	InputKeyF = 1,
	InputKeyG = 2,
	InputKeyP = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_GamepadCtrlType
enum class ESolarTablesEnum_GamepadCtrlType : uint8 {
	GamepadCtrlHide = 0,
	GamepadCtrlShowOnly = 1,
	GamepadCtrlCustom = 2,
	GamepadCtrlCustomAndCom = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_InputGamepadType
enum class ESolarTablesEnum_InputGamepadType : uint8 {
	InputGamepadOneKey = 0,
	InputGamepadComKey = 1,
	InputGamepadFreeComKey = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_ClassModeType
enum class ESolarTablesEnum_ClassModeType : uint8 {
	CLASS_MODE_NONE = 0,
	CLASS_MODE_V13_4 = 1,
	CLASS_MODE_UniqueSkill = 2,
	CLASS_MODE_RoleGrow = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_ExcuterType
enum class ESolarTablesEnum_ExcuterType : uint8 {
	AirDrop = 0,
	GasCircle = 1,
	Bomb = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_DisplayType
enum class ESolarTablesEnum_DisplayType : uint8 {
	None = 0,
	Tips = 1,
	Window = 2,
	_Count = 3,
	ESolarTablesEnum_MAX = 4
};

// Enum Solarland.ESolarTablesEnum_ChestType
enum class ESolarTablesEnum_ChestType : uint8 {
	AirDrop = 0,
	ElecChest = 1,
	_Count = 2,
	ESolarTablesEnum_MAX = 3
};

// Enum Solarland.ESolarTablesEnum_Duration
enum class ESolarTablesEnum_Duration : uint8 {
	Day = 0,
	Week = 1,
	Month = 2,
	Year = 3,
	Never = 4,
	None = 5,
	_Count = 6,
	ESolarTablesEnum_MAX = 7
};

// Enum Solarland.ESolarTablesEnum_CharacterLevelUpType
enum class ESolarTablesEnum_CharacterLevelUpType : uint8 {
	Health = 0,
	Damage = 1,
	Movement = 2,
	FlyCooldown = 3,
	_Count = 4,
	ESolarTablesEnum_MAX = 5
};

// Enum Solarland.ESolarTablesEnum_CharacterType
enum class ESolarTablesEnum_CharacterType : uint8 {
	None = 0,
	Assault = 1,
	Defence = 2,
	Support = 3,
	Scout = 4,
	_Count = 5,
	ESolarTablesEnum_MAX = 6
};

// Enum Solarland.ESolarTablesEnum_BehaviorType
enum class ESolarTablesEnum_BehaviorType : uint8 {
	SurvivalTime = 0,
	Kills = 1,
	Assists = 2,
	Selfhealing = 3,
	TeammateHealing = 4,
	Unpacking = 5,
	CollectElectricity = 6,
	PickExpPack = 7,
	EveryDamageDealt = 8,
	NpcKills = 9,
	NpcAssists = 10,
	_Count = 11,
	ESolarTablesEnum_MAX = 12
};

// Enum Solarland.ESolarTablesEnum_Enum_Behavior
enum class ESolarTablesEnum_Enum_Behavior : uint8 {
	Behavior1 = 0,
	Behavior2 = 1,
	Behavior3 = 2,
	Behavior4 = 3,
	Behavior5 = 4,
	Behavior6 = 5,
	Behavior7 = 6,
	Behavior8 = 7,
	Behavior9 = 8,
	Behavior10 = 9,
	Behavior11 = 10,
	_Count = 11,
	ESolarTablesEnum_Enum_MAX = 12
};

// Enum Solarland.ESolarTablesEnum_ActionType
enum class ESolarTablesEnum_ActionType : uint8 {
	ActionType_None = 0,
	ActionType_OpenGift = 1,
	ActionType_Charge = 2,
	ActionType_Battle = 3,
	ActionType_Mail = 4,
	ActionType_ShopBuy = 5,
	ActionType_DailyTask = 6,
	ActionType_Activity = 7,
	ActionType_Guid = 8,
	ActionType_GM = 9,
	ActionType_BattleBag = 10,
	ActionType_ItemUse = 11,
	ActionType_Refund = 12,
	ActionType_BattleDouble = 13,
	ActionType_UnitProf = 14,
	ActionType_SanctuaryBuild = 15,
	ActionType_SanctuaryFacility = 16,
	ActionType_Weapon_Upgrade = 17,
	ActionType_Activereward = 18,
	ActionType_ComposeItem = 19,
	ActionType_LoginReward = 20,
	ActionType_NewUserLogin = 21,
	ActionType_HomeDailyTask = 22,
	ActionType_BattlePass = 23,
	ActionType_LevelReward = 24,
	ActionType_HomeUpgrade = 25,
	ActionType_BattlePassRepeat = 26,
	ActionType_TopUP = 27,
	ActionType_Achievement = 28,
	ActionType_LuckDraw = 29,
	ActionType_BattlePassShare = 30,
	ActionType_CDKey = 31,
	ActionType_HalfMonthLogin = 32,
	ActionType_MonthlyEvent = 33,
	ActionType_FriendEvent = 34,
	ActionType_WeekChanllenge = 35,
	ActionType_RoomCard = 36,
	ActionType_BindAccount = 37,
	ActionType_UserGrowthEvent = 38,
	ActionType_SendGift = 39,
	ActionType_SellItem = 40,
	ActionType_CollectRedeem = 41,
	ActionType_RandomPack = 42,
	ActionType_Clan = 43,
	ActionType_Bet = 44,
	ActionType_BetBonus = 45,
	ActionType_BetReturn = 46,
	ActionType_CarouselDraw = 47,
	ActionType_WeekFree = 48,
	ActionType_TutorialLevelReward = 49,
	ActionType_TournamentMiss = 50,
	ActionType_TournamentReward = 51,
	ActionType_RankingCard = 52,
	ActionType_BattleSupplyBox = 53,
	ActionType_BattlePassMission = 54,
	ActionType_SupplyBox = 55,
	ActionType_VipcardReceive = 56,
	ActionType_VipcardSign = 57,
	ActionType_Vipcard = 58,
	ActionType_Signcard = 59,
	ActionType_ChangeName = 60,
	ActionType_ServerCard = 61,
	ActionType_ExResourceDownload = 62,
	ActionType_CustomServer_Renewal = 63,
	ActionType_NewLuckDraw = 64,
	_Count = 65,
	ESolarTablesEnum_MAX = 66
};

// Enum Solarland.ETaskStatus
enum class ETaskStatus : uint8 {
	Runing = 0,
	Completed = 1,
	ReceiveAward = 2,
	ETaskStatus_MAX = 3
};

// Enum Solarland.ECostType
enum class ECostType : uint8 {
	NONE = 0,
	ELECTRONIC = 1,
	ECostType_MAX = 2
};

// Enum Solarland.ETreasureBoxSpawnType
enum class ETreasureBoxSpawnType : uint8 {
	SingleRandom = 0,
	Group = 1,
	ETreasureBoxSpawnType_MAX = 2
};

// Enum Solarland.ETutorialUIType
enum class ETutorialUIType : uint8 {
	None = 0,
	Common = 1,
	Special = 2,
	ETutorialUIType_MAX = 3
};

// Enum Solarland.ELevelRewardStatus
enum class ELevelRewardStatus : uint8 {
	NotClaimed = 0,
	Claimed = 1,
	Disable = 2,
	ELevelRewardStatus_MAX = 3
};

// Enum Solarland.EWidgetPlayAnimationFlag
enum class EWidgetPlayAnimationFlag : uint8 {
	None = 0,
	Finish = 1,
	EWidgetPlayAnimationFlag_MAX = 2
};

// Enum Solarland.EWidgetInteractionFlag
enum class EWidgetInteractionFlag : uint8 {
	None = 0,
	Pressed = 1,
	Released = 2,
	Clicked = 3,
	EWidgetInteractionFlag_MAX = 4
};

// Enum Solarland.ETutorialStage
enum class ETutorialStage : uint8 {
	None = 0,
	Lobby = 1,
	BattleField = 2,
	Home = 3,
	TutorialLevel = 4,
	ETutorialStage_MAX = 5
};

// Enum Solarland.ETutorialUIParent
enum class ETutorialUIParent : uint8 {
	Parent = 0,
	UnderBattleRoot = 1,
	BattleRoot = 2,
	BattleRootGuide = 3,
	MiddleRoot = 4,
	CommonRoot = 5,
	Map = 6,
	BattleNoticeRoot = 7,
	Guide = 8,
	PopRoot = 9,
	TipsRoot = 10,
	NoticeRoot = 11,
	Loading = 12,
	Reconnecting = 13,
	ExternalToolsRoot = 255,
	ETutorialUIParent_MAX = 256
};

// Enum Solarland.ETutorialConditionType
enum class ETutorialConditionType : uint8 {
	None = 0,
	Trigger = 1,
	Interrupt = 2,
	Finish = 3,
	ForeverClose = 4,
	ETutorialConditionType_MAX = 5
};

// Enum Solarland.ETutorialType
enum class ETutorialType : uint8 {
	TEvent = 0,
	TTick = 1,
	ETutorialType_MAX = 2
};

// Enum Solarland.ETutorialTriggerType
enum class ETutorialTriggerType : uint8 {
	TickActivateTutorials = 0,
	AlreadyTriggeredMaxCount = 1,
	HasSpecifiedItem = 2,
	HasTakenDamage = 3,
	PlayerAcountLevel = 4,
	SprintingContinuously = 5,
	JumpBegin = 8,
	ShieldNotFull = 17,
	WidgetClicked = 19,
	CanUseSpecifiedVehicleAbility = 20,
	CanUseSpecifiedVehicleWeapon = 21,
	AirDropBoxLanded = 22,
	NearAirDropBox = 23,
	OpenBigMapUMG = 24,
	CanUseSpecifiedWeaponAbility = 25,
	CanOpenTreasureBox = 29,
	PlayerInTargetStage = 30,
	EquipSpecifiedWeapon = 34,
	FeatureUnlock = 35,
	ApproachTreasureBox = 36,
	BotAIDying = 38,
	RunningStep = 39,
	HasSpecifiedEquipmentByType = 40,
	TutorialLevelDone = 42,
	WeaponSlotHasSpecifiedItem = 45,
	HasUIPanelOpened = 48,
	SpecifiedPlayerProficiency = 53,
	PlayerUpgradeBattleLevel = 54,
	ETutorialTriggerType_MAX = 55
};

// Enum Solarland.EPlayerProficiency
enum class EPlayerProficiency : uint8 {
	None = 0,
	Rookie = 1,
	FPS = 2,
	Veteran = 3,
	EPlayerProficiency_MAX = 4
};

// Enum Solarland.EUAVRescueState
enum class EUAVRescueState : uint8 {
	None = 0,
	Idle = 1,
	Heal = 2,
	Navigate = 3,
	Rescue = 4,
	EUAVRescueState_MAX = 5
};

// Enum Solarland.EWidgetPassiveMode
enum class EWidgetPassiveMode : uint8 {
	Normal = 0,
	Passive_Buff = 1,
	Passive_Debuff = 2,
	EWidgetPassiveMode_MAX = 3
};

// Enum Solarland.EVehicleRotateAnimationType
enum class EVehicleRotateAnimationType : uint8 {
	None = 0,
	Right_91 = 1,
	Right_181 = 2,
	Left_91 = 3,
	Left_181 = 4,
	Right = 5,
	Left = 6,
	EVehicleRotateAnimationType_MAX = 7
};

// Enum Solarland.EIronManHandPart
enum class EIronManHandPart : uint8 {
	LeftHand = 0,
	RightHand = 1,
	EIronManHandPart_MAX = 2
};

// Enum Solarland.EIronManSoundEvent
enum class EIronManSoundEvent : uint8 {
	LaserHit = 0,
	EIronManSoundEvent_MAX = 1
};

// Enum Solarland.EPlayerInputMask
enum class EPlayerInputMask : uint8 {
	Invalidated = 0,
	VehicleBraking = 1,
	VehicleTrumpet = 2,
	VehicleAutoMove = 4,
	All = 7,
	EPlayerInputMask_MAX = 8
};

// Enum Solarland.EAssistLockState
enum class EAssistLockState : uint8 {
	None = 0,
	PreEnterAssistLock = 1,
	EnterAssistLock = 2,
	HoldAssistLock = 3,
	LeaveAssistLock = 4,
	EAssistLockState_MAX = 5
};

// Enum Solarland.EHoverVehicleVFXType
enum class EHoverVehicleVFXType : uint8 {
	Forward = 0,
	Backward = 1,
	Right = 2,
	Left = 3,
	Max = 4
};

// Enum Solarland.EEnterWaterVFX
enum class EEnterWaterVFX : uint8 {
	HorizontalLightEffect = 0,
	HorizontalHeavyEffect = 1,
	VerticalLightEffect = 2,
	VerticalHeavyEffect = 3,
	MAX = 4
};

// Enum Solarland.EVehicleSpawnSourceType
enum class EVehicleSpawnSourceType : uint8 {
	CommonSpawn = 0,
	VehicleSummonWeapon = 1,
	EVehicleSpawnSourceType_MAX = 2
};

// Enum Solarland.EVehicleControlUIType
enum class EVehicleControlUIType : uint8 {
	Vehicle = 0,
	Character = 1,
	EVehicleControlUIType_MAX = 2
};

// Enum Solarland.EVehicleRotateCondition
enum class EVehicleRotateCondition : uint8 {
	None = 0,
	Forward = 1,
	Backward = 2,
	Right = 4,
	Left = 8,
	All = 15,
	EVehicleRotateCondition_MAX = 16
};

// Enum Solarland.EVehicleOpenTips
enum class EVehicleOpenTips : uint8 {
	FloorCanNotOpen = 0,
	SpeedCanNotOpen = 1,
	EVehicleOpenTips_MAX = 2
};

// Enum Solarland.ESiegeVehicleAnimation
enum class ESiegeVehicleAnimation : uint8 {
	CloseIdle = 0,
	OpenIdle = 1,
	Fire = 2,
	ESiegeVehicleAnimation_MAX = 3
};

// Enum Solarland.EVehicleDamageStatus
enum class EVehicleDamageStatus : uint8 {
	Normal = 0,
	Damaged = 1,
	SeriouslyDamaged = 2,
	BrokenDanger = 3,
	Broken = 4,
	MAX = 5
};

// Enum Solarland.EVehicleAnimationState
enum class EVehicleAnimationState : uint8 {
	None = 0,
	Jump = 1,
	Dash = 2,
	TakingOff = 3,
	Cruising = 4,
	EVehicleAnimationState_MAX = 5
};

// Enum Solarland.ERocketFireMode
enum class ERocketFireMode : uint8 {
	NomalFire = 0,
	PrecisionFire = 1,
	Max = 2
};

// Enum Solarland.EVehiclePageType
enum class EVehiclePageType : uint8 {
	Lobby = 0,
	VehicleBag = 1,
	BattlePass = 2,
	LuckDraw = 3,
	GetReward = 4,
	GrowTask = 5,
	Shop = 6,
	CarouselDraw = 7,
	SupplyBoxDetail = 8,
	SupplyBoxRaffle = 9,
	Max = 10
};

// Enum Solarland.EVehicleSpawnType
enum class EVehicleSpawnType : uint8 {
	SingleRandom = 0,
	Group = 1,
	EVehicleSpawnType_MAX = 2
};

// Enum Solarland.EVehicleState
enum class EVehicleState : uint8 {
	None = 0,
	Ground = 1,
	Air = 2,
	Sliding = 3,
	EVehicleState_MAX = 4
};

// Enum Solarland.ESolarWeaponSpreadState
enum class ESolarWeaponSpreadState : uint8 {
	Standby = 0,
	Approach = 1,
	Recover = 2,
	ESolarWeaponSpreadState_MAX = 3
};

// Enum Solarland.ESolarBlackHoleParticle
enum class ESolarBlackHoleParticle : uint8 {
	ForceField = 0,
	CoreFadeIn = 1,
	CoreFadeOut = 2,
	CoreLoop = 3,
	CoreHit = 4,
	Explode = 5,
	CharacterDebuff = 6,
	ESolarBlackHoleParticle_MAX = 7
};

// Enum Solarland.ESolarBlackHoleState
enum class ESolarBlackHoleState : uint8 {
	None = 0,
	Startup = 1,
	Ready = 2,
	Active = 3,
	End = 4,
	ESolarBlackHoleState_MAX = 5
};

// Enum Solarland.EWeaponOverloadState
enum class EWeaponOverloadState : uint8 {
	NormalDecrease = 0,
	FireSuspend = 1,
	ForceOverload = 2,
	EWeaponOverloadState_MAX = 3
};

// Enum Solarland.EWeaponFireModeType
enum class EWeaponFireModeType : int32 {
	EWeaponFireModeType_UnArm = -1,
	EWeaponFireModeType_Primary = 0,
	EWeaponFireModeType_Secondary = 1,
	EWeaponFireModeType_Tertiary = 2,
	EWeaponFireModeType_MAX = 3
};

// Enum Solarland.EWeaponScopeType
enum class EWeaponScopeType : uint8 {
	None = 0,
	ScopeX0 = 1,
	ScopeX1 = 2,
	ScopeX2 = 3,
	ScopeX3 = 4,
	ScopeX4 = 5,
	ScopeX6 = 6,
	ScopeX8 = 7,
	Count = 8,
	EWeaponScopeType_MAX = 9
};

// Enum Solarland.EGearState
enum class EGearState : uint8 {
	Reverse = 0,
	Neutral = 1,
	Forward = 2,
	EGearState_MAX = 3
};

// Enum Solarland.EUIRoot
enum class EUIRoot : uint8 {
	None = 0,
	UnderBattleRoot = 1,
	BattleRoot = 2,
	BattleRootGuide = 3,
	MiddleRoot = 4,
	CommonRoot = 5,
	Map = 6,
	BattleNoticeRoot = 7,
	Guide = 8,
	PopRoot = 9,
	TipsRoot = 10,
	NoticeRoot = 11,
	Loading = 12,
	Reconnecting = 13,
	ExternalToolsRoot = 255,
	EUIRoot_MAX = 256
};

// Enum Solarland.EInputEventHandleType
enum class EInputEventHandleType : uint8 {
	Unhandle = 0,
	SimulateKey = 1,
	BroadcastEvent = 2,
	SimulateTouch = 4,
	NoKeyOnly = 6,
	NoEventOnly = 5,
	NoTouchOnly = 3,
	HandleAll = 7,
	EInputEventHandleType_MAX = 8
};

// Enum Solarland.ETouchMovePriority
enum class ETouchMovePriority : uint8 {
	Highest = 0,
	Higher = 1,
	Normal = 2,
	Lower = 3,
	Lowest = 4,
	ETouchMovePriority_MAX = 5
};

// Enum Solarland.EZiplineSide
enum class EZiplineSide : uint8 {
	None = 0,
	Cable = 1,
	A = 2,
	B = 3,
	EZiplineSide_MAX = 4
};

// Enum Solarland.EZiplineType
enum class EZiplineType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EZiplineType_MAX = 2
};

// Enum Solarland.ESoundPoolSimpleRule
enum class ESoundPoolSimpleRule : uint8 {
	Random = 0,
	RandomNoRepeat = 1,
	Sequential = 2,
	ESoundPoolSimpleRule_MAX = 3
};

// Enum Solarland.ESoundGroupPlayContextEnum
enum class ESoundGroupPlayContextEnum : uint8 {
	None = 0,
	IsSelf = 1,
	IsTeammate = 2,
	IsAttackingOther = 3,
	IsAttachedByOther = 4,
	ESoundGroupPlayContextEnum_MAX = 5
};

// Enum Solarland.ESolarImageProgressHalfCirclePrivotType
enum class ESolarImageProgressHalfCirclePrivotType : uint8 {
	MidLeft = 0,
	MidRight = 1,
	MidBottom = 2,
	MidTop = 4,
	ESolarImageProgressHalfCirclePrivotType_MAX = 5
};

// Enum Solarland.ESolarImageProgressQuaterCirclePrivotType
enum class ESolarImageProgressQuaterCirclePrivotType : uint8 {
	LeftBottom = 0,
	RightBottom = 1,
	LeftTop = 16,
	RightTop = 17,
	ESolarImageProgressQuaterCirclePrivotType_MAX = 18
};

// Enum Solarland.ESolarImageProgressLineDirType
enum class ESolarImageProgressLineDirType : uint8 {
	Horizantal = 0,
	Vertical = 1,
	ESolarImageProgressLineDirType_MAX = 2
};

// Enum Solarland.ESolarImageProgressType
enum class ESolarImageProgressType : uint8 {
	None = 0,
	Line = 1,
	QuarterCircle = 2,
	HalfCircle = 3,
	Circle = 4,
	ESolarImageProgressType_MAX = 5
};

// Enum Solarland.ESolarImageFillType
enum class ESolarImageFillType : uint8 {
	Normal = 0,
	Mirror = 1,
	Quarter = 2,
	ESolarImageFillType_MAX = 3
};

// Enum Solarland.ESummonItemType
enum class ESummonItemType : uint8 {
	SolidSummonItem = 0,
	VirtualSummonItem = 1,
	ESummonItemType_MAX = 2
};

// Enum Solarland.ESolarSummonSoundType
enum class ESolarSummonSoundType : uint8 {
	SummonSoundType_1P = 0,
	SummonSoundType_3P = 1,
	SummonSoundType_3P_Enemy = 2,
	SummonSoundType_MAX = 3
};

// Enum Solarland.ERefreshCause
enum class ERefreshCause : uint8 {
	ECause_None = 0,
	ECause_OutOrIntoScreen = 1,
	ECause_RescueStateChange = 2,
	ECause_MAX = 3
};

// Enum Solarland.ESplineMeshType
enum class ESplineMeshType : uint8 {
	DEFAULT = 0,
	START = 1,
	END = 2,
	ESplineMeshType_MAX = 3
};

// Enum Solarland.EBackpackInfoPageType
enum class EBackpackInfoPageType : uint8 {
	Level = 0,
	Skill = 1,
	Max = 2
};

// Enum Solarland.ETweenInterpolationType
enum class ETweenInterpolationType : uint8 {
	Easing = 0,
	Curve = 1,
	ETweenInterpolationType_MAX = 2
};

// Enum Solarland.EDefenderTeamType
enum class EDefenderTeamType : uint8 {
	MyTeam = 0,
	DefenderTeam = 1,
	EDefenderTeamType_MAX = 2
};

// Enum Solarland.EPlayerWidgetState
enum class EPlayerWidgetState : uint8 {
	NORMAL = 0,
	DRIVER = 1,
	PASSGNER = 2,
	EQUIPVEHICLEWEAPON = 3,
	CRUISING = 4,
	PATACHUTING = 5,
	SWIMMING = 6,
	MAX = 7
};

// Enum Solarland.ELocalNoticeType
enum class ELocalNoticeType : uint8 {
	Revenge = 0,
	KillDown = 1,
	ClearTeam = 2,
	ShutDown = 3,
	KillDefender = 4,
	ELocalNoticeType_MAX = 5
};

// Enum Solarland.EUIWeaponPartState
enum class EUIWeaponPartState : uint8 {
	NotEquip = 0,
	Equipped = 1,
	CantEquip = 2,
	EUIWeaponPartState_MAX = 3
};

// Enum Solarland.EWidgetVisibilityFlags
enum class EWidgetVisibilityFlags : uint8 {
	None = 0,
	ChatSwitch = 1,
	ChatMsgSending = 2,
	ConnectionState = 3,
	TalentState = 4,
	TalentValidation = 5,
	EWidgetVisibilityFlags_MAX = 6
};

// Enum Solarland.EStealthParamType
enum class EStealthParamType : uint8 {
	None = 0,
	Type_1P = 1,
	Type_3P = 2,
	Type_3P_Enemy = 3,
	EStealthParamType_MAX = 4
};

// Enum Solarland.EWholeShieldState
enum class EWholeShieldState : uint8 {
	Begin = 0,
	InProgress = 1,
	End = 2,
	EWholeShieldState_MAX = 3
};

// Enum Solarland.EVisualSoundDetectionRule
enum class EVisualSoundDetectionRule : uint8 {
	XYZ = 0,
	XY = 1,
	XY_FiniteZ = 2,
	EVisualSoundDetectionRule_MAX = 3
};

// Enum Solarland.EWeaponAnimState
enum class EWeaponAnimState : uint8 {
	Idle = 0,
	Fire = 1,
	AltFire = 2,
	Reload = 3,
	Overload = 4,
	OpenScope = 5,
	CloseScope = 6,
	Bolt = 7,
	Preview = 8,
	Summon = 9,
	EWeaponAnimState_MAX = 10
};

// Enum Solarland.ESolarWeaponLODState
enum class ESolarWeaponLODState : uint8 {
	Hold = 0,
	OpenScope = 1,
	Discard = 2,
	AttachedOnBackpack = 3,
	ESolarWeaponLODState_MAX = 4
};

// Enum Solarland.EWeaponSkinType
enum class EWeaponSkinType : uint8 {
	Material = 0,
	Mesh = 1,
	EWeaponSkinType_MAX = 2
};

// Enum Solarland.EWeaponMechanicalSideFlag
enum class EWeaponMechanicalSideFlag : int32 {
	None = 0,
	OnGround = 2,
	Unequip = 4,
	OpenScope = 8,
	ForceFiring = 16,
	ChargedFire = 32,
	NeedBolt = 64,
	GatlingRolling = 128,
	DetectedWall = 256,
	NeedRechamber = 512,
	NoAmmoReserved = 1024,
	EWeaponMechanicalSideFlag_MAX = 1025
};

// Enum Solarland.EWeaponMechanicalUniqueState
enum class EWeaponMechanicalUniqueState : uint8 {
	None = 0,
	Idle = 1,
	PreFire = 2,
	RealFire = 3,
	Rechamber = 4,
	Reloading = 5,
	Bolting = 6,
	Charging = 7,
	Overloading = 8,
	KeyUPHolding = 9,
	EWeaponMechanicalUniqueState_MAX = 10
};

// Enum Solarland.EWeaponUpgradeType
enum class EWeaponUpgradeType : uint8 {
	EWeaponUpgradeType_Part = 0,
	EWeaponUpgradeType_SecondaryAmmo = 1,
	EWeaponUpgradeType_MAX = 2
};

// Enum Solarland.EWeaponNetToClientProto
enum class EWeaponNetToClientProto : uint8 {
	CSkin_RefreshSkin = 0,
	CUpgrade_UpLevel = 1,
	CUpgrade_ExpRefresh = 2,
	CUpgrade_ReplaceUpgradeRoute = 3,
	CParts_ReplacePart = 4,
	CParts_ReplaceAmmo = 5,
	CParts_InitFinish = 6,
	CAnimation_RefreshState = 7,
	EWeaponNetToClientProto_MAX = 8
};

// Enum Solarland.EWeaponNetToServerProto
enum class EWeaponNetToServerProto : uint8 {
	SUpgrade_AddExp = 0,
	SParts_Hold = 1,
	SAnimation_RefreshState = 2,
	EWeaponNetToServerProto_MAX = 3
};

// Enum Solarland.EWeaponPartVisibilityChangeFlag
enum class EWeaponPartVisibilityChangeFlag : uint8 {
	Default = 0,
	BySignificance = 1,
	ByHold = 2,
	EWeaponPartVisibilityChangeFlag_MAX = 3
};

// Enum Solarland.EFixedValueMode
enum class EFixedValueMode : uint8 {
	Raw = 0,
	Increment = 1,
	EFixedValueMode_MAX = 2
};

// Enum Solarland.EWeaponSkewAdjustmentType
enum class EWeaponSkewAdjustmentType : uint8 {
	Pitch = 0,
	Yaw = 1,
	Roll = 2,
	XOffset = 3,
	YOffset = 4,
	ZOffset = 5,
	EWeaponSkewAdjustmentType_MAX = 6
};

// Enum Solarland.EWeaponSkewInputType
enum class EWeaponSkewInputType : uint8 {
	PitchSpeed = 0,
	YawSpeed = 1,
	HorizontalSpeed = 2,
	VerticalSpeed = 3,
	EWeaponSkewInputType_MAX = 4
};

// Enum Solarland.ESprayingRecoveryMode
enum class ESprayingRecoveryMode : uint8 {
	SyncWithRecoil = 0,
	RecoverByCurve = 1,
	ESprayingRecoveryMode_MAX = 2
};

// Enum Solarland.EWeaponAttributeParamType
enum class EWeaponAttributeParamType : uint8 {
	ParamA = 0,
	ParamB = 1,
	ParamC = 2,
	ParamD = 3,
	EWeaponAttributeParamType_MAX = 4
};

// Enum Solarland.ESpreadScaleDecreaseMode
enum class ESpreadScaleDecreaseMode : uint8 {
	DecreaseByFixedSpeed = 0,
	DecreaseByFixedTime = 1,
	ESpreadScaleDecreaseMode_MAX = 2
};

// Enum Solarland.ESolarWeaponFireInputButtonState
enum class ESolarWeaponFireInputButtonState : uint8 {
	FireWaiting = 0,
	FirePressed = 1,
	CancelWaiting = 2,
	CancelPressed = 3,
	Invalid = 4,
	ESolarWeaponFireInputButtonState_MAX = 5
};

// Enum Solarland.EWSCurWeaponUpdateType
enum class EWSCurWeaponUpdateType : uint8 {
	Switch = 0,
	PartUpdate = 1,
	EWSCurWeaponUpdateType_MAX = 2
};

// Enum Solarland.ECheckFireResultType
enum class ECheckFireResultType : uint8 {
	None = 0,
	Fire = 1,
	Reload = 2,
	OpenScope = 3,
	CloseScope = 4,
	Charge = 5,
	EndCharge = 6,
	ECheckFireResultType_MAX = 7
};

// Enum Solarland.EOperateScopeStateReason
enum class EOperateScopeStateReason : uint8 {
	None = 0,
	OpenScopeButton = 1,
	OpenQuickAds = 2,
	Open = 3,
	CloseReload = 16,
	CloseBolt = 32,
	Close = 48,
	AllFlag = 51,
	EOperateScopeStateReason_MAX = 52
};

// Enum Solarland.EBehaviorExpID
enum class EBehaviorExpID : uint8 {
	Default = 0,
	KillPlayer = 2,
	AssistPlayer = 3,
	DamageExp = 9,
	KillNpc = 11,
	AssistNpc = 12,
	EBehaviorExpID_MAX = 13
};

// Enum Solarland.EClientRecieveProto
enum class EClientRecieveProto : uint8 {
	PickUpWeapon = 0,
	DropWeapon = 1,
	SwitchWeaponFinish = 2,
	ReplaceWeapon = 3,
	WeaponDataUpdate = 4,
	AddExpMsg = 5,
	ClearWeapons = 6,
	ReloadCompleted = 7,
	EClientRecieveProto_MAX = 8
};

// Enum Solarland.EServerRecieveProto
enum class EServerRecieveProto : uint8 {
	SwitchWeapon = 0,
	Reload = 1,
	ShowOrHideCurrent = 2,
	GameStaticsWeaponSkill = 3,
	DropItemWeapon = 4,
	ReplaceUpgradeRoute = 5,
	SwapWeapon = 6,
	EServerRecieveProto_MAX = 7
};

// Enum Solarland.EAIPlayerServerRecieveProto
enum class EAIPlayerServerRecieveProto : uint8 {
	PickUpWeapon = 0,
	EAIPlayerServerRecieveProto_MAX = 1
};

// Enum Solarland.EAIPlayerClientRecieveProto
enum class EAIPlayerClientRecieveProto : uint8 {
	PickUpWeapon = 0,
	SwitchWeapon = 1,
	EAIPlayerClientRecieveProto_MAX = 2
};

// Enum Solarland.EVehicleWeaponServerRecieveProto
enum class EVehicleWeaponServerRecieveProto : uint8 {
	Reload = 0,
	StartReload = 1,
	EVehicleWeaponServerRecieveProto_MAX = 2
};

// Enum Solarland.EWeaponSystemVehicleState
enum class EWeaponSystemVehicleState : uint8 {
	PreCharging = 0,
	PreFire = 1,
	PreReload = 2,
	PreOpenScope = 3,
	PreCloseScope = 4,
	PreFireOverload = 5,
	EWeaponSystemVehicleState_MAX = 6
};

// Enum Solarland.EWeaponSystemVehicleProto
enum class EWeaponSystemVehicleProto : uint8 {
	EWeaponSystemVehicleProto_Equip = 0,
	EWeaponSystemVehicleProto_UnEquip = 1,
	EWeaponSystemVehicleProto_StartReload = 2,
	EWeaponSystemVehicleProto_MAX = 3
};

// Enum Solarland.EMarkButtonState
enum class EMarkButtonState : uint8 {
	Normal = 0,
	Pressed = 1,
	Selecting = 2,
	Canceled = 3,
	Respond = 4,
	EMarkButtonState_MAX = 5
};

// ScriptStruct Solarland.ScreenshotConfig
// Size: 0x50 (Inherited: 0x00)
struct FScreenshotConfig {
	bool EnableOnCurrentReportGameCheating; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxCountInRound; // 0x04(0x04)
	struct FString ScreenshotMoment; // 0x08(0x10)
	int32_t ScreenshotInterval; // 0x18(0x04)
	int32_t ScreenshotWidth; // 0x1c(0x04)
	int32_t ScreenshotQuality; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ImageSaveType; // 0x28(0x10)
	struct FString ScreenshotMode; // 0x38(0x10)
	int32_t ImageMaxSize; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Solarland.AntiCheatSetting
// Size: 0x40 (Inherited: 0x00)
struct FAntiCheatSetting {
	int64_t ID; // 0x00(0x08)
	int64_t ValueType; // 0x08(0x08)
	double ValueStart; // 0x10(0x08)
	double ValueEnd; // 0x18(0x08)
	int64_t Tolerance; // 0x20(0x08)
	int64_t ProbeInterval; // 0x28(0x08)
	struct FString VariableName; // 0x30(0x10)
};

// ScriptStruct Solarland.RegistedActorContainer
// Size: 0x50 (Inherited: 0x00)
struct FRegistedActorContainer {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Solarland.LiveWatchOnlyMsg
// Size: 0x40 (Inherited: 0x00)
struct FLiveWatchOnlyMsg {
	struct FString BattleID; // 0x00(0x10)
	struct FString FromPlayerID; // 0x10(0x10)
	struct FString ToPlayerID; // 0x20(0x10)
	struct FString Content; // 0x30(0x10)
};

// ScriptStruct Solarland.GameStartConditionList
// Size: 0x58 (Inherited: 0x00)
struct FGameStartConditionList {
	char pad_0[0x8]; // 0x00(0x08)
	struct FGameplayTagContainer ServerStartConditionList; // 0x08(0x20)
	struct FGameplayTagContainer ClientStartConditionList; // 0x28(0x20)
	struct AGameStateBase* Owner; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Solarland.PrePooledBundle
// Size: 0x10 (Inherited: 0x00)
struct FPrePooledBundle {
	struct FName ClassPath; // 0x00(0x08)
	int32_t Number; // 0x08(0x04)
	bool bNeedOnClient; // 0x0c(0x01)
	bool bNeedOnServer; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Solarland.CustomRoomData
// Size: 0xd8 (Inherited: 0x00)
struct FCustomRoomData {
	struct FString Name; // 0x00(0x10)
	int64_t MinPlayerLimit; // 0x10(0x08)
	int64_t MaxPlayerLimit; // 0x18(0x08)
	struct FString OwnerID; // 0x20(0x10)
	struct FString Passwd; // 0x30(0x10)
	int32_t LevelLimit; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t ShowID; // 0x48(0x08)
	int64_t MaxOBPlayerLimit; // 0x50(0x08)
	bool bIsEnabledSwapPos; // 0x58(0x01)
	bool bIsEnabledInvite; // 0x59(0x01)
	bool bIsEnableTeamJoin; // 0x5a(0x01)
	enum class ESCRoomType RoomType; // 0x5b(0x01)
	struct FTournamentData TournamentData; // 0x5c(0x10)
	int32_t RewardPoolID; // 0x6c(0x04)
	int32_t RewardPoolPrizeType; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FCustomServerData CustomServerData; // 0x78(0x58)
	int32_t KeepMatchTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Solarland.CustomServerData
// Size: 0x58 (Inherited: 0x00)
struct FCustomServerData {
	struct FString ID; // 0x00(0x10)
	int32_t ConfigID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> WeaponBlacklist; // 0x18(0x10)
	struct TArray<int32_t> WeaponTypeBlacklist; // 0x28(0x10)
	struct TArray<int32_t> VehicleTypeBlacklist; // 0x38(0x10)
	struct TArray<int32_t> VehicleClassBlacklist; // 0x48(0x10)
};

// ScriptStruct Solarland.TournamentData
// Size: 0x10 (Inherited: 0x00)
struct FTournamentData {
	int32_t StartTime; // 0x00(0x04)
	int32_t DelayTime; // 0x04(0x04)
	int32_t Turn; // 0x08(0x04)
	enum class ESCTournamentType TournamentType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Solarland.KnockoutParams
// Size: 0x28 (Inherited: 0x00)
struct FKnockoutParams {
	float KnockoutKillPoint; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> KnockoutRankPoints; // 0x08(0x10)
	float KnockoutDamagePoint; // 0x18(0x04)
	float KnockoutDamageTakenPoint; // 0x1c(0x04)
	float ScalarParam; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.SCMRankData
// Size: 0x18 (Inherited: 0x00)
struct FSCMRankData {
	struct FString HostID; // 0x00(0x10)
	int32_t Rank; // 0x10(0x04)
	float Value; // 0x14(0x04)
};

// ScriptStruct Solarland.SCMRankInfo
// Size: 0x18 (Inherited: 0x00)
struct FSCMRankInfo {
	struct FString RankName; // 0x00(0x10)
	enum class ESCMDataRankType RankType; // 0x10(0x01)
	enum class ESCMHostType HostType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Solarland.StartRecordingParams
// Size: 0x10 (Inherited: 0x00)
struct FStartRecordingParams {
	bool bWithLevelStreamingFixes; // 0x00(0x01)
	bool bEnableCheckpoint; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t RecordHz; // 0x04(0x04)
	float CheckpointInterval; // 0x08(0x04)
	float ChunkInterval; // 0x0c(0x04)
};

// ScriptStruct Solarland.HighlightReportData
// Size: 0x50 (Inherited: 0x00)
struct FHighlightReportData {
	int32_t Source; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BattleID; // 0x08(0x10)
	struct FString MapID; // 0x18(0x10)
	int32_t MatchRanking; // 0x28(0x04)
	int32_t Rank; // 0x2c(0x04)
	int32_t KillNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString HighestRating; // 0x38(0x10)
	bool bIsInterrupt; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Solarland.AddMultiplePassMaterialChangeParams
// Size: 0x40 (Inherited: 0x00)
struct FAddMultiplePassMaterialChangeParams {
	struct FGameplayTag PriorityTag; // 0x00(0x08)
	enum class EMaterialChangeConflictResolveStrategy ResolveStrategy; // 0x08(0x01)
	enum class EMultiplePassMaterialChangeCompatibilityMode CompatibilityMode; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FGameplayTagContainer SpecifiedPriorityTags; // 0x10(0x20)
	char bNeedMultiplePass : 1; // 0x30(0x01)
	char bForceFrontFaceCull : 1; // 0x30(0x01)
	char bIgnoreTranslucentSection : 1; // 0x30(0x01)
	char bIgnoreMaskedSection : 1; // 0x30(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x30(0x01)
	char bUseAsOccluder : 1; // 0x30(0x01)
	char bIgnoreOcclusionCull : 1; // 0x30(0x01)
	char bRenderMainPassStencil : 1; // 0x30(0x01)
	char bSetTranslucencySortPriorityOnly : 1; // 0x31(0x01)
	char bRenderCustomDepth : 1; // 0x31(0x01)
	char pad_31_2 : 6; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t MainPassDepthStencilValue; // 0x34(0x04)
	int32_t TranslucencySortPriority; // 0x38(0x04)
	int32_t CustomDepthStencilValue; // 0x3c(0x04)
};

// ScriptStruct Solarland.SolarClientAdjustPositionInfo
// Size: 0x38 (Inherited: 0x00)
struct FSolarClientAdjustPositionInfo {
	char pad_0[0x20]; // 0x00(0x20)
	struct UPrimitiveComponent* NewBase; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Solarland.CustomJumpParams
// Size: 0x98 (Inherited: 0x00)
struct FCustomJumpParams {
	float JumpHeight; // 0x00(0x04)
	float JumpTime; // 0x04(0x04)
	float JumpDelay; // 0x08(0x04)
	bool bEnableLateralSpeedAdjust; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRuntimeFloatCurve LateralSpeedAdjustCurve; // 0x10(0x88)
};

// ScriptStruct Solarland.SolarItemData
// Size: 0xb8 (Inherited: 0x0c)
struct FSolarItemData : FFastArraySerializerItem {
	int32_t ItemID; // 0x0c(0x04)
	int64_t ThisID; // 0x10(0x08)
	struct FString Name; // 0x18(0x10)
	struct FString Icon; // 0x28(0x10)
	struct FString Info; // 0x38(0x10)
	int32_t count; // 0x48(0x04)
	enum class EItemType ItemType; // 0x4c(0x04)
	int32_t Quality; // 0x50(0x04)
	int32_t MaxPile; // 0x54(0x04)
	bool IfReplace; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString AbilityBP; // 0x60(0x10)
	struct FString ItemBP; // 0x70(0x10)
	int32_t DropTime; // 0x80(0x04)
	int32_t UnPickupTime; // 0x84(0x04)
	bool IsRecommend; // 0x88(0x01)
	bool bDirty; // 0x89(0x01)
	bool IsPickupLock; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
	int64_t UserId; // 0x90(0x08)
	int32_t Level; // 0x98(0x04)
	int32_t Prize; // 0x9c(0x04)
	float CurValue; // 0xa0(0x04)
	bool UseOnPickup; // 0xa4(0x01)
	enum class EItemAppearanceType AppearanceType; // 0xa5(0x01)
	bool bUpdateOverlap; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	int32_t SourceType; // 0xa8(0x04)
	char pad_AC[0xc]; // 0xac(0x0c)
};

// ScriptStruct Solarland.VehicleSpectateInfo
// Size: 0x30 (Inherited: 0x00)
struct FVehicleSpectateInfo {
	struct TWeakObjectPtr<struct ASolarVehiclePawn> SpectateVehicle; // 0x00(0x08)
	struct TWeakObjectPtr<struct ASolarVehicleWeapon> SpectateVehicleWeapon; // 0x08(0x08)
	enum class EVehicleWeaponScopeType VehicleWeaponScopeType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct ASolarPlayerWeapon> SpectatePlayerWeapon; // 0x14(0x08)
	int32_t ScopeId; // 0x1c(0x04)
	struct TArray<int32_t> WeaponIDs; // 0x20(0x10)
};

// ScriptStruct Solarland.InteractiveTaskConfig
// Size: 0x88 (Inherited: 0x08)
struct FInteractiveTaskConfig : FTableRowBase {
	int32_t TaskID; // 0x08(0x04)
	int32_t GiftID; // 0x0c(0x04)
	int32_t TaskName; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Describe; // 0x18(0x10)
	int32_t TaskUpgradeDescribe; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FSoftObjectPath TaskIcon; // 0x30(0x18)
	enum class ESocialCurrencyType CurrencyType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t MaxTaskLevel; // 0x4c(0x04)
	struct TArray<int32_t> TaskTarget; // 0x50(0x10)
	struct TArray<int32_t> UpgradePrice; // 0x60(0x10)
	struct TArray<int32_t> TaskReward; // 0x70(0x10)
	enum class EInteractiveTaskType TaskType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t Param; // 0x84(0x04)
};

// ScriptStruct Solarland.SpectateConditions
// Size: 0x20 (Inherited: 0x00)
struct FSpectateConditions {
	bool bCanBeSpectate; // 0x00(0x01)
	bool bCanBeSpectateByHostilePlayer; // 0x01(0x01)
	bool bCanBeSpectateByFriendlyPlayer; // 0x02(0x01)
	bool bCanISpectateBot; // 0x03(0x01)
	bool bCanISpectateHostilePlayers; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float LookAtSelfDeathBoxCountDown; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EFindSpectateTargetType> FindSpectateTargetPolicy; // 0x10(0x10)
};

// ScriptStruct Solarland.SpectateReportInfo
// Size: 0x28 (Inherited: 0x00)
struct FSpectateReportInfo {
	uint32_t RankLevelID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TargetUserID; // 0x08(0x10)
	char TargetType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t SpectateElapsedTime; // 0x1c(0x04)
	char Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Solarland.BattleUpgradeEffectParamData
// Size: 0x08 (Inherited: 0x00)
struct FBattleUpgradeEffectParamData {
	enum class ESolarTablesEnum_BattleUpgradeEffectType EffectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ParameterSum; // 0x04(0x04)
};

// ScriptStruct Solarland.RepCountdownData
// Size: 0x2c (Inherited: 0x00)
struct FRepCountdownData {
	int32_t RepTimes; // 0x00(0x04)
	int32_t RepTextID; // 0x04(0x04)
	int32_t RepPassiveTextID; // 0x08(0x04)
	int32_t RepPassiveCharacterID; // 0x0c(0x04)
	float RepDuration; // 0x10(0x04)
	float RepRemaining; // 0x14(0x04)
	float RepAmount; // 0x18(0x04)
	float RepStartTime; // 0x1c(0x04)
	float RepEndTime; // 0x20(0x04)
	int32_t RepCancel; // 0x24(0x04)
	float RemainingTime; // 0x28(0x04)
};

// ScriptStruct Solarland.CharacterRoleAbilityInfo
// Size: 0x18 (Inherited: 0x00)
struct FCharacterRoleAbilityInfo {
	bool bHasAbility; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	bool bIsCountingDown; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float StartCDTime; // 0x04(0x04)
	float TotalCDTime; // 0x08(0x04)
	int32_t State; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
	bool bOngoing; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Solarland.ReplicateMaxPileData
// Size: 0x08 (Inherited: 0x00)
struct FReplicateMaxPileData {
	int32_t ItemID; // 0x00(0x04)
	int32_t MaxPile; // 0x04(0x04)
};

// ScriptStruct Solarland.ReplicateItemData
// Size: 0x0c (Inherited: 0x00)
struct FReplicateItemData {
	int32_t ItemID; // 0x00(0x04)
	int32_t count; // 0x04(0x04)
	int32_t Slot; // 0x08(0x04)
};

// ScriptStruct Solarland.InteractiveTaskStatus
// Size: 0x78 (Inherited: 0x00)
struct FInteractiveTaskStatus {
	int32_t TaskID; // 0x00(0x04)
	int32_t CurLevel; // 0x04(0x04)
	int32_t ProgressValue; // 0x08(0x04)
	int32_t TargetValue; // 0x0c(0x04)
	int32_t Param; // 0x10(0x04)
	bool bAvailableToNxtLevel; // 0x14(0x01)
	char pad_15[0x53]; // 0x15(0x53)
	struct TArray<struct FGiftSenderInfo> TaskGiftPlayerInfo; // 0x68(0x10)
};

// ScriptStruct Solarland.GiftSenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FGiftSenderInfo {
	int32_t Gold; // 0x00(0x04)
	int32_t Diamond; // 0x04(0x04)
	struct FString playerName; // 0x08(0x10)
	struct FString PlayerId; // 0x18(0x10)
};

// ScriptStruct Solarland.MedalInfo
// Size: 0x10 (Inherited: 0x00)
struct FMedalInfo {
	int32_t MedalID; // 0x00(0x04)
	int32_t MedalType; // 0x04(0x04)
	int32_t MedalPos; // 0x08(0x04)
	int32_t MedalLv; // 0x0c(0x04)
};

// ScriptStruct Solarland.CharacterSkin
// Size: 0x08 (Inherited: 0x00)
struct FCharacterSkin {
	int32_t SkinId; // 0x00(0x04)
	int32_t SkinOwnerType; // 0x04(0x04)
};

// ScriptStruct Solarland.ShieldInfo
// Size: 0x08 (Inherited: 0x00)
struct FShieldInfo {
	int32_t ShieldID; // 0x00(0x04)
	float CurValue; // 0x04(0x04)
};

// ScriptStruct Solarland.WorldMarkData
// Size: 0x78 (Inherited: 0x0c)
struct FWorldMarkData : FFastArraySerializerItem {
	int32_t WorldMarkGUID; // 0x0c(0x04)
	struct FVector_NetQuantize WorldPos; // 0x10(0x0c)
	char PosInTeam; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector2D ScreenCoordinate; // 0x20(0x08)
	enum class EWorldMarkType Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ItemID; // 0x2c(0x04)
	int64_t ItemInstanceId; // 0x30(0x08)
	int32_t NameLocID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString IconImg; // 0x40(0x10)
	int32_t WeaponLevel; // 0x50(0x04)
	enum class EInteractableType InteractableType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t MarkVoiceEventName; // 0x58(0x04)
	int32_t OuterBoxThisID; // 0x5c(0x04)
	float MarkTimeStamp; // 0x60(0x04)
	float LifeTime; // 0x64(0x04)
	float ExtraLiveTime; // 0x68(0x04)
	struct TWeakObjectPtr<struct AActor> AttachedActor; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Solarland.BattleCharacterData
// Size: 0x60 (Inherited: 0x00)
struct FBattleCharacterData {
	int32_t CharacterId; // 0x00(0x04)
	int32_t SkinId; // 0x04(0x04)
	int32_t CharacterLevel; // 0x08(0x04)
	int32_t TalentID; // 0x0c(0x04)
	int32_t UseTimes; // 0x10(0x04)
	int32_t CardPose; // 0x14(0x04)
	int32_t Cardbackground; // 0x18(0x04)
	int32_t CharacterExp; // 0x1c(0x04)
	int32_t Title; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t Expired; // 0x28(0x08)
	int32_t CombatScore; // 0x30(0x04)
	int32_t BagId; // 0x34(0x04)
	int32_t TailFlameId; // 0x38(0x04)
	int32_t CapsuleActorId; // 0x3c(0x04)
	int32_t DeathBoxId; // 0x40(0x04)
	int32_t CharacterOwnerType; // 0x44(0x04)
	struct TArray<struct FEquipVoiceData> Voice; // 0x48(0x10)
	int32_t KillReport; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Solarland.EquipVoiceData
// Size: 0x18 (Inherited: 0x00)
struct FEquipVoiceData {
	int32_t Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> Ids; // 0x08(0x10)
};

// ScriptStruct Solarland.SolarBattleWeaponData
// Size: 0x08 (Inherited: 0x00)
struct FSolarBattleWeaponData {
	int32_t weaponid; // 0x00(0x04)
	int32_t SkinId; // 0x04(0x04)
};

// ScriptStruct Solarland.ExposeLocationMap
// Size: 0x58 (Inherited: 0x00)
struct FExposeLocationMap {
	struct TMap<struct ASolarPlayerState*, int32_t> InnerMap; // 0x00(0x50)
	struct ASolarPlayerState* Owner; // 0x50(0x08)
};

// ScriptStruct Solarland.SettlementTempData
// Size: 0xd8 (Inherited: 0x00)
struct FSettlementTempData {
	int32_t TotalAccountExp; // 0x00(0x04)
	int32_t AccountLevel; // 0x04(0x04)
	char pad_8[0x50]; // 0x08(0x50)
	int32_t CurCharacterLevel; // 0x58(0x04)
	int32_t TotalCharacterExp; // 0x5c(0x04)
	bool bCharExpFull; // 0x60(0x01)
	bool bHaveRankData; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t RankBeforeScore; // 0x64(0x04)
	int32_t RankAfterScore; // 0x68(0x04)
	int32_t RankSurviveScore; // 0x6c(0x04)
	int32_t RankBeforeSurviveScore; // 0x70(0x04)
	int32_t RankDefeatScore; // 0x74(0x04)
	int32_t RankBeforeDefeatScore; // 0x78(0x04)
	float RankDefeatRatio; // 0x7c(0x04)
	int32_t RankLegend; // 0x80(0x04)
	char RankProtectType; // 0x84(0x01)
	bool IsRankFight; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	int32_t WinninScoreID; // 0x88(0x04)
	int32_t BattlePassID; // 0x8c(0x04)
	int32_t BattlePassAddExp; // 0x90(0x04)
	int32_t BattlePassExp; // 0x94(0x04)
	struct TArray<int32_t> BattlePassTaskID; // 0x98(0x10)
	struct TArray<int32_t> BattlePassTaskWeek; // 0xa8(0x10)
	struct TArray<int32_t> BattlePassTaskAdd; // 0xb8(0x10)
	struct TArray<int32_t> BattlePassTaskVal; // 0xc8(0x10)
};

// ScriptStruct Solarland.KillEnemySnapshot
// Size: 0x18 (Inherited: 0x00)
struct FKillEnemySnapshot {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.EquippedEmotesData
// Size: 0x10 (Inherited: 0x00)
struct FEquippedEmotesData {
	struct TArray<int32_t> EmoteData; // 0x00(0x10)
};

// ScriptStruct Solarland.SettlementCrateReward
// Size: 0x18 (Inherited: 0x00)
struct FSettlementCrateReward {
	int64_t crateID; // 0x00(0x08)
	struct TArray<struct FSettlementReward> Items; // 0x08(0x10)
};

// ScriptStruct Solarland.SettlementReward
// Size: 0x08 (Inherited: 0x00)
struct FSettlementReward {
	int32_t ItemID; // 0x00(0x04)
	int32_t Amount; // 0x04(0x04)
};

// ScriptStruct Solarland.SettlementParam_ExtraRewardInfo
// Size: 0x40 (Inherited: 0x00)
struct FSettlementParam_ExtraRewardInfo {
	int32_t TextID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString LocVariable; // 0x08(0x10)
	struct FString Content; // 0x18(0x10)
	struct FString ItemList; // 0x28(0x10)
	int32_t Order; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.LastBattleInfo
// Size: 0x1c (Inherited: 0x00)
struct FLastBattleInfo {
	float MvpScore; // 0x00(0x04)
	int32_t KillNum; // 0x04(0x04)
	int32_t HitDown; // 0x08(0x04)
	int32_t AssistNum; // 0x0c(0x04)
	int32_t RescueNum; // 0x10(0x04)
	int32_t AliveTime; // 0x14(0x04)
	int32_t CauseDamage; // 0x18(0x04)
};

// ScriptStruct Solarland.ExpRankMedalData
// Size: 0x38 (Inherited: 0x00)
struct FExpRankMedalData {
	struct FString Area; // 0x00(0x10)
	struct FString Country; // 0x10(0x10)
	int32_t Rank; // 0x20(0x04)
	int32_t CharacterId; // 0x24(0x04)
	int32_t CharacterType; // 0x28(0x04)
	int32_t RankScore; // 0x2c(0x04)
	int32_t RankType; // 0x30(0x04)
	int32_t AutoID; // 0x34(0x04)
};

// ScriptStruct Solarland.InWaterActorInfo
// Size: 0x08 (Inherited: 0x00)
struct FInWaterActorInfo {
	bool bIsInWater; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WaterLineHeight; // 0x04(0x04)
};

// ScriptStruct Solarland.SpawnedActorHandle
// Size: 0x04 (Inherited: 0x00)
struct FSpawnedActorHandle {
	uint32_t Handle; // 0x00(0x04)
};

// ScriptStruct Solarland.SolarPointDamageEvent
// Size: 0x110 (Inherited: 0xa8)
struct FSolarPointDamageEvent : FPointDamageEvent {
	bool bBreakShield; // 0xa8(0x01)
	bool bIgnoreShield; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float ActualShieldDamage; // 0xac(0x04)
	bool bBreakArmor; // 0xb0(0x01)
	bool bIgnoreArmor; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float ActualArmorDamage; // 0xb4(0x04)
	enum class ESolarAttributeType SolarAttributeType; // 0xb8(0x01)
	bool bPreFakeInvincible; // 0xb9(0x01)
	enum class EHealthChangeType HealthChangeType; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
	struct ASolarAbility* DamageAbility; // 0xc0(0x08)
	struct USolarAbilityEffect* DamageAbilityEffect; // 0xc8(0x08)
	enum class EDamageResultType ResultType; // 0xd0(0x01)
	bool bJustForShield; // 0xd1(0x01)
	bool bCanDamageTeamate; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	int32_t UseWeaponID; // 0xd4(0x04)
	enum class ESCMDamageType DamageType; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0xdc(0x08)
	char pad_E4[0xc]; // 0xe4(0x0c)
	struct FString HitBoneName; // 0xf0(0x10)
	char bHitVehicleWeakPoint : 1; // 0x100(0x01)
	char bHitHumanoidTargetHead : 1; // 0x100(0x01)
	char pad_100_2 : 6; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct Solarland.ReconnectionParams
// Size: 0x01 (Inherited: 0x00)
struct FReconnectionParams {
	bool bIsCrouched; // 0x00(0x01)
};

// ScriptStruct Solarland.PlayerWeaponMsg
// Size: 0x18 (Inherited: 0x00)
struct FPlayerWeaponMsg {
	enum class EPlayerWeaponMsgType MsgType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MsgDetail; // 0x08(0x10)
};

// ScriptStruct Solarland.ScannedInfo_NetQuantize
// Size: 0x18 (Inherited: 0x00)
struct FScannedInfo_NetQuantize {
	uint32_t UniqueId; // 0x00(0x04)
	char TargetType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	uint32_t VehicleID; // 0x08(0x04)
	struct FVector_NetQuantize TargetLocation; // 0x0c(0x0c)
};

// ScriptStruct Solarland.RestoreAbilityInfo
// Size: 0x20 (Inherited: 0x00)
struct FRestoreAbilityInfo {
	struct FGameplayAbilitySpecHandle Handle; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPredictionKey ActivationPredictionKey; // 0x08(0x18)
};

// ScriptStruct Solarland.BackpackStatisticsInfo
// Size: 0x1c (Inherited: 0x00)
struct FBackpackStatisticsInfo {
	bool IsVertical; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector PlayerStartLocation; // 0x04(0x0c)
	struct FVector PlayerEndLocation; // 0x10(0x0c)
};

// ScriptStruct Solarland.SoundGroupPlayContext
// Size: 0x08 (Inherited: 0x00)
struct FSoundGroupPlayContext {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.SoundGroupPlayContextByCharacter
// Size: 0x20 (Inherited: 0x08)
struct FSoundGroupPlayContextByCharacter : FSoundGroupPlayContext {
	struct TWeakObjectPtr<struct ASolarCharacter> Self; // 0x08(0x08)
	struct TWeakObjectPtr<struct ASolarCharacter> Instigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct ASolarCharacter> LocalCharacter; // 0x18(0x08)
};

// ScriptStruct Solarland.HitTraceInfo
// Size: 0x28 (Inherited: 0x00)
struct FHitTraceInfo {
	struct TWeakObjectPtr<struct AActor> CausingActor; // 0x00(0x08)
	struct FVector_NetQuantizeNormal TraceDirection; // 0x08(0x0c)
	struct FVector DamageCauserLocation; // 0x14(0x0c)
	float Damage; // 0x20(0x04)
	enum class EWeaponType WeaponType; // 0x24(0x01)
	bool bIsVehicleHitTrace; // 0x25(0x01)
	bool IsBump; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct Solarland.HitSoundReplicationData
// Size: 0x80 (Inherited: 0x00)
struct FHitSoundReplicationData {
	uint16_t HitCount; // 0x00(0x02)
	char DirtyDataMask; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FHitSoundData HitData_Default; // 0x04(0x1c)
	struct FHitSoundData HitData_Weapon; // 0x20(0x1c)
	struct FHitSoundData HitData_Melee; // 0x3c(0x1c)
	struct FHitSoundData HitData_Skill; // 0x58(0x1c)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct Solarland.HitSoundData
// Size: 0x1c (Inherited: 0x00)
struct FHitSoundData {
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x00(0x08)
	enum class EHitSoundSourceType SourceType; // 0x08(0x01)
	enum class EHitSoundTargetType TargetType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName SubTableKey; // 0x0c(0x08)
	struct FName SubTableKey2; // 0x14(0x08)
};

// ScriptStruct Solarland.OrnamentMontageInfo
// Size: 0x18 (Inherited: 0x00)
struct FOrnamentMontageInfo {
	struct UAnimMontage* ActiveMontage; // 0x00(0x08)
	struct FGameplayTag OrnamentTag; // 0x08(0x08)
	char bForcePlayBit : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Solarland.ShieldSoundData
// Size: 0x50 (Inherited: 0x00)
struct FShieldSoundData {
	struct TMap<enum class EShieldSoundEventType, enum class ECharacterSoundOpt> SoundData; // 0x00(0x50)
};

// ScriptStruct Solarland.SingleCruiseBaseParam
// Size: 0x20 (Inherited: 0x00)
struct FSingleCruiseBaseParam {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Solarland.VehicleEjectParams
// Size: 0x10 (Inherited: 0x00)
struct FVehicleEjectParams {
	float EjectTime; // 0x00(0x04)
	float EjectDistance; // 0x04(0x04)
	float EjectBreakableTime; // 0x08(0x04)
	float EjectCameraFadeOutTime; // 0x0c(0x04)
};

// ScriptStruct Solarland.BattleUpgradeEffectContainer
// Size: 0x120 (Inherited: 0x108)
struct FBattleUpgradeEffectContainer : FFastArraySerializer {
	struct TArray<struct FBattleUpgradeEffect> DataArray; // 0x108(0x10)
	struct ASolarCharacter* Owner; // 0x118(0x08)
};

// ScriptStruct Solarland.BattleUpgradeEffect
// Size: 0x28 (Inherited: 0x0c)
struct FBattleUpgradeEffect : FFastArraySerializerItem {
	int32_t Level; // 0x0c(0x04)
	int32_t EffectID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> EffectCandidate; // 0x18(0x10)
};

// ScriptStruct Solarland.BoardedVehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FBoardedVehicleInfo {
	struct ASolarVehiclePawn* BoardedVehicle; // 0x00(0x08)
	int32_t BoardedSeatIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.CriticalHitInfo
// Size: 0x68 (Inherited: 0x00)
struct FCriticalHitInfo {
	struct ASolarPlayerState* Instigator; // 0x00(0x08)
	float Damage; // 0x08(0x04)
	float DamageTime; // 0x0c(0x04)
	int32_t LastDamageWeaponID; // 0x10(0x04)
	char pad_14[0x54]; // 0x14(0x54)
};

// ScriptStruct Solarland.RadarDataSpecContainer
// Size: 0x120 (Inherited: 0x108)
struct FRadarDataSpecContainer : FFastArraySerializer {
	struct TArray<struct FRadarDataSpec> Radars; // 0x108(0x10)
	struct USolarRadarComponent* Owner; // 0x118(0x08)
};

// ScriptStruct Solarland.RadarDataSpec
// Size: 0x28 (Inherited: 0x0c)
struct FRadarDataSpec : FFastArraySerializerItem {
	struct FGameplayAbilitySpecHandle RadarHandle; // 0x0c(0x04)
	char RadarType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D RadarRange; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct APawn* RadarSpawner; // 0x20(0x08)
};

// ScriptStruct Solarland.CharacterOperationEvent
// Size: 0x10 (Inherited: 0x00)
struct FCharacterOperationEvent {
	enum class ECharacterOperation Name; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* Target; // 0x08(0x08)
};

// ScriptStruct Solarland.BackpackJetPrepelInfo
// Size: 0x0c (Inherited: 0x00)
struct FBackpackJetPrepelInfo {
	bool IsPropelling; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PropellingCounter; // 0x04(0x04)
	enum class EFXJetType JetType; // 0x08(0x01)
	bool bCheckGround; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Solarland.WeaponIgnoreScopeLists
// Size: 0x20 (Inherited: 0x00)
struct FWeaponIgnoreScopeLists {
	struct TArray<enum class EWeaponPartType> Weapon1IgnoreList; // 0x00(0x10)
	struct TArray<enum class EWeaponPartType> Weapon2IgnoreList; // 0x10(0x10)
};

// ScriptStruct Solarland.CharacterTagListenerForOrnamentComp
// Size: 0x58 (Inherited: 0x00)
struct FCharacterTagListenerForOrnamentComp {
	struct TSet<struct FOrnamentCompAndVisibilityConfigPair> OrnamentCompPairs; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Solarland.OrnamentCompAndVisibilityConfigPair
// Size: 0x10 (Inherited: 0x00)
struct FOrnamentCompAndVisibilityConfigPair {
	struct TWeakObjectPtr<struct USceneComponent> OrnamentComp; // 0x00(0x08)
	struct UOrnamentComponentVisibilityConfig* VisibilityConfig; // 0x08(0x08)
};

// ScriptStruct Solarland.CustomParamConfig
// Size: 0x20 (Inherited: 0x00)
struct FCustomParamConfig {
	int32_t DisplayName; // 0x00(0x04)
	int32_t Desc; // 0x04(0x04)
	enum class ECustomParamType ParamType; // 0x08(0x01)
	enum class ECustomParamValueType ValueType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t DefaultIndex; // 0x0c(0x04)
	struct TArray<float> ValueRange; // 0x10(0x10)
};

// ScriptStruct Solarland.UserSetting
// Size: 0x20 (Inherited: 0x00)
struct FUserSetting {
	int32_t Name; // 0x00(0x04)
	int32_t Category; // 0x04(0x04)
	enum class ECustomParamType ParamType; // 0x08(0x01)
	enum class ECustomParamValueType ValueType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t Index; // 0x0c(0x04)
	struct TArray<float> ValueRange; // 0x10(0x10)
};

// ScriptStruct Solarland.CategoryConfig
// Size: 0x40 (Inherited: 0x00)
struct FCategoryConfig {
	int32_t Category; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCustomParamConfig> Configs; // 0x08(0x10)
	struct TSoftClassPtr<UObject> StyleClass; // 0x18(0x28)
};

// ScriptStruct Solarland.FixedAntiCheatData
// Size: 0x1c (Inherited: 0x00)
struct FFixedAntiCheatData {
	int32_t FOV; // 0x00(0x04)
	enum class EAspectRatioAxisConstraint AxisConstraint; // 0x04(0x01)
	bool bAssistAim; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector HeadBoneScale; // 0x08(0x0c)
	bool CurrWeaponRecoil; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float LatestTimeDiscrepancyError; // 0x18(0x04)
};

// ScriptStruct Solarland.ReplayActivityHeatFragment
// Size: 0x30 (Inherited: 0x00)
struct FReplayActivityHeatFragment {
	int32_t FragmentId; // 0x00(0x04)
	enum class EPlayerActivityHeatType ActivityHeatType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TotalScore; // 0x08(0x04)
	float BeginTime; // 0x0c(0x04)
	float EndTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FReplayActivityKillDetail> ActivityKillDetails; // 0x18(0x10)
	int32_t KillNum; // 0x28(0x04)
	float ActivityHotTime; // 0x2c(0x04)
};

// ScriptStruct Solarland.ReplayActivityKillDetail
// Size: 0x0c (Inherited: 0x00)
struct FReplayActivityKillDetail {
	float KillTime; // 0x00(0x04)
	enum class EReplayActivityHeatKillUseType KillUseType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t KillToolID; // 0x08(0x04)
};

// ScriptStruct Solarland.SolarGameModeInfo
// Size: 0x28 (Inherited: 0x00)
struct FSolarGameModeInfo {
	int32_t GameModeId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString MapName; // 0x08(0x10)
	int32_t NumMode; // 0x18(0x04)
	int32_t PlayerCount; // 0x1c(0x04)
	int32_t TeamCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.SolarPlayerReport
// Size: 0x498 (Inherited: 0x00)
struct FSolarPlayerReport {
	struct FString PlayerId; // 0x00(0x10)
	uint64_t UserId; // 0x10(0x08)
	struct FString NickName; // 0x18(0x10)
	int32_t CharacterId; // 0x28(0x04)
	int32_t SkinId; // 0x2c(0x04)
	int32_t PlayerRank; // 0x30(0x04)
	int32_t Gender; // 0x34(0x04)
	int32_t AvatarID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AvatarUrl; // 0x40(0x10)
	int32_t AccountFlag; // 0x50(0x04)
	int32_t TeamRank; // 0x54(0x04)
	int32_t TeamID; // 0x58(0x04)
	int32_t PosInTeam; // 0x5c(0x04)
	bool bHasHangUpBehavior; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t KillNum; // 0x64(0x04)
	int32_t KillNumToRealPlayer; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<int32_t> VehicleKillNum_ID; // 0x70(0x10)
	struct TArray<int32_t> VehicleKillNum_Value; // 0x80(0x10)
	int32_t KillTeammate; // 0x90(0x04)
	int32_t KillInAirNum; // 0x94(0x04)
	int32_t KillDownInAirNum; // 0x98(0x04)
	int32_t WeaponSkillKillNum; // 0x9c(0x04)
	int32_t P_KillStreak; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<int32_t> KillStreakHistory; // 0xa8(0x10)
	int32_t RevengeNum; // 0xb8(0x04)
	int32_t DeathNum; // 0xbc(0x04)
	int32_t KillDownNum; // 0xc0(0x04)
	int32_t KillDownTeammate; // 0xc4(0x04)
	float AccurateDamage; // 0xc8(0x04)
	int32_t AccurateDameageTimes; // 0xcc(0x04)
	int32_t AccurateKillTimes; // 0xd0(0x04)
	int32_t AccurateKillDownTimes; // 0xd4(0x04)
	float CauseDamage; // 0xd8(0x04)
	float CauseDamageToRealPlayer; // 0xdc(0x04)
	float ReceivedDamage; // 0xe0(0x04)
	int32_t AssistNum; // 0xe4(0x04)
	float CollectEnergy; // 0xe8(0x04)
	int32_t BuyESElectricNum; // 0xec(0x04)
	int32_t ResurrectionCapsule; // 0xf0(0x04)
	int32_t TeamFriendRevive; // 0xf4(0x04)
	float ReceivedHeal; // 0xf8(0x04)
	float HealSelf; // 0xfc(0x04)
	float TeammateHeal; // 0x100(0x04)
	int32_t OpenAirBoxNum; // 0x104(0x04)
	float LifeTime; // 0x108(0x04)
	int32_t SaveCount; // 0x10c(0x04)
	int32_t FlyCount; // 0x110(0x04)
	int32_t VehicleTime; // 0x114(0x04)
	int32_t CurCharacterLevel; // 0x118(0x04)
	int32_t TotalCharacterExp; // 0x11c(0x04)
	bool bCharExpFull; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<int32_t> CharacterExpReason; // 0x128(0x10)
	int32_t CharacterExp; // 0x138(0x04)
	int32_t AccountExp; // 0x13c(0x04)
	int32_t TotalAccountExp; // 0x140(0x04)
	int32_t AccountLevel; // 0x144(0x04)
	bool bHaveRankData; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t RankID; // 0x14c(0x04)
	int32_t RankBeforeScore; // 0x150(0x04)
	int32_t RankSurviveScore; // 0x154(0x04)
	int32_t RankBeforeSurviveScore; // 0x158(0x04)
	int32_t RankDefeatScore; // 0x15c(0x04)
	int32_t RankBeforeDefeatScore; // 0x160(0x04)
	float RankDefeatRatio; // 0x164(0x04)
	int32_t RankAfterScore; // 0x168(0x04)
	int32_t RankLegend; // 0x16c(0x04)
	char RankProtectType; // 0x170(0x01)
	bool IsRankFight; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	int32_t WinninScoreID; // 0x174(0x04)
	int32_t Zomborg; // 0x178(0x04)
	float MvpScore; // 0x17c(0x04)
	float KDA; // 0x180(0x04)
	bool IsAce; // 0x184(0x01)
	bool IsVictory; // 0x185(0x01)
	bool IsValid; // 0x186(0x01)
	char pad_187[0x1]; // 0x187(0x01)
	struct TArray<int32_t> SettlementItems; // 0x188(0x10)
	struct TArray<struct FString> StringExtraRewards; // 0x198(0x10)
	struct TArray<int32_t> SendGiftGold; // 0x1a8(0x10)
	struct TArray<int32_t> SendGiftDiamond; // 0x1b8(0x10)
	struct TArray<struct FString> SendGiftPlayerName; // 0x1c8(0x10)
	struct TArray<struct FString> SendGiftPlayerID; // 0x1d8(0x10)
	struct TArray<int32_t> WeaponExpIds; // 0x1e8(0x10)
	struct TArray<int32_t> WeaponLevel; // 0x1f8(0x10)
	struct TArray<int32_t> CurWeaponExp; // 0x208(0x10)
	struct TArray<int32_t> WeaponExps; // 0x218(0x10)
	struct TArray<int32_t> WeaponKillNum_ID; // 0x228(0x10)
	struct TArray<float> WeaponKillNum_Value; // 0x238(0x10)
	struct TArray<int32_t> WeaponDamage_ID; // 0x248(0x10)
	struct TArray<float> WeaponDamage_Value; // 0x258(0x10)
	struct TArray<int32_t> VehicleDamage_ID; // 0x268(0x10)
	struct TArray<float> VehicleDamage_Value; // 0x278(0x10)
	struct TArray<int32_t> VehicleDistance_ID; // 0x288(0x10)
	struct TArray<int32_t> VehicleDistance_Value; // 0x298(0x10)
	int32_t GainCombatScore; // 0x2a8(0x04)
	int32_t GameModeSubID; // 0x2ac(0x04)
	struct FString KillerPlayerId; // 0x2b0(0x10)
	uint64_t KillerUserId; // 0x2c0(0x08)
	struct FString KillerNickName; // 0x2c8(0x10)
	struct FString KillerOS; // 0x2d8(0x10)
	struct FString OS; // 0x2e8(0x10)
	struct TArray<int32_t> CharacterKillNumIDs; // 0x2f8(0x10)
	struct TArray<int32_t> CharacterKillNumValues; // 0x308(0x10)
	int32_t WarmType; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<int32_t> AchievementIDs; // 0x320(0x10)
	struct TArray<int32_t> AchievementValues; // 0x330(0x10)
	int32_t LikeValue; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<int32_t> StrategyConditionIDs; // 0x348(0x10)
	int32_t SettlementDisplayStrategyID; // 0x358(0x04)
	int32_t LastUseVehicleID; // 0x35c(0x04)
	struct TArray<struct FString> SavedTeammateIDArr; // 0x360(0x10)
	struct TArray<int32_t> SavedTeammateBonusArr; // 0x370(0x10)
	struct TArray<char> SettlementRewards; // 0x380(0x10)
	struct TArray<char> CrateRewardData; // 0x390(0x10)
	struct TArray<char> CollectionItems; // 0x3a0(0x10)
	struct FString ClanId; // 0x3b0(0x10)
	int32_t KnockoutPoints; // 0x3c0(0x04)
	bool bIsKnockoutPointsValid; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	int32_t BattlePassAddExp; // 0x3c8(0x04)
	int32_t BattlePassExp; // 0x3cc(0x04)
	int32_t BattlePassID; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<int32_t> BattlePassTaskWeek; // 0x3d8(0x10)
	struct TArray<int32_t> BattlePassTaskID; // 0x3e8(0x10)
	struct TArray<int32_t> BattlePassTaskAdd; // 0x3f8(0x10)
	struct TArray<int32_t> BattlePassTaskVal; // 0x408(0x10)
	struct TArray<int32_t> UsedCharacterIDs; // 0x418(0x10)
	int32_t CardPose; // 0x428(0x04)
	int32_t Cardbackground; // 0x42c(0x04)
	int32_t SameClanCnt; // 0x430(0x04)
	int32_t CombatScore; // 0x434(0x04)
	bool IsCheater; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct TArray<char> SettlePunishTypes; // 0x440(0x10)
	int32_t MedicineUseCount; // 0x450(0x04)
	int32_t DriveHoverCarInWaterDistance; // 0x454(0x04)
	int32_t SwimDistance; // 0x458(0x04)
	int32_t DanceCount; // 0x45c(0x04)
	int32_t PosionWalkDistance; // 0x460(0x04)
	int32_t ShieldExpGainCount; // 0x464(0x04)
	int32_t UpgradeShieldCount; // 0x468(0x04)
	int32_t UpgradeRedShieldCount; // 0x46c(0x04)
	int32_t JumpBoardUseCount; // 0x470(0x04)
	int32_t TerminaterCount; // 0x474(0x04)
	int32_t CarSkillCount; // 0x478(0x04)
	int32_t UltimateSkillUseCount; // 0x47c(0x04)
	int32_t TacticalSkillUseCount; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct TArray<struct FString> ReCombatLimitPlayer; // 0x488(0x10)
};

// ScriptStruct Solarland.SolarDamageText
// Size: 0x28 (Inherited: 0x00)
struct FSolarDamageText {
	bool bHitHead; // 0x00(0x01)
	bool bHitShield; // 0x01(0x01)
	bool bBrokenShield; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t Damage; // 0x04(0x04)
	struct TWeakObjectPtr<struct AActor> Target; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> Source; // 0x10(0x08)
	struct FVector HitLocation; // 0x18(0x0c)
	uint32_t TargetUniqueID; // 0x24(0x04)
};

// ScriptStruct Solarland.ScreenshotSetting
// Size: 0x40 (Inherited: 0x00)
struct FScreenshotSetting {
	bool EnableOnCurrentReportGameCheating; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxCountInRound; // 0x04(0x04)
	struct TArray<bool> ScreenshotMoment; // 0x08(0x10)
	int32_t ScreenshotInterval; // 0x18(0x04)
	int32_t ScreenshotWidth; // 0x1c(0x04)
	int32_t ScreenshotQuality; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ImageSaveType; // 0x28(0x10)
	enum class EShotModeFlag ScreenshotMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ImageMaxSize; // 0x3c(0x04)
};

// ScriptStruct Solarland.SolarInputModeDataBase
// Size: 0x10 (Inherited: 0x00)
struct FSolarInputModeDataBase {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Solarland.LocTextParam
// Size: 0x18 (Inherited: 0x00)
struct FLocTextParam {
	struct FString ParamName; // 0x00(0x10)
	int32_t LocTextID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SShotImageInfo
// Size: 0x78 (Inherited: 0x00)
struct FSShotImageInfo {
	struct FString UserId; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	int64_t ScreenshotTime; // 0x30(0x08)
	int32_t ImageSize; // 0x38(0x04)
	int32_t ImageWidth; // 0x3c(0x04)
	int32_t ImageHeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ImageType; // 0x48(0x10)
	struct FString ImageBuffer; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// ScriptStruct Solarland.GameplayHitInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameplayHitInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Solarland.AbilityCooldownTimer
// Size: 0x0c (Inherited: 0x00)
struct FAbilityCooldownTimer {
	struct FGameplayTag AbilityCooldownTag; // 0x00(0x08)
	float AbilityAppliedTime; // 0x08(0x04)
};

// ScriptStruct Solarland.SolarIgnoreCollisionTypeData
// Size: 0x10 (Inherited: 0x00)
struct FSolarIgnoreCollisionTypeData {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct Solarland.NoticeData
// Size: 0xa0 (Inherited: 0x00)
struct FNoticeData {
	int32_t NoticeId; // 0x00(0x04)
	enum class ECustomNoticeType NoticeType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ConfigShowTime; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	struct FString NoticeText; // 0x10(0x10)
	enum class ECustomNoticeColor NoticeColor; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString NoticeClassPath; // 0x28(0x10)
	struct FString NoticeIconPath; // 0x38(0x10)
	struct TWeakObjectPtr<struct UUINoticeBase> NoticeWidget; // 0x48(0x08)
	struct TMap<struct FString, struct FString> Param; // 0x50(0x50)
};

// ScriptStruct Solarland.SCMReplicateHostData
// Size: 0x48 (Inherited: 0x00)
struct FSCMReplicateHostData {
	enum class ESCMHostType HostType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString HostID; // 0x08(0x10)
	struct TArray<struct FSCMRepData> RepDataArray; // 0x18(0x10)
	struct TArray<struct FSCMRepDataArray> RepArrDataArray; // 0x28(0x10)
	struct TArray<struct FSCMRepDataMap> RepMapDataArray; // 0x38(0x10)
};

// ScriptStruct Solarland.SCMRepDataMap
// Size: 0x78 (Inherited: 0x00)
struct FSCMRepDataMap {
	struct FString Name; // 0x00(0x10)
	enum class ESCMDataType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<enum class ESCMDataChangeType> ChangeTypeArray; // 0x18(0x10)
	struct TArray<struct FString> KeyArray; // 0x28(0x10)
	struct TArray<int32_t> VInt; // 0x38(0x10)
	struct TArray<float> VFloat; // 0x48(0x10)
	struct TArray<struct FVector_NetQuantize100> VVector; // 0x58(0x10)
	struct TArray<struct FString> VString; // 0x68(0x10)
};

// ScriptStruct Solarland.SCMRepDataArray
// Size: 0x78 (Inherited: 0x00)
struct FSCMRepDataArray {
	struct FString Name; // 0x00(0x10)
	enum class ESCMDataType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<enum class ESCMDataChangeType> ChangeTypeArray; // 0x18(0x10)
	struct TArray<uint32_t> ChangeIndexArray; // 0x28(0x10)
	struct TArray<int32_t> VInt; // 0x38(0x10)
	struct TArray<float> VFloat; // 0x48(0x10)
	struct TArray<struct FVector_NetQuantize100> VVector; // 0x58(0x10)
	struct TArray<struct FString> VString; // 0x68(0x10)
};

// ScriptStruct Solarland.SCMRepData
// Size: 0x38 (Inherited: 0x00)
struct FSCMRepData {
	struct FString Name; // 0x00(0x10)
	enum class ESCMDataType Type; // 0x10(0x01)
	enum class ESCMDataChangeType DataChangeType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t VInt; // 0x14(0x04)
	float VFloat; // 0x18(0x04)
	struct FVector_NetQuantize100 VVector; // 0x1c(0x0c)
	struct FString VString; // 0x28(0x10)
};

// ScriptStruct Solarland.BattlePassInfo
// Size: 0x28 (Inherited: 0x00)
struct FBattlePassInfo {
	struct TArray<struct FTaskBriefData> tasks; // 0x00(0x10)
	int64_t BattlePassID; // 0x10(0x08)
	int64_t currWeek; // 0x18(0x08)
	int64_t maxWeek; // 0x20(0x08)
};

// ScriptStruct Solarland.TaskBriefData
// Size: 0x40 (Inherited: 0x00)
struct FTaskBriefData {
	int64_t TaskID; // 0x00(0x08)
	int64_t BaseValue; // 0x08(0x08)
	int64_t CurValue; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	int64_t status; // 0x20(0x08)
	enum class ETaskPage page; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	int64_t week; // 0x30(0x08)
	bool IsMarked; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Solarland.TaskUpdateInfo
// Size: 0x50 (Inherited: 0x00)
struct FTaskUpdateInfo {
	bool delAllTask; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int64_t> delIDs; // 0x08(0x10)
	struct FBattlePassInfo Task; // 0x18(0x28)
	struct FString PlayerId; // 0x40(0x10)
};

// ScriptStruct Solarland.WeaponPartsData
// Size: 0x14 (Inherited: 0x00)
struct FWeaponPartsData {
	int32_t ScopeId; // 0x00(0x04)
	int32_t GripID; // 0x04(0x04)
	int32_t GunStockID; // 0x08(0x04)
	int32_t MuzzleID; // 0x0c(0x04)
	int32_t ClipID; // 0x10(0x04)
};

// ScriptStruct Solarland.BattlegroundGlobalData
// Size: 0x40 (Inherited: 0x00)
struct FBattlegroundGlobalData {
	int32_t MaxBattleTime; // 0x00(0x04)
	char WaitingLandCountDownTime; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BattlePrepareTime; // 0x08(0x04)
	float RebirthWaitTime; // 0x0c(0x04)
	float RebirthInvincibleTime; // 0x10(0x04)
	float DeployConfirmTime; // 0x14(0x04)
	int32_t BatttleEndLeaveTime; // 0x18(0x04)
	float VictoryScore; // 0x1c(0x04)
	float BonusScorePerSec; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FPersonalScoreData> PersonalScoreArray; // 0x28(0x10)
	int32_t AiLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.PersonalScoreData
// Size: 0x08 (Inherited: 0x00)
struct FPersonalScoreData {
	enum class EPersonalScoreType ScoreType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Score; // 0x04(0x04)
};

// ScriptStruct Solarland.BattlegroundScoreData
// Size: 0x0c (Inherited: 0x00)
struct FBattlegroundScoreData {
	enum class EFactionType Faction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Score; // 0x04(0x04)
	enum class EMatchResult MatchResult; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Solarland.BattlegroundSubModeData
// Size: 0x1c (Inherited: 0x00)
struct FBattlegroundSubModeData {
	int32_t SubModeID; // 0x00(0x04)
	int32_t MapID; // 0x04(0x04)
	struct FVector2D MapCenter; // 0x08(0x08)
	float MapFOV; // 0x10(0x04)
	struct FVector2D SafeAreaCenter; // 0x14(0x08)
};

// ScriptStruct Solarland.BasicUserSettings
// Size: 0x11 (Inherited: 0x00)
struct FBasicUserSettings {
	bool bOpenUniversalMark; // 0x00(0x01)
	enum class EBasicSettingBool OpenOffScreen; // 0x01(0x01)
	bool bOpenQuickChat; // 0x02(0x01)
	bool bAutoOverturn; // 0x03(0x01)
	bool bPowerAnim; // 0x04(0x01)
	bool bOpenRecruitRecommend; // 0x05(0x01)
	enum class ESolarGyroscopeChooseType curGyroscpeChooseLevel; // 0x06(0x01)
	bool bHorizontalGyroscopeInvert; // 0x07(0x01)
	bool bVerticalGyroscopeInvert; // 0x08(0x01)
	enum class ESolarDamageTextDisplayModeType CurrentDamageTextDisplayMode; // 0x09(0x01)
	enum class EBasicSettingBool OpenHighlightMoment; // 0x0a(0x01)
	enum class EBasicSettingBool OpenOutline; // 0x0b(0x01)
	bool bShowInputKeyTips; // 0x0c(0x01)
	bool bEnableGamepadInput; // 0x0d(0x01)
	enum class EBasicSettingBool OpenScreenDamageEffect; // 0x0e(0x01)
	bool bOpenMiniMapRotate; // 0x0f(0x01)
	bool bOpenDirectionBlood3D; // 0x10(0x01)
};

// ScriptStruct Solarland.CharacterVoiceUserSettings
// Size: 0x01 (Inherited: 0x00)
struct FCharacterVoiceUserSettings {
	enum class ESolarSupportLanguages CurVoiceLanguage; // 0x00(0x01)
};

// ScriptStruct Solarland.ChatOperatorUserSettings
// Size: 0x02 (Inherited: 0x00)
struct FChatOperatorUserSettings {
	enum class ESolarChatOperatorType Speaker; // 0x00(0x01)
	enum class ESolarChatOperatorType Mic; // 0x01(0x01)
};

// ScriptStruct Solarland.VehicleControlUserSettings
// Size: 0x05 (Inherited: 0x00)
struct FVehicleControlUserSettings {
	enum class EWheeledVehicleDriveUserType WheeledVehicleDriveType; // 0x00(0x01)
	bool bCanAdjustInAir; // 0x01(0x01)
	bool bCanAutoSteering; // 0x02(0x01)
	enum class EWheeledVehicleDriveUserType LastWheeledVehicleDriveType; // 0x03(0x01)
	bool bCanVehicleCameraShake; // 0x04(0x01)
};

// ScriptStruct Solarland.GraphicsUserSettings
// Size: 0x60 (Inherited: 0x00)
struct FGraphicsUserSettings {
	enum class ESolarFrameRateLevel FpsLevel; // 0x00(0x01)
	enum class ESolarContentScaleFactorLevel ContentScaleFactorLevel; // 0x01(0x01)
	enum class ESolarColorTheme ColorThemeType; // 0x02(0x01)
	bool MSAAIsEnabled; // 0x03(0x01)
	struct FFloatValue AdaptationUIValue; // 0x04(0x04)
	bool EnableDynamicShadow; // 0x08(0x01)
	enum class ESolarGraphicsQualityLevel SelectQualityLevel; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FFloatValue CustomizedCharacterCameraFOV; // 0x0c(0x04)
	int32_t SavedVersion; // 0x10(0x04)
	char pad_14[0x4c]; // 0x14(0x4c)
};

// ScriptStruct Solarland.FloatValue
// Size: 0x04 (Inherited: 0x00)
struct FFloatValue {
	float Value; // 0x00(0x04)
};

// ScriptStruct Solarland.LanguageUserSettings
// Size: 0x03 (Inherited: 0x00)
struct FLanguageUserSettings {
	enum class ESolarSupportLanguages CurLanguage; // 0x00(0x01)
	enum class ESolarSupportLanguages CurCharacterVoiceLanguage; // 0x01(0x01)
	bool HasLoadedChinese; // 0x02(0x01)
};

// ScriptStruct Solarland.PersonalityUserSettings
// Size: 0x88 (Inherited: 0x00)
struct FPersonalityUserSettings {
	struct TArray<struct FColorPreset> TeammatePerspectiveColors; // 0x00(0x10)
	struct TArray<struct FColorPreset> OpponentPerspectiveColors; // 0x10(0x10)
	struct TArray<struct FParticlePreset> BloodMistColors; // 0x20(0x10)
	struct FColorValue TeammatePerspectiveColor; // 0x30(0x10)
	struct FColorValue OpponentPerspectiveColor; // 0x40(0x10)
	struct TSoftObjectPtr<UParticleSystem> BloodMistParticle; // 0x50(0x28)
	int32_t TeammateColor; // 0x78(0x04)
	int32_t OpponentColor; // 0x7c(0x04)
	int32_t BloodMistColor; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Solarland.ColorValue
// Size: 0x10 (Inherited: 0x00)
struct FColorValue {
	struct FLinearColor Value; // 0x00(0x10)
};

// ScriptStruct Solarland.ParticlePreset
// Size: 0x48 (Inherited: 0x00)
struct FParticlePreset {
	int32_t ColorID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UParticleSystem> Particle; // 0x08(0x28)
	struct FColorValue UIColor; // 0x30(0x10)
	int32_t ColorNameLocalText; // 0x40(0x04)
	bool bNotShowDomestic; // 0x44(0x01)
	bool bDefault; // 0x45(0x01)
	bool bDefaultDomestic; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
};

// ScriptStruct Solarland.ColorPreset
// Size: 0x2c (Inherited: 0x00)
struct FColorPreset {
	int32_t ColorID; // 0x00(0x04)
	struct FColorValue ModelColor; // 0x04(0x10)
	struct FColorValue UIColor; // 0x14(0x10)
	int32_t ColorNameLocalText; // 0x24(0x04)
	bool bNotShowDomestic; // 0x28(0x01)
	bool bDefault; // 0x29(0x01)
	bool bDefaultDomestic; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
};

// ScriptStruct Solarland.PickupUserSettings
// Size: 0x18 (Inherited: 0x00)
struct FPickupUserSettings {
	bool bAutoPickup; // 0x00(0x01)
	bool bStopAutoPickupWhenClose; // 0x01(0x01)
	bool bUseTileView; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct FPickupItemData> PickupItemList; // 0x08(0x10)
};

// ScriptStruct Solarland.PickupItemData
// Size: 0x08 (Inherited: 0x00)
struct FPickupItemData {
	int32_t ItemID; // 0x00(0x04)
	int32_t ItemNum; // 0x04(0x04)
};

// ScriptStruct Solarland.SensitivityUserSettings
// Size: 0x94 (Inherited: 0x00)
struct FSensitivityUserSettings {
	enum class ESolarTouchAccMode Sensitivity_AccMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFloatValue Sensitivity_CurveScale; // 0x04(0x04)
	struct FFloatValue Sensitivity_Free; // 0x08(0x04)
	struct FFloatValue Sensitivity_SecondarySkills; // 0x0c(0x04)
	struct FFloatValue Sensitivity_SuperSkills; // 0x10(0x04)
	struct FCameraSensitivityData Sensitivity_NoShoot; // 0x14(0x20)
	struct FCameraSensitivityData Sensitivity_Shoot; // 0x34(0x20)
	struct FGyroscopeSensitivityData GyroscopeData; // 0x54(0x20)
	struct FFloatValue Sensitivity_VehicleDriver; // 0x74(0x04)
	struct FFloatValue Sensitivity_VehicleFire; // 0x78(0x04)
	struct FVehicleCameraSensitivityData Sensitivity_Vehicle_NoShoot; // 0x7c(0x0c)
	struct FVehicleCameraSensitivityData Sensitivity_Vehicle_Shoot; // 0x88(0x0c)
};

// ScriptStruct Solarland.VehicleCameraSensitivityData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleCameraSensitivityData {
	struct FFloatValue Sensitivity_Lens_Two; // 0x00(0x04)
	struct FFloatValue Sensitivity_Lens_Four; // 0x04(0x04)
	struct FFloatValue Sensitivity_Lens_Eight; // 0x08(0x04)
};

// ScriptStruct Solarland.GyroscopeSensitivityData
// Size: 0x20 (Inherited: 0x00)
struct FGyroscopeSensitivityData {
	struct FFloatValue GyroscopeSensitivity_Basic; // 0x00(0x04)
	struct FFloatValue GyroscopeSensitivity_Shoulder; // 0x04(0x04)
	struct FFloatValue GyroscopeSensitivity_RedPoint; // 0x08(0x04)
	struct FFloatValue GyroscopeSensitivity_Lens_Two; // 0x0c(0x04)
	struct FFloatValue GyroscopeSensitivity_Lens_Three; // 0x10(0x04)
	struct FFloatValue GyroscopeSensitivity_Lens_Four; // 0x14(0x04)
	struct FFloatValue GyroscopeSensitivity_Lens_Six; // 0x18(0x04)
	struct FFloatValue GyroscopeSensitivity_Lens_Eight; // 0x1c(0x04)
};

// ScriptStruct Solarland.CameraSensitivityData
// Size: 0x20 (Inherited: 0x00)
struct FCameraSensitivityData {
	struct FFloatValue Sensitivity_Basic; // 0x00(0x04)
	struct FFloatValue Sensitivity_Shoulder; // 0x04(0x04)
	struct FFloatValue Sensitivity_RedPoint; // 0x08(0x04)
	struct FFloatValue Sensitivity_Lens_Two; // 0x0c(0x04)
	struct FFloatValue Sensitivity_Lens_Three; // 0x10(0x04)
	struct FFloatValue Sensitivity_Lens_Four; // 0x14(0x04)
	struct FFloatValue Sensitivity_Lens_Six; // 0x18(0x04)
	struct FFloatValue Sensitivity_Lens_Eight; // 0x1c(0x04)
};

// ScriptStruct Solarland.ShakeUserSettings
// Size: 0x01 (Inherited: 0x00)
struct FShakeUserSettings {
	enum class ESolarShakeMainType ShakeMainStatus; // 0x00(0x01)
};

// ScriptStruct Solarland.SoundUserSettings
// Size: 0x60 (Inherited: 0x00)
struct FSoundUserSettings {
	struct FConditionValue Sound_Global; // 0x00(0x08)
	struct FConditionValue Sound_Action; // 0x08(0x08)
	struct FConditionValue Sound_BackGround; // 0x10(0x08)
	struct FConditionValue Sound_Character; // 0x18(0x08)
	int32_t MicroPhoneVolume; // 0x20(0x04)
	int32_t LoudSpeakerVolume; // 0x24(0x04)
	enum class ESolarSoundQuality Sound_Quality; // 0x28(0x01)
	enum class ESolarAudioMode AudioMode; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t MicLevel; // 0x2c(0x04)
	int32_t SpeakerLevel; // 0x30(0x04)
	int32_t ChooseMicIndex; // 0x34(0x04)
	int32_t ChooseSpeakerIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString MicDeviceID; // 0x40(0x10)
	struct FString SpeakerDeviceID; // 0x50(0x10)
};

// ScriptStruct Solarland.ConditionValue
// Size: 0x08 (Inherited: 0x00)
struct FConditionValue {
	bool bOpen; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurValue; // 0x04(0x04)
};

// ScriptStruct Solarland.WeaponUserSettings
// Size: 0x20 (Inherited: 0x00)
struct FWeaponUserSettings {
	bool bAimAssist_Global; // 0x00(0x01)
	bool bAutoFire_Global; // 0x01(0x01)
	bool bVehicleWeaponAutoFire_Global; // 0x02(0x01)
	bool bEnableRecoilRecovery_Global; // 0x03(0x01)
	bool bAutoScope_Global; // 0x04(0x01)
	bool bAutoScope_SpecialButtonGlobal; // 0x05(0x01)
	bool bAutoScopeRifle_Global; // 0x06(0x01)
	bool bAutoScopeSubmachinegun_Global; // 0x07(0x01)
	bool bAutoScopeShotgunSingle_Global; // 0x08(0x01)
	bool bAutoScopeShotgunAuto_Global; // 0x09(0x01)
	bool bAutoScopeSniperSingle_Global; // 0x0a(0x01)
	bool bAutoScopeSniperAuto_Global; // 0x0b(0x01)
	bool bAutoScopeSpecial_Global; // 0x0c(0x01)
	bool bSniperSingleShootOnPressed_Global; // 0x0d(0x01)
	bool bShotgunSingleShootOnPressed_Global; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct UCurveFloat* HitEffectDistanceToScaleCurve; // 0x10(0x08)
	enum class ESolarWeaponDoScopeMode DoScopeMode_Global; // 0x18(0x01)
	bool bOpenVehicleWeaponCrosshair; // 0x19(0x01)
	bool bVehicleAutoScope; // 0x1a(0x01)
	bool bVehicleAutoScope_SpecialButton; // 0x1b(0x01)
	bool bCanScopeButtonRotateView; // 0x1c(0x01)
	bool bShowQuickChangeScopeButton; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Solarland.GraphicsUserSettingsPC
// Size: 0xa8 (Inherited: 0x00)
struct FGraphicsUserSettingsPC {
	enum class ESolarResolution Resolution; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDataTable* ResolutionDataTable; // 0x08(0x08)
	enum class ESolarMonitor Monitor; // 0x10(0x01)
	enum class ESolarFPS Fps; // 0x11(0x01)
	enum class ESolarGraphicsMode GraphicsMode; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct FFloatValue Brightness; // 0x14(0x04)
	enum class ESolarGraphicQuality ROV; // 0x18(0x01)
	enum class ESolarNvdiaReflexLevel NvdiaReflex; // 0x19(0x01)
	enum class ESolarRayTracingLevel RayTracing; // 0x1a(0x01)
	bool VSync; // 0x1b(0x01)
	enum class ESolarMotionBlurLevel MotionBlur; // 0x1c(0x01)
	enum class ESolarAntiAliasingLevel AntiAliasing; // 0x1d(0x01)
	enum class ESolarAnisotropicFilterLevel AnisotropicFiltering; // 0x1e(0x01)
	enum class ESolarGraphicQuality TextureQuality; // 0x1f(0x01)
	enum class ESolarGraphicQuality TextureModel; // 0x20(0x01)
	enum class ESolarGraphicQuality DetailQuality; // 0x21(0x01)
	enum class ESolarGraphicQuality VisualEffects; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FFloatValue SunlightShadowRange; // 0x24(0x04)
	enum class ESolarSunlightShadowDetailLevel SunlightShadowDetails; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UDataTable* ShadowDetailLevelDataTable; // 0x30(0x08)
	enum class ESolarMaxCSMResolutionLevel MaxCSMResolutionLevel; // 0x38(0x01)
	enum class ESolarPointLightShadowDetailsLevel PointLightShadowDetails; // 0x39(0x01)
	enum class ESolarAmbientOcclusionQualityLevel AmbientOcclusionQuality; // 0x3a(0x01)
	enum class ESolarSSGIQualityLevel SSGIQuality; // 0x3b(0x01)
	enum class ESolarReflectionQualityLevel Reflection; // 0x3c(0x01)
	bool VolumetricLighting; // 0x3d(0x01)
	bool DynamicVolumetricShadows; // 0x3e(0x01)
	enum class ESolarPostProcessingEffectsLevel PostProcessingEffects; // 0x3f(0x01)
	enum class ESolarRenderingResolutionScaleLevel RenderingResolutionScale; // 0x40(0x01)
	enum class ESolarGraphicQuality GrassDensity; // 0x41(0x01)
	enum class ESolarColorBlindMode ColorBlindMode; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float ScreenPercentageScale; // 0x44(0x04)
	char pad_48[0x60]; // 0x48(0x60)
};

// ScriptStruct Solarland.GamepadAdvancedSettings
// Size: 0x3c (Inherited: 0x00)
struct FGamepadAdvancedSettings {
	struct FRangeData ScalerRange; // 0x00(0x08)
	struct FRangeData SpeedUpScalerRange; // 0x08(0x08)
	struct FRangeData SpeedUpDelayRange; // 0x10(0x08)
	struct FRangeData SpeedUpStartRange; // 0x18(0x08)
	struct FFloatValue ScalerX; // 0x20(0x04)
	struct FFloatValue ScalerY; // 0x24(0x04)
	struct FFloatValue SpeedUpScalerX; // 0x28(0x04)
	struct FFloatValue SpeedUpScalerY; // 0x2c(0x04)
	struct FFloatValue SpeedUpDelayTime; // 0x30(0x04)
	struct FFloatValue SpeedUpStartTime; // 0x34(0x04)
	bool bEnableAdsSpeedUp; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct Solarland.RangeData
// Size: 0x08 (Inherited: 0x00)
struct FRangeData {
	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
};

// ScriptStruct Solarland.GamepadSettings
// Size: 0xe0 (Inherited: 0x00)
struct FGamepadSettings {
	struct TArray<struct FSolarAimModeWithLocalText> AimModeMap; // 0x00(0x10)
	struct TArray<struct FSolarSprintModeWithLocalText> SprintModeMap; // 0x10(0x10)
	struct TArray<struct FFloatWithLocalText> ViewSensitivityMap; // 0x20(0x10)
	struct TArray<struct FObjectWithLocalText> ResponseCurveMap; // 0x30(0x10)
	struct TArray<struct FFloatWithLocalText> LeftStickDeadzoneMap; // 0x40(0x10)
	struct TArray<struct FFloatWithLocalText> RightStickDeadzoneMap; // 0x50(0x10)
	struct TArray<struct FFloatWithLocalText> TriggerDeadzoneMap; // 0x60(0x10)
	struct TArray<struct FFloatWithLocalText> VibrationLevelMap; // 0x70(0x10)
	struct FRangeData CursorSpeedRange; // 0x80(0x08)
	struct TArray<struct FSolarWheelModeTypeWithLocalText> WheelModeTypeMap; // 0x88(0x10)
	int32_t AimModeID; // 0x98(0x04)
	int32_t SprintModeID; // 0x9c(0x04)
	struct FConditionValue MainHorizontalSensitivity; // 0xa0(0x08)
	struct FConditionValue MainVerticalSensitivity; // 0xa8(0x08)
	int32_t RightStickSensitivityID; // 0xb0(0x04)
	int32_t RightStickResponseCurveID; // 0xb4(0x04)
	bool bInvertedLook; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t LeftStickDeadzoneID; // 0xbc(0x04)
	int32_t RightStickDeadzoneID; // 0xc0(0x04)
	int32_t TriggerDeadzoneID; // 0xc4(0x04)
	struct FFloatValue CursorSpeed; // 0xc8(0x04)
	int32_t VibrationLevelID; // 0xcc(0x04)
	bool bEnableAimAssist; // 0xd0(0x01)
	bool bEnableClassicWheeledVehicleControlMode; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	int32_t MedicWheelModeID; // 0xd4(0x04)
	int32_t EmojiWheelModeID; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Solarland.SolarWheelModeTypeWithLocalText
// Size: 0x08 (Inherited: 0x00)
struct FSolarWheelModeTypeWithLocalText {
	int32_t LocalText; // 0x00(0x04)
	enum class ESolarWheelModeType WheelPadMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.FloatWithLocalText
// Size: 0x08 (Inherited: 0x00)
struct FFloatWithLocalText {
	int32_t LocalText; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Solarland.ObjectWithLocalText
// Size: 0x20 (Inherited: 0x00)
struct FObjectWithLocalText {
	int32_t LocalText; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSoftObjectPath ObjectPath; // 0x08(0x18)
};

// ScriptStruct Solarland.SolarSprintModeWithLocalText
// Size: 0x08 (Inherited: 0x00)
struct FSolarSprintModeWithLocalText {
	int32_t LocalText; // 0x00(0x04)
	enum class ESolarSprintModeType SprintMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.SolarAimModeWithLocalText
// Size: 0x08 (Inherited: 0x00)
struct FSolarAimModeWithLocalText {
	int32_t LocalText; // 0x00(0x04)
	enum class ESolarWeaponDoScopeMode AimMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.MouseAndKeyboardSettings
// Size: 0x0c (Inherited: 0x00)
struct FMouseAndKeyboardSettings {
	struct FFloatValue MainSensitivity; // 0x00(0x04)
	bool bMouseInvert; // 0x04(0x01)
	enum class ESolarWeaponDoScopeMode AimMode; // 0x05(0x01)
	enum class ESolarSprintModeType SprintMode; // 0x06(0x01)
	enum class ESolarWheelModeType MedicWheelMode; // 0x07(0x01)
	enum class ESolarWheelModeType EmojiWheelMode; // 0x08(0x01)
	enum class ESolarITemHUDStyle CurrentItemHUDStyle; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Solarland.DownloadFileInfo
// Size: 0x30 (Inherited: 0x00)
struct FDownloadFileInfo {
	struct FString URL; // 0x00(0x10)
	struct FString Filename; // 0x10(0x10)
	struct FString HashStr; // 0x20(0x10)
};

// ScriptStruct Solarland.LocalFileInfo
// Size: 0x20 (Inherited: 0x00)
struct FLocalFileInfo {
	struct FString Dir; // 0x00(0x10)
	struct FString Filename; // 0x10(0x10)
};

// ScriptStruct Solarland.ScreenEffectGroup
// Size: 0x60 (Inherited: 0x00)
struct FScreenEffectGroup {
	struct TMap<int32_t, struct FScreenEffectInstance> InstantScreenEffects; // 0x00(0x50)
	struct TArray<struct FScreenEffectInstance> DurationScreenEffects; // 0x50(0x10)
};

// ScriptStruct Solarland.ScreenEffectInstance
// Size: 0x98 (Inherited: 0x00)
struct FScreenEffectInstance {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct Solarland.BuffEffectActorElemPool
// Size: 0x10 (Inherited: 0x00)
struct FBuffEffectActorElemPool {
	struct TArray<struct UBuffEffectActorElem*> PoolInstances; // 0x00(0x10)
};

// ScriptStruct Solarland.BuffParticleEffectInstance
// Size: 0x30 (Inherited: 0x00)
struct FBuffParticleEffectInstance {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct UBuffEffectActorElem*> AttachElemList; // 0x20(0x10)
};

// ScriptStruct Solarland.BuffParticleEffectGroup
// Size: 0xb0 (Inherited: 0x00)
struct FBuffParticleEffectGroup {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct FBuffEffectActorElemList> InstantActorListMap; // 0x08(0x50)
	char pad_58[0x8]; // 0x58(0x08)
	struct TMap<struct FName, struct FBuffEffectActorElemList> DurationActorListMap; // 0x60(0x50)
};

// ScriptStruct Solarland.BuffEffectActorElemList
// Size: 0x10 (Inherited: 0x00)
struct FBuffEffectActorElemList {
	struct TArray<struct UBuffEffectActorElem*> ElemList; // 0x00(0x10)
};

// ScriptStruct Solarland.InputKeyMappingEntry
// Size: 0x40 (Inherited: 0x00)
struct FInputKeyMappingEntry {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ActionID; // 0x08(0x10)
	struct FString ActionName; // 0x18(0x10)
	enum class ESolarTablesEnum_InputActionType ActionType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Scale; // 0x2c(0x04)
	struct TArray<struct FInputKeyMappingPair> KeyMappingPairList; // 0x30(0x10)
};

// ScriptStruct Solarland.InputKeyMappingPair
// Size: 0x28 (Inherited: 0x00)
struct FInputKeyMappingPair {
	struct FString KeyStr1; // 0x00(0x10)
	struct FString KeyStr2; // 0x10(0x10)
	enum class ESolarTablesEnum_InputTriggerType TriggerType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Solarland.InputDeviceProxy
// Size: 0x0c (Inherited: 0x00)
struct FInputDeviceProxy {
	enum class ECommonInputType InputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName GamepadType; // 0x04(0x08)
};

// ScriptStruct Solarland.ItemCountsList
// Size: 0x50 (Inherited: 0x00)
struct FItemCountsList {
	struct TMap<enum class EPickupItemType, int32_t> Type2IntMap; // 0x00(0x50)
};

// ScriptStruct Solarland.InteractionTriggerInfo
// Size: 0x38 (Inherited: 0x00)
struct FInteractionTriggerInfo {
	struct FGameplayTag GameplayTag; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Solarland.HUDNoticeParams
// Size: 0x50 (Inherited: 0x00)
struct FHUDNoticeParams {
	struct TMap<struct FString, struct FString> Params; // 0x00(0x50)
};

// ScriptStruct Solarland.CountDownInfo
// Size: 0x48 (Inherited: 0x00)
struct FCountDownInfo {
	int32_t TextID; // 0x00(0x04)
	float Time; // 0x04(0x04)
	float RemainingTime; // 0x08(0x04)
	bool bShowBtn; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t PassiveTextID; // 0x10(0x04)
	struct FGameplayTag GameplayTag; // 0x14(0x08)
	char pad_1C[0x24]; // 0x1c(0x24)
	int32_t ContributorCharacterId; // 0x40(0x04)
	enum class ECountDownState State; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Solarland.KillInfo
// Size: 0x98 (Inherited: 0x00)
struct FKillInfo {
	struct FString KillerPlayerId; // 0x00(0x10)
	int32_t KillerSkinID; // 0x10(0x04)
	int32_t KillerTeamID; // 0x14(0x04)
	struct FString KillerName; // 0x18(0x10)
	int32_t KillerFlag; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString VictimPlayerID; // 0x30(0x10)
	int32_t VictimSkinID; // 0x40(0x04)
	int32_t VictimTeamID; // 0x44(0x04)
	struct FString VictimName; // 0x48(0x10)
	int32_t VictimFlag; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString KillIcon; // 0x60(0x10)
	struct FString KillLeaderID; // 0x70(0x10)
	enum class EKillParamsCompressInfo KillParamsCompressInfo; // 0x80(0x02)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t KillNum; // 0x84(0x04)
	int32_t WeaponSkinID; // 0x88(0x04)
	char KillerVipType; // 0x8c(0x01)
	char VictimVipType; // 0x8d(0x01)
	enum class ECommonInputType KillerInputType; // 0x8e(0x01)
	enum class ECommonInputType VictimInputType; // 0x8f(0x01)
	bool bDown; // 0x90(0x01)
	bool bPlayComboKillSoundEffect; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32_t KillReportID; // 0x94(0x04)
};

// ScriptStruct Solarland.PlayAnimationParams
// Size: 0x40 (Inherited: 0x00)
struct FPlayAnimationParams {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Solarland.BattleUpgradeEffectCategoryColorSet
// Size: 0x60 (Inherited: 0x00)
struct FBattleUpgradeEffectCategoryColorSet {
	struct FLinearColor BannerCategoryTextColor; // 0x00(0x10)
	struct FLinearColor BannerIconColor; // 0x10(0x10)
	struct FLinearColor BannerBorderColor; // 0x20(0x10)
	struct FLinearColor BannerBackgroundColor; // 0x30(0x10)
	struct FLinearColor BadgeIconColor; // 0x40(0x10)
	struct FLinearColor BadgeBackgroundColor; // 0x50(0x10)
};

// ScriptStruct Solarland.ElectricShopItem
// Size: 0x18 (Inherited: 0x00)
struct FElectricShopItem {
	int32_t ItemID; // 0x00(0x04)
	float Prize; // 0x04(0x04)
	int32_t Num; // 0x08(0x04)
	int32_t ProductID; // 0x0c(0x04)
	float CoolDown; // 0x10(0x04)
	int32_t Generation; // 0x14(0x04)
};

// ScriptStruct Solarland.ActionWheelConfig
// Size: 0xe0 (Inherited: 0x08)
struct FActionWheelConfig : FTableRowBase {
	int32_t groupid; // 0x08(0x04)
	struct FWrappedLocalTextID Title; // 0x0c(0x04)
	int32_t StyleID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString WheelDes; // 0x18(0x10)
	float DisplayDelay; // 0x28(0x04)
	float DisplayDelay_Gamepad; // 0x2c(0x04)
	float PointMoveSensitivity; // 0x30(0x04)
	float PointMoveSensitivity_Gamepad; // 0x34(0x04)
	struct FVector2D Offset; // 0x38(0x08)
	struct UActionWheelWidgetFunctionBase* WheelFunctionBP; // 0x40(0x08)
	struct FString InputActionName; // 0x48(0x10)
	enum class EActionWheelOperateType OperateType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FActionWheelStyle ActionWheelStyle; // 0x5c(0x70)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FActionWheelCommand> ActionWheelCommands; // 0xd0(0x10)
};

// ScriptStruct Solarland.ActionWheelCommand
// Size: 0x38 (Inherited: 0x00)
struct FActionWheelCommand {
	enum class EActionWheelCommandType CommandType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ConfigKey; // 0x08(0x10)
	struct FWrappedLocalTextID DisplayName; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSoftObjectPath Icon; // 0x20(0x18)
};

// ScriptStruct Solarland.WrappedLocalTextID
// Size: 0x04 (Inherited: 0x00)
struct FWrappedLocalTextID {
	int32_t LocalTextId; // 0x00(0x04)
};

// ScriptStruct Solarland.ActionWheelStyle
// Size: 0x70 (Inherited: 0x00)
struct FActionWheelStyle {
	struct FLinearColor BlackgroundColor; // 0x00(0x10)
	struct FLinearColor InnerCircleColor; // 0x10(0x10)
	struct FLinearColor BlackgroundSelectedColor; // 0x20(0x10)
	struct FLinearColor InnerCircleSelectedColor; // 0x30(0x10)
	struct FLinearColor WheelGradientColor; // 0x40(0x10)
	struct FLinearColor WheelSelectedGradientColor; // 0x50(0x10)
	struct FVector2D IconSize; // 0x60(0x08)
	float IconOffset; // 0x68(0x04)
	float SelectedIconOffset; // 0x6c(0x04)
};

// ScriptStruct Solarland.ActorEffectControllerPool
// Size: 0x10 (Inherited: 0x00)
struct FActorEffectControllerPool {
	struct TArray<struct UActorEffectController*> ControllerInstances; // 0x00(0x10)
};

// ScriptStruct Solarland.ActorEffectPool
// Size: 0x10 (Inherited: 0x00)
struct FActorEffectPool {
	struct TArray<struct UActorEffect*> EffectInstances; // 0x00(0x10)
};

// ScriptStruct Solarland.MaterialFilter
// Size: 0x48 (Inherited: 0x00)
struct FMaterialFilter {
	bool bIgnoreChangeability; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UMeshComponent*> IncludingMeshes; // 0x08(0x10)
	struct TArray<int32_t> IncludingMaterialIndices; // 0x18(0x10)
	struct TArray<struct UMeshComponent*> ExcludingMeshes; // 0x28(0x10)
	struct TArray<int32_t> ExcludingMaterialIndices; // 0x38(0x10)
};

// ScriptStruct Solarland.MaterialChangeHandle
// Size: 0x08 (Inherited: 0x00)
struct FMaterialChangeHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.MultiplePassMaterialChange
// Size: 0x68 (Inherited: 0x00)
struct FMultiplePassMaterialChange {
	struct TSoftObjectPtr<UMaterialInterface> SourceMaterial; // 0x00(0x28)
	struct FAddMultiplePassMaterialChangeParams Params; // 0x28(0x40)
};

// ScriptStruct Solarland.NormalMaterialChange
// Size: 0x50 (Inherited: 0x00)
struct FNormalMaterialChange {
	struct TSoftObjectPtr<UMaterialInterface> SourceMaterial; // 0x00(0x28)
	struct FAddMaterialChangeParams Params; // 0x28(0x28)
};

// ScriptStruct Solarland.AddMaterialChangeParams
// Size: 0x28 (Inherited: 0x00)
struct FAddMaterialChangeParams {
	char pad_0[0x8]; // 0x00(0x08)
	struct FGameplayTag PriorityTag; // 0x08(0x08)
	enum class EMaterialChangeConflictResolveStrategy ResolveStrategy; // 0x10(0x01)
	enum class EMaterialChangeTextureOverrideMode TextureOverrideMode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FName> TextureParameterNamesToOverride; // 0x18(0x10)
};

// ScriptStruct Solarland.MaterialChangePriorityGroup
// Size: 0x10 (Inherited: 0x00)
struct FMaterialChangePriorityGroup {
	struct TArray<struct FGameplayTag> Tags; // 0x00(0x10)
};

// ScriptStruct Solarland.ForceChangeMaterialInfos
// Size: 0x70 (Inherited: 0x00)
struct FForceChangeMaterialInfos {
	struct FGameplayTagContainer MaterialPriorityTags; // 0x00(0x20)
	struct TSet<struct FSoftObjectPath> MaterialPaths; // 0x20(0x50)
};

// ScriptStruct Solarland.MaterialParameterFilter
// Size: 0x20 (Inherited: 0x00)
struct FMaterialParameterFilter {
	struct TArray<struct FName> IncludingNames; // 0x00(0x10)
	struct TArray<struct FName> ExcludingNames; // 0x10(0x10)
};

// ScriptStruct Solarland.ActorMaterialInfo
// Size: 0x170 (Inherited: 0x00)
struct FActorMaterialInfo {
	char pad_0[0x20]; // 0x00(0x20)
	struct TMap<struct FMaterialChangeHandle, struct UMaterialInterface*> SourceMaterials; // 0x20(0x50)
	struct TMap<struct FMaterialChangeHandle, struct FAddMaterialChangeParams> NormalParams; // 0x70(0x50)
	struct TMap<struct FMaterialChangeHandle, struct FAddMultiplePassMaterialChangeParams> MultiplePassParams; // 0xc0(0x50)
	struct TMap<struct FMaterialChangeHandle, struct FLimitedMeshContainer> LimitedMeshes; // 0x110(0x50)
	struct TArray<struct FMeshMaterialInfo> MeshMaterials; // 0x160(0x10)
};

// ScriptStruct Solarland.MeshMaterialInfo
// Size: 0x50 (Inherited: 0x00)
struct FMeshMaterialInfo {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FMaterialChange> NormalMaterialChanges; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
	struct TArray<struct FMaterialChange> MultiplePassMaterialChanges; // 0x40(0x10)
};

// ScriptStruct Solarland.MaterialChange
// Size: 0x38 (Inherited: 0x00)
struct FMaterialChange {
	char pad_0[0x28]; // 0x00(0x28)
	struct TArray<struct UMaterialInterface*> Materials; // 0x28(0x10)
};

// ScriptStruct Solarland.LimitedMeshContainer
// Size: 0x10 (Inherited: 0x00)
struct FLimitedMeshContainer {
	struct TArray<struct UMeshComponent*> Meshes; // 0x00(0x10)
};

// ScriptStruct Solarland.ActorParticleEffectSpawnHandle
// Size: 0x08 (Inherited: 0x00)
struct FActorParticleEffectSpawnHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.ActorParticleEffectSpawnInfo
// Size: 0x70 (Inherited: 0x00)
struct FActorParticleEffectSpawnInfo {
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x00(0x28)
	enum class EActorParticleEffectAttachOption AttachOption; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName AttachPointName; // 0x2c(0x08)
	enum class EAttachLocation LocationType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector Location; // 0x38(0x0c)
	struct FRotator Rotation; // 0x44(0x0c)
	struct FVector Scale; // 0x50(0x0c)
	bool bAutoActivate; // 0x5c(0x01)
	bool bAutoDestroy; // 0x5d(0x01)
	bool bEnablePooling; // 0x5e(0x01)
	bool bAbsoluteRotation; // 0x5f(0x01)
	struct TArray<struct FName> ComponentTags; // 0x60(0x10)
};

// ScriptStruct Solarland.WrappedLevelToIdMap
// Size: 0x50 (Inherited: 0x00)
struct FWrappedLevelToIdMap {
	struct TMap<int32_t, int32_t> LevelToId; // 0x00(0x50)
};

// ScriptStruct Solarland.AirDropAllOutcomeConfigArray
// Size: 0x10 (Inherited: 0x00)
struct FAirDropAllOutcomeConfigArray {
	struct TArray<struct FAirDropAllOutcomeConfig> OutcomesOverTime; // 0x00(0x10)
};

// ScriptStruct Solarland.AirDropAllOutcomeConfig
// Size: 0x68 (Inherited: 0x00)
struct FAirDropAllOutcomeConfig {
	float GameSeconds; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAirDropShieldOutcomeConfig ShieldOutcome; // 0x08(0x18)
	struct FAirDropWeaponPartOutcomeConfig WeaponPartOutcome; // 0x20(0x20)
	struct FAirDropSupplyOutcomeConfig SupplyOutcome; // 0x40(0x18)
	struct TArray<struct FWrappedIdCount> GeneralOutcome; // 0x58(0x10)
};

// ScriptStruct Solarland.WrappedIdCount
// Size: 0x08 (Inherited: 0x00)
struct FWrappedIdCount {
	int32_t ID; // 0x00(0x04)
	int32_t count; // 0x04(0x04)
};

// ScriptStruct Solarland.AirDropSupplyOutcomeConfig
// Size: 0x18 (Inherited: 0x00)
struct FAirDropSupplyOutcomeConfig {
	int32_t count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWrappedIdCount> CompensationItems; // 0x08(0x10)
};

// ScriptStruct Solarland.AirDropWeaponPartOutcomeConfig
// Size: 0x20 (Inherited: 0x00)
struct FAirDropWeaponPartOutcomeConfig {
	int32_t count; // 0x00(0x04)
	int32_t MinLevel; // 0x04(0x04)
	int32_t ScopeMinLevel; // 0x08(0x04)
	int32_t MaxLevel; // 0x0c(0x04)
	struct TArray<struct FWrappedIdCount> CompensationOutcomes; // 0x10(0x10)
};

// ScriptStruct Solarland.AirDropShieldOutcomeConfig
// Size: 0x18 (Inherited: 0x00)
struct FAirDropShieldOutcomeConfig {
	int32_t MinLevel; // 0x00(0x04)
	int32_t MaxLevel; // 0x04(0x04)
	struct TArray<struct FWrappedIdCount> CompensationOutcomes; // 0x08(0x10)
};

// ScriptStruct Solarland.AirDropSkillDatas
// Size: 0x10 (Inherited: 0x00)
struct FAirDropSkillDatas {
	struct TArray<struct FAirDropSkillData> OutcomeSetting; // 0x00(0x10)
};

// ScriptStruct Solarland.AirDropSkillData
// Size: 0x08 (Inherited: 0x00)
struct FAirDropSkillData {
	float GameSeconds; // 0x00(0x04)
	int32_t OutcomeID; // 0x04(0x04)
};

// ScriptStruct Solarland.MapAirlineData
// Size: 0x20 (Inherited: 0x00)
struct FMapAirlineData {
	int32_t MapID; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Speed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FAirlineData> AirlineDataList; // 0x10(0x10)
};

// ScriptStruct Solarland.AirlineData
// Size: 0x28 (Inherited: 0x00)
struct FAirlineData {
	float AirlineHeight; // 0x00(0x04)
	float AirlineSpeed; // 0x04(0x04)
	struct FVector2D StartPoint; // 0x08(0x08)
	struct FVector2D EndPoint; // 0x10(0x08)
	struct FVector2D RealStartPoint; // 0x18(0x08)
	struct FVector2D RealEndPoint; // 0x20(0x08)
};

// ScriptStruct Solarland.FireChargeData
// Size: 0xc0 (Inherited: 0x00)
struct FFireChargeData {
	bool IfContinuousCharge; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ChargeTime; // 0x04(0x04)
	struct UCurveFloat* ChargeDamageRadiusCurve; // 0x08(0x08)
	struct UCurveFloat* ChargeDamageMagnificationCurve; // 0x10(0x08)
	bool IfPenetrable; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAmmoConfig* OverrideAmmo; // 0x20(0x08)
	int32_t OverrideAmmoID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ChargeSoundName; // 0x30(0x10)
	struct FString ChargeSoundEnemyName; // 0x40(0x10)
	struct FString FireSoundName; // 0x50(0x10)
	struct FString FireSoundEnemyName; // 0x60(0x10)
	bool IfBurst; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UCurveFloat* BulletBurstCountCurve; // 0x78(0x08)
	bool IfCostToChargeScale; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t FireCostFullShot; // 0x84(0x04)
	bool IfForceFullShotCost; // 0x88(0x01)
	bool bNeedPlayCameraShake; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct UCurveFloat* AmmoSpeedScaleCurve; // 0x90(0x08)
	struct UCurveFloat* AmmoEffectXScaleCurve; // 0x98(0x08)
	struct UCurveFloat* AmmoEffectYZScaleCurve; // 0xa0(0x08)
	struct UCurveFloat* OverloadCurve; // 0xa8(0x08)
	float ChargeAnimationRate; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UCurveFloat* DeflectionAngleCurve; // 0xb8(0x08)
};

// ScriptStruct Solarland.TracerBulletData
// Size: 0x40 (Inherited: 0x00)
struct FTracerBulletData {
	float DeflectionAnglePerSec; // 0x00(0x04)
	float MaximumDetectionAngle; // 0x04(0x04)
	float HomingRange; // 0x08(0x04)
	bool bTraceTargetOnly; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString TracingTargetWarningSound; // 0x10(0x10)
	struct FString TracingTargetWarningRTPC; // 0x20(0x10)
	struct FString TracingAuthorPromptSound; // 0x30(0x10)
};

// ScriptStruct Solarland.AmmonRecoilScope
// Size: 0xb8 (Inherited: 0x00)
struct FAmmonRecoilScope {
	bool EnableScopeVibration; // 0x00(0x01)
	bool EnableCrossHairVibration; // 0x01(0x01)
	bool EnableScopeRoll; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float ScopeVMaxDistanceOffSet; // 0x04(0x04)
	float ScopeVVibrationDuration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ScopeVSingleOffSetCurve; // 0x10(0x08)
	struct UCurveFloat* ScopeVContinuousOffSetCurve; // 0x18(0x08)
	float ScopeVContinuousFallingDuration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* ScopeVContinuousFallingCurve; // 0x28(0x08)
	int32_t ScopeVContinuousFallingPointIndex; // 0x30(0x04)
	float ScopeHMaxDistanceOffSet; // 0x34(0x04)
	float ScopeHVibrationDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* ScopeHSingleOffSetCurve; // 0x40(0x08)
	struct UCurveFloat* ScopeHContinuousOffSetCurve; // 0x48(0x08)
	struct UCurveFloat* ScopeHOffSetProbabilityCurve; // 0x50(0x08)
	struct FAmmonRecoilCrossHair CrossHairScaleSettings; // 0x58(0x24)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FAmmonRecoilScopeRoll ScopeRollSettings; // 0x80(0x38)
};

// ScriptStruct Solarland.AmmonRecoilStruct
// Size: 0x28 (Inherited: 0x00)
struct FAmmonRecoilStruct {
	float CostTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* RecoilRangeCurve; // 0x08(0x08)
	int32_t APointCurveKeyIndex; // 0x10(0x04)
	float APointMin; // 0x14(0x04)
	float APointMax; // 0x18(0x04)
	int32_t BPointCurveKeyIndex; // 0x1c(0x04)
	float BPointMin; // 0x20(0x04)
	float BPointMax; // 0x24(0x04)
};

// ScriptStruct Solarland.AmmonRecoilScopeRoll
// Size: 0x38 (Inherited: 0x28)
struct FAmmonRecoilScopeRoll : FAmmonRecoilStruct {
	struct UCurveFloat* RollProbabilityCurve; // 0x28(0x08)
	struct UCurveFloat* ContinuousFireWeightCurve; // 0x30(0x08)
};

// ScriptStruct Solarland.AmmonRecoilCrossHair
// Size: 0x24 (Inherited: 0x00)
struct FAmmonRecoilCrossHair {
	float VMaxDistanceOffSetScale; // 0x00(0x04)
	float VVibrationDurationScale; // 0x04(0x04)
	float VSingleOffSetScale; // 0x08(0x04)
	float VContinuousOffSetScale; // 0x0c(0x04)
	float HMaxDistanceOffSetScale; // 0x10(0x04)
	float HVibrationDurationScale; // 0x14(0x04)
	float HSingleOffSetScale; // 0x18(0x04)
	float HContinuousOffSetScale; // 0x1c(0x04)
	float HOffSetProbabilityScale; // 0x20(0x04)
};

// ScriptStruct Solarland.AmmonRecoilRollStruct
// Size: 0x40 (Inherited: 0x28)
struct FAmmonRecoilRollStruct : FAmmonRecoilStruct {
	struct UCurveFloat* RollProbabilityCurve; // 0x28(0x08)
	float ADSRollCOP; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* ContinuousFireWeightCurve; // 0x38(0x08)
};

// ScriptStruct Solarland.AmmonVerticalRecoilStruct
// Size: 0x30 (Inherited: 0x28)
struct FAmmonVerticalRecoilStruct : FAmmonRecoilStruct {
	struct UCurveFloat* ContinuousFireWeightCurve; // 0x28(0x08)
};

// ScriptStruct Solarland.AmmonHorizontalRecoilStruct
// Size: 0x30 (Inherited: 0x28)
struct FAmmonHorizontalRecoilStruct : FAmmonRecoilStruct {
	struct UCurveVector* ContinuousFireInfoCurve; // 0x28(0x08)
};

// ScriptStruct Solarland.FootEffect
// Size: 0x40 (Inherited: 0x00)
struct FFootEffect {
	enum class EFootEffectType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UParticleSystem* PSTemplate; // 0x08(0x08)
	struct TSoftObjectPtr<UParticleSystem> PSTemplateSoft; // 0x10(0x28)
	struct FName SocketName; // 0x38(0x08)
};

// ScriptStruct Solarland.AttachedMeshInfo
// Size: 0x40 (Inherited: 0x00)
struct FAttachedMeshInfo {
	struct UStaticMesh* MeshResource; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform TransformOffset; // 0x10(0x30)
};

// ScriptStruct Solarland.AttributeSubSetting
// Size: 0x0c (Inherited: 0x00)
struct FAttributeSubSetting {
	bool bUsingAttributeSub; // 0x00(0x01)
	enum class EAttributeSubBehavior Behavior; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t AttributeSubID; // 0x04(0x04)
	float Value; // 0x08(0x04)
};

// ScriptStruct Solarland.ControlPointData
// Size: 0x14 (Inherited: 0x00)
struct FControlPointData {
	float OccupiedAddScorePerSec; // 0x00(0x04)
	char MinProgress; // 0x04(0x01)
	char MaxProgress; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OccupyingProgressPerSec; // 0x08(0x04)
	float ReOccupyingProgressPerSec; // 0x0c(0x04)
	float RegainTime; // 0x10(0x04)
};

// ScriptStruct Solarland.BattlegroundMapElementData
// Size: 0x0c (Inherited: 0x00)
struct FBattlegroundMapElementData {
	int32_t SubModeID; // 0x00(0x04)
	enum class EBattlegroundMapElementType Type; // 0x04(0x01)
	enum class EFactionType DefaultOwnerFaction; // 0x05(0x01)
	enum class EDeploymentType DeploymentType; // 0x06(0x01)
	enum class EBattlegroundPlayerStartRegion PlayerStartRegion; // 0x07(0x01)
	float EnemyCheckDistance; // 0x08(0x04)
};

// ScriptStruct Solarland.BattlegroundWeaponData
// Size: 0x18 (Inherited: 0x00)
struct FBattlegroundWeaponData {
	int32_t weaponid; // 0x00(0x04)
	struct FWeaponPartsData WeaponPartsData; // 0x04(0x14)
};

// ScriptStruct Solarland.BattlePassLevelInfo
// Size: 0x18 (Inherited: 0x00)
struct FBattlePassLevelInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.BattlePassLevelItem
// Size: 0x0c (Inherited: 0x00)
struct FBattlePassLevelItem {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Solarland.PromptElemInfo
// Size: 0x34 (Inherited: 0x00)
struct FPromptElemInfo {
	enum class EBattlePromptType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D ArrowPosition; // 0x04(0x08)
	struct FVector2D IconPosition; // 0x0c(0x08)
	int32_t ArrowColorFactor; // 0x14(0x04)
	int32_t ArrowLengthFactor; // 0x18(0x04)
	int32_t IconFactor; // 0x1c(0x04)
	float TransparencyFactor; // 0x20(0x04)
	float Distance; // 0x24(0x04)
	int32_t Angle; // 0x28(0x04)
	bool bBlocked; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t UVIdx; // 0x30(0x04)
};

// ScriptStruct Solarland.BattleRoyalTimeLineDTRow
// Size: 0x18 (Inherited: 0x08)
struct FBattleRoyalTimeLineDTRow : FTableRowBase {
	float StartTime; // 0x08(0x04)
	enum class EBattleRoyalTimeLineEnum OperationType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Parameter; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.BattleUpgradeEffectCategoryConfig
// Size: 0x64 (Inherited: 0x00)
struct FBattleUpgradeEffectCategoryConfig {
	int32_t TitleLocalTextID; // 0x00(0x04)
	struct FBattleUpgradeEffectCategoryColorSet ColorSet; // 0x04(0x60)
};

// ScriptStruct Solarland.BattleUpgradeEffectConfig
// Size: 0x90 (Inherited: 0x08)
struct FBattleUpgradeEffectConfig : FTableRowBase {
	enum class ESolarTablesEnum_BattleUpgradeEffectType Type; // 0x08(0x01)
	enum class EBattleUpgradeEffectCategory Category; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TSoftClassPtr<UObject> EffectClass; // 0x10(0x28)
	struct TArray<struct FBattleUpgradeEffectConfigParam> Parameters; // 0x38(0x10)
	struct FWrappedLocalTextID DescriptionLocalText; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x50(0x28)
	struct FString ShortNumberDisplayFormat; // 0x78(0x10)
	struct FWrappedLocalTextID TitleLocalText; // 0x88(0x04)
	struct FWrappedLocalTextID IntroductionLocalText; // 0x8c(0x04)
};

// ScriptStruct Solarland.BattleUpgradeEffectConfigParam
// Size: 0x0c (Inherited: 0x00)
struct FBattleUpgradeEffectConfigParam {
	struct FGameplayTag GameplayTag; // 0x00(0x08)
	float Scale; // 0x08(0x04)
};

// ScriptStruct Solarland.BlueCircleInfo
// Size: 0x14 (Inherited: 0x00)
struct FBlueCircleInfo {
	struct FVector CenterLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	bool bHiddenInLevel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Solarland.BombingZone
// Size: 0x60 (Inherited: 0x00)
struct FBombingZone {
	int32_t instanceID; // 0x00(0x04)
	int32_t ConfigID; // 0x04(0x04)
	float Radius; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	int32_t MinBomb; // 0x10(0x04)
	int32_t MaxBomb; // 0x14(0x04)
	struct FVector Location; // 0x18(0x0c)
	struct FBombingZoneBomb Bomb; // 0x24(0x1c)
	enum class EBombingZoneState State; // 0x40(0x01)
	char pad_41[0x1f]; // 0x41(0x1f)
};

// ScriptStruct Solarland.BombingZoneBomb
// Size: 0x1c (Inherited: 0x00)
struct FBombingZoneBomb {
	float Radius; // 0x00(0x04)
	float MaxDamage; // 0x04(0x04)
	float MinDamage; // 0x08(0x04)
	float VehicleMaxDamage; // 0x0c(0x04)
	float VehicleMinDamage; // 0x10(0x04)
	float InVehicleDamageScale; // 0x14(0x04)
	float LandingTime; // 0x18(0x04)
};

// ScriptStruct Solarland.ScreenEffectConfig
// Size: 0x78 (Inherited: 0x08)
struct FScreenEffectConfig : FTableRowBase {
	struct FString EffectType; // 0x08(0x10)
	struct FString EffectName; // 0x18(0x10)
	struct FString State; // 0x28(0x10)
	enum class EBuffEffectTagType TagType; // 0x38(0x01)
	bool bMatReplace; // 0x39(0x01)
	enum class EBuffEffectDurationType DurationType; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float DurationTime; // 0x3c(0x04)
	struct TSoftClassPtr<UObject> ScreenWidgetPath; // 0x40(0x28)
	enum class ESameScreenEffectHandleType SameEffectHandleType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float MinIntervalForSameScreenEffect; // 0x6c(0x04)
	float MinIntervalForSameScreenEffectLowLevelDevice; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Solarland.BuffEffectTableRow
// Size: 0x38 (Inherited: 0x08)
struct FBuffEffectTableRow : FTableRowBase {
	struct FName EffectType; // 0x08(0x08)
	struct FName EffectName; // 0x10(0x08)
	struct FName State; // 0x18(0x08)
	bool bMatReplace; // 0x20(0x01)
	enum class EBuffEffectDurationType DurationType; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float DurationTime; // 0x24(0x04)
	struct TArray<struct FBuffEffectActorParam> ActorEffectParams; // 0x28(0x10)
};

// ScriptStruct Solarland.BuffEffectActorParam
// Size: 0xd8 (Inherited: 0x00)
struct FBuffEffectActorParam {
	struct TSoftObjectPtr<UParticleSystem> ActorParticlePath; // 0x00(0x28)
	struct FSolarSkinnedParticleSystem ActorSkinnedParticlePath; // 0x28(0x70)
	struct FName SocketName; // 0x98(0x08)
	struct FVector LocationOffset; // 0xa0(0x0c)
	struct FRotator RotationOffset; // 0xac(0x0c)
	struct FVector Scale; // 0xb8(0x0c)
	enum class EAttachLocation LocationType; // 0xc4(0x01)
	bool bAutoActivate; // 0xc5(0x01)
	bool Attached; // 0xc6(0x01)
	bool bAbsoluteRotation; // 0xc7(0x01)
	struct TArray<struct FName> ComponentTags; // 0xc8(0x10)
};

// ScriptStruct Solarland.SolarSkinnedAsset
// Size: 0x08 (Inherited: 0x00)
struct FSolarSkinnedAsset {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.SolarSkinnedParticleSystem
// Size: 0x70 (Inherited: 0x08)
struct FSolarSkinnedParticleSystem : FSolarSkinnedAsset {
	struct FSoftObjectPath DefaultSkinnedParticle; // 0x08(0x18)
	struct TMap<int32_t, struct FSoftObjectPath> SkinnedParticles; // 0x20(0x50)
};

// ScriptStruct Solarland.ScreenEffectWidgetCacheInfo
// Size: 0x18 (Inherited: 0x00)
struct FScreenEffectWidgetCacheInfo {
	struct USolarScreenEffectWidget* WidgetClass; // 0x00(0x08)
	struct TArray<struct USolarScreenEffectWidget*> WidgetInstances; // 0x08(0x10)
};

// ScriptStruct Solarland.ActiveCameraShakeWithCurve
// Size: 0x18 (Inherited: 0x00)
struct FActiveCameraShakeWithCurve {
	struct UCameraShakeWithCurve* ShakeInstance; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Solarland.CameraShakeWithCurveTemplatePool
// Size: 0x18 (Inherited: 0x00)
struct FCameraShakeWithCurveTemplatePool {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UCameraShakeWithCurve*> PooledShakes; // 0x08(0x10)
};

// ScriptStruct Solarland.CameraShakeWithCurvePool
// Size: 0x10 (Inherited: 0x00)
struct FCameraShakeWithCurvePool {
	struct TArray<struct UCameraShakeWithCurve*> PooledShakes; // 0x00(0x10)
};

// ScriptStruct Solarland.CruiseFormation
// Size: 0x10 (Inherited: 0x00)
struct FCruiseFormation {
	struct TArray<struct FVector> LocationList; // 0x00(0x10)
};

// ScriptStruct Solarland.EchelonFormation
// Size: 0x10 (Inherited: 0x00)
struct FEchelonFormation {
	struct TArray<struct FVector> LocationList; // 0x00(0x10)
};

// ScriptStruct Solarland.SettlePageParam
// Size: 0x08 (Inherited: 0x00)
struct FSettlePageParam {
	int32_t WeaponExpSettlmentNum; // 0x00(0x04)
	bool IsRankFight; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.DataManagerConfig
// Size: 0x10 (Inherited: 0x00)
struct FDataManagerConfig {
	struct UDataTable* GeneralDataTable; // 0x00(0x08)
	struct UDataTable* DataTable; // 0x08(0x08)
};

// ScriptStruct Solarland.FinalsBGMData
// Size: 0x28 (Inherited: 0x00)
struct FFinalsBGMData {
	bool bEnableFinalsBGM; // 0x00(0x01)
	char FinalsBGMSafeAreaIndex; // 0x01(0x01)
	char FinalsBGMPlayTeamCount; // 0x02(0x01)
	char FinalsBGMStopTeamCount; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString FinalsBGMName_Play; // 0x08(0x10)
	struct FString FinalsBGMName_Stop; // 0x18(0x10)
};

// ScriptStruct Solarland.SCMMapConfig
// Size: 0x80 (Inherited: 0x00)
struct FSCMMapConfig {
	struct FString Desc; // 0x00(0x10)
	struct FSoftObjectPath LevelMap; // 0x10(0x18)
	int32_t MiniMapId; // 0x28(0x04)
	bool IsStreaming; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TMap<struct FString, struct FSCMElementMapConfig> ElementGroups; // 0x30(0x50)
};

// ScriptStruct Solarland.SCMElementMapConfig
// Size: 0x20 (Inherited: 0x00)
struct FSCMElementMapConfig {
	struct FSoftObjectPath ElementLevel; // 0x00(0x18)
	bool LoadWithLevel; // 0x18(0x01)
	enum class ELevelLoadType LoadType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Solarland.DoppelgangerBehaviorConfig
// Size: 0x70 (Inherited: 0x00)
struct FDoppelgangerBehaviorConfig {
	bool bNeedCopy; // 0x00(0x01)
	bool bCopyRotate; // 0x01(0x01)
	bool bCopyCrouch; // 0x02(0x01)
	bool bCopySprint; // 0x03(0x01)
	bool bCopyJump; // 0x04(0x01)
	bool bCopyJetFly; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float MoveDuration; // 0x08(0x04)
	struct FVector2D MoveDirection; // 0x0c(0x08)
	float FindTargetRange; // 0x14(0x04)
	bool bCanAutoShoot; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<enum class EWeaponType, float> ShootRequestInterval; // 0x20(0x50)
};

// ScriptStruct Solarland.ActiveDynamicEffectTriggerVolumeInfo
// Size: 0x10 (Inherited: 0x00)
struct FActiveDynamicEffectTriggerVolumeInfo {
	struct TArray<struct FActiveGameplayEffectHandle> AppliedEffectHandles; // 0x00(0x10)
};

// ScriptStruct Solarland.DynamicGameplayEffectSpec
// Size: 0x10 (Inherited: 0x00)
struct FDynamicGameplayEffectSpec {
	struct UGameplayEffect* EffectClass; // 0x00(0x08)
	float EffectLevel; // 0x08(0x04)
	bool bRemoveOnEnd; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Solarland.TacticalDodgeDirectionConfig
// Size: 0x78 (Inherited: 0x00)
struct FTacticalDodgeDirectionConfig {
	struct FSolarSkinnedMontage SkinnedMontage; // 0x00(0x70)
	enum class ECamShakeType CameraShake; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Solarland.SolarSkinnedMontage
// Size: 0x70 (Inherited: 0x08)
struct FSolarSkinnedMontage : FSolarSkinnedAsset {
	struct FSoftObjectPath DefaultSkinnedMontage; // 0x08(0x18)
	struct TMap<int32_t, struct FSoftObjectPath> SkinnedMontages; // 0x20(0x50)
};

// ScriptStruct Solarland.TacticalDodgeParams
// Size: 0x10 (Inherited: 0x08)
struct FTacticalDodgeParams : FGameplayAbilityTargetData {
	int32_t MontageIndex; // 0x08(0x04)
	float FaceYaw; // 0x0c(0x04)
};

// ScriptStruct Solarland.DGMatUpdateParams
// Size: 0x10 (Inherited: 0x00)
struct FDGMatUpdateParams {
	struct FName MatParam; // 0x00(0x08)
	struct UCurveBase* MatCurve; // 0x08(0x08)
};

// ScriptStruct Solarland.SolarExtraShieldEffect
// Size: 0x18 (Inherited: 0x00)
struct FSolarExtraShieldEffect {
	int32_t Level; // 0x00(0x04)
	struct FName TeammateEffectID; // 0x04(0x08)
	struct FName EnemyEffectID; // 0x0c(0x08)
	bool bOnRemoveStop; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Solarland.SolarCharacterBillboardIconGroupConfig
// Size: 0x10 (Inherited: 0x00)
struct FSolarCharacterBillboardIconGroupConfig {
	struct TArray<struct FSolarCharacterBillboardIconConfig> IconConfigs; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarCharacterBillboardIconConfig
// Size: 0x30 (Inherited: 0x00)
struct FSolarCharacterBillboardIconConfig {
	struct FGameplayTag IconTag; // 0x00(0x08)
	struct TSoftObjectPtr<UTexture2D> IconSoftPtr; // 0x08(0x28)
};

// ScriptStruct Solarland.CharacterAssistAimTargetConfig
// Size: 0xd8 (Inherited: 0x00)
struct FCharacterAssistAimTargetConfig {
	struct FWeaponAssistAimTargetConfig Standing; // 0x00(0x48)
	struct FWeaponAssistAimTargetConfig Crouching; // 0x48(0x48)
	struct FWeaponAssistAimTargetConfig Crawling; // 0x90(0x48)
};

// ScriptStruct Solarland.WeaponAssistAimTargetConfig
// Size: 0x48 (Inherited: 0x00)
struct FWeaponAssistAimTargetConfig {
	struct FVector2D BaseFollowTriggerExtent; // 0x00(0x08)
	struct FVector2D BaseFollowStopExtent; // 0x08(0x08)
	struct TArray<struct FBaseFollowExtentByTag> BaseFollowExtentByTags; // 0x10(0x10)
	struct FVector2D TargetVelocityFollowTriggerExtent; // 0x20(0x08)
	struct FVector2D LockAimingExtent; // 0x28(0x08)
	struct FVector2D GlobalSensitivityScaleTriggerExtent; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Solarland.BaseFollowExtentByTag
// Size: 0x60 (Inherited: 0x00)
struct FBaseFollowExtentByTag {
	struct FGameplayTagRequirements TagRequirements; // 0x00(0x50)
	struct FVector2D BaseFollowTriggerExtent; // 0x50(0x08)
	struct FVector2D BaseFollowStopExtent; // 0x58(0x08)
};

// ScriptStruct Solarland.CharacterBodyScaleConfig
// Size: 0x08 (Inherited: 0x00)
struct FCharacterBodyScaleConfig {
	float CapsuleHeight; // 0x00(0x04)
	float MeshOriginHeight; // 0x04(0x04)
};

// ScriptStruct Solarland.CueContent
// Size: 0xb8 (Inherited: 0x00)
struct FCueContent {
	enum class ECueContentPlayTiming PlayTiming; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName CustomEvent; // 0x04(0x08)
	char VisibleTargetFlag; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGameplayTagRequirements PlayTagRequirements; // 0x10(0x50)
	struct TArray<struct FActorEffectContent> ActorEffectContents; // 0x60(0x10)
	struct TArray<struct FBuffEffectContent> BuffEffectContents; // 0x70(0x10)
	struct TArray<struct FSoundContent> SoundContents; // 0x80(0x10)
	struct TArray<struct FHeadIconContent> HeadIconContents; // 0x90(0x10)
	struct TArray<struct FParticleSystemContent> ParticleSystemContents; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct Solarland.ParticleSystemContent
// Size: 0x88 (Inherited: 0x00)
struct FParticleSystemContent {
	struct FActorParticleEffectSpawnInfo SpawnInfo; // 0x00(0x70)
	bool bStopOnEnd; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// ScriptStruct Solarland.HeadIconContent
// Size: 0x08 (Inherited: 0x00)
struct FHeadIconContent {
	struct FGameplayTag HeadIconTag; // 0x00(0x08)
};

// ScriptStruct Solarland.SoundContent
// Size: 0x08 (Inherited: 0x00)
struct FSoundContent {
	struct FName SoundGroupName; // 0x00(0x08)
};

// ScriptStruct Solarland.BuffEffectContent
// Size: 0x14 (Inherited: 0x00)
struct FBuffEffectContent {
	struct FName BuffEffectID; // 0x00(0x08)
	bool bStopOnEnd; // 0x08(0x01)
	enum class EBuffEffectType BuffEffectType; // 0x09(0x01)
	char pad_A[0xa]; // 0x0a(0x0a)
};

// ScriptStruct Solarland.ActorEffectContent
// Size: 0x20 (Inherited: 0x00)
struct FActorEffectContent {
	struct UActorEffect* ActorEffectClass; // 0x00(0x08)
	enum class EActorEffectAffectedActorType AffectedActorType; // 0x08(0x01)
	bool bHideFX; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FGameplayTag VisibilityFlagTag; // 0x0c(0x08)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Solarland.CharacterSpecializedComponentInfos
// Size: 0x10 (Inherited: 0x00)
struct FCharacterSpecializedComponentInfos {
	struct TArray<struct FCharacterSpecializedComponentInfo> ComponentInfos; // 0x00(0x10)
};

// ScriptStruct Solarland.CharacterSpecializedComponentInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterSpecializedComponentInfo {
	struct TArray<enum class ENetRole> ValidRoles; // 0x00(0x10)
	bool bEnableReplication; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct UActorComponent*> ComponentClasses; // 0x18(0x10)
};

// ScriptStruct Solarland.CharacterMontageMappingData
// Size: 0x48 (Inherited: 0x08)
struct FCharacterMontageMappingData : FTableRowBase {
	struct FGameplayTag MontageTag; // 0x08(0x08)
	struct UAnimMontage* MaleMontage; // 0x10(0x08)
	struct UAnimMontage* FemaleMontage; // 0x18(0x08)
	struct TArray<struct FMontageDataByCharacter> CharacterSpecificData; // 0x20(0x10)
	struct UDataTable* WeaponSpecificDataTable; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Solarland.MontageDataByCharacter
// Size: 0x20 (Inherited: 0x00)
struct FMontageDataByCharacter {
	int32_t CharacterId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct TArray<struct FMontageDataByCharacterSkin> SkinSpecificData; // 0x10(0x10)
};

// ScriptStruct Solarland.MontageDataByCharacterSkin
// Size: 0x10 (Inherited: 0x00)
struct FMontageDataByCharacterSkin {
	int32_t CharacterSkinID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimMontage* Montage; // 0x08(0x08)
};

// ScriptStruct Solarland.EmotionMontageMappingData
// Size: 0x50 (Inherited: 0x48)
struct FEmotionMontageMappingData : FCharacterMontageMappingData {
	bool bShowWeapon; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float CameraZOffset; // 0x4c(0x04)
};

// ScriptStruct Solarland.MontageDataByWeapon
// Size: 0x30 (Inherited: 0x08)
struct FMontageDataByWeapon : FTableRowBase {
	int32_t weaponid; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimMontage* MaleMontage; // 0x10(0x08)
	struct UAnimMontage* FemaleMontage; // 0x18(0x08)
	struct TArray<struct FMontageDataByWeaponSkin> SkinSpecificData; // 0x20(0x10)
};

// ScriptStruct Solarland.MontageDataByWeaponSkin
// Size: 0x18 (Inherited: 0x00)
struct FMontageDataByWeaponSkin {
	int32_t WeaponSkinID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimMontage* MaleMontage; // 0x08(0x08)
	struct UAnimMontage* FemaleMontage; // 0x10(0x08)
};

// ScriptStruct Solarland.ChildActorOrnamentConfig
// Size: 0x80 (Inherited: 0x00)
struct FChildActorOrnamentConfig {
	struct FSoftClassPath OrnamentRes; // 0x00(0x18)
	struct FName OrnamentAttachSocket; // 0x18(0x08)
	struct FTransform OrnamentRelativeTransform; // 0x20(0x30)
	struct FSoftObjectPath OrnamentVisibilityConfig; // 0x50(0x18)
	struct TArray<struct FName> OrnamentComponentTags; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Solarland.SkeletalMeshOrnamentConfig
// Size: 0xa0 (Inherited: 0x00)
struct FSkeletalMeshOrnamentConfig {
	struct FSoftObjectPath OrnamentRes; // 0x00(0x18)
	struct FSoftClassPath OrnamentABPRes; // 0x18(0x18)
	struct FName OrnamentAttachSocket; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform OrnamentRelativeTransform; // 0x40(0x30)
	struct FSoftObjectPath OrnamentVisibilityConfig; // 0x70(0x18)
	struct TArray<struct FName> OrnamentComponentTags; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Solarland.StaticMeshOrnamentConfig
// Size: 0x80 (Inherited: 0x00)
struct FStaticMeshOrnamentConfig {
	struct FSoftObjectPath OrnamentRes; // 0x00(0x18)
	struct FName OrnamentAttachSocket; // 0x18(0x08)
	struct FTransform OrnamentRelativeTransform; // 0x20(0x30)
	struct FSoftObjectPath OrnamentVisibilityConfig; // 0x50(0x18)
	struct TArray<struct FName> OrnamentComponentTags; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Solarland.SoundGroupMappingData
// Size: 0x58 (Inherited: 0x08)
struct FSoundGroupMappingData : FTableRowBase {
	struct TMap<int32_t, struct FSoundGroupDataByCharacter> CharacterSpecificData; // 0x08(0x50)
};

// ScriptStruct Solarland.SoundGroupDataByCharacter
// Size: 0x58 (Inherited: 0x00)
struct FSoundGroupDataByCharacter {
	struct FName DestinationSoundGroup; // 0x00(0x08)
	struct TMap<int32_t, struct FName> SkinSpecificData; // 0x08(0x50)
};

// ScriptStruct Solarland.ChooseWeaponItemData
// Size: 0x88 (Inherited: 0x00)
struct FChooseWeaponItemData {
	struct FName RowName; // 0x00(0x08)
	int32_t weaponid; // 0x08(0x04)
	int32_t WeaponTypeId; // 0x0c(0x04)
	int32_t WeaponSkinID; // 0x10(0x04)
	bool bCollected; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<int32_t> AvailableScopes; // 0x18(0x10)
	int32_t DefaultScope; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSet<enum class EWeaponEquipSlot> SelectedSlots; // 0x30(0x50)
	int32_t SelectedScope; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Solarland.ChooseWeaponItemState
// Size: 0x04 (Inherited: 0x00)
struct FChooseWeaponItemState {
	bool bCollected; // 0x00(0x01)
	bool bSelected; // 0x01(0x01)
	bool bSelectedBySlot1; // 0x02(0x01)
	bool bSelectedBySlot2; // 0x03(0x01)
};

// ScriptStruct Solarland.NodeContainerItem
// Size: 0x18 (Inherited: 0x00)
struct FNodeContainerItem {
	struct UCanvasPanel* RootContainerPanel; // 0x00(0x08)
	struct TArray<struct FNodeContainer> ContainerArray; // 0x08(0x10)
};

// ScriptStruct Solarland.NodeContainer
// Size: 0x28 (Inherited: 0x00)
struct FNodeContainer {
	struct FNodeElement ThisNode; // 0x00(0x10)
	bool bRoot; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FNodeElement> ChildsNode; // 0x18(0x10)
};

// ScriptStruct Solarland.NodeElement
// Size: 0x10 (Inherited: 0x00)
struct FNodeElement {
	struct UWidget* Widget; // 0x00(0x08)
	enum class ESlateVisibility Visible; // 0x08(0x01)
	bool bIsContainer; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Solarland.StateMapItemStruct
// Size: 0x18 (Inherited: 0x00)
struct FStateMapItemStruct {
	struct TArray<struct FStateItemStruct> ChildWidgetConfigList; // 0x00(0x10)
	bool bLoadChildWidgetTool; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Solarland.StateItemStruct
// Size: 0x10 (Inherited: 0x00)
struct FStateItemStruct {
	struct UWidget* CrosshairChildWidget; // 0x00(0x08)
	enum class ESlateVisibility VisibilityType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Solarland.UICrossHairSpreadStruct
// Size: 0x48 (Inherited: 0x00)
struct FUICrossHairSpreadStruct {
	struct UWidget* TargetWidget; // 0x00(0x08)
	enum class ESpreadType SpreadType; // 0x08(0x01)
	bool bPosition; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float Angle; // 0x0c(0x04)
	bool Pos_UseCustomizeFunc; // 0x10(0x01)
	bool bScale; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector2D ScaleFactor; // 0x14(0x08)
	bool Scale_UseCustomizeFunc; // 0x1c(0x01)
	bool bRenderAngle; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float RenderAngleFactor; // 0x20(0x04)
	bool Angle_UseCustomizeFunc; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector2D OrginalVector; // 0x28(0x08)
	struct FVector2D OrginalScale; // 0x30(0x08)
	float OrginalAngle; // 0x38(0x04)
	struct FVector2D Dir; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Solarland.UICrossHairAimColorStruct
// Size: 0x28 (Inherited: 0x00)
struct FUICrossHairAimColorStruct {
	struct UImage* TargetImg; // 0x00(0x08)
	struct FLinearColor TargetColor; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Solarland.CrosshairLayout
// Size: 0x04 (Inherited: 0x00)
struct FCrosshairLayout {
	float InitSpread; // 0x00(0x04)
};

// ScriptStruct Solarland.CrosshairSprite
// Size: 0x30 (Inherited: 0x00)
struct FCrosshairSprite {
	struct FSoftObjectPath Normal; // 0x00(0x18)
	struct FSoftObjectPath Energy; // 0x18(0x18)
};

// ScriptStruct Solarland.NoticeColorData
// Size: 0x30 (Inherited: 0x00)
struct FNoticeColorData {
	struct FLinearColor TextBg; // 0x00(0x10)
	struct FLinearColor IconBg; // 0x10(0x10)
	struct FLinearColor Icon; // 0x20(0x10)
};

// ScriptStruct Solarland.CustomNoticeImageRow
// Size: 0x20 (Inherited: 0x08)
struct FCustomNoticeImageRow : FTableRowBase {
	struct FString Remark; // 0x08(0x10)
	struct UTexture2D* NoticeIcon; // 0x18(0x08)
};

// ScriptStruct Solarland.CustomNoticeRow
// Size: 0x40 (Inherited: 0x08)
struct FCustomNoticeRow : FTableRowBase {
	struct FString Remark; // 0x08(0x10)
	int32_t NoticeText; // 0x18(0x04)
	enum class ECustomNoticeType NoticeType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float NoticeTime; // 0x20(0x04)
	enum class ECustomNoticeColor NoticeColor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UUINoticeBase* NoticeClass; // 0x28(0x08)
	struct FString NoticeIcon; // 0x30(0x10)
};

// ScriptStruct Solarland.CustomNoticeID
// Size: 0x01 (Inherited: 0x00)
struct FCustomNoticeID {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solarland.BoxChargingInfo
// Size: 0x1c (Inherited: 0x00)
struct FBoxChargingInfo {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Solarland.TerminatorNotifyUIConfig
// Size: 0x28 (Inherited: 0x00)
struct FTerminatorNotifyUIConfig {
	int32_t LocalizationID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct UUINoticeBase* TerminatorNotifyUI; // 0x18(0x08)
	enum class ECustomNoticeType NoticeType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float NoticeTime; // 0x24(0x04)
};

// ScriptStruct Solarland.SkeletalMeshOverride
// Size: 0x50 (Inherited: 0x00)
struct FSkeletalMeshOverride {
	struct TSoftObjectPtr<USkeletalMesh> MeshOverride; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterialInstance> MaterialOverride; // 0x28(0x28)
};

// ScriptStruct Solarland.StaticMeshOverride
// Size: 0x50 (Inherited: 0x00)
struct FStaticMeshOverride {
	struct TSoftObjectPtr<UStaticMesh> MeshOverride; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterialInstance> MaterialOverride; // 0x28(0x28)
};

// ScriptStruct Solarland.DuckRollingCharacterHitConfig
// Size: 0xa0 (Inherited: 0x00)
struct FDuckRollingCharacterHitConfig {
	float MinSelfSpeed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USolarCharacterGameplayAbility* EnableCharacterHitAbility; // 0x08(0x08)
	struct UParticleSystem* SpeedEffect; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform SpeedEffectRelativeTransform; // 0x20(0x30)
	float PushUpAngle; // 0x50(0x04)
	float UpBoundingRatio; // 0x54(0x04)
	struct FVector PushBoxExtent; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UCurveFloat* PushSpeedCurve; // 0x68(0x08)
	bool bTeleportTargetOnPush; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float MinRelativeSpeedForDamage; // 0x74(0x04)
	float MinIntervalForDamage; // 0x78(0x04)
	float BaseDamage; // 0x7c(0x04)
	struct UCurveFloat* RelativeSpeedToDamageMultiplierCurve; // 0x80(0x08)
	struct UParticleSystem* HitEffect; // 0x88(0x08)
	struct FString HitSoundEvent; // 0x90(0x10)
};

// ScriptStruct Solarland.EmojiBubbleConfig
// Size: 0x10 (Inherited: 0x08)
struct FEmojiBubbleConfig : FTableRowBase {
	struct USolarUserWidget* EmojiClassType; // 0x08(0x08)
};

// ScriptStruct Solarland.BoxBurstItemConfig
// Size: 0x08 (Inherited: 0x00)
struct FBoxBurstItemConfig {
	struct UDataTable* ConfigTable; // 0x00(0x08)
};

// ScriptStruct Solarland.BurstItemSplitConfig
// Size: 0x40 (Inherited: 0x08)
struct FBurstItemSplitConfig : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> Piles; // 0x10(0x10)
	struct TArray<float> ModelScale; // 0x20(0x10)
	int32_t MaxPileNum; // 0x30(0x04)
	struct FRotator Rotator; // 0x34(0x0c)
};

// ScriptStruct Solarland.ExpItemReduceRate
// Size: 0x08 (Inherited: 0x00)
struct FExpItemReduceRate {
	struct UDataTable* ConfigTable; // 0x00(0x08)
};

// ScriptStruct Solarland.ExpItemReduceRateConfig
// Size: 0x10 (Inherited: 0x08)
struct FExpItemReduceRateConfig : FTableRowBase {
	int32_t DeathCount; // 0x08(0x04)
	float Rate; // 0x0c(0x04)
};

// ScriptStruct Solarland.ExpItemConfig
// Size: 0x10 (Inherited: 0x00)
struct FExpItemConfig {
	struct UDataTable* ConfigTable; // 0x00(0x08)
	struct UDataTable* KilledConfigTable; // 0x08(0x08)
};

// ScriptStruct Solarland.ExpItemCountConfig
// Size: 0x18 (Inherited: 0x08)
struct FExpItemCountConfig : FTableRowBase {
	int32_t Lv; // 0x08(0x04)
	int32_t ExpItemCount; // 0x0c(0x04)
	int32_t ShieldMatMaxCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.FeedbackSingleData
// Size: 0x30 (Inherited: 0x00)
struct FFeedbackSingleData {
	struct UUserWidget* AnimationWidget; // 0x00(0x08)
	struct FName AnimationName; // 0x08(0x08)
	float AnimationPlaySpeed; // 0x10(0x04)
	float AnimationStartTime; // 0x14(0x04)
	float AnimationAgainStartTime; // 0x18(0x04)
	int32_t AnimationLoopNumber; // 0x1c(0x04)
	struct FName AudioName; // 0x20(0x08)
	enum class EAnimationType AnimationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Solarland.SElementLevelStreaming
// Size: 0x10 (Inherited: 0x00)
struct FSElementLevelStreaming {
	bool LoadWithLevel; // 0x00(0x01)
	enum class ELevelLoadType LoadType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct ULevelStreamingDynamic* LevelStreamingDynamic; // 0x08(0x08)
};

// ScriptStruct Solarland.LoadingScreenLevelData
// Size: 0x68 (Inherited: 0x00)
struct FLoadingScreenLevelData {
	struct FVector BackupLevelStreamingLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSet<struct FSoftObjectPath> LockupLevels; // 0x10(0x50)
	float LockupLevelMaxSquaredXYDistance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Solarland.WeaponVibrateDTRow
// Size: 0x80 (Inherited: 0x08)
struct FWeaponVibrateDTRow : FTableRowBase {
	struct FString WeaponDesc; // 0x08(0x10)
	struct TMap<enum class EWeaponVibrateType, struct FVibrateDevicePlayParams> WeaponVibrateMap; // 0x18(0x50)
	struct FChargeVibratePlayParams ChargeVibrateData; // 0x68(0x18)
};

// ScriptStruct Solarland.ChargeVibratePlayParams
// Size: 0x18 (Inherited: 0x00)
struct FChargeVibratePlayParams {
	float ChargingIntervalTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* ChargingFactorCurve; // 0x08(0x08)
	struct UCurveFloat* FireFactorCurve; // 0x10(0x08)
};

// ScriptStruct Solarland.VibrateDevicePlayParams
// Size: 0x50 (Inherited: 0x00)
struct FVibrateDevicePlayParams {
	struct TMap<enum class EVibrateDeviceType, struct FVibratePlayParams> DeviceMap; // 0x00(0x50)
};

// ScriptStruct Solarland.VibratePlayParams
// Size: 0x28 (Inherited: 0x00)
struct FVibratePlayParams {
	struct FString ClipToPlay; // 0x00(0x10)
	int32_t Duration; // 0x10(0x04)
	int32_t Loop; // 0x14(0x04)
	int32_t Priority; // 0x18(0x04)
	int32_t Interval; // 0x1c(0x04)
	int32_t Amplitude; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.VibrateIntensityPlayParams
// Size: 0x50 (Inherited: 0x00)
struct FVibrateIntensityPlayParams {
	struct TMap<enum class EGameplayVibrateIntensity, struct FVibrateDevicePlayParams> IntensityMap; // 0x00(0x50)
};

// ScriptStruct Solarland.SCMRankListMulticast
// Size: 0x18 (Inherited: 0x00)
struct FSCMRankListMulticast {
	int32_t BeginRank; // 0x00(0x04)
	int32_t EndRank; // 0x04(0x04)
	struct FMulticastInlineDelegate RankListChangeMulticast; // 0x08(0x10)
};

// ScriptStruct Solarland.SCMRankEventHandle
// Size: 0x1c (Inherited: 0x00)
struct FSCMRankEventHandle {
	int32_t BeginRank; // 0x00(0x04)
	int32_t EndRank; // 0x04(0x04)
	struct FDelegate RankListChangeEvent; // 0x08(0x10)
	int32_t Index; // 0x18(0x04)
};

// ScriptStruct Solarland.SCMHostData
// Size: 0x488 (Inherited: 0x00)
struct FSCMHostData {
	struct FHostChangeData DataChangeToGlobal; // 0x00(0xf0)
	struct FHostChangeData DataChangeToSide; // 0xf0(0xf0)
	struct FHostChangeData DataChangeToSelf; // 0x1e0(0xf0)
	struct TMap<struct FString, struct FSCMSaveData> DataMap; // 0x2d0(0x50)
	struct TMap<struct FString, struct FSCMArrayData> ArrayDataMap; // 0x320(0x50)
	struct TMap<struct FString, struct FSCMMapData> MapDataMap; // 0x370(0x50)
	char pad_3C0[0xa0]; // 0x3c0(0xa0)
	struct FMulticastInlineDelegate SCMDataChangeDelegate; // 0x460(0x10)
	struct FString Name; // 0x470(0x10)
	enum class ESCMHostType HostType; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
};

// ScriptStruct Solarland.SCMSaveDataBase
// Size: 0x18 (Inherited: 0x00)
struct FSCMSaveDataBase {
	struct FString Name; // 0x00(0x10)
	enum class ESCMDataType Type; // 0x10(0x01)
	enum class ESCMDataReplicateType RepType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Solarland.SCMMapData
// Size: 0x68 (Inherited: 0x18)
struct FSCMMapData : FSCMSaveDataBase {
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct Solarland.SCMArrayData
// Size: 0x28 (Inherited: 0x18)
struct FSCMArrayData : FSCMSaveDataBase {
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Solarland.SCMSaveData
// Size: 0x20 (Inherited: 0x18)
struct FSCMSaveData : FSCMSaveDataBase {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Solarland.HostChangeData
// Size: 0xf0 (Inherited: 0x00)
struct FHostChangeData {
	struct TMap<struct FString, enum class ESCMDataChangeType> DataChangeMap; // 0x00(0x50)
	struct TMap<struct FString, struct FSCMChangeDataArray> ArrayChangeMap; // 0x50(0x50)
	struct TMap<struct FString, struct FSCMChangeDataMap> MapChangeMap; // 0xa0(0x50)
};

// ScriptStruct Solarland.SCMChangeDataMap
// Size: 0x20 (Inherited: 0x00)
struct FSCMChangeDataMap {
	struct TArray<enum class ESCMDataChangeType> ChangeType; // 0x00(0x10)
	struct TArray<struct FString> ChangeKeyArray; // 0x10(0x10)
};

// ScriptStruct Solarland.SCMChangeDataArray
// Size: 0x20 (Inherited: 0x00)
struct FSCMChangeDataArray {
	struct TArray<enum class ESCMDataChangeType> ChangeType; // 0x00(0x10)
	struct TArray<uint32_t> ChangeIndexArray; // 0x10(0x10)
};

// ScriptStruct Solarland.SCMDataBoardRow
// Size: 0x88 (Inherited: 0x08)
struct FSCMDataBoardRow : FTableRowBase {
	enum class ESCMDataType Type; // 0x08(0x01)
	enum class ESCMDataSetType DataSetType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FString Default; // 0x10(0x10)
	struct TArray<struct FString> DefaultArray; // 0x20(0x10)
	struct TMap<struct FString, struct FString> DefaultMap; // 0x30(0x50)
	enum class ESCMHostType HostType; // 0x80(0x01)
	enum class ESCMDataReplicateType ReplicateType; // 0x81(0x01)
	enum class ESCMDataGatherType_Settle SettleGatherType; // 0x82(0x01)
	enum class ESCMDataRankType Rank; // 0x83(0x01)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Solarland.SCMGeneralDataBoardRow
// Size: 0x98 (Inherited: 0x88)
struct FSCMGeneralDataBoardRow : FSCMDataBoardRow {
	enum class EStatisticsType MapNameType; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct Solarland.WeaponAttributeGameplayTags
// Size: 0x18 (Inherited: 0x00)
struct FWeaponAttributeGameplayTags {
	struct FGameplayTag Spread; // 0x00(0x08)
	struct FGameplayTag HorizontalRecoil; // 0x08(0x08)
	struct FGameplayTag VerticalRecoil; // 0x10(0x08)
};

// ScriptStruct Solarland.AssitLockBoneWeight
// Size: 0x0c (Inherited: 0x00)
struct FAssitLockBoneWeight {
	struct FName BoneName; // 0x00(0x08)
	float BoneWeight; // 0x08(0x04)
};

// ScriptStruct Solarland.GuidanceConditionTableRow
// Size: 0x30 (Inherited: 0x08)
struct FGuidanceConditionTableRow : FTableRowBase {
	char TriggerType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FString> Parameters; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
};

// ScriptStruct Solarland.GyroscopeDeviceModel
// Size: 0x18 (Inherited: 0x08)
struct FGyroscopeDeviceModel : FTableRowBase {
	struct FString NotHavingGyroscopeDeviceModelName; // 0x08(0x10)
};

// ScriptStruct Solarland.GyroscopeSensitivity
// Size: 0x20 (Inherited: 0x08)
struct FGyroscopeSensitivity : FTableRowBase {
	struct FString Axle; // 0x08(0x10)
	float GyroscopeSensitivityArray; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.GyroscopeDTRow
// Size: 0x10 (Inherited: 0x08)
struct FGyroscopeDTRow : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	float GyroscopeFactor; // 0x0c(0x04)
};

// ScriptStruct Solarland.PlayerSelectInfo
// Size: 0x28 (Inherited: 0x00)
struct FPlayerSelectInfo {
	struct ASolarPlayerState* Player; // 0x00(0x08)
	int32_t PlayerPos; // 0x08(0x04)
	int32_t CharacterId; // 0x0c(0x04)
	int32_t SkinId; // 0x10(0x04)
	int32_t HeroExpLevel; // 0x14(0x04)
	bool HasConfirm; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PlayerSelectTime; // 0x1c(0x04)
	bool IsInHeroPickProcess; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Solarland.AIPickHeroInfo
// Size: 0x08 (Inherited: 0x00)
struct FAIPickHeroInfo {
	int32_t CharacterId; // 0x00(0x04)
	int32_t SkinId; // 0x04(0x04)
};

// ScriptStruct Solarland.PlayerSelection
// Size: 0x18 (Inherited: 0x00)
struct FPlayerSelection {
	struct ASolarPlayerState* PlayerState; // 0x00(0x08)
	struct TWeakObjectPtr<struct UHeroPickCharacterData> SelectionData; // 0x08(0x08)
	int32_t CachedPos; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.AlertConfig
// Size: 0xd0 (Inherited: 0x00)
struct FAlertConfig {
	bool bShowDebug; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TickInterval; // 0x04(0x04)
	float HighAlertAngle; // 0x08(0x04)
	float HighAlertRadiusMin; // 0x0c(0x04)
	float HighAlertRadiusMax; // 0x10(0x04)
	struct FVector2D HighAlertBoxExtent; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<enum class EAlertDirection, float> AlertCD; // 0x20(0x50)
	float VoiceCD; // 0x70(0x04)
	int32_t VoiceID; // 0x74(0x04)
	float NoticeCD; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FName> OcclusionCheckBones; // 0x80(0x10)
	struct FGameplayTagContainer SelfBlockTags; // 0x90(0x20)
	struct FGameplayTagContainer EnemyBlockTags; // 0xb0(0x20)
};

// ScriptStruct Solarland.SoundGroupTableDataBase
// Size: 0x08 (Inherited: 0x08)
struct FSoundGroupTableDataBase : FTableRowBase {
};

// ScriptStruct Solarland.SoundGroupHitSoundTableData
// Size: 0x18 (Inherited: 0x08)
struct FSoundGroupHitSoundTableData : FSoundGroupTableDataBase {
	struct FString SoundEvent; // 0x08(0x10)
};

// ScriptStruct Solarland.SoundGroupHitSoundWwiseParams
// Size: 0x40 (Inherited: 0x00)
struct FSoundGroupHitSoundWwiseParams {
	struct FString SwitchGroup; // 0x00(0x10)
	struct FString SwitchState_IAttackOther; // 0x10(0x10)
	struct FString SwitchState_OtherAttackMe; // 0x20(0x10)
	struct FString SwitchState_Other; // 0x30(0x10)
};

// ScriptStruct Solarland.HitSoundTableData
// Size: 0x68 (Inherited: 0x08)
struct FHitSoundTableData : FTableRowBase {
	struct UDataTable* SubTableData; // 0x08(0x08)
	struct FName Default; // 0x10(0x08)
	struct FName CharacterBody; // 0x18(0x08)
	struct FName CharacterHead; // 0x20(0x08)
	struct FName CharacterShieldBody; // 0x28(0x08)
	struct FName CharacterShieldHead; // 0x30(0x08)
	struct FName CharacterHitDown; // 0x38(0x08)
	struct FName CharacterKill; // 0x40(0x08)
	struct FName CharacterKill2; // 0x48(0x08)
	struct FName Vehicle; // 0x50(0x08)
	struct FName SummonItemSolid; // 0x58(0x08)
	struct FName SummonItemVirtual; // 0x60(0x08)
};

// ScriptStruct Solarland.HitTraceMeshWidgetData
// Size: 0x3c (Inherited: 0x00)
struct FHitTraceMeshWidgetData {
	char pad_0[0x4]; // 0x00(0x04)
	struct FHitTraceData HitTraceSourceData; // 0x04(0x18)
	struct FVector2D Position; // 0x1c(0x08)
	float Scale; // 0x24(0x04)
	int32_t Angle; // 0x28(0x04)
	float Opacity; // 0x2c(0x04)
	char IconIndex; // 0x30(0x01)
	char ColorIdx; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t ArcLength; // 0x34(0x04)
	int32_t SniperLength; // 0x38(0x04)
};

// ScriptStruct Solarland.HitTraceData
// Size: 0x18 (Inherited: 0x00)
struct FHitTraceData {
	enum class EHitTraceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector TraceDirection; // 0x04(0x0c)
	float Damage; // 0x10(0x04)
	float HitTime; // 0x14(0x04)
};

// ScriptStruct Solarland.ServerMoveData
// Size: 0x50 (Inherited: 0x00)
struct FServerMoveData {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t ServerTimeStamp; // 0x08(0x08)
	struct FVector Acceleration; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct FVector Loction; // 0x28(0x0c)
	char CompressedMoveFlags; // 0x34(0x01)
	char RollByte; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	uint32_t YawPitchInt; // 0x38(0x04)
	char MovementMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	uint32_t FullBodyAnimationState; // 0x40(0x04)
	uint32_t MontageAnimState; // 0x44(0x04)
	char JetPackFlag; // 0x48(0x01)
	bool bValid; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Solarland.SolarAerialReconnaissanceConfig
// Size: 0x08 (Inherited: 0x00)
struct FSolarAerialReconnaissanceConfig {
	int32_t MarkMaximum; // 0x00(0x04)
	bool bMarkTeamMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.RichHlinkRow
// Size: 0x870 (Inherited: 0x08)
struct FRichHlinkRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FHyperlinkStyle HlinkStyle; // 0x10(0x860)
};

// ScriptStruct Solarland.InGameLevelingConfig
// Size: 0x08 (Inherited: 0x00)
struct FInGameLevelingConfig {
	struct UDataTable* ExpTable; // 0x00(0x08)
};

// ScriptStruct Solarland.InGameExpConifg
// Size: 0x10 (Inherited: 0x08)
struct FInGameExpConifg : FTableRowBase {
	int32_t Lv; // 0x08(0x04)
	int32_t Exp; // 0x0c(0x04)
};

// ScriptStruct Solarland.JobManagerConfig
// Size: 0x08 (Inherited: 0x00)
struct FJobManagerConfig {
	struct UDataTable* JobTable; // 0x00(0x08)
};

// ScriptStruct Solarland.KeyMapDisplayRowInfo
// Size: 0x18 (Inherited: 0x08)
struct FKeyMapDisplayRowInfo : FTableRowBase {
	struct FString DisplayName; // 0x08(0x10)
};

// ScriptStruct Solarland.KeyMappingJsonData
// Size: 0x10 (Inherited: 0x00)
struct FKeyMappingJsonData {
	struct TArray<struct FKeyMappingRowInfo> JsonData; // 0x00(0x10)
};

// ScriptStruct Solarland.KeyMappingRowInfo
// Size: 0x98 (Inherited: 0x08)
struct FKeyMappingRowInfo : FTableRowBase {
	struct FString Label; // 0x08(0x10)
	struct FString ActionDisplayName; // 0x18(0x10)
	struct FString ActionName; // 0x28(0x10)
	bool Continuity; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Scale; // 0x3c(0x04)
	struct FString RealAction; // 0x40(0x10)
	struct TArray<struct FString> FirstDefaultKeys; // 0x50(0x10)
	struct TArray<struct FString> SecondDefaultKeys; // 0x60(0x10)
	struct FString Description; // 0x70(0x10)
	struct TArray<struct FString> RelatedActions; // 0x80(0x10)
	bool Stationary; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Solarland.KillInfoMessage
// Size: 0x38 (Inherited: 0x00)
struct FKillInfoMessage {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Solarland.KillEffectExtraInfo
// Size: 0x0c (Inherited: 0x00)
struct FKillEffectExtraInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Solarland.KillExtraInfo
// Size: 0x10 (Inherited: 0x00)
struct FKillExtraInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Solarland.EShopDisplayData
// Size: 0x58 (Inherited: 0x00)
struct FEShopDisplayData {
	int32_t ItemID; // 0x00(0x04)
	float Price; // 0x04(0x04)
	float UndiscountedPrice; // 0x08(0x04)
	int32_t Num; // 0x0c(0x04)
	int32_t ProductID; // 0x10(0x04)
	float CoolDown; // 0x14(0x04)
	int32_t Generation; // 0x18(0x04)
	bool bIsRecommend; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString Name; // 0x20(0x10)
	struct FString Icon; // 0x30(0x10)
	struct FString Info; // 0x40(0x10)
	int32_t Quality; // 0x50(0x04)
	int32_t ItemType; // 0x54(0x04)
};

// ScriptStruct Solarland.ULoadingDataEntry
// Size: 0xb8 (Inherited: 0x00)
struct FULoadingDataEntry {
	struct FSoftObjectPath LoadingBg; // 0x00(0x18)
	struct TArray<int32_t> TipIntArray; // 0x18(0x10)
	struct TArray<struct FWrappedLocalTextID> TipLocalTitleArray; // 0x28(0x10)
	struct TArray<struct FWrappedLocalTextID> TipLocalLeftArray; // 0x38(0x10)
	struct TArray<struct FWrappedLocalTextID> TipLocalMidArray; // 0x48(0x10)
	struct TArray<struct FWrappedLocalTextID> TipLocalRightArray; // 0x58(0x10)
	struct TArray<struct FString> TipArray; // 0x68(0x10)
	struct TArray<struct FString> TipTitleArray; // 0x78(0x10)
	struct TArray<struct FString> TipLeftArray; // 0x88(0x10)
	struct TArray<struct FString> TipMidArray; // 0x98(0x10)
	struct TArray<struct FString> TipRightArray; // 0xa8(0x10)
};

// ScriptStruct Solarland.MassInvStateTransitionData
// Size: 0x90 (Inherited: 0x00)
struct FMassInvStateTransitionData {
	float TransitionTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRuntimeFloatCurve TransitionCurve; // 0x08(0x88)
};

// ScriptStruct Solarland.MassInvStateMaterialParams
// Size: 0x78 (Inherited: 0x00)
struct FMassInvStateMaterialParams {
	struct FMassInvMaterialParams PrepareParams; // 0x00(0x28)
	struct FMassInvMaterialParams NormalParams; // 0x28(0x28)
	struct FMassInvMaterialParams SprintParams; // 0x50(0x28)
};

// ScriptStruct Solarland.MassInvMaterialParams
// Size: 0x28 (Inherited: 0x00)
struct FMassInvMaterialParams {
	float PatternResolution; // 0x00(0x04)
	float Detail; // 0x04(0x04)
	float MaskBlend; // 0x08(0x04)
	float Opacity; // 0x0c(0x04)
	float StealthAdjust; // 0x10(0x04)
	float Tilling; // 0x14(0x04)
	struct FLinearColor BaseColor; // 0x18(0x10)
};

// ScriptStruct Solarland.MatchResult
// Size: 0x80 (Inherited: 0x00)
struct FMatchResult {
	struct FString BattleID; // 0x00(0x10)
	struct FString BattleAddr; // 0x10(0x10)
	struct FString Token; // 0x20(0x10)
	int32_t ModeID; // 0x30(0x04)
	int32_t RuleID; // 0x34(0x04)
	struct FString SelfPlayerID; // 0x38(0x10)
	struct TArray<struct FMatchResult_Group> Groups; // 0x48(0x10)
	struct FString MapName; // 0x58(0x10)
	struct FSoftObjectPath MapPath; // 0x68(0x18)
};

// ScriptStruct Solarland.MatchResult_Group
// Size: 0x18 (Inherited: 0x00)
struct FMatchResult_Group {
	int32_t groupid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMatchResult_Player> Players; // 0x08(0x10)
};

// ScriptStruct Solarland.MatchResult_Player
// Size: 0x58 (Inherited: 0x00)
struct FMatchResult_Player {
	struct FString PlayerId; // 0x00(0x10)
	struct FString playerName; // 0x10(0x10)
	int32_t AvatarID; // 0x20(0x04)
	int32_t fightCharacterID; // 0x24(0x04)
	int32_t fightCharacterSkinID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FSoftObjectPath SkinConfigPath; // 0x30(0x18)
	struct FString CharacterName; // 0x48(0x10)
};

// ScriptStruct Solarland.MaterialVariableChange
// Size: 0x18 (Inherited: 0x00)
struct FMaterialVariableChange {
	struct FName Variable; // 0x00(0x08)
	float FromValue; // 0x08(0x04)
	float ToValue; // 0x0c(0x04)
	float BeginProgress; // 0x10(0x04)
	float EndProgress; // 0x14(0x04)
};

// ScriptStruct Solarland.MapMarkElemArray
// Size: 0x10 (Inherited: 0x00)
struct FMapMarkElemArray {
	struct TArray<struct FMapMarkElem> MapMarkElems; // 0x00(0x10)
};

// ScriptStruct Solarland.MapMarkElem
// Size: 0x10 (Inherited: 0x00)
struct FMapMarkElem {
	struct UMapMarkBase* MapMark; // 0x00(0x08)
	bool bUsing; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Solarland.AirdropMeshWidgetData
// Size: 0x48 (Inherited: 0x00)
struct FAirdropMeshWidgetData {
	struct FConfigMiniMapMeshWidgetData IconData; // 0x00(0x18)
	struct FConfigMiniMapMeshWidgetData DiffuseData; // 0x18(0x18)
	struct FConfigMiniMapMeshWidgetData FlashData; // 0x30(0x18)
};

// ScriptStruct Solarland.ConfigMiniMapMeshWidgetData
// Size: 0x18 (Inherited: 0x00)
struct FConfigMiniMapMeshWidgetData {
	float TimeSpeed; // 0x00(0x04)
	char IconTexId; // 0x04(0x01)
	char ColorOpacityIndex; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector2D OpacityCoeff; // 0x08(0x08)
	struct FVector2D ScaleAndRipplingCoeff; // 0x10(0x08)
};

// ScriptStruct Solarland.MiniMapData
// Size: 0x18 (Inherited: 0x00)
struct FMiniMapData {
	bool bUseAsBigMap; // 0x00(0x01)
	bool bOverride; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MinFOV; // 0x04(0x04)
	float MaxFOV; // 0x08(0x04)
	float CurrentFOV; // 0x0c(0x04)
	struct FVector2D MapSize; // 0x10(0x08)
};

// ScriptStruct Solarland.MissileBulletConfig
// Size: 0x20 (Inherited: 0x00)
struct FMissileBulletConfig {
	struct FVector EjectDir; // 0x00(0x0c)
	float EjectDelayTime; // 0x0c(0x04)
	struct TArray<int32_t> TrailSpreadIndexArray; // 0x10(0x10)
};

// ScriptStruct Solarland.MissileBullet
// Size: 0x68 (Inherited: 0x00)
struct FMissileBullet {
	char pad_0[0x40]; // 0x00(0x40)
	struct UParticleSystemComponent* BulletEffect; // 0x40(0x08)
	struct UParticleSystemComponent* RibbonTrajectoryEffect; // 0x48(0x08)
	struct AMissileSwarmLauncher* Launcher; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct Solarland.MissileBulletSpawnParameter
// Size: 0x48 (Inherited: 0x00)
struct FMissileBulletSpawnParameter {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	struct FVector EjectLoc; // 0x04(0x0c)
	struct FVector EjectDir; // 0x10(0x0c)
	struct FVector TargetLoc; // 0x1c(0x0c)
	float EjectTimeStamp; // 0x28(0x04)
	float EjectDelayTime; // 0x2c(0x04)
	struct TArray<int32_t> TrailSpreadIndexArray; // 0x30(0x10)
	int32_t SwarmIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Solarland.FireUniqueID
// Size: 0x04 (Inherited: 0x00)
struct FFireUniqueID {
	uint32_t Data; // 0x00(0x04)
};

// ScriptStruct Solarland.DetailedTeamListViewInfo
// Size: 0x40 (Inherited: 0x00)
struct FDetailedTeamListViewInfo {
	int32_t TeamID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	int32_t Rank; // 0x18(0x04)
	int32_t Point; // 0x1c(0x04)
	uint32_t PreliminaryRank; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FDetailedListViewInfo> PlayerDetailInfos; // 0x28(0x10)
	bool bIsTournament; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Solarland.DetailedListViewInfo
// Size: 0x40 (Inherited: 0x00)
struct FDetailedListViewInfo {
	bool bIsUsingStructInfo; // 0x00(0x01)
	bool bIsCheater; // 0x01(0x01)
	bool bIsMVP; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString playerName; // 0x08(0x10)
	int32_t KillNum; // 0x18(0x04)
	int32_t AssistNum; // 0x1c(0x04)
	float CauseDamage; // 0x20(0x04)
	float ReceivedDamage; // 0x24(0x04)
	float HealSelf; // 0x28(0x04)
	float ReceivedHeal; // 0x2c(0x04)
	float LifeTime; // 0x30(0x04)
	float MvpScore; // 0x34(0x04)
	int32_t FlagID; // 0x38(0x04)
	enum class ECommonInputType InputType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Solarland.ConfigMeshData
// Size: 0x18c (Inherited: 0x00)
struct FConfigMeshData {
	bool bTeamVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TeamID; // 0x04(0x04)
	struct FVector2D TenOffset; // 0x08(0x08)
	struct FVector2D OneOffset; // 0x10(0x08)
	struct FLinearColor MainColor; // 0x18(0x10)
	struct FLinearColor ViceColor; // 0x28(0x10)
	bool bShieldVisible; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FProgressMeshData Shield; // 0x3c(0x1c)
	struct FProgressMeshData ShieldDamage; // 0x58(0x1c)
	struct FProgressMeshData ShieldBG; // 0x74(0x1c)
	bool bHPVisible; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FProgressMeshData HP; // 0x94(0x1c)
	struct FProgressMeshData HPDamage; // 0xb0(0x1c)
	struct FProgressMeshData HPBG; // 0xcc(0x1c)
	struct FMidProgressData MidShield; // 0xe8(0x3c)
	struct FMidProgressData MidHP; // 0x124(0x3c)
	struct FProgressMeshData MidBG; // 0x160(0x1c)
	struct FVector2D ScreenOffset; // 0x17c(0x08)
	char pad_184[0x8]; // 0x184(0x08)
};

// ScriptStruct Solarland.ProgressMeshData
// Size: 0x1c (Inherited: 0x00)
struct FProgressMeshData {
	float Progress; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	struct FVector2D Offset; // 0x14(0x08)
};

// ScriptStruct Solarland.MidProgressData
// Size: 0x3c (Inherited: 0x00)
struct FMidProgressData {
	bool bVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FProgressMeshData Data; // 0x04(0x1c)
	struct FProgressMeshData BGData; // 0x20(0x1c)
};

// ScriptStruct Solarland.ReplayPlayerOverviewData
// Size: 0x60 (Inherited: 0x00)
struct FReplayPlayerOverviewData {
	struct FString playerName; // 0x00(0x10)
	struct FString HeroName; // 0x10(0x10)
	struct TSoftObjectPtr<UTexture2D> SkinResourcePtr; // 0x20(0x28)
	int32_t PlayerNum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString GameModeName; // 0x50(0x10)
};

// ScriptStruct Solarland.TeamPlayerNavArray
// Size: 0x10 (Inherited: 0x00)
struct FTeamPlayerNavArray {
	struct TArray<struct UOBPlayerNavWidget*> NavArray; // 0x00(0x10)
};

// ScriptStruct Solarland.CupViewInfo
// Size: 0x28 (Inherited: 0x00)
struct FCupViewInfo {
	struct FString TournamentName; // 0x00(0x10)
	struct FString TournamentIcon; // 0x10(0x10)
	int32_t GameModeId; // 0x20(0x04)
	int32_t RuleID; // 0x24(0x04)
};

// ScriptStruct Solarland.OpponentPerspectiveMaterialParamsConditional
// Size: 0x270 (Inherited: 0x00)
struct FOpponentPerspectiveMaterialParamsConditional {
	struct FGameplayTagRequirements OpponentTagRequirements; // 0x00(0x50)
	struct FOpponentPerspectiveMaterialParams MaterialParams; // 0x50(0x220)
};

// ScriptStruct Solarland.OpponentPerspectiveMaterialParams
// Size: 0x220 (Inherited: 0x00)
struct FOpponentPerspectiveMaterialParams {
	struct FRuntimeFloatCurve OpacityCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve OutlineSizeCurve; // 0x88(0x88)
	struct FRuntimeFloatCurve OpacityScaleByFOVCurve; // 0x110(0x88)
	struct FRuntimeFloatCurve OutlineSizeScaleByFOVCurve; // 0x198(0x88)
};

// ScriptStruct Solarland.PassiveSkillLevelDescription
// Size: 0x20 (Inherited: 0x00)
struct FPassiveSkillLevelDescription {
	struct FWrappedLocalTextID InnerDescriptionLocalTextID; // 0x00(0x04)
	struct FWrappedLocalTextID ShortDescriptionLocalTextID; // 0x04(0x04)
	struct FSoftObjectPath InnerIconPath; // 0x08(0x18)
};

// ScriptStruct Solarland.BackpackAnimInfo
// Size: 0x0c (Inherited: 0x00)
struct FBackpackAnimInfo {
	int32_t StartFrame; // 0x00(0x04)
	int32_t EndFrame; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Solarland.SwitchEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FSwitchEffectInfo {
	struct UMeshComponent* MeshComp; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> EffectMat; // 0x08(0x10)
};

// ScriptStruct Solarland.RookieGuidanceTableRow
// Size: 0xc0 (Inherited: 0x08)
struct FRookieGuidanceTableRow : FTableRowBase {
	char groupid; // 0x08(0x01)
	char Tag; // 0x09(0x01)
	bool IfBindedWidget; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FString TriggerCondition; // 0x10(0x10)
	float TriggerDelayTime; // 0x20(0x04)
	char TriggerStage; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString GuideBPName; // 0x28(0x10)
	struct FVector2D GuideBPLocation; // 0x38(0x08)
	int32_t GuideBPScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString RelatedUI; // 0x48(0x10)
	struct FVector2D RelatedUILocation; // 0x58(0x08)
	int32_t RelatedUIScale; // 0x60(0x04)
	int32_t LocTextID; // 0x64(0x04)
	struct FVector2D LocTextLocation; // 0x68(0x08)
	float LocTextDuration; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString EndCondition; // 0x78(0x10)
	float EndDelayTime; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString InterruptCondition; // 0x90(0x10)
	char SingleRoundTriggerMax; // 0xa0(0x01)
	char TotalTriggerMax; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString FinishCondition; // 0xa8(0x10)
	bool IfUpload; // 0xb8(0x01)
	bool IfMandatory; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// ScriptStruct Solarland.BuildingData
// Size: 0x20 (Inherited: 0x00)
struct FBuildingData {
	struct FString BuildingLocation; // 0x00(0x10)
	struct FString BuildingIconName; // 0x10(0x10)
};

// ScriptStruct Solarland.ChargingZone
// Size: 0x20 (Inherited: 0x00)
struct FChargingZone {
	float Level1; // 0x00(0x04)
	float Level2; // 0x04(0x04)
	float Level3; // 0x08(0x04)
	float Level4; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Solarland.SCustomMode_PlayerReport
// Size: 0x4e8 (Inherited: 0x498)
struct FSCustomMode_PlayerReport : FSolarPlayerReport {
	struct TMap<int32_t, int32_t> RewardItems; // 0x498(0x50)
};

// ScriptStruct Solarland.SeparatedPackageInfo
// Size: 0x28 (Inherited: 0x00)
struct FSeparatedPackageInfo {
	int32_t SeparetedPkgID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> ChunksInPkg; // 0x08(0x10)
	struct TArray<int32_t> DependentPkgID; // 0x18(0x10)
};

// ScriptStruct Solarland.SettlementConfig
// Size: 0x80 (Inherited: 0x08)
struct FSettlementConfig : FTableRowBase {
	int32_t SettlementID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSettlementStageConfig StageConfig; // 0x10(0x40)
	struct TSoftClassPtr<UObject> Formula; // 0x50(0x28)
	bool IsValidData; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Solarland.SettlementStageConfig
// Size: 0x40 (Inherited: 0x00)
struct FSettlementStageConfig {
	struct TSoftClassPtr<UObject> Page_Die; // 0x00(0x28)
	int32_t Page_SkipIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> SettlementStage; // 0x30(0x10)
};

// ScriptStruct Solarland.SettlementParam_Zomborg
// Size: 0x18 (Inherited: 0x00)
struct FSettlementParam_Zomborg {
	struct ASolarPlayerState* ps; // 0x00(0x08)
	float LifeTime; // 0x08(0x04)
	int32_t PlayerRank; // 0x0c(0x04)
	float GoldPunishRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SettlementParam_PageParam
// Size: 0x0c (Inherited: 0x00)
struct FSettlementParam_PageParam {
	bool IsMVP; // 0x00(0x01)
	bool IsAce; // 0x01(0x01)
	bool IsVictory; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t WeaponExpSettlmentNum; // 0x04(0x04)
	bool IsRankFight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Solarland.SettlementParam_KDA
// Size: 0x18 (Inherited: 0x00)
struct FSettlementParam_KDA {
	struct ASolarPlayerState* ps; // 0x00(0x08)
	int32_t KillNum; // 0x08(0x04)
	int32_t DeathNum; // 0x0c(0x04)
	int32_t AssitNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SettlementParam_MVP
// Size: 0x28 (Inherited: 0x00)
struct FSettlementParam_MVP {
	struct ASolarPlayerState* ps; // 0x00(0x08)
	int32_t KillNum; // 0x08(0x04)
	int32_t DownNum; // 0x0c(0x04)
	int32_t AssitNum; // 0x10(0x04)
	int32_t SaveNum; // 0x14(0x04)
	float LifeTime; // 0x18(0x04)
	float DamageValue; // 0x1c(0x04)
	int32_t Rank; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.SettlementParam_WeaponExp
// Size: 0x20 (Inherited: 0x00)
struct FSettlementParam_WeaponExp {
	struct ASolarPlayerState* ps; // 0x00(0x08)
	float UseTime; // 0x08(0x04)
	int32_t WeaponKillNum; // 0x0c(0x04)
	int32_t WeaponAssitNum; // 0x10(0x04)
	float ExpRatio; // 0x14(0x04)
	float EXPPunishRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.SettlementParam_CommonExp
// Size: 0x38 (Inherited: 0x00)
struct FSettlementParam_CommonExp {
	struct ASolarPlayerState* ps; // 0x00(0x08)
	int32_t KillNum; // 0x08(0x04)
	int32_t DownNum; // 0x0c(0x04)
	int32_t AssitNum; // 0x10(0x04)
	int32_t SaveNum; // 0x14(0x04)
	float LifeTime; // 0x18(0x04)
	float DamageValue; // 0x1c(0x04)
	int32_t Rank; // 0x20(0x04)
	float EXPPunishRatio; // 0x24(0x04)
	float CoinPunishRatio; // 0x28(0x04)
	int32_t RankCorePunish; // 0x2c(0x04)
	int32_t BaseExp; // 0x30(0x04)
	float ExpRatio; // 0x34(0x04)
};

// ScriptStruct Solarland.ShootingTargetRing
// Size: 0x1c (Inherited: 0x00)
struct FShootingTargetRing {
	float Radius; // 0x00(0x04)
	float Score; // 0x04(0x04)
	struct FLinearColor ColorHUD; // 0x08(0x10)
	struct FColor Color3D; // 0x18(0x04)
};

// ScriptStruct Solarland.SolarWeaponFireSocketData
// Size: 0x60 (Inherited: 0x00)
struct FSolarWeaponFireSocketData {
	struct TArray<struct FName> MultiBulletSocketNames; // 0x00(0x10)
	struct TArray<struct FName> MuzzleSocketNames; // 0x10(0x10)
	struct TArray<struct FName> AdsMuzzleSocketNames; // 0x20(0x10)
	struct TArray<struct FName> MuzzleBlockCheckSocketNames; // 0x30(0x10)
	struct TArray<struct FName> MultiCastShellSocketNames; // 0x40(0x10)
	struct TArray<struct FName> AdsMultiCastShellSocketNames; // 0x50(0x10)
};

// ScriptStruct Solarland.SolarWeaponFireInputRespondConfig
// Size: 0x0b (Inherited: 0x00)
struct FSolarWeaponFireInputRespondConfig {
	char pad_0[0x1]; // 0x00(0x01)
	bool bAutoCloseScope; // 0x01(0x01)
	bool bShootAtPress; // 0x02(0x01)
	bool bShootAtPressAutoScope; // 0x03(0x01)
	bool bCanAutoShootWhilePress; // 0x04(0x01)
	bool bCanAutoShootWhilePressAutoScope; // 0x05(0x01)
	bool bCanShootWhileScoping; // 0x06(0x01)
	bool bCanShootWhileScopingAutoScope; // 0x07(0x01)
	bool bCanManuallyCanceled; // 0x08(0x01)
	bool bCanManuallyCanceledAutoScope; // 0x09(0x01)
	bool bOpenScopeWhileAutoFire; // 0x0a(0x01)
};

// ScriptStruct Solarland.SolarWeaponCrosshairData
// Size: 0x38 (Inherited: 0x00)
struct FSolarWeaponCrosshairData {
	char HasReload; // 0x00(0x01)
	char HasForbid; // 0x01(0x01)
	char HasOverload; // 0x02(0x01)
	char HasChargeProgress; // 0x03(0x01)
	char HasFeedback; // 0x04(0x01)
	enum class EWeaponType WeaponType; // 0x05(0x01)
	bool bIsEnergyType; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct UUserWidget* CrossHairWidget; // 0x08(0x08)
	struct UUserWidget* BulletContainerWidget; // 0x10(0x08)
	struct UUserWidget* WeaponRechamberWidget; // 0x18(0x08)
	struct FSolarNoAmmoAlertWidgetLayout AmmoAlertWidgetLayout; // 0x20(0x18)
};

// ScriptStruct Solarland.SolarNoAmmoAlertWidgetLayout
// Size: 0x18 (Inherited: 0x00)
struct FSolarNoAmmoAlertWidgetLayout {
	bool bOverrideLayout; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Offset; // 0x04(0x08)
	float SpinAngle; // 0x0c(0x04)
	struct FVector2D Scale; // 0x10(0x08)
};

// ScriptStruct Solarland.MoveSpeedReduceCurveConfig
// Size: 0xd8 (Inherited: 0x00)
struct FMoveSpeedReduceCurveConfig {
	struct FGameplayTagRequirements TagRequirements; // 0x00(0x50)
	struct FRuntimeFloatCurve MoveSpeedReduceCurveOnHoldingWeapon; // 0x50(0x88)
};

// ScriptStruct Solarland.LaunchDeviceInfo
// Size: 0x20 (Inherited: 0x00)
struct FLaunchDeviceInfo {
	bool bIsUsing; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName LaunchPadLocSocketName; // 0x04(0x08)
	struct FName PrepareEffectLocSocketName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystemComponent* AvailableDeviceEffect; // 0x18(0x08)
};

// ScriptStruct Solarland.ReplicateEffectData
// Size: 0x18 (Inherited: 0x00)
struct FReplicateEffectData {
	struct FSoftObjectPath IconPath; // 0x00(0x18)
};

// ScriptStruct Solarland.SolarAttributeModifier
// Size: 0xa0 (Inherited: 0x00)
struct FSolarAttributeModifier {
	enum class ESolarAttributeType SolarAttributeType; // 0x00(0x01)
	enum class ESolarAttributeDurationType AttributeDurationType; // 0x01(0x01)
	enum class ESolarAttributeValueSourceType AttributeDurationSourceType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float AttributeModifyDuration; // 0x04(0x04)
	struct FString AttributeModifyDurationSourceKey; // 0x08(0x10)
	float AttributeModifyMinDistance; // 0x18(0x04)
	float AttributeModifyMaxDistance; // 0x1c(0x04)
	struct UCurveFloat* AttributeDistanceScaleCurve; // 0x20(0x08)
	bool AttributeUseTargetValue; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AttributeTargetValue; // 0x2c(0x04)
	enum class ESolarAttributeValueSourceType AttributeChangeValueSourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AttributeChangeValue; // 0x34(0x04)
	float AttributeChangeValueForVehicle; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AttributeChangeValueSourceKey; // 0x40(0x10)
	bool AttributeChangeValueIsMultiplier; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	enum class ESolarAttributeValueSourceType AttributeChangeSpeedSourceType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString AttributeChangeSpeedSourceKey; // 0x60(0x10)
	float AttributeChangeSpeed; // 0x70(0x04)
	bool AttributeApplyChargingScale; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<int32_t> AttributeExtraIntParam; // 0x78(0x10)
	struct TArray<float> AttributeExtraFloatParam; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Solarland.GameplayAbilityRepAnimMontageForMesh
// Size: 0x40 (Inherited: 0x00)
struct FGameplayAbilityRepAnimMontageForMesh {
	struct USkeletalMeshComponent* Mesh; // 0x00(0x08)
	struct FGameplayAbilityRepAnimMontage RepMontageInfo; // 0x08(0x38)
};

// ScriptStruct Solarland.GameplayAbilityLocalAnimMontageForMesh
// Size: 0x38 (Inherited: 0x00)
struct FGameplayAbilityLocalAnimMontageForMesh {
	struct USkeletalMeshComponent* Mesh; // 0x00(0x08)
	struct FGameplayAbilityLocalAnimMontage LocalMontageInfo; // 0x08(0x30)
};

// ScriptStruct Solarland.AchievementResult
// Size: 0x0c (Inherited: 0x00)
struct FAchievementResult {
	int32_t AchievementID; // 0x00(0x04)
	int32_t ProgressValue; // 0x04(0x04)
	bool IsUnlock; // 0x08(0x01)
	enum class EAchievementReportType AchievementReportType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Solarland.AchievementContext
// Size: 0x28 (Inherited: 0x00)
struct FAchievementContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString TargetValueName; // 0x08(0x10)
	struct FString HandleFunctionName; // 0x18(0x10)
};

// ScriptStruct Solarland.AchievementHandle
// Size: 0x40 (Inherited: 0x08)
struct FAchievementHandle : FTableRowBase {
	enum class EAchievementCondition ConditionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString TargetValueName; // 0x10(0x10)
	struct FString HandleFunctionName; // 0x20(0x10)
	struct FString Desc; // 0x30(0x10)
};

// ScriptStruct Solarland.WidgetOverrideParam
// Size: 0x140 (Inherited: 0x00)
struct FWidgetOverrideParam {
	enum class EWidgetOverrideParamType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ChildName; // 0x04(0x08)
	bool bEnableLocText; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText Text; // 0x10(0x18)
	int32_t LocTextID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FSlateBrush Brush; // 0x30(0xe0)
	struct FString CustomParameter; // 0x110(0x10)
	struct FGameplayTag GameplayTag; // 0x120(0x08)
	struct TArray<struct FString> MetaData; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct Solarland.AdvProgressChannelInfo
// Size: 0x10 (Inherited: 0x00)
struct FAdvProgressChannelInfo {
	enum class EProgressBoardChannelState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
	float TargetPercent; // 0x08(0x04)
	float Speed; // 0x0c(0x04)
};

// ScriptStruct Solarland.PlaygroundEffect
// Size: 0x28 (Inherited: 0x00)
struct FPlaygroundEffect {
	struct FSoftObjectPath ParticlePath; // 0x00(0x18)
	float SpawnDelay; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UParticleSystemComponent* Handle; // 0x20(0x08)
};

// ScriptStruct Solarland.AirdropParas
// Size: 0x20 (Inherited: 0x00)
struct FAirdropParas {
	struct ASolarTreasureBoxSpawner* SolarTreasureBoxSpawnerClass; // 0x00(0x08)
	int32_t OutcomeID; // 0x08(0x04)
	int32_t ChestID; // 0x0c(0x04)
	int32_t ChestSpawnID; // 0x10(0x04)
	struct FVector Scale; // 0x14(0x0c)
};

// ScriptStruct Solarland.RouteInfo
// Size: 0x34 (Inherited: 0x00)
struct FRouteInfo {
	struct FVector RouteStart; // 0x00(0x0c)
	struct FVector RouteEnd; // 0x0c(0x0c)
	float RouteLength; // 0x18(0x04)
	struct FVector RouteDirection; // 0x1c(0x0c)
	struct FVector AirdropLocation; // 0x28(0x0c)
};

// ScriptStruct Solarland.AirshipConfig
// Size: 0x30 (Inherited: 0x00)
struct FAirshipConfig {
	float MoveSpeed; // 0x00(0x04)
	float MoveSpeedAfterAirdrop; // 0x04(0x04)
	float RouteHeight; // 0x08(0x04)
	float RouteMinLength; // 0x0c(0x04)
	float StartDistToAirdropMinLength; // 0x10(0x04)
	float FurthestDistAfterAirdrop; // 0x14(0x04)
	float DecelerateDistance; // 0x18(0x04)
	float AccelerateDistance; // 0x1c(0x04)
	float HoveringDurance; // 0x20(0x04)
	float BestDegreeRange; // 0x24(0x04)
	struct UCurveFloat* FogDensityCurve; // 0x28(0x08)
};

// ScriptStruct Solarland.AIQueryTeammateEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIQueryTeammateEvent {
	struct UAIPerceptionComponent* QueryingTeammate; // 0x00(0x08)
	struct UAIPerceptionComponent* TeammateBeingQueried; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Solarland.RadarDetectConfig
// Size: 0x18 (Inherited: 0x00)
struct FRadarDetectConfig {
	struct AActor* DetectActorType; // 0x00(0x08)
	float DetectRadius; // 0x08(0x04)
	float LossRadius; // 0x0c(0x04)
	float ScanInterval; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarAITagStateTransition
// Size: 0x20 (Inherited: 0x00)
struct FSolarAITagStateTransition {
	struct FGameplayTag FromStateTag; // 0x00(0x08)
	struct FGameplayTag ToStateTag; // 0x08(0x08)
	struct TArray<struct USolarAICondition*> TransConditions; // 0x10(0x10)
};

// ScriptStruct Solarland.SolarAIValueCompare
// Size: 0x0c (Inherited: 0x00)
struct FSolarAIValueCompare {
	enum class ESolarAIValueCompareOp Operator; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ComparedValue; // 0x04(0x04)
	float EqualThreshold; // 0x08(0x04)
};

// ScriptStruct Solarland.SolarAudioDetail
// Size: 0x18 (Inherited: 0x00)
struct FSolarAudioDetail {
	struct FName BankName; // 0x00(0x08)
	struct FName BindScene; // 0x08(0x08)
	enum class ESolarAudioDetailLoadMode LoadStrategy; // 0x10(0x01)
	enum class ESolarAudioDetailUnloadMode UnloadStrategy; // 0x11(0x01)
	enum class ESolarAudioDetailCatalog ResCatalog; // 0x12(0x01)
	bool LoadInQueue; // 0x13(0x01)
	int32_t OwnerCharacterID; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarAkBankInfo
// Size: 0x58 (Inherited: 0x00)
struct FSolarAkBankInfo {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Solarland.AkEventLocation
// Size: 0x40 (Inherited: 0x00)
struct FAkEventLocation {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Solarland.AkEventData
// Size: 0x18 (Inherited: 0x00)
struct FAkEventData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.AnimBlendPointInfo
// Size: 0x30 (Inherited: 0x00)
struct FAnimBlendPointInfo {
	struct FVector2D GridLocation; // 0x00(0x08)
	struct TArray<enum class EAnimBlendDirection> AnimBlendArray; // 0x08(0x10)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Solarland.JetPackPoseSpeedRange
// Size: 0x08 (Inherited: 0x00)
struct FJetPackPoseSpeedRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Solarland.LeftHandGripConfig
// Size: 0x84 (Inherited: 0x00)
struct FLeftHandGripConfig {
	struct FRotator HandL; // 0x00(0x0c)
	struct FRotator Thumbl01; // 0x0c(0x0c)
	struct FRotator Thumbl02; // 0x18(0x0c)
	struct FRotator Index01; // 0x24(0x0c)
	struct FRotator Index02; // 0x30(0x0c)
	struct FRotator Middle01; // 0x3c(0x0c)
	struct FRotator Middle02; // 0x48(0x0c)
	struct FRotator Ring01; // 0x54(0x0c)
	struct FRotator Ring02; // 0x60(0x0c)
	struct FRotator Pinky01; // 0x6c(0x0c)
	struct FRotator Pinky02; // 0x78(0x0c)
};

// ScriptStruct Solarland.MeerkatConfig
// Size: 0x14 (Inherited: 0x00)
struct FMeerkatConfig {
	int32_t ID; // 0x00(0x04)
	float Min; // 0x04(0x04)
	float Max; // 0x08(0x04)
	int32_t Tolerance; // 0x0c(0x04)
	int32_t ProbeInterval; // 0x10(0x04)
};

// ScriptStruct Solarland.PreloadBundle
// Size: 0x10 (Inherited: 0x00)
struct FPreloadBundle {
	struct FName FolderPath; // 0x00(0x08)
	struct FName ClassName; // 0x08(0x08)
};

// ScriptStruct Solarland.SolarAttributeConfig
// Size: 0x0c (Inherited: 0x00)
struct FSolarAttributeConfig {
	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
	float BaseValue; // 0x08(0x04)
};

// ScriptStruct Solarland.SolarAttributeSubReplicateData
// Size: 0x08 (Inherited: 0x00)
struct FSolarAttributeSubReplicateData {
	int32_t AttributeID; // 0x00(0x04)
	float AttributeValue; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarAttributeSubModifierData
// Size: 0x18 (Inherited: 0x00)
struct FSolarAttributeSubModifierData {
	enum class EGameplayModOp ModifierOp; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Magnitude; // 0x04(0x04)
	bool bIsEnabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ModifierID; // 0x0c(0x04)
	struct FName ModifierName; // 0x10(0x08)
};

// ScriptStruct Solarland.AutoNavLinkSetting
// Size: 0x3c (Inherited: 0x00)
struct FAutoNavLinkSetting {
	float TraceLength; // 0x00(0x04)
	float MaxHeight; // 0x04(0x04)
	float MinDistSquard; // 0x08(0x04)
	float TestAgentHalfHeight; // 0x0c(0x04)
	float TestAgentRadius; // 0x10(0x04)
	float AgentPassSphereRadius; // 0x14(0x04)
	float MinPassWidth; // 0x18(0x04)
	float MaxStepHeight; // 0x1c(0x04)
	struct FVector FinalSnapExtent; // 0x20(0x0c)
	float ProjectNavigationError; // 0x2c(0x04)
	float VaultDetectDistance; // 0x30(0x04)
	float VaultDetectDeltaDistance; // 0x34(0x04)
	float VerticalError; // 0x38(0x04)
};

// ScriptStruct Solarland.BackpackTrailAssemblingParams
// Size: 0xa8 (Inherited: 0x08)
struct FBackpackTrailAssemblingParams : FTableRowBase {
	struct TSoftObjectPtr<UParticleSystem> TrailParticle; // 0x08(0x28)
	struct TSoftObjectPtr<UParticleSystem> WallRunTrailParticle; // 0x30(0x28)
	struct TSoftObjectPtr<UParticleSystem> OffgasParticle; // 0x58(0x28)
	struct TSoftObjectPtr<UParticleSystem> WallRunOffgasParticle; // 0x80(0x28)
};

// ScriptStruct Solarland.BackpackFXDataDTRow
// Size: 0x58 (Inherited: 0x08)
struct FBackpackFXDataDTRow : FTableRowBase {
	struct TMap<struct FName, struct FSoftObjectPath> FXPathMap; // 0x08(0x50)
};

// ScriptStruct Solarland.BotResponseSetting
// Size: 0x14 (Inherited: 0x00)
struct FBotResponseSetting {
	float PersonalCD; // 0x00(0x04)
	float TeamCD; // 0x04(0x04)
	float MinTimeDelay; // 0x08(0x04)
	float MaxTimeDelay; // 0x0c(0x04)
	float TriggeredProbability; // 0x10(0x04)
};

// ScriptStruct Solarland.BotEmojiSetting
// Size: 0x88 (Inherited: 0x00)
struct FBotEmojiSetting {
	struct TMap<int32_t, float> EmojiPool; // 0x00(0x50)
	struct FGameplayTagContainer TagsRequested; // 0x50(0x20)
	float PersonalCD; // 0x70(0x04)
	float TeamCD; // 0x74(0x04)
	float MinTimeDelay; // 0x78(0x04)
	float MaxTimeDelay; // 0x7c(0x04)
	float TriggeredProbability; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Solarland.SolarBotTeamInfo
// Size: 0xd0 (Inherited: 0x00)
struct FSolarBotTeamInfo {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TeamID; // 0x04(0x04)
	struct FVector TeamPosition; // 0x08(0x0c)
	float SeparateDistance; // 0x14(0x04)
	float ReturnDistance; // 0x18(0x04)
	bool bPlayerNeedPraise; // 0x1c(0x01)
	bool bHasInitByTeamConfig; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct TArray<struct FSolarBotMemberInfo> MemberInfos; // 0x20(0x10)
	struct TMap<enum class EBotInteractCondition, float> TeamEmojiTimeStamp; // 0x30(0x50)
	struct TMap<enum class EBotInteractCondition, float> TeamResponseTimeStamp; // 0x80(0x50)
};

// ScriptStruct Solarland.SolarBotMemberInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSolarBotMemberInfo {
	struct TWeakObjectPtr<struct ASolarBotAIController> BotController; // 0x00(0x08)
	enum class ESolarBotMemberState MemberState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<enum class EBotInteractCondition, float> MemberEmojiTimeStamp; // 0x10(0x50)
	struct TMap<enum class EBotInteractCondition, float> MemberResponseTimeStamp; // 0x60(0x50)
};

// ScriptStruct Solarland.SolarFuncBotSpawnParam
// Size: 0x50 (Inherited: 0x00)
struct FSolarFuncBotSpawnParam {
	struct ASolarFuncBotController* CtrlSubClass; // 0x00(0x08)
	struct ASolarCharacter* CharacterSubClass; // 0x08(0x08)
	int32_t CharacterId; // 0x10(0x04)
	int32_t SkinId; // 0x14(0x04)
	struct USolarBotAIConfig* ConfigPreset; // 0x18(0x08)
	struct FTransform SpawnTrans; // 0x20(0x30)
};

// ScriptStruct Solarland.BotFocusInfo
// Size: 0x18 (Inherited: 0x00)
struct FBotFocusInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.FeedBotStrategyInfo
// Size: 0x18 (Inherited: 0x00)
struct FFeedBotStrategyInfo {
	struct FString PlayerId; // 0x00(0x10)
	float FeedPriority; // 0x10(0x04)
	float Difficulty; // 0x14(0x04)
};

// ScriptStruct Solarland.PopTask
// Size: 0x60 (Inherited: 0x00)
struct FPopTask {
	struct TArray<struct ASolarPlayerState*> WarmBots; // 0x00(0x10)
	struct UEnvQuery* SeparateLocEQS; // 0x10(0x08)
	enum class EEnvQueryRunMode SeparateLocEQSRunMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FPopParameter PreSetting; // 0x20(0x40)
};

// ScriptStruct Solarland.PopParameter
// Size: 0x40 (Inherited: 0x00)
struct FPopParameter {
	struct TArray<struct ASolarPlayerState*> WarmTargets; // 0x00(0x10)
	struct FVector PopLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTraceRecord> TargetTraces; // 0x20(0x10)
	struct UEnvQuery* TeleportLocEQS; // 0x30(0x08)
	enum class EEnvQueryRunMode TeleportLocEQSRunMode; // 0x38(0x01)
	bool bPopVehicle; // 0x39(0x01)
	bool bForcePop; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct Solarland.TraceRecord
// Size: 0x10 (Inherited: 0x00)
struct FTraceRecord {
	struct TArray<struct FVector> TargetTrace; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarWeaponPartBonusDropSetting
// Size: 0x50 (Inherited: 0x00)
struct FSolarWeaponPartBonusDropSetting {
	struct TMap<enum class EWeaponPartType, float> PriorityMap; // 0x00(0x50)
};

// ScriptStruct Solarland.SolarItemProgressionBaseline
// Size: 0xc0 (Inherited: 0x08)
struct FSolarItemProgressionBaseline : FTableRowBase {
	float KeyTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class ESpecialItemID, struct FRangeInteger> ConsumeableItemCountSetting; // 0x10(0x50)
	struct FRangeInteger PlayerLevel; // 0x60(0x08)
	struct FRangeInteger ShieldLevel; // 0x68(0x08)
	struct TMap<int32_t, struct FRangeInteger> WeaponPartsLevel; // 0x70(0x50)
};

// ScriptStruct Solarland.RangeInteger
// Size: 0x08 (Inherited: 0x00)
struct FRangeInteger {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarBotTimelineGameSetting
// Size: 0x88 (Inherited: 0x08)
struct FSolarBotTimelineGameSetting : FTableRowBase {
	enum class ESolarBotWarmSystemType WarmSystemType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaxiumTeam; // 0x0c(0x04)
	struct FString Comment; // 0x10(0x10)
	struct UDataTable* Action; // 0x20(0x08)
	struct UDataTable* Item; // 0x28(0x08)
	struct UDataTable* Downsize; // 0x30(0x08)
	struct TMap<struct UDataTable*, float> ItemProgressionWeightMap; // 0x38(0x50)
};

// ScriptStruct Solarland.SolarBotTimelineDownsizingTrigger
// Size: 0x18 (Inherited: 0x08)
struct FSolarBotTimelineDownsizingTrigger : FTableRowBase {
	int32_t StartTime; // 0x08(0x04)
	int32_t EndTime; // 0x0c(0x04)
	int32_t Min; // 0x10(0x04)
	int32_t Max; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarBotTimelineUpdateItemTrigger
// Size: 0x100 (Inherited: 0x08)
struct FSolarBotTimelineUpdateItemTrigger : FTableRowBase {
	int32_t StartTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSolarBotTimelineAIItemSetting AIItemSetting; // 0x10(0xf0)
};

// ScriptStruct Solarland.SolarBotTimelineAIItemSetting
// Size: 0xf0 (Inherited: 0x00)
struct FSolarBotTimelineAIItemSetting {
	struct TMap<enum class ESolarBotTimelineEquipmentSettingType, struct FSolarBotTimelineEquipmentArray> Equipment; // 0x00(0x50)
	struct TMap<int32_t, struct FIntPoint> Consumable; // 0x50(0x50)
	struct TMap<enum class ESolarBotTimelineWeaponPartType, struct FSolarBotTimelineEquipmentArray> WeaponPart; // 0xa0(0x50)
};

// ScriptStruct Solarland.SolarBotTimelineEquipmentArray
// Size: 0x50 (Inherited: 0x00)
struct FSolarBotTimelineEquipmentArray {
	struct TMap<int32_t, int32_t> IDArray; // 0x00(0x50)
};

// ScriptStruct Solarland.SolarBotTimelineTrigger
// Size: 0x50 (Inherited: 0x08)
struct FSolarBotTimelineTrigger : FTableRowBase {
	enum class ESolarBotTimelineTriggerType TriggerType; // 0x08(0x01)
	char instanceID; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AbsoluteTriggerTime; // 0x0c(0x04)
	float RelativeTriggerTime; // 0x10(0x04)
	int32_t MinNumSurvivalBots; // 0x14(0x04)
	float ForceStartTime; // 0x18(0x04)
	float ForceEndTime; // 0x1c(0x04)
	struct FSolarBotTimelineFilter Filter; // 0x20(0x10)
	int32_t MaxNumRetry; // 0x30(0x04)
	float IntervalRetry; // 0x34(0x04)
	struct TArray<struct FSolarBotTimelineWave> Waves; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Solarland.SolarBotTimelineWave
// Size: 0x18 (Inherited: 0x00)
struct FSolarBotTimelineWave {
	struct TArray<struct FSolarBotTimelineAIGroupSetting> AIGroupSetting; // 0x00(0x10)
	enum class EPopLocationType PopLocationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Timeout; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarBotTimelineAIGroupSetting
// Size: 0x18 (Inherited: 0x00)
struct FSolarBotTimelineAIGroupSetting {
	struct TArray<struct FSolarBotAISetting> Group; // 0x00(0x10)
	bool bGetBestChoice; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Solarland.SolarBotAISetting
// Size: 0x170 (Inherited: 0x00)
struct FSolarBotAISetting {
	struct USolarBotAIConfig* BotConfigPreset; // 0x00(0x08)
	struct FSolarBotTimelineVehicleSetting VehicleInfo; // 0x08(0x18)
	int32_t CharacterId; // 0x20(0x04)
	int32_t SkinId; // 0x24(0x04)
	struct TMap<enum class ESolarBotTimelineAIDataSettingType, struct FIntPoint> AIDataSetting; // 0x28(0x50)
	struct FSolarBotTimelineAIItemSetting AIItemSetting; // 0x78(0xf0)
	bool bSetWarmTarget; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// ScriptStruct Solarland.SolarBotTimelineVehicleSetting
// Size: 0x18 (Inherited: 0x00)
struct FSolarBotTimelineVehicleSetting {
	bool bHasVehicle; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> VehicleIDs; // 0x08(0x10)
};

// ScriptStruct Solarland.SolarBotTimelineFilter
// Size: 0x10 (Inherited: 0x00)
struct FSolarBotTimelineFilter {
	struct TArray<struct FSolarBotTimelineFilterGroup> FilterGroup; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarBotTimelineFilterGroup
// Size: 0x10 (Inherited: 0x00)
struct FSolarBotTimelineFilterGroup {
	struct TArray<struct FSolarBotTimelineFilterItem> FilterItem; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarBotTimelineFilterItem
// Size: 0x58 (Inherited: 0x00)
struct FSolarBotTimelineFilterItem {
	enum class ESolarBotTimelineFilterType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class ESolarBotTimelineFilterParameterType, struct FString> Parameter; // 0x08(0x50)
};

// ScriptStruct Solarland.SolarBotWavePopSetting
// Size: 0x02 (Inherited: 0x00)
struct FSolarBotWavePopSetting {
	enum class EPopLocationType PopLocationType; // 0x00(0x01)
	bool bUsingWarmTargetForward; // 0x01(0x01)
};

// ScriptStruct Solarland.SolarBotTimelineTeleCenterSetting
// Size: 0x14 (Inherited: 0x00)
struct FSolarBotTimelineTeleCenterSetting {
	bool SetTeleCenter; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntPoint TeleportRadius; // 0x04(0x08)
	struct FIntPoint TeleportAngle; // 0x0c(0x08)
};

// ScriptStruct Solarland.SolarBotUseSniperPosConfig
// Size: 0x1c (Inherited: 0x00)
struct FSolarBotUseSniperPosConfig {
	int32_t MinNumSpawnerHasSearched; // 0x00(0x04)
	float MinElapsedReachedZone; // 0x04(0x04)
	float MinEnemyDistance; // 0x08(0x04)
	int32_t MinNumBeHitAbandonPos; // 0x0c(0x04)
	int32_t MaxDurationOccupyPos; // 0x10(0x04)
	float MaxDurationReachedPos; // 0x14(0x04)
	float IntervalUseNextPos; // 0x18(0x04)
};

// ScriptStruct Solarland.SolarBotBattleConfig
// Size: 0x158 (Inherited: 0x00)
struct FSolarBotBattleConfig {
	struct FBotFireConfig DefaultFireConfig; // 0x00(0x10)
	struct FBotFireConfig FireConfigToBot; // 0x10(0x10)
	struct TMap<enum class EWeaponType, struct FBotFireConfig> WeaponFireConfigs; // 0x20(0x50)
	struct TMap<enum class EWeaponType, struct FBotFireConfig> WeaponFireConfigsToBot; // 0x70(0x50)
	struct FBotFireConfig VehicleFireConfig; // 0xc0(0x10)
	struct FBotFireConfig VehicleFireConfigToBot; // 0xd0(0x10)
	bool bPreventFatalDamageToPlayer; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float DamageFactorToVehicle; // 0xe4(0x04)
	float DamageFactorToBotVehicle; // 0xe8(0x04)
	float DamageFactorToSummonItem; // 0xec(0x04)
	float DamageFactorToBotSummonItem; // 0xf0(0x04)
	float BotAIAttackRange; // 0xf4(0x04)
	float BotAIAttackRangeUnArm; // 0xf8(0x04)
	bool bEnableShootSimulator; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FSolarBotShootConfig DefaultShootConfig; // 0x100(0x58)
};

// ScriptStruct Solarland.SolarBotShootConfig
// Size: 0x58 (Inherited: 0x00)
struct FSolarBotShootConfig {
	enum class EBotFirePolicy FirePolicy; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FollowInterpSpeed; // 0x04(0x04)
	float AntiHorizRecoilStrenghth; // 0x08(0x04)
	float AntiVertRecoilStrenghth; // 0x0c(0x04)
	float LockHeightOffset; // 0x10(0x04)
	float AimInterpSpeed; // 0x14(0x04)
	float MaxFollowDeltaAngle; // 0x18(0x04)
	float MaxPreciseMoveAngle; // 0x1c(0x04)
	float RoughMoveMaxAngle; // 0x20(0x04)
	float FollowMoveSpeed; // 0x24(0x04)
	float PreciseMoveSpeed; // 0x28(0x04)
	float RoughMoveSpeed; // 0x2c(0x04)
	float LockMoveSpeed; // 0x30(0x04)
	float PreciseMoveDeviationYaw; // 0x34(0x04)
	float PreciseMoveDeviationPitch; // 0x38(0x04)
	float RoughMoveDeviationYaw; // 0x3c(0x04)
	float RoughMoveDeviationPitch; // 0x40(0x04)
	float LockMoveMaxDeltaYaw; // 0x44(0x04)
	float LockMoveMaxDeltaPitch; // 0x48(0x04)
	float RoughMoveReactionTime; // 0x4c(0x04)
	float PreciseMoveReactionTime; // 0x50(0x04)
	float MaxFollowUnreachTime; // 0x54(0x04)
};

// ScriptStruct Solarland.BotFireConfig
// Size: 0x10 (Inherited: 0x00)
struct FBotFireConfig {
	float ShootDisperse; // 0x00(0x04)
	float HitRate; // 0x04(0x04)
	float ActiveDamageRate; // 0x08(0x04)
	float ActiveDamageFactor; // 0x0c(0x04)
};

// ScriptStruct Solarland.SolarBotBattleConfigNew
// Size: 0xd8 (Inherited: 0x00)
struct FSolarBotBattleConfigNew {
	struct FBotFireConfig DefaultFireConfig; // 0x00(0x10)
	struct TArray<struct FBotSpecifiedFireConfig> SpecifiedFireConfigs; // 0x10(0x10)
	float DefaultFireLockRadius; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<enum class EBotShotTargetType, struct FRangeFloat> ShotLockRadiusMap; // 0x28(0x50)
	bool bPreventFatalDamageToPlayer; // 0x78(0x01)
	bool bEnableShootSimulator; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FSolarBotShootConfig DefaultShootConfig; // 0x7c(0x58)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Solarland.RangeFloat
// Size: 0x08 (Inherited: 0x00)
struct FRangeFloat {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Solarland.BotSpecifiedFireConfig
// Size: 0x14 (Inherited: 0x00)
struct FBotSpecifiedFireConfig {
	enum class EWeaponType UsedWeaponType; // 0x00(0x01)
	enum class EBotShotTargetCtlType TargetCtlType; // 0x01(0x01)
	enum class EBotShotTargetType TargetType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBotFireConfig FireConfig; // 0x04(0x10)
};

// ScriptStruct Solarland.SolarBotLootSearchConfig
// Size: 0x44 (Inherited: 0x00)
struct FSolarBotLootSearchConfig {
	float HPRatioToUseMedicine; // 0x00(0x04)
	float ShieldRatioToRecharge; // 0x04(0x04)
	float MaxSearchRangeNearbyPlayer; // 0x08(0x04)
	float MinSearchRangeNearbyPlayer; // 0x0c(0x04)
	float RadiusTolerance; // 0x10(0x04)
	struct FVector2D NearbyEnemyOuterFactorRange; // 0x14(0x08)
	struct FVector2D NearbyEnemyInnerFactorRange; // 0x1c(0x08)
	struct FVector2D NearbyEnemyCountRange; // 0x24(0x08)
	struct FVector2D NearbySpawnerOuterFactorRange; // 0x2c(0x08)
	struct FVector2D NearbySpawnerInnerFactorRange; // 0x34(0x08)
	struct FVector2D NearbySpawnerCountRange; // 0x3c(0x08)
};

// ScriptStruct Solarland.SolarBotLootWeaponFeedConfig
// Size: 0x20 (Inherited: 0x00)
struct FSolarBotLootWeaponFeedConfig {
	float MaxNoWeaponTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> FeedWeaponIDs; // 0x08(0x10)
	float CheckPlayerSightInterval; // 0x18(0x04)
	bool bStartFeedAfterSearchedAnySpawner; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Solarland.SolarBotLootValuationConfig
// Size: 0x44 (Inherited: 0x00)
struct FSolarBotLootValuationConfig {
	float MoveCostFactor; // 0x00(0x04)
	float DistSelfToSpawnerFactor; // 0x04(0x04)
	float DistSpawnerOffsetFactor; // 0x08(0x04)
	float AvgDistSpawnerToTeammatesFactor; // 0x0c(0x04)
	float AssualtRifleBaseValue; // 0x10(0x04)
	float ShotgunBaseValue; // 0x14(0x04)
	float SubmachinegunBaseValue; // 0x18(0x04)
	float SniperBaseValue; // 0x1c(0x04)
	float WeaponQualityValue; // 0x20(0x04)
	float AmmoBaseValue; // 0x24(0x04)
	float AmmoMatchFactor; // 0x28(0x04)
	float ShieldBaseValue; // 0x2c(0x04)
	float ShieldQualityValue; // 0x30(0x04)
	float JetpackModuleBaseValue; // 0x34(0x04)
	float JetpackModuleQualityValue; // 0x38(0x04)
	float MedkitBaseValue; // 0x3c(0x04)
	float MedkitHPRatioFactor; // 0x40(0x04)
};

// ScriptStruct Solarland.SolarBotThreatConfig
// Size: 0x70 (Inherited: 0x00)
struct FSolarBotThreatConfig {
	float ThreatUpdateInterval; // 0x00(0x04)
	float AttackTriggerThreshold; // 0x04(0x04)
	float CancelAttackTriggerThreshold; // 0x08(0x04)
	float SwitchTargetDifferenceValue; // 0x0c(0x04)
	float DistanceThreshold; // 0x10(0x04)
	float DistanceThresholdInSmoke; // 0x14(0x04)
	float SightLoseRange; // 0x18(0x04)
	float PeripheralVisionAngleDegrees; // 0x1c(0x04)
	float SightIncreaseBase; // 0x20(0x04)
	float SightIncreaseDistanceFactor; // 0x24(0x04)
	float SightDecreaseBase; // 0x28(0x04)
	float SightDecreaseDistanceFactor; // 0x2c(0x04)
	float SightDecreaseMax; // 0x30(0x04)
	float SightMaxValue; // 0x34(0x04)
	float HearingAddBase; // 0x38(0x04)
	float HearingAddDistanceFactor; // 0x3c(0x04)
	float HearingDecreasePerTick; // 0x40(0x04)
	float HearingMaxValue; // 0x44(0x04)
	float HitSoundAlertRange; // 0x48(0x04)
	float BotThreatFactor; // 0x4c(0x04)
	float PlayerThreatFactor; // 0x50(0x04)
	float DeathVergeFactor; // 0x54(0x04)
	float MassInvisibilityPrepareFactor; // 0x58(0x04)
	float MaxDistanceThreatFactor; // 0x5c(0x04)
	float DistanceThreatFactorDecayRate; // 0x60(0x04)
	float AccompanyThreatMaxValue; // 0x64(0x04)
	float AccompanyThreatAddBase; // 0x68(0x04)
	float AccompanyDecreasePerTick; // 0x6c(0x04)
};

// ScriptStruct Solarland.SolarBotSafeAreaConfig
// Size: 0x08 (Inherited: 0x00)
struct FSolarBotSafeAreaConfig {
	float EstimateAdjustFactor; // 0x00(0x04)
	float SafeAreaRadiusEx; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarBotSkyDivingConfig
// Size: 0x24 (Inherited: 0x00)
struct FSolarBotSkyDivingConfig {
	float DecisionAltitude; // 0x00(0x04)
	float RandomLandingRadius; // 0x04(0x04)
	float RandomDelayCancelFollow; // 0x08(0x04)
	float FollowAcceptDistance; // 0x0c(0x04)
	float AbandonCheckAltitude; // 0x10(0x04)
	float CheckEnemyRange; // 0x14(0x04)
	int32_t CheckEnemyCount; // 0x18(0x04)
	float OuterRandomLandingRadius; // 0x1c(0x04)
	float InnerRandomLandingRadius; // 0x20(0x04)
};

// ScriptStruct Solarland.SolarBotGameTeamSetting
// Size: 0x68 (Inherited: 0x08)
struct FSolarBotGameTeamSetting : FTableRowBase {
	struct TMap<struct USolarBotTeamConfig*, float> TeamConfigWeightMap; // 0x08(0x50)
	struct TArray<struct USolarBotAIConfig*> CandidateBotConfigs; // 0x58(0x10)
};

// ScriptStruct Solarland.SolarBotTeamBuildRule
// Size: 0x68 (Inherited: 0x00)
struct FSolarBotTeamBuildRule {
	struct FString Description; // 0x00(0x10)
	bool bIsHeroPickTypeRule; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<struct FGameplayTag, float> TagWeights; // 0x18(0x50)
};

// ScriptStruct Solarland.WarmBotDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FWarmBotDebugInfo {
	struct TArray<struct FActiveBotDebugInfo> PoppedBots; // 0x00(0x10)
};

// ScriptStruct Solarland.ActiveBotDebugInfo
// Size: 0x70 (Inherited: 0x00)
struct FActiveBotDebugInfo {
	struct FString BotName; // 0x00(0x10)
	bool bTeleSuccess; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t BotCharacterID; // 0x14(0x04)
	int32_t BotTeamID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString BotConfigName; // 0x20(0x10)
	struct FVector BotLocation; // 0x30(0x0c)
	struct FVector WarmTargetLocation; // 0x3c(0x0c)
	float DistanceToWarmTarget; // 0x48(0x04)
	struct FVector BotLocationOnTeleport; // 0x4c(0x0c)
	struct FVector WarmTargetLocationOnTeleport; // 0x58(0x0c)
	float DistanceToWarmTargetOnTeleport; // 0x64(0x04)
	bool bIsAlive; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Solarland.BotTeamDebugInfo
// Size: 0x18 (Inherited: 0x00)
struct FBotTeamDebugInfo {
	int32_t TeamID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FBotMemberDebugInfo> MemberDebugInfos; // 0x08(0x10)
};

// ScriptStruct Solarland.BotMemberDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FBotMemberDebugInfo {
	struct FVector MemberLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString IDStr; // 0x10(0x10)
	enum class ESolarBotMemberState MemberState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Solarland.TimeItemsSetting
// Size: 0xf8 (Inherited: 0x00)
struct FTimeItemsSetting {
	float TriggerTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSolarBotTimelineAIItemSetting Items; // 0x08(0xf0)
};

// ScriptStruct Solarland.WarmTargetState
// Size: 0x28 (Inherited: 0x00)
struct FWarmTargetState {
	float BoringValue; // 0x00(0x04)
	int32_t ServedTimes; // 0x04(0x04)
	bool bNeedWarmService; // 0x08(0x01)
	char KillPlayerNum; // 0x09(0x01)
	char KillBotNum; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float LastBattleTime; // 0x0c(0x04)
	int32_t CurTraceRecordIdx; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> TraceRecords; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTaskScoringItem
// Size: 0x50 (Inherited: 0x00)
struct FSolarTaskScoringItem {
	struct TMap<enum class ESolarTaskScoringItemType, float> ScoringItemMap; // 0x00(0x50)
};

// ScriptStruct Solarland.SolarScoringItemStruct
// Size: 0x14 (Inherited: 0x00)
struct FSolarScoringItemStruct {
	struct TWeakObjectPtr<struct ASolarBotAIController> BotController; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> RelativeActor; // 0x08(0x08)
	float Score; // 0x10(0x04)
};

// ScriptStruct Solarland.ByteBuffer
// Size: 0x28 (Inherited: 0x00)
struct FByteBuffer {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Solarland.CameraShakeInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraShakeInfo {
	struct FCameraShakeDuration Duration; // 0x00(0x08)
	float BlendIn; // 0x08(0x04)
	float BlendOut; // 0x0c(0x04)
};

// ScriptStruct Solarland.CameraShakeDuration
// Size: 0x08 (Inherited: 0x00)
struct FCameraShakeDuration {
	float Duration; // 0x00(0x04)
	enum class ECameraShakeDurationType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Solarland.CameraShakeStopParams
// Size: 0x01 (Inherited: 0x00)
struct FCameraShakeStopParams {
	bool bImmediately; // 0x00(0x01)
};

// ScriptStruct Solarland.CameraShakeUpdateResult
// Size: 0x5f0 (Inherited: 0x00)
struct FCameraShakeUpdateResult {
	char pad_0[0x5f0]; // 0x00(0x5f0)
};

// ScriptStruct Solarland.CameraShakeScrubParams
// Size: 0x660 (Inherited: 0x00)
struct FCameraShakeScrubParams {
	float AbsoluteTime; // 0x00(0x04)
	float ShakeScale; // 0x04(0x04)
	float DynamicScale; // 0x08(0x04)
	float BlendingWeight; // 0x0c(0x04)
	struct FMinimalViewInfo POV; // 0x10(0x650)
};

// ScriptStruct Solarland.CameraShakeUpdateParams
// Size: 0x660 (Inherited: 0x00)
struct FCameraShakeUpdateParams {
	float DeltaTime; // 0x00(0x04)
	float ShakeScale; // 0x04(0x04)
	float DynamicScale; // 0x08(0x04)
	float BlendingWeight; // 0x0c(0x04)
	struct FMinimalViewInfo POV; // 0x10(0x650)
};

// ScriptStruct Solarland.CameraShakeStartParams
// Size: 0x01 (Inherited: 0x00)
struct FCameraShakeStartParams {
	bool bIsRestarting; // 0x00(0x01)
};

// ScriptStruct Solarland.TeamFormationUnit
// Size: 0x50 (Inherited: 0x00)
struct FTeamFormationUnit {
	struct TMap<char, struct FEchelonFormationUnit> TeamFormation; // 0x00(0x50)
};

// ScriptStruct Solarland.EchelonFormationUnit
// Size: 0x10 (Inherited: 0x00)
struct FEchelonFormationUnit {
	struct TArray<struct FBoardingSpotInfo> EchelonFormation; // 0x00(0x10)
};

// ScriptStruct Solarland.BoardingSpotInfo
// Size: 0x20 (Inherited: 0x00)
struct FBoardingSpotInfo {
	struct FVector SpotLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ASolarPlayerState* BoardingPlayer; // 0x10(0x08)
	struct ASolarPlayerState* LeaderPlayer; // 0x18(0x08)
};

// ScriptStruct Solarland.UsingAirlineData
// Size: 0x44 (Inherited: 0x00)
struct FUsingAirlineData {
	int32_t MapID; // 0x00(0x04)
	struct FVector StartPoint; // 0x04(0x0c)
	struct FVector EndPoint; // 0x10(0x0c)
	struct FVector2D Direction; // 0x1c(0x08)
	float Speed; // 0x24(0x04)
	float Height; // 0x28(0x04)
	struct FVector CanParachutePoint; // 0x2c(0x0c)
	struct FVector ForceParachutePoint; // 0x38(0x0c)
};

// ScriptStruct Solarland.BoarderInfo
// Size: 0x10 (Inherited: 0x00)
struct FBoarderInfo {
	struct ASolarCharacter* Boarder; // 0x00(0x08)
	int32_t BoarderTeamID; // 0x08(0x04)
	int32_t BoarderTeamSize; // 0x0c(0x04)
};

// ScriptStruct Solarland.HotFixAntiCheatData
// Size: 0x04 (Inherited: 0x00)
struct FHotFixAntiCheatData {
	float BulletSpread; // 0x00(0x04)
};

// ScriptStruct Solarland.SoundEventRow
// Size: 0x30 (Inherited: 0x08)
struct FSoundEventRow : FTableRowBase {
	enum class ECharacterSoundOpt SoundOpt; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SoundName; // 0x10(0x10)
	struct FString EventName; // 0x20(0x10)
};

// ScriptStruct Solarland.CharacterSound
// Size: 0x30 (Inherited: 0x00)
struct FCharacterSound {
	struct FString SoundOptPlayer; // 0x00(0x10)
	struct FString SoundOptTeammate; // 0x10(0x10)
	struct FString SoundOptEnemy; // 0x20(0x10)
};

// ScriptStruct Solarland.SolarCharacterBillboardIconRuntimeInfo
// Size: 0x28 (Inherited: 0x00)
struct FSolarCharacterBillboardIconRuntimeInfo {
	char pad_0[0x18]; // 0x00(0x18)
	struct UStaticMeshComponent* Component; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Solarland.CamEffectSettings
// Size: 0x38 (Inherited: 0x00)
struct FCamEffectSettings {
	float FadeIn; // 0x00(0x04)
	float FadeOut; // 0x04(0x04)
	float Duration; // 0x08(0x04)
	bool bEnableOffset; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct UCurveVector* OffsetCurve; // 0x10(0x08)
	bool bEnableRotation; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UCurveVector* RotationCurve; // 0x20(0x08)
	bool bEnableFOV; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveFloat* FOVCurve; // 0x30(0x08)
};

// ScriptStruct Solarland.CameraSettings
// Size: 0x20 (Inherited: 0x00)
struct FCameraSettings {
	float DistanceToTarget; // 0x00(0x04)
	float CameraFOV; // 0x04(0x04)
	struct FVector TargetOffset; // 0x08(0x0c)
	struct FVector CameraOffset; // 0x14(0x0c)
};

// ScriptStruct Solarland.SolarTacticalSkillDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FSolarTacticalSkillDamageEvent : FSolarPointDamageEvent {
};

// ScriptStruct Solarland.SolarClassSkillDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FSolarClassSkillDamageEvent : FSolarPointDamageEvent {
};

// ScriptStruct Solarland.WeaponAbilityDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FWeaponAbilityDamageEvent : FSolarPointDamageEvent {
};

// ScriptStruct Solarland.VehicleAbilityDamageEvent
// Size: 0x130 (Inherited: 0x110)
struct FVehicleAbilityDamageEvent : FSolarPointDamageEvent {
	struct FString AbilityName; // 0x110(0x10)
	struct FString AbilityTextType; // 0x120(0x10)
};

// ScriptStruct Solarland.SummonWeaponDamageEvent
// Size: 0x118 (Inherited: 0x110)
struct FSummonWeaponDamageEvent : FSolarPointDamageEvent {
	struct TWeakObjectPtr<struct ASolarCharacter> SourceWeaponHolder; // 0x110(0x08)
};

// ScriptStruct Solarland.SolarWeaponDamageEvent
// Size: 0x120 (Inherited: 0x110)
struct FSolarWeaponDamageEvent : FSolarPointDamageEvent {
	int32_t weaponid; // 0x110(0x04)
	int32_t WeaponSkinID; // 0x114(0x04)
	int32_t WeaponLv; // 0x118(0x04)
	int32_t ItemID; // 0x11c(0x04)
};

// ScriptStruct Solarland.VehicleWeaponDamageEvent
// Size: 0x128 (Inherited: 0x120)
struct FVehicleWeaponDamageEvent : FSolarWeaponDamageEvent {
	int32_t VehicleID; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct Solarland.UnarmWeaponDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FUnarmWeaponDamageEvent : FSolarPointDamageEvent {
};

// ScriptStruct Solarland.VhicleExplosionDamageEvent
// Size: 0x118 (Inherited: 0x110)
struct FVhicleExplosionDamageEvent : FSolarPointDamageEvent {
	int32_t VehicleID; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct Solarland.VehicleHitDamageEvent
// Size: 0x118 (Inherited: 0x110)
struct FVehicleHitDamageEvent : FSolarPointDamageEvent {
	int32_t VehicleID; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct Solarland.SolarSystemDamage
// Size: 0x110 (Inherited: 0x110)
struct FSolarSystemDamage : FSolarPointDamageEvent {
};

// ScriptStruct Solarland.GMCmdDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FGMCmdDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.DeathVergeInWaterDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FDeathVergeInWaterDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.HelplessDeathVergeDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FHelplessDeathVergeDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.DyingDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FDyingDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.SolarAirDropDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FSolarAirDropDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.SolarBombDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FSolarBombDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.SolarPoisonDamageEvent
// Size: 0x110 (Inherited: 0x110)
struct FSolarPoisonDamageEvent : FSolarSystemDamage {
};

// ScriptStruct Solarland.SolarCharacterDeathEffectData
// Size: 0x70 (Inherited: 0x00)
struct FSolarCharacterDeathEffectData {
	struct FSoftObjectPath Path; // 0x00(0x18)
	struct FSoftObjectPath PathForOther; // 0x18(0x18)
	struct FTransform RelativeTransform; // 0x30(0x30)
	struct FName SocketName; // 0x60(0x08)
	bool bAttachToSocket; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Solarland.SolarGameplayEffectConfig
// Size: 0x10 (Inherited: 0x00)
struct FSolarGameplayEffectConfig {
	struct UGameplayEffect* GameplayEffectClass; // 0x00(0x08)
	bool bRemoveOnEnd; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Level; // 0x0c(0x04)
};

// ScriptStruct Solarland.SoundGroupClothSoundTableData
// Size: 0x18 (Inherited: 0x08)
struct FSoundGroupClothSoundTableData : FSoundGroupTableDataBase {
	struct FString SoundEvent; // 0x08(0x10)
};

// ScriptStruct Solarland.SoundGroupStepSoundTableData
// Size: 0x18 (Inherited: 0x08)
struct FSoundGroupStepSoundTableData : FSoundGroupTableDataBase {
	struct FString SoundEvent; // 0x08(0x10)
};

// ScriptStruct Solarland.TempUndesignedAttributeMap
// Size: 0x50 (Inherited: 0x00)
struct FTempUndesignedAttributeMap {
	struct TMap<struct FName, float> Value; // 0x00(0x50)
};

// ScriptStruct Solarland.TeammateHUDPreset
// Size: 0x20 (Inherited: 0x00)
struct FTeammateHUDPreset {
	struct UUserWidget* TeammateHUDClass; // 0x00(0x08)
	bool bUseDesireSize; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector2D DrawSize; // 0x0c(0x08)
	int32_t ZOrder; // 0x14(0x04)
	float DisplayMaxDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.InjectorMeshPreset
// Size: 0x50 (Inherited: 0x00)
struct FInjectorMeshPreset {
	struct FSoftObjectPath InjectorMeshPath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform InjectorRelativeTrans; // 0x20(0x30)
};

// ScriptStruct Solarland.VehicleRepairToolMeshPreset
// Size: 0x50 (Inherited: 0x00)
struct FVehicleRepairToolMeshPreset {
	struct FSoftObjectPath MeshPath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeTrans; // 0x20(0x30)
};

// ScriptStruct Solarland.TreasureBoxOperatorMeshPreset
// Size: 0x50 (Inherited: 0x00)
struct FTreasureBoxOperatorMeshPreset {
	struct FGameplayTag StaticOrnamentMeshTag; // 0x00(0x08)
	struct FSoftObjectPath TreasureBoxOperatorMeshPath; // 0x08(0x18)
	struct FTransform TreasureBoxOperatorRelativeTrans; // 0x20(0x30)
};

// ScriptStruct Solarland.OperatorMeshPreset
// Size: 0x120 (Inherited: 0x00)
struct FOperatorMeshPreset {
	struct TSoftObjectPtr<UParticleSystem> ShieldRepairFXResourceSoft; // 0x00(0x28)
	struct FVector ShieldRepairFXRelativeLocation; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct TSoftObjectPtr<UParticleSystem> ShieldMultiRecoverFXResourceSoft; // 0x38(0x28)
	struct FVector ShieldMultiRecoverFXRelativeLocation; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FSoftObjectPath ShieldOperatorMeshPath; // 0x70(0x18)
	struct FSoftObjectPath ShieldOperatorBigMeshPath; // 0x88(0x18)
	struct FTransform ShieldOperatorRelativeTrans; // 0xa0(0x30)
	struct FSoftObjectPath ShieldUpgradeOperatorMeshPath; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FTransform ShieldUpgradeOperatorRelativeTrans; // 0xf0(0x30)
};

// ScriptStruct Solarland.WaterEffectPreset
// Size: 0x50 (Inherited: 0x00)
struct FWaterEffectPreset {
	struct TSoftObjectPtr<UParticleSystem> EffectResource; // 0x00(0x28)
	struct FName DefaultTrackSocket; // 0x28(0x08)
	struct FName FTrackSocket; // 0x30(0x08)
	struct FName BTrackSocket; // 0x38(0x08)
	struct FName LTrackSocket; // 0x40(0x08)
	struct FName RTrackSocket; // 0x48(0x08)
};

// ScriptStruct Solarland.SkydivingEffectPreset
// Size: 0x70 (Inherited: 0x00)
struct FSkydivingEffectPreset {
	struct TSoftObjectPtr<UParticleSystem> EffectResource; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform AttachmentOffset; // 0x30(0x30)
	struct FName AttachmentSocket; // 0x60(0x08)
	enum class ESkydiveEffectLifetime LifeTime; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Solarland.BagRequirementData
// Size: 0x08 (Inherited: 0x00)
struct FBagRequirementData {
	int32_t ItemID; // 0x00(0x04)
	int32_t count; // 0x04(0x04)
};

// ScriptStruct Solarland.ReplicateBagGradeData
// Size: 0x18 (Inherited: 0x00)
struct FReplicateBagGradeData {
	int32_t BagGrade; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FReplicateBagGridData> BagGridDataArray; // 0x08(0x10)
};

// ScriptStruct Solarland.ReplicateBagGridData
// Size: 0xc8 (Inherited: 0x00)
struct FReplicateBagGridData {
	struct FSolarItemData ItemData; // 0x00(0xb8)
	enum class EBagGridType GridType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t BagGrade; // 0xbc(0x04)
	int32_t Index; // 0xc0(0x04)
	bool IsRequirementTag; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// ScriptStruct Solarland.ShieldEffect
// Size: 0x38 (Inherited: 0x00)
struct FShieldEffect {
	struct TSoftObjectPtr<UParticleSystem> ShieldEffect; // 0x00(0x28)
	struct FVector EffectScale; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.CharacterHitInfo
// Size: 0xb4 (Inherited: 0x00)
struct FCharacterHitInfo {
	enum class ESolarHitType HitType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x04(0x08)
	struct FHitResult HitResult; // 0x0c(0x88)
	struct FVector RelativeHitLocation; // 0x94(0x0c)
	struct TWeakObjectPtr<struct ASolarWeapon> WeaponCauser; // 0xa0(0x08)
	int32_t CauserWeaponID; // 0xa8(0x04)
	int32_t CauserWeaponSkinID; // 0xac(0x04)
	float Damage; // 0xb0(0x04)
};

// ScriptStruct Solarland.SingleCruiseParamForReplicated
// Size: 0x28 (Inherited: 0x00)
struct FSingleCruiseParamForReplicated {
	struct ASolarCharacter* CurrentCharacter; // 0x00(0x08)
	struct FVector StartLocation; // 0x08(0x0c)
	struct FVector EndLocation; // 0x14(0x0c)
	float FlyDuringTime; // 0x20(0x04)
	float StartTime; // 0x24(0x04)
};

// ScriptStruct Solarland.CharacterMovementSimulationOptions
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMovementSimulationOptions {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NetworkMaxSmoothUpdateDistance; // 0x04(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x08(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x0c(0x04)
};

// ScriptStruct Solarland.CharacterMovementNetworkOptions
// Size: 0x0c (Inherited: 0x00)
struct FCharacterMovementNetworkOptions {
	bool bEnabled; // 0x00(0x01)
	bool bServerAcceptClientAuthoritativePosition; // 0x01(0x01)
	bool bIgnoreClientMovementErrorChecksAndCorrection; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MaxLocationDifferenceToTrustClientMove; // 0x04(0x04)
	enum class EClientMoveTrustType ClientMoveTrustType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Solarland.SideDataParams
// Size: 0x20 (Inherited: 0x08)
struct FSideDataParams : FGameplayAbilityTargetData {
	struct FString SideName; // 0x08(0x10)
	char TeamID; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Solarland.CelebrateWinnerTargetData
// Size: 0x28 (Inherited: 0x08)
struct FCelebrateWinnerTargetData : FGameplayAbilityTargetData {
	struct UObject* FocusCharacter; // 0x08(0x08)
	float FocusRange; // 0x10(0x04)
	bool bValidReviveCenter; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector ReviveCenter; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.RadarSpawnParams
// Size: 0x18 (Inherited: 0x08)
struct FRadarSpawnParams : FGameplayAbilityTargetData {
	struct FVector SpawnLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.VehicleHitchingParams
// Size: 0x10 (Inherited: 0x08)
struct FVehicleHitchingParams : FGameplayAbilityTargetData {
	int32_t VehicleTypeID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.SingleCruiseData
// Size: 0x28 (Inherited: 0x08)
struct FSingleCruiseData : FGameplayAbilityTargetData {
	struct FVector StartLocation; // 0x08(0x0c)
	struct FVector EndLocation; // 0x14(0x0c)
	float During; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.ZiplineData
// Size: 0x18 (Inherited: 0x08)
struct FZiplineData : FGameplayAbilityTargetData {
	struct ASolarZiplineObj* ZiplineObj; // 0x08(0x08)
	enum class EZiplineSide BeginningSide; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Solarland.CustomJetFlyParams
// Size: 0x28 (Inherited: 0x08)
struct FCustomJetFlyParams : FGameplayAbilityTargetData {
	struct FVector_NetQuantizeNormal DashDirection; // 0x08(0x0c)
	float DashTime; // 0x14(0x04)
	float DashDistance; // 0x18(0x04)
	float DashBreakableTime; // 0x1c(0x04)
	float DashCameraFadeOutTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.DanceData
// Size: 0x10 (Inherited: 0x08)
struct FDanceData : FGameplayAbilityTargetData {
	int32_t DanceID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.HitRecoverData
// Size: 0x28 (Inherited: 0x08)
struct FHitRecoverData : FGameplayAbilityTargetData {
	float StartTime; // 0x08(0x04)
	struct FVector StartLocation; // 0x0c(0x0c)
	struct FVector Direction; // 0x18(0x0c)
	enum class EHitRecoverType Type; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Solarland.GrapplingHookData
// Size: 0x18 (Inherited: 0x08)
struct FGrapplingHookData : FGameplayAbilityTargetData {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Solarland.WallRunJumpData
// Size: 0x28 (Inherited: 0x08)
struct FWallRunJumpData : FGameplayAbilityTargetData {
	struct FVector EndLocation; // 0x08(0x0c)
	struct FRotator EndRotation; // 0x14(0x0c)
	bool bWallRunFailed; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Solarland.VaultData
// Size: 0x40 (Inherited: 0x08)
struct FVaultData : FGameplayAbilityTargetData {
	struct FVector AnchorLocation; // 0x08(0x0c)
	struct FRotator AnchorRotation; // 0x14(0x0c)
	struct FVector LandLocation; // 0x20(0x0c)
	enum class EVaultType VaultType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float CameraAngle; // 0x30(0x04)
	float CharacterAngle; // 0x34(0x04)
	bool bAuto; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Solarland.WallRunData
// Size: 0x40 (Inherited: 0x40)
struct FWallRunData : FVaultData {
};

// ScriptStruct Solarland.VectorParams
// Size: 0x18 (Inherited: 0x08)
struct FVectorParams : FGameplayAbilityTargetData {
	struct FVector VectorParam; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.BlinkParams
// Size: 0x28 (Inherited: 0x08)
struct FBlinkParams : FGameplayAbilityTargetData {
	struct FVector ThrowLoc; // 0x08(0x0c)
	struct FVector ThrowDir; // 0x14(0x0c)
	float PredictTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.MissileSwarmParams
// Size: 0x20 (Inherited: 0x08)
struct FMissileSwarmParams : FGameplayAbilityTargetData {
	struct FVector AimStart; // 0x08(0x0c)
	struct FRotator ViewRot; // 0x14(0x0c)
};

// ScriptStruct Solarland.SkywardDiveParams
// Size: 0x10 (Inherited: 0x08)
struct FSkywardDiveParams : FGameplayAbilityTargetData {
	struct TWeakObjectPtr<struct AActor> SkywardDiveLauncherActor; // 0x08(0x08)
};

// ScriptStruct Solarland.LaunchParams
// Size: 0x20 (Inherited: 0x08)
struct FLaunchParams : FGameplayAbilityTargetData {
	struct FVector LaunchVelocity; // 0x08(0x0c)
	bool bXYOverride; // 0x14(0x01)
	bool bZOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct AActor* JumpPadActor; // 0x18(0x08)
};

// ScriptStruct Solarland.CrouchData
// Size: 0x10 (Inherited: 0x08)
struct FCrouchData : FGameplayAbilityTargetData {
	bool bCanCrouchOnFalling; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Solarland.MeleeAttackParams
// Size: 0x10 (Inherited: 0x08)
struct FMeleeAttackParams : FGameplayAbilityTargetData {
	int32_t MeleeIndex; // 0x08(0x04)
	bool bFullBody; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Solarland.BoltParams
// Size: 0x10 (Inherited: 0x08)
struct FBoltParams : FGameplayAbilityTargetData {
	int32_t FireMode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.FireParams
// Size: 0x10 (Inherited: 0x08)
struct FFireParams : FGameplayAbilityTargetData {
	int32_t FireMode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.EquipParams
// Size: 0x10 (Inherited: 0x08)
struct FEquipParams : FGameplayAbilityTargetData {
	int32_t WeaponSlot; // 0x08(0x04)
	float SwitchTime; // 0x0c(0x04)
};

// ScriptStruct Solarland.PickUpAbilityParams
// Size: 0x20 (Inherited: 0x08)
struct FPickUpAbilityParams : FGameplayAbilityTargetData {
	float HeightDifferenceToItem; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SoundEventName; // 0x10(0x10)
};

// ScriptStruct Solarland.ChunkAssignRule
// Size: 0x18 (Inherited: 0x00)
struct FChunkAssignRule {
	struct FString FullPath; // 0x00(0x10)
	int32_t ChunkID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SafeAreaInfoBase
// Size: 0x18 (Inherited: 0x00)
struct FSafeAreaInfoBase {
	struct FVector Location; // 0x00(0x0c)
	float WaitTime; // 0x0c(0x04)
	float ShrinkTime; // 0x10(0x04)
	float DamageValue; // 0x14(0x04)
};

// ScriptStruct Solarland.CircleSafeAreaInfo
// Size: 0x1c (Inherited: 0x18)
struct FCircleSafeAreaInfo : FSafeAreaInfoBase {
	float Radius; // 0x18(0x04)
};

// ScriptStruct Solarland.HeroClassConfig
// Size: 0x38 (Inherited: 0x00)
struct FHeroClassConfig {
	struct TSoftObjectPtr<UPassiveSkillDataAsset> SpecificPassiveSkill; // 0x00(0x28)
	float HPGridUnit; // 0x28(0x04)
	bool bEnableCombatRegeneration; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t RegenGrids; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.ClassInfo
// Size: 0x70 (Inherited: 0x08)
struct FClassInfo : FTableRowBase {
	enum class EClassType ClassType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ClassName; // 0x0c(0x04)
	struct FSoftObjectPath ClassIcon; // 0x10(0x18)
	struct USkillConfig* SkillOne; // 0x28(0x08)
	struct USkillConfig* SkillTwo; // 0x30(0x08)
	struct TSoftObjectPtr<UPassiveSkillDataAsset> InitPassiveSkill; // 0x38(0x28)
	struct TArray<struct FClassLevelUpRewardConfig> LevelUpBonus; // 0x60(0x10)
};

// ScriptStruct Solarland.ClassLevelUpRewardConfig
// Size: 0x38 (Inherited: 0x00)
struct FClassLevelUpRewardConfig {
	int32_t TargetLevel; // 0x00(0x04)
	enum class EClassLevelUpRewardType RewardType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TSoftObjectPtr<UPassiveSkillDataAsset> TargetPassiveSkill; // 0x08(0x28)
	struct FClassLevelUpPropertyRewardConfig PropertyReward; // 0x30(0x08)
};

// ScriptStruct Solarland.ClassLevelUpPropertyRewardConfig
// Size: 0x08 (Inherited: 0x00)
struct FClassLevelUpPropertyRewardConfig {
	enum class ESolarTablesEnum_BattleUpgradeEffectType EffectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t EffectValue; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarDamageTextData
// Size: 0x14 (Inherited: 0x00)
struct FSolarDamageTextData {
	struct TWeakObjectPtr<struct USolarTextBlock> Text; // 0x00(0x08)
	struct TWeakObjectPtr<struct UWidgetAnimation> Animation; // 0x08(0x08)
	bool bEnableDamageSpecialAnimation; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Solarland.SolarDamageTextIconData
// Size: 0x28 (Inherited: 0x00)
struct FSolarDamageTextIconData {
	struct TArray<struct UImage*> Icons; // 0x00(0x10)
	struct TWeakObjectPtr<struct UImage> Outline; // 0x10(0x08)
	struct TWeakObjectPtr<struct UCanvasPanel> Panel; // 0x18(0x08)
	struct TWeakObjectPtr<struct UWidgetAnimation> Animation; // 0x20(0x08)
};

// ScriptStruct Solarland.SolarDamageTextOffsetData
// Size: 0x0c (Inherited: 0x00)
struct FSolarDamageTextOffsetData {
	float HitHeightOffset; // 0x00(0x04)
	struct FVector2D DisplayPositionOffset; // 0x04(0x08)
};

// ScriptStruct Solarland.SolarDamageTextGroupData
// Size: 0x30 (Inherited: 0x00)
struct FSolarDamageTextGroupData {
	struct TArray<struct TWeakObjectPtr<struct USolarDamageTextSlotWidget>> FloatDamageTextSlotWidgets; // 0x00(0x10)
	struct TWeakObjectPtr<struct USolarDamageTextSlotWidget> StackDamageTextSlotWidget; // 0x10(0x08)
	int32_t HitCount; // 0x18(0x04)
	int32_t CurrentDisplayIndex; // 0x1c(0x04)
	struct TWeakObjectPtr<struct USolarDamageTextSlotWidget> PendingDamageTextSlotWidget; // 0x20(0x08)
	int32_t DamageCount; // 0x28(0x04)
	bool bFirstDisplay; // 0x2c(0x01)
	char ReferenceTimes; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Solarland.SolarDamageTextSlotInfo
// Size: 0x118 (Inherited: 0x00)
struct FSolarDamageTextSlotInfo {
	int32_t Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSolarDamageTextStyle DamageTextStyle; // 0x08(0xa0)
	enum class ESolarDamageTextType DamageTextType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FSolarDamageTextColor DamageTextColor; // 0xb0(0x68)
};

// ScriptStruct Solarland.SolarDamageTextColor
// Size: 0x68 (Inherited: 0x00)
struct FSolarDamageTextColor {
	struct FSlateColor FontColor; // 0x00(0x28)
	struct FLinearColor ShadowColor; // 0x28(0x10)
	struct FLinearColor IconColor; // 0x38(0x10)
	struct FLinearColor OutlineColor; // 0x48(0x10)
	struct FLinearColor IconOutlineColor; // 0x58(0x10)
};

// ScriptStruct Solarland.SolarDamageTextStyle
// Size: 0xa0 (Inherited: 0x00)
struct FSolarDamageTextStyle {
	struct FText DamageText; // 0x00(0x18)
	struct FSlateFontInfo Font; // 0x18(0x60)
	struct FVector2D ShadowOffset; // 0x78(0x08)
	struct FMargin Margin; // 0x80(0x10)
	struct TArray<struct FSolarDamageTextColor> Colors; // 0x90(0x10)
};

// ScriptStruct Solarland.VehicleSeatWidgets
// Size: 0x18 (Inherited: 0x00)
struct FVehicleSeatWidgets {
	struct USolarCheckBox* CheckBox_Seat; // 0x00(0x08)
	struct USolarCheckBox* CheckBox_SeatExpand; // 0x08(0x08)
	struct UImage* Img_SwitchIcon; // 0x10(0x08)
};

// ScriptStruct Solarland.VehicleWeaponFireWidgets
// Size: 0x38 (Inherited: 0x00)
struct FVehicleWeaponFireWidgets {
	struct USolarMovablePad* VehicleFirePad; // 0x00(0x08)
	struct UImage* VehicleFireIcon; // 0x08(0x08)
	struct USolarTextBlock* Txt_FireType; // 0x10(0x08)
	struct UProgressBar* VehicleFireCDProgress; // 0x18(0x08)
	struct USolarTextBlock* Txt_VehicleFireCD; // 0x20(0x08)
	struct USolarMovablePad* QuickAdsFirePad; // 0x28(0x08)
	struct UImage* QuickAdsFireIcon; // 0x30(0x08)
};

// ScriptStruct Solarland.PoolRefreshInfo
// Size: 0x08 (Inherited: 0x00)
struct FPoolRefreshInfo {
	int32_t PoolGroupID; // 0x00(0x04)
	float PoolRefreshTime; // 0x04(0x04)
};

// ScriptStruct Solarland.ElectricShopSection
// Size: 0x18 (Inherited: 0x00)
struct FElectricShopSection {
	struct TArray<struct FElectricShopItem> Items; // 0x00(0x10)
	float CoolDownDuration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.ElectricShopCDRecord
// Size: 0x20 (Inherited: 0x00)
struct FElectricShopCDRecord {
	int32_t ProductID; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	float EndWorldTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString BuyerID; // 0x10(0x10)
};

// ScriptStruct Solarland.ElectricShopItemDemoRow
// Size: 0x30 (Inherited: 0x08)
struct FElectricShopItemDemoRow : FTableRowBase {
	struct TSoftClassPtr<UObject> ItemDemoBP; // 0x08(0x28)
};

// ScriptStruct Solarland.ElectricShopMeshRow
// Size: 0x20 (Inherited: 0x08)
struct FElectricShopMeshRow : FTableRowBase {
	struct FSoftObjectPath Mesh; // 0x08(0x18)
};

// ScriptStruct Solarland.MatUpdateParams
// Size: 0x20 (Inherited: 0x00)
struct FMatUpdateParams {
	struct FName MatParam; // 0x00(0x08)
	struct UCurveBase* MatCurve; // 0x08(0x08)
	struct UCurveBase* MatCurveEnemy; // 0x10(0x08)
	bool bCanComplete; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Solarland.CharacterSkydiveTrailData
// Size: 0x60 (Inherited: 0x00)
struct FCharacterSkydiveTrailData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Solarland.PackedSkydiveTrailFrameInfoContainer
// Size: 0x120 (Inherited: 0x108)
struct FPackedSkydiveTrailFrameInfoContainer : FFastArraySerializer {
	struct TArray<struct FPackedSkydiveTrailFrameInfo> InfoArray; // 0x108(0x10)
	struct ASolarFlyTrail* Owner; // 0x118(0x08)
};

// ScriptStruct Solarland.PackedSkydiveTrailFrameInfo
// Size: 0x30 (Inherited: 0x0c)
struct FPackedSkydiveTrailFrameInfo : FFastArraySerializerItem {
	float Timestamp; // 0x0c(0x04)
	struct TArray<struct FSkydiveTrailFrameInfo> FrameInfos; // 0x10(0x10)
	struct TArray<struct ASolarPlayerState*> FinishedPlayerStates; // 0x20(0x10)
};

// ScriptStruct Solarland.SkydiveTrailFrameInfo
// Size: 0x20 (Inherited: 0x00)
struct FSkydiveTrailFrameInfo {
	struct ASolarPlayerState* OwnerPlayerState; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
};

// ScriptStruct Solarland.CharacterSkydiveTrailStaticInfoContainer
// Size: 0x120 (Inherited: 0x108)
struct FCharacterSkydiveTrailStaticInfoContainer : FFastArraySerializer {
	struct TArray<struct FCharacterSkydiveTrailStaticInfo> InfoArray; // 0x108(0x10)
	struct ASolarFlyTrail* Owner; // 0x118(0x08)
};

// ScriptStruct Solarland.CharacterSkydiveTrailStaticInfo
// Size: 0x38 (Inherited: 0x0c)
struct FCharacterSkydiveTrailStaticInfo : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CharacterId; // 0x10(0x10)
	struct ASolarPlayerState* PlayerState; // 0x20(0x08)
	struct FString TrailAssemblingId; // 0x28(0x10)
};

// ScriptStruct Solarland.VehicleDetector
// Size: 0x18 (Inherited: 0x00)
struct FVehicleDetector {
	struct FRotator VehicleLocalRotator; // 0x00(0x0c)
	struct FVector StartLocParameter; // 0x0c(0x0c)
};

// ScriptStruct Solarland.FuncCharacterBackpackInfo
// Size: 0x08 (Inherited: 0x00)
struct FFuncCharacterBackpackInfo {
	int32_t BagId; // 0x00(0x04)
	int32_t TailFlameId; // 0x04(0x04)
};

// ScriptStruct Solarland.AntiCheatData
// Size: 0x70 (Inherited: 0x00)
struct FAntiCheatData {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Solarland.SolarGameMode_DropItemData
// Size: 0x08 (Inherited: 0x00)
struct FSolarGameMode_DropItemData {
	int32_t ID; // 0x00(0x04)
	int32_t count; // 0x04(0x04)
};

// ScriptStruct Solarland.SCustomMode_GameModeSetting
// Size: 0x68 (Inherited: 0x00)
struct FSCustomMode_GameModeSetting {
	struct FSoftObjectPath PlayerControllerClass; // 0x00(0x18)
	struct FSoftObjectPath DefaultPawnClass; // 0x18(0x18)
	struct FSoftObjectPath PlayerStateClass; // 0x30(0x18)
	struct FSoftObjectPath HUDClass; // 0x48(0x18)
	int32_t SettlementStageConfigID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Solarland.SGameMode_LevelConfig
// Size: 0x78 (Inherited: 0x00)
struct FSGameMode_LevelConfig {
	struct FString Name; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	struct FSoftObjectPath LevelMap; // 0x20(0x18)
	int32_t MiniMapId; // 0x38(0x04)
	bool IsStreaming; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FSolarElementGroupPath> ElementGroups; // 0x40(0x10)
	struct TSoftClassPtr<UObject> LoadingUI; // 0x50(0x28)
};

// ScriptStruct Solarland.SolarElementGroupPath
// Size: 0x30 (Inherited: 0x00)
struct FSolarElementGroupPath {
	struct FString Name; // 0x00(0x10)
	struct FSoftObjectPath ElementLevel; // 0x10(0x18)
	bool LoadWithLevel; // 0x28(0x01)
	bool bPersistentLevel; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Solarland.GameMode_ElementStruct
// Size: 0x220 (Inherited: 0x08)
struct FGameMode_ElementStruct : FTableRowBase {
	struct FString ElementID; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FString Side; // 0x28(0x10)
	struct FString Job; // 0x38(0x10)
	struct TArray<struct FName> Tags; // 0x48(0x10)
	struct TMap<struct FString, bool> PropertiesBool; // 0x58(0x50)
	struct TMap<struct FString, int32_t> PropertiesInt; // 0xa8(0x50)
	struct TMap<struct FString, float> PropertiesFloat; // 0xf8(0x50)
	struct TMap<struct FString, struct FString> PropertiesString; // 0x148(0x50)
	struct FName ElementTypeName; // 0x198(0x08)
	struct FString BP_Path; // 0x1a0(0x10)
	struct FVector Location; // 0x1b0(0x0c)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FQuat Rotation; // 0x1c0(0x10)
	struct FVector Scale; // 0x1d0(0x0c)
	enum class EElementStateType State; // 0x1dc(0x01)
	enum class EElementVisibilityType Visibility; // 0x1dd(0x01)
	char pad_1DE[0x2]; // 0x1de(0x02)
	int32_t OutcomeID; // 0x1e0(0x04)
	struct FBox SpawnerBox; // 0x1e4(0x1c)
	bool bRefresh; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float RefreshTime; // 0x204(0x04)
	bool bUseSpawnerTransform; // 0x208(0x01)
	bool bToTheGround; // 0x209(0x01)
	char pad_20A[0x2]; // 0x20a(0x02)
	int32_t SpawnID; // 0x20c(0x04)
	int32_t Zone; // 0x210(0x04)
	enum class ESGameMode_ElementType Type; // 0x214(0x01)
	char pad_215[0xb]; // 0x215(0x0b)
};

// ScriptStruct Solarland.SolarElementGroup
// Size: 0x20 (Inherited: 0x00)
struct FSolarElementGroup {
	struct FString GroupKey; // 0x00(0x10)
	bool bIsDefault; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UDataTable* ElementTable; // 0x18(0x08)
};

// ScriptStruct Solarland.StatDataValue
// Size: 0x98 (Inherited: 0x00)
struct FStatDataValue {
	float FloatValue; // 0x00(0x04)
	bool BoolValue; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString StringValue; // 0x08(0x10)
	struct TMap<int32_t, float> IntfloatValue; // 0x18(0x50)
	struct TArray<int32_t> IntArrayValue; // 0x68(0x10)
	struct TArray<float> FloatArrayValue; // 0x78(0x10)
	struct FVector Vector; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Solarland.AbilityMeshMontage
// Size: 0x10 (Inherited: 0x00)
struct FAbilityMeshMontage {
	struct USkeletalMeshComponent* Mesh; // 0x00(0x08)
	struct UAnimMontage* Montage; // 0x08(0x08)
};

// ScriptStruct Solarland.GraphicsSettingsRange
// Size: 0x18 (Inherited: 0x00)
struct FGraphicsSettingsRange {
	struct FRangeData AdaptationUIValue; // 0x00(0x08)
	struct FRangeData FOVRange; // 0x08(0x08)
	struct FRangeData BrightnessRange; // 0x10(0x08)
};

// ScriptStruct Solarland.SensitivitySettingsRange
// Size: 0x120 (Inherited: 0x00)
struct FSensitivitySettingsRange {
	struct FRangeData Sensitivity_CurveScale; // 0x00(0x08)
	struct FRangeData Sensitivity_Free; // 0x08(0x08)
	struct FRangeData Sensitivity_SecondarySkills; // 0x10(0x08)
	struct FRangeData Sensitivity_SuperSkills; // 0x18(0x08)
	struct FCameraSensitivityRangeData Sensitivity_NoShoot; // 0x20(0x40)
	struct FCameraSensitivityRangeData Sensitivity_Shoot; // 0x60(0x40)
	struct FVehicleCameraSensitivityRangeData Sensitivity_Vehicle_NoShoot; // 0xa0(0x18)
	struct FVehicleCameraSensitivityRangeData Sensitivity_Vehicle_Shoot; // 0xb8(0x18)
	struct FRangeData Sensitivity_VehicleDriver; // 0xd0(0x08)
	struct FRangeData Sensitivity_VehicleFire; // 0xd8(0x08)
	struct FGyroscopeSensitivityRangeData Sensitivity_GyroscopeData; // 0xe0(0x40)
};

// ScriptStruct Solarland.GyroscopeSensitivityRangeData
// Size: 0x40 (Inherited: 0x00)
struct FGyroscopeSensitivityRangeData {
	struct FRangeData GyroscopeSensitivity_Basic; // 0x00(0x08)
	struct FRangeData GyroscopeSensitivity_Shoulder; // 0x08(0x08)
	struct FRangeData GyroscopeSensitivity_RedPoint; // 0x10(0x08)
	struct FRangeData GyroscopeSensitivity_Lens_Two; // 0x18(0x08)
	struct FRangeData GyroscopeSensitivity_Lens_Three; // 0x20(0x08)
	struct FRangeData GyroscopeSensitivity_Lens_Four; // 0x28(0x08)
	struct FRangeData GyroscopeSensitivity_Lens_Six; // 0x30(0x08)
	struct FRangeData GyroscopeSensitivity_Lens_Eight; // 0x38(0x08)
};

// ScriptStruct Solarland.VehicleCameraSensitivityRangeData
// Size: 0x18 (Inherited: 0x00)
struct FVehicleCameraSensitivityRangeData {
	struct FRangeData Sensitivity_Lens_Two; // 0x00(0x08)
	struct FRangeData Sensitivity_Lens_Four; // 0x08(0x08)
	struct FRangeData Sensitivity_Lens_Eight; // 0x10(0x08)
};

// ScriptStruct Solarland.CameraSensitivityRangeData
// Size: 0x40 (Inherited: 0x00)
struct FCameraSensitivityRangeData {
	struct FRangeData Sensitivity_Basic; // 0x00(0x08)
	struct FRangeData Sensitivity_Shoulder; // 0x08(0x08)
	struct FRangeData Sensitivity_RedPoint; // 0x10(0x08)
	struct FRangeData Sensitivity_Lens_Two; // 0x18(0x08)
	struct FRangeData Sensitivity_Lens_Three; // 0x20(0x08)
	struct FRangeData Sensitivity_Lens_Four; // 0x28(0x08)
	struct FRangeData Sensitivity_Lens_Six; // 0x30(0x08)
	struct FRangeData Sensitivity_Lens_Eight; // 0x38(0x08)
};

// ScriptStruct Solarland.SoundSettingsRange
// Size: 0x20 (Inherited: 0x00)
struct FSoundSettingsRange {
	struct FRangeData Sound_Global; // 0x00(0x08)
	struct FRangeData Sound_Action; // 0x08(0x08)
	struct FRangeData Sound_BackGround; // 0x10(0x08)
	struct FRangeData Sound_Character; // 0x18(0x08)
};

// ScriptStruct Solarland.GamepadSettingsRange
// Size: 0x10 (Inherited: 0x00)
struct FGamepadSettingsRange {
	struct FRangeData MainHorizontalSensitivity; // 0x00(0x08)
	struct FRangeData MainVerticalSensitivity; // 0x08(0x08)
};

// ScriptStruct Solarland.MouseAndKeyboardSettingsRange
// Size: 0x08 (Inherited: 0x00)
struct FMouseAndKeyboardSettingsRange {
	struct FRangeData MainSensitivity; // 0x00(0x08)
};

// ScriptStruct Solarland.PlayerStatesInTeam
// Size: 0x10 (Inherited: 0x00)
struct FPlayerStatesInTeam {
	struct TArray<struct ASolarPlayerState*> PlayerStates; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarGameStatisticsLogHeadInfo
// Size: 0x28 (Inherited: 0x00)
struct FSolarGameStatisticsLogHeadInfo {
	int32_t BattleInstanceId; // 0x00(0x04)
	int32_t PIEInstance; // 0x04(0x04)
	struct FString BattleID; // 0x08(0x10)
	struct FString WorldName; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarGameStatisticsData
// Size: 0x28 (Inherited: 0x00)
struct FSolarGameStatisticsData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Solarland.ShadowDetailLevelData
// Size: 0x18 (Inherited: 0x08)
struct FShadowDetailLevelData : FTableRowBase {
	enum class ESolarSunlightShadowDetailLevel SunlightShadowDetailLevelEnum; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ShadowQualityValue; // 0x0c(0x04)
	int32_t MaxCSMResolution; // 0x10(0x04)
	float ShadowDistanceScale; // 0x14(0x04)
};

// ScriptStruct Solarland.ResolutionData
// Size: 0x18 (Inherited: 0x08)
struct FResolutionData : FTableRowBase {
	enum class ESolarResolution ResolutionEnum; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Width; // 0x0c(0x04)
	int32_t Height; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SymmetricRangeFloat
// Size: 0x0c (Inherited: 0x00)
struct FSymmetricRangeFloat {
	struct FRangeFloat Range; // 0x00(0x08)
	bool bSymmetric; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Solarland.ColorGradingItem
// Size: 0x5d0 (Inherited: 0x00)
struct FColorGradingItem {
	enum class ESolarColorTheme ColorTheme; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FPostProcessSettings PPSettings; // 0x10(0x5c0)
};

// ScriptStruct Solarland.MaxQualityConfig
// Size: 0x50 (Inherited: 0x00)
struct FMaxQualityConfig {
	struct TMap<enum class ESolarGraphicsQualityLevel, enum class ESolarFrameRateLevel> CurQualityToMaxFrameRateLevel; // 0x00(0x50)
};

// ScriptStruct Solarland.FrameRateLevelItem
// Size: 0x10 (Inherited: 0x00)
struct FFrameRateLevelItem {
	enum class ESolarFrameRateLevel FrameRateLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrameRateLobby; // 0x04(0x04)
	float FrameRateInGame; // 0x08(0x04)
	float FrameRatePC; // 0x0c(0x04)
};

// ScriptStruct Solarland.ContentScaleFactorLevelItem
// Size: 0x58 (Inherited: 0x00)
struct FContentScaleFactorLevelItem {
	enum class ESolarContentScaleFactorLevel ContentScaleFactorLevel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class ESolarDeviceLevel, float> DeviceLevelContentScaleFactorMap; // 0x08(0x50)
};

// ScriptStruct Solarland.SolarDamageInfo
// Size: 0x40 (Inherited: 0x00)
struct FSolarDamageInfo {
	struct AActor* TargetActor; // 0x00(0x08)
	struct AActor* SourceActor; // 0x08(0x08)
	struct AActor* DamageCauserActor; // 0x10(0x08)
	float OriginalDamage; // 0x18(0x04)
	float OriginalDamageForVehicle; // 0x1c(0x04)
	char pad_20[0x4]; // 0x20(0x04)
	enum class ESCMDamageType DamageType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DamageRadial; // 0x28(0x04)
	char bRadialIgnoreCollision : 1; // 0x2c(0x01)
	char bRadialIgnoreVehicle : 1; // 0x2c(0x01)
	char bEnableSelfDamage : 1; // 0x2c(0x01)
	char bCheckSourceToTargetCollision : 1; // 0x2c(0x01)
	char bApplyToSource : 1; // 0x2c(0x01)
	char bJustForShield : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float ExplosionMinDistance; // 0x30(0x04)
	float ExplosionMaxDistance; // 0x34(0x04)
	struct UCurveFloat* ExplosionDistanceScaleCurve; // 0x38(0x08)
};

// ScriptStruct Solarland.HomeShaderData
// Size: 0xa0 (Inherited: 0x00)
struct FHomeShaderData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Solarland.HomeActorQueueData
// Size: 0x78 (Inherited: 0x00)
struct FHomeActorQueueData {
	enum class EHomeOperationType Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FHomeActorServerData Data; // 0x08(0x68)
	enum class EHomeLoadingChangeType LoadingType; // 0x70(0x04)
	bool bOnConstruct; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct Solarland.HomeActorServerData
// Size: 0x68 (Inherited: 0x00)
struct FHomeActorServerData {
	int32_t ItemID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ThisID; // 0x08(0x10)
	enum class EHomeActorOwner Owner; // 0x18(0x04)
	bool isPreview; // 0x1c(0x01)
	bool isDelete; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FVector CurLocation; // 0x20(0x0c)
	struct FRotator CurRotation; // 0x2c(0x0c)
	struct TArray<struct FBuildMeshSlotData> FacesMatData; // 0x38(0x10)
	struct FString ParentObject; // 0x48(0x10)
	struct TArray<struct FString> ChildObjects; // 0x58(0x10)
};

// ScriptStruct Solarland.BuildMeshSlotData
// Size: 0x20 (Inherited: 0x00)
struct FBuildMeshSlotData {
	struct FString SlotName; // 0x00(0x10)
	struct FString TexturesID; // 0x10(0x10)
};

// ScriptStruct Solarland.HomeOriginalShader
// Size: 0x28 (Inherited: 0x00)
struct FHomeOriginalShader {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Solarland.HomeActorStaticData
// Size: 0x38 (Inherited: 0x00)
struct FHomeActorStaticData {
	int64_t ItemID; // 0x00(0x08)
	enum class EHomeActor_FirstType FirstType; // 0x08(0x04)
	enum class EHomeActor_SecondType SecondType; // 0x0c(0x04)
	bool IsBrace; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Icon; // 0x18(0x10)
	struct FString BpPath; // 0x28(0x10)
};

// ScriptStruct Solarland.HomeBuildReqData
// Size: 0x48 (Inherited: 0x00)
struct FHomeBuildReqData {
	int32_t ItemID; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FBuildMeshSlotData> MatDataArr; // 0x20(0x10)
	struct FString ParentThisID; // 0x30(0x10)
	bool IsSelected; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Solarland.BaseSpaceData
// Size: 0x0c (Inherited: 0x00)
struct FBaseSpaceData {
	int32_t Layer; // 0x00(0x04)
	enum class EHomeActor_SecondType BaseSpaceType; // 0x04(0x04)
	bool IsOccupied; // 0x08(0x01)
	bool IsShow; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Solarland.HomeCameraMoveData
// Size: 0xa0 (Inherited: 0x00)
struct FHomeCameraMoveData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Solarland.CameraTransitionData
// Size: 0x0c (Inherited: 0x00)
struct FCameraTransitionData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Solarland.HomeCameraModeData
// Size: 0x40 (Inherited: 0x00)
struct FHomeCameraModeData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Solarland.CameraMovementParameters
// Size: 0x68 (Inherited: 0x00)
struct FCameraMovementParameters {
	float OneFingerMoveScale; // 0x00(0x04)
	float MouseMoveScale; // 0x04(0x04)
	float OneFingerZoomScale; // 0x08(0x04)
	float MouseZoomScale; // 0x0c(0x04)
	float DoubleFingerSpinScale; // 0x10(0x04)
	float DoubleFingerPitchScale; // 0x14(0x04)
	float MouseRotateScale; // 0x18(0x04)
	float LookAtLocationHeigh; // 0x1c(0x04)
	float MinPitch; // 0x20(0x04)
	float MaxPitch; // 0x24(0x04)
	float PanoramicDefaultPitch; // 0x28(0x04)
	float homeCameraBoundary; // 0x2c(0x04)
	struct UCurveFloat* DistanceCurve; // 0x30(0x08)
	float DefultTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* DistanceCurve_Orthographic; // 0x40(0x08)
	float DefaultTime_Orthographic; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* LayerTransitionCurve; // 0x50(0x08)
	struct UCurveFloat* CeilingTransitionCurve; // 0x58(0x08)
	struct UCurveFloat* PanoramicTransitionCurve; // 0x60(0x08)
};

// ScriptStruct Solarland.HomeIcon
// Size: 0x38 (Inherited: 0x08)
struct FHomeIcon : FTableRowBase {
	struct FSoftObjectPath NormalIconPath; // 0x08(0x18)
	struct FSoftObjectPath SelectedIconPath; // 0x20(0x18)
};

// ScriptStruct Solarland.BuildMeshData
// Size: 0x30 (Inherited: 0x00)
struct FBuildMeshData {
	int64_t ItemID; // 0x00(0x08)
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	struct TArray<struct FBuildMeshSlotData> DefaultMat; // 0x20(0x10)
};

// ScriptStruct Solarland.HomeObject
// Size: 0xc0 (Inherited: 0x08)
struct FHomeObject : FTableRowBase {
	struct FString HomeObjectDesc; // 0x08(0x10)
	struct FSoftObjectPath BpPath; // 0x18(0x18)
	struct FSoftObjectPath PreviewBpPath; // 0x30(0x18)
	struct TArray<struct FBuildMeshSlotData> DefaultMat; // 0x48(0x10)
	bool IsFocusCenter; // 0x58(0x01)
	bool IsDrawable; // 0x59(0x01)
	bool IsRotate; // 0x5a(0x01)
	bool IsBrace; // 0x5b(0x01)
	bool IsRotateHandle; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t RotateAngleSingle; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FSoftObjectPath Build_SFPath; // 0x68(0x18)
	struct FSoftObjectPath Remove_SFXPath; // 0x80(0x18)
	float FRemove_SFXTime; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString FSBuild_Audio; // 0xa0(0x10)
	struct FString FSRemove_Audio; // 0xb0(0x10)
};

// ScriptStruct Solarland.HomePic
// Size: 0x20 (Inherited: 0x08)
struct FHomePic : FTableRowBase {
	struct FSoftObjectPath PicPath; // 0x08(0x18)
};

// ScriptStruct Solarland.HomeObjectTexture
// Size: 0x78 (Inherited: 0x08)
struct FHomeObjectTexture : FTableRowBase {
	struct FString TextureDesc; // 0x08(0x10)
	struct FSoftObjectPath BaseColorPath; // 0x18(0x18)
	struct FSoftObjectPath MetalPath; // 0x30(0x18)
	struct FSoftObjectPath LightmapPath; // 0x48(0x18)
	struct FSoftObjectPath NormalPath; // 0x60(0x18)
};

// ScriptStruct Solarland.ThrusterState
// Size: 0xc8 (Inherited: 0x00)
struct FThrusterState {
	char pad_0[0x38]; // 0x00(0x38)
	struct FHitResult TouchGroundHit; // 0x38(0x88)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct Solarland.ThrusterData
// Size: 0x3c (Inherited: 0x00)
struct FThrusterData {
	float HoverHeightMultiplierInForward; // 0x00(0x04)
	float HoverHeightMultiplierInBackward; // 0x04(0x04)
	float HoverHeightMultiplierInLeft; // 0x08(0x04)
	float HoverHeightMultiplierInRight; // 0x0c(0x04)
	bool bRaiseDust; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DustEffectScale; // 0x14(0x04)
	struct FVector DustEffectOffest; // 0x18(0x0c)
	struct FName ThrusterSocket; // 0x24(0x08)
	struct FVector ThrusterOffsetIfNoValidSocket; // 0x2c(0x0c)
	float SweepRadius; // 0x38(0x04)
};

// ScriptStruct Solarland.SolarClientPerformance
// Size: 0x01 (Inherited: 0x00)
struct FSolarClientPerformance {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solarland.CountDownInfoDeprecated
// Size: 0x30 (Inherited: 0x00)
struct FCountDownInfoDeprecated {
	int32_t TextID; // 0x00(0x04)
	float Time; // 0x04(0x04)
	bool bShowBtn; // 0x08(0x01)
	char pad_9[0x27]; // 0x09(0x27)
};

// ScriptStruct Solarland.SolarInputActionEntry
// Size: 0x18 (Inherited: 0x00)
struct FSolarInputActionEntry {
	struct UInputAction* InputAction; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Solarland.InputHandler
// Size: 0x20 (Inherited: 0x00)
struct FInputHandler {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Solarland.TouchHandler
// Size: 0x180 (Inherited: 0x20)
struct FTouchHandler : FInputHandler {
	char pad_20[0x78]; // 0x20(0x78)
	struct UCurveFloat* HorizCurve; // 0x98(0x08)
	struct UCurveFloat* VertCurve; // 0xa0(0x08)
	char pad_A8[0x28]; // 0xa8(0x28)
	struct UCurveFloat* DistHorizCurve; // 0xd0(0x08)
	struct UCurveFloat* DistVertCurve; // 0xd8(0x08)
	char pad_E0[0xa0]; // 0xe0(0xa0)
};

// ScriptStruct Solarland.SolarInputModeUIOnly
// Size: 0x30 (Inherited: 0x10)
struct FSolarInputModeUIOnly : FSolarInputModeDataBase {
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct Solarland.SolarInputModeGameAndUI
// Size: 0x30 (Inherited: 0x10)
struct FSolarInputModeGameAndUI : FSolarInputModeDataBase {
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct Solarland.SolarInputModeGameOnly
// Size: 0x20 (Inherited: 0x10)
struct FSolarInputModeGameOnly : FSolarInputModeDataBase {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Solarland.RadarStationCollection
// Size: 0x18 (Inherited: 0x00)
struct FRadarStationCollection {
	int32_t Zone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ASolarRadarStation*> AllRadarStations; // 0x08(0x10)
};

// ScriptStruct Solarland.SyncBurstItemParam
// Size: 0x28 (Inherited: 0x00)
struct FSyncBurstItemParam {
	struct FVector_NetQuantize StartLoc; // 0x00(0x0c)
	struct FVector_NetQuantize MediumLoc; // 0x0c(0x0c)
	struct FVector_NetQuantize EndLoc; // 0x18(0x0c)
	float BurstLocalHeight; // 0x24(0x04)
};

// ScriptStruct Solarland.SolarShieldItemShopDataArray
// Size: 0x130 (Inherited: 0x108)
struct FSolarShieldItemShopDataArray : FFastArraySerializer {
	struct TArray<struct FSolarShieldItemShopDataEntry> Elements; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
};

// ScriptStruct Solarland.SolarShieldItemShopDataEntry
// Size: 0x20 (Inherited: 0x0c)
struct FSolarShieldItemShopDataEntry : FFastArraySerializerItem {
	struct FVector_NetQuantize Pos; // 0x0c(0x0c)
	int32_t Uid; // 0x18(0x04)
	char InteractState; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Solarland.SolarIntArray
// Size: 0x130 (Inherited: 0x108)
struct FSolarIntArray : FFastArraySerializer {
	struct TArray<struct FSolarIntEntry> Elements; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
};

// ScriptStruct Solarland.SolarIntEntry
// Size: 0x10 (Inherited: 0x0c)
struct FSolarIntEntry : FFastArraySerializerItem {
	int32_t IntProperty; // 0x0c(0x04)
};

// ScriptStruct Solarland.ItemActorDTRow
// Size: 0xa0 (Inherited: 0x08)
struct FItemActorDTRow : FTableRowBase {
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	struct FSoftObjectPath FXPath; // 0x20(0x18)
	struct TArray<struct FSoftObjectPath> MaterialPath; // 0x38(0x10)
	struct TArray<struct FSoftObjectPath> OutLineMaterialPath; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x30)
	float SpawnOffset; // 0x90(0x04)
	float NoneMeshFxOffset; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Solarland.ItemResReference
// Size: 0x48 (Inherited: 0x08)
struct FItemResReference : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FSoftObjectPath Icon; // 0x18(0x18)
	struct FSoftObjectPath AbilityBP; // 0x30(0x18)
};

// ScriptStruct Solarland.DeathBoxItemData
// Size: 0x08 (Inherited: 0x00)
struct FDeathBoxItemData {
	int32_t ItemID; // 0x00(0x04)
	int32_t ItemNum; // 0x04(0x04)
};

// ScriptStruct Solarland.LoadedItemInfo
// Size: 0xd0 (Inherited: 0x00)
struct FLoadedItemInfo {
	struct FSoftClassPath SClassPath; // 0x00(0x18)
	struct FSolarItemData ItemData; // 0x18(0xb8)
};

// ScriptStruct Solarland.FinalDropDataCollection
// Size: 0x10 (Inherited: 0x00)
struct FFinalDropDataCollection {
	struct TArray<struct FSolarItemData> Datas; // 0x00(0x10)
};

// ScriptStruct Solarland.OutcomeDataCollection
// Size: 0x10 (Inherited: 0x00)
struct FOutcomeDataCollection {
	struct TArray<struct FOutcomeData> Datas; // 0x00(0x10)
};

// ScriptStruct Solarland.OutcomeData
// Size: 0x1a8 (Inherited: 0x00)
struct FOutcomeData {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> Contents; // 0x08(0x10)
	enum class ESpawnStage SpawnStage; // 0x18(0x01)
	enum class EOutcomeType OutcomeType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TMap<int32_t, int32_t> OutcomePools; // 0x20(0x50)
	struct TMap<int32_t, int32_t> OutcomeDynamicWeights; // 0x70(0x50)
	struct TMap<int32_t, int32_t> OutcomeSubWeights; // 0xc0(0x50)
	int32_t PoolTotalWeight; // 0x110(0x04)
	int32_t PoolOutcomeID; // 0x114(0x04)
	int32_t MaxTimes; // 0x118(0x04)
	int32_t MinTimes; // 0x11c(0x04)
	int32_t SpawnerID; // 0x120(0x04)
	int32_t NetSetTimes; // 0x124(0x04)
	int32_t DropedTimes; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TMap<int32_t, struct FOutcomeContentData> ContentDatas; // 0x130(0x50)
	bool IsValid; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	int32_t GlobalDropTimes; // 0x184(0x04)
	struct TArray<struct FOutcomeTypeLimitData> LimitTypeDatas; // 0x188(0x10)
	struct TArray<struct FOutcomeIDLimitData> LimitIDDatas; // 0x198(0x10)
};

// ScriptStruct Solarland.OutcomeIDLimitData
// Size: 0x20 (Inherited: 0x00)
struct FOutcomeIDLimitData {
	struct TArray<int32_t> LimitIDs; // 0x00(0x10)
	int32_t MinTimes; // 0x10(0x04)
	int32_t MaxTimes; // 0x14(0x04)
	int32_t CurrDropTimes; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.OutcomeTypeLimitData
// Size: 0x10 (Inherited: 0x00)
struct FOutcomeTypeLimitData {
	enum class EItemType LimitType; // 0x00(0x04)
	int32_t MinTimes; // 0x04(0x04)
	int32_t MaxTimes; // 0x08(0x04)
	int32_t CurrDropTimes; // 0x0c(0x04)
};

// ScriptStruct Solarland.OutcomeContentData
// Size: 0x38 (Inherited: 0x00)
struct FOutcomeContentData {
	int32_t ID; // 0x00(0x04)
	int32_t ItemID; // 0x04(0x04)
	int32_t Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> RandomNums; // 0x10(0x10)
	int32_t MaxTimes; // 0x20(0x04)
	int32_t MinTimes; // 0x24(0x04)
	int32_t RelatedContentID; // 0x28(0x04)
	enum class EItemType ItemType; // 0x2c(0x04)
	int32_t DropedTimes; // 0x30(0x04)
	bool IsValid; // 0x34(0x01)
	bool IsDeleted; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct Solarland.SimpleDropItemDataCollection
// Size: 0x50 (Inherited: 0x00)
struct FSimpleDropItemDataCollection {
	struct TMap<int32_t, int32_t> Datas; // 0x00(0x50)
};

// ScriptStruct Solarland.ItemBurstParam
// Size: 0x1c (Inherited: 0x00)
struct FItemBurstParam {
	float BurstRadius; // 0x00(0x04)
	float BurstRadiusRandScale; // 0x04(0x04)
	float BurstLocalHeight; // 0x08(0x04)
	float BurstEulerAngle; // 0x0c(0x04)
	bool bBurstSplitItem; // 0x10(0x01)
	enum class EBurstMethod BurstMethod; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float RadSafeSlopeToBurstOn; // 0x14(0x04)
	float GoldenSpiralMinRadiusSquared; // 0x18(0x04)
};

// ScriptStruct Solarland.GlobalOutcomeData
// Size: 0x80 (Inherited: 0x00)
struct FGlobalOutcomeData {
	int32_t ID; // 0x00(0x04)
	int32_t SingleMaxTimes; // 0x04(0x04)
	int32_t TotalMaxTimes; // 0x08(0x04)
	int32_t TotalMinTimes; // 0x0c(0x04)
	int32_t NetSetTimes; // 0x10(0x04)
	int32_t DropedTimes; // 0x14(0x04)
	struct TMap<int32_t, int32_t> ItemIDNumMap; // 0x18(0x50)
	struct TArray<int32_t> AffectedOutcomes; // 0x68(0x10)
	bool IsValid; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Solarland.SolarItemDataArray
// Size: 0x118 (Inherited: 0x108)
struct FSolarItemDataArray : FFastArraySerializer {
	struct TArray<struct FSolarItemData> ItemDatas; // 0x108(0x10)
};

// ScriptStruct Solarland.SolarItemSpawnerArray
// Size: 0x10 (Inherited: 0x00)
struct FSolarItemSpawnerArray {
	struct TArray<struct ASolarItemSpawner*> ItemSpawnerArray; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarVehicleData
// Size: 0x18 (Inherited: 0x00)
struct FSolarVehicleData {
	int32_t VehicleID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString VehicleBP; // 0x08(0x10)
};

// ScriptStruct Solarland.ItemResourceTableRow
// Size: 0x50 (Inherited: 0x08)
struct FItemResourceTableRow : FTableRowBase {
	struct FSoftObjectPath Icon; // 0x08(0x18)
	struct FSoftObjectPath BigIcon; // 0x20(0x18)
	struct FSoftObjectPath PreviewIcon; // 0x38(0x18)
};

// ScriptStruct Solarland.PakDownloadInfo
// Size: 0x10 (Inherited: 0x00)
struct FPakDownloadInfo {
	struct FString Filename; // 0x00(0x10)
};

// ScriptStruct Solarland.ServerInfo
// Size: 0x50 (Inherited: 0x00)
struct FServerInfo {
	struct TArray<struct FGateAddress> GateList; // 0x00(0x10)
	struct TArray<struct FString> CDNList; // 0x10(0x10)
	struct FString LatestBuildVersion; // 0x20(0x10)
	struct FString SourceBuildVersion; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
};

// ScriptStruct Solarland.GateAddress
// Size: 0x20 (Inherited: 0x00)
struct FGateAddress {
	struct FString GateTCPAddr; // 0x00(0x10)
	struct FString GateUDPAddr; // 0x10(0x10)
};

// ScriptStruct Solarland.SolarLandscapeListenerConfig
// Size: 0x10 (Inherited: 0x00)
struct FSolarLandscapeListenerConfig {
	bool bListenLandscape; // 0x00(0x01)
	enum class OnLSModifiedStrategy LSModifiedStrategy; // 0x01(0x01)
	bool bAdjustRotate; // 0x02(0x01)
	enum class OnLSDestroyStrategy LSDestroyStrategy; // 0x03(0x01)
	struct FVector FreeFallBoxExtent; // 0x04(0x0c)
};

// ScriptStruct Solarland.LayoutDataEntry
// Size: 0x60 (Inherited: 0x00)
struct FLayoutDataEntry {
	struct FName WidgetName; // 0x00(0x08)
	struct FLayoutDataElement MobileLayoutData; // 0x08(0x2c)
	struct FLayoutDataElement DesktopLayoutData; // 0x34(0x2c)
};

// ScriptStruct Solarland.LayoutDataElement
// Size: 0x2c (Inherited: 0x00)
struct FLayoutDataElement {
	struct FAnchorData LayoutData; // 0x00(0x2c)
};

// ScriptStruct Solarland.LeggedVehiclePostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FLeggedVehiclePostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Solarland.VehicleFootIKState
// Size: 0x1a0 (Inherited: 0x00)
struct FVehicleFootIKState {
	char pad_0[0x1a0]; // 0x00(0x1a0)
};

// ScriptStruct Solarland.VehicleIKGroupData
// Size: 0x08 (Inherited: 0x00)
struct FVehicleIKGroupData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.VehicleFootIKData
// Size: 0x64 (Inherited: 0x00)
struct FVehicleFootIKData {
	struct FName LegBoneName; // 0x00(0x08)
	struct FName FootBoneName; // 0x08(0x08)
	struct FName FootVirtualBoneName; // 0x10(0x08)
	struct FName FootVirtualBoneForGround; // 0x18(0x08)
	struct FName FootIKBoneName; // 0x20(0x08)
	float FootHorizontalOffsetAfterBroken; // 0x28(0x04)
	float FootVerticalOffsetAfterBroken; // 0x2c(0x04)
	float FootUnderWaterOffset; // 0x30(0x04)
	float RaiseDustEffectScale; // 0x34(0x04)
	float BrokenFootMultiplier; // 0x38(0x04)
	struct FVector FootBoneOffset; // 0x3c(0x0c)
	struct FName ParentBone; // 0x48(0x08)
	int32_t GroupIndex; // 0x50(0x04)
	float StepDistanceMultiplier; // 0x54(0x04)
	float StepDistanceMultiplierForVelocity; // 0x58(0x04)
	float MinVelocityDegreeForStepDistance; // 0x5c(0x04)
	float MaxVelocityDegreeForStepDistance; // 0x60(0x04)
};

// ScriptStruct Solarland.VehicleLocomotionData
// Size: 0x1c (Inherited: 0x00)
struct FVehicleLocomotionData {
	float Speed; // 0x00(0x04)
	float Acceleration; // 0x04(0x04)
	float Deceleration; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
	float RotateFriction; // 0x10(0x04)
	float RotationSpeed; // 0x14(0x04)
	float MovementDegree; // 0x18(0x04)
};

// ScriptStruct Solarland.PSAttachElem
// Size: 0x38 (Inherited: 0x00)
struct FPSAttachElem {
	struct FSoftObjectPath ParticleSystemPath; // 0x00(0x18)
	struct FName SocketName; // 0x18(0x08)
	struct FVector LocationOffset; // 0x20(0x0c)
	struct FRotator RotationOffset; // 0x2c(0x0c)
};

// ScriptStruct Solarland.CharacterTransformData
// Size: 0x24 (Inherited: 0x00)
struct FCharacterTransformData {
	struct FVector CharacterOffset; // 0x00(0x0c)
	struct FRotator CharacterRot; // 0x0c(0x0c)
	struct FVector CharacterScale; // 0x18(0x0c)
};

// ScriptStruct Solarland.LootZonePath
// Size: 0x10 (Inherited: 0x00)
struct FLootZonePath {
	struct ASolarLootZone* To; // 0x00(0x08)
	float MoveCost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.ItemSpawnerGraphNode
// Size: 0x10 (Inherited: 0x00)
struct FItemSpawnerGraphNode {
	struct TArray<struct FItemSpawnerPath> Paths; // 0x00(0x10)
};

// ScriptStruct Solarland.ItemSpawnerPath
// Size: 0x10 (Inherited: 0x00)
struct FItemSpawnerPath {
	struct ASolarItemSpawner* To; // 0x00(0x08)
	float MoveCost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.SolarMapElementProperty
// Size: 0x28 (Inherited: 0x00)
struct FSolarMapElementProperty {
	struct FString Name; // 0x00(0x10)
	enum class ESolarMapElementPropertyType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct Solarland.BattlePromptData
// Size: 0x18 (Inherited: 0x00)
struct FBattlePromptData {
	char MaxLength; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FBattlePromptElem> BattlePromptElemArr; // 0x08(0x10)
};

// ScriptStruct Solarland.BattlePromptElem
// Size: 0x28 (Inherited: 0x00)
struct FBattlePromptElem {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EBattlePromptType RealType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector CacheLoc; // 0x0c(0x0c)
	float Distance; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	float DestroyTime; // 0x20(0x04)
	float ReplaceTime; // 0x24(0x04)
};

// ScriptStruct Solarland.SkydivingMapDataElem
// Size: 0x34 (Inherited: 0x00)
struct FSkydivingMapDataElem {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector CacheLoc; // 0x08(0x0c)
	struct FVector2D MapLoc; // 0x14(0x08)
	struct FRotator Rotate; // 0x1c(0x0c)
	struct FVector2D Position; // 0x28(0x08)
	float RotationOffset; // 0x30(0x04)
};

// ScriptStruct Solarland.CircleData
// Size: 0x1c (Inherited: 0x00)
struct FCircleData {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	struct FLinearColor LineColor; // 0x0c(0x10)
};

// ScriptStruct Solarland.DotLineData
// Size: 0x20 (Inherited: 0x00)
struct FDotLineData {
	struct AActor* StartActor; // 0x00(0x08)
	struct AActor* EndActor; // 0x08(0x08)
	struct FLinearColor DotLineColor; // 0x10(0x10)
};

// ScriptStruct Solarland.MiniMapAirlineData
// Size: 0x30 (Inherited: 0x00)
struct FMiniMapAirlineData {
	enum class EMapAirlineType AirlineType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D StartPoint; // 0x04(0x08)
	struct FVector2D EndPoint; // 0x0c(0x08)
	struct FVector2D RealStartPoint; // 0x14(0x08)
	struct FVector2D RealEndPoint; // 0x1c(0x08)
	struct FVector2D AirlineDir; // 0x24(0x08)
	float AirlineLength; // 0x2c(0x04)
};

// ScriptStruct Solarland.SafeAreaMapInfo
// Size: 0x38 (Inherited: 0x00)
struct FSafeAreaMapInfo {
	struct FVector CurrentLocation; // 0x00(0x0c)
	float CurrentRadius; // 0x0c(0x04)
	struct FVector NextLocation; // 0x10(0x0c)
	float NextRadius; // 0x1c(0x04)
	float BeginShrinkTime; // 0x20(0x04)
	float TargetShrinkTime; // 0x24(0x04)
	float CurrentConfigRadius; // 0x28(0x04)
	struct FVector CurrentAreaBeginLocation; // 0x2c(0x0c)
};

// ScriptStruct Solarland.VehicleData
// Size: 0x10 (Inherited: 0x00)
struct FVehicleData {
	float Speed1; // 0x00(0x04)
	float Fov1; // 0x04(0x04)
	float Speed2; // 0x08(0x04)
	float Fov2; // 0x0c(0x04)
};

// ScriptStruct Solarland.MapData
// Size: 0x3c (Inherited: 0x00)
struct FMapData {
	struct FVector2D MapTopLeftCoord; // 0x00(0x08)
	struct FVector2D MapRightBottomCoord; // 0x08(0x08)
	struct FVector2D MapImageSize; // 0x10(0x08)
	int32_t MapImage; // 0x18(0x04)
	float AirlineZ; // 0x1c(0x04)
	float HorizonLineZ; // 0x20(0x04)
	float TopZ; // 0x24(0x04)
	float BottomZ; // 0x28(0x04)
	float AverageZ; // 0x2c(0x04)
	float InitFogZ; // 0x30(0x04)
	float TargetFogZ; // 0x34(0x04)
	float MapFOV; // 0x38(0x04)
};

// ScriptStruct Solarland.MapDarkData
// Size: 0x30 (Inherited: 0x00)
struct FMapDarkData {
	int32_t SrcMapID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SrcImagePath; // 0x08(0x10)
	int32_t SizeX; // 0x18(0x04)
	int32_t SizeY; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Solarland.MapSelectPointCellData
// Size: 0x50 (Inherited: 0x00)
struct FMapSelectPointCellData {
	bool CellBeSelected; // 0x00(0x01)
	enum class EMapCellSelectionAccess SelectionAccess; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t PlayerId; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FString CellAddress; // 0x10(0x10)
	struct FString SolarPlayerID; // 0x20(0x10)
	char pad_30[0x20]; // 0x30(0x20)
};

// ScriptStruct Solarland.MapSelectPointCellConfig
// Size: 0x14 (Inherited: 0x00)
struct FMapSelectPointCellConfig {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float DistanceOfCell; // 0x10(0x04)
};

// ScriptStruct Solarland.MapSelectPointCellAddress
// Size: 0x08 (Inherited: 0x00)
struct FMapSelectPointCellAddress {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct Solarland.MetaAttributeUpdateEvent
// Size: 0x78 (Inherited: 0x00)
struct FMetaAttributeUpdateEvent {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t TypeID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USolarAbilitySystemComponent* TargetASC; // 0x10(0x08)
	struct USolarMetaAttributeSet* MetaAttributeSet; // 0x18(0x08)
	struct FGameplayAttribute MetaAttribute; // 0x20(0x38)
	float MetaAttributeValue; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FMetaAttributeProduceEffect> Effects; // 0x60(0x10)
	struct FMetaAttributeUpdateEvent_Character CharacterEventData; // 0x70(0x03)
	char pad_73[0x5]; // 0x73(0x05)
};

// ScriptStruct Solarland.MetaAttributeUpdateEvent_Character
// Size: 0x03 (Inherited: 0x00)
struct FMetaAttributeUpdateEvent_Character {
	bool bHitHead; // 0x00(0x01)
	bool bBreakShield; // 0x01(0x01)
	bool bDead; // 0x02(0x01)
};

// ScriptStruct Solarland.MetaAttributeProduceEffect
// Size: 0x48 (Inherited: 0x00)
struct FMetaAttributeProduceEffect {
	struct USolarAttributeSet* EffectAttributeSet; // 0x00(0x08)
	struct FGameplayAttribute EffectAttribute; // 0x08(0x38)
	float EffectValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Solarland.MobilePlatformSplinePoint
// Size: 0x08 (Inherited: 0x00)
struct FMobilePlatformSplinePoint {
	float DelayTime; // 0x00(0x04)
	float Speed; // 0x04(0x04)
};

// ScriptStruct Solarland.SmartLinkInstance
// Size: 0x60 (Inherited: 0x00)
struct FSmartLinkInstance {
	enum class ENavLinkType LinkType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t NavLinkUserId; // 0x04(0x04)
	struct UNavArea* EnabledAreaClass; // 0x08(0x08)
	struct UNavArea* DisabledAreaClass; // 0x10(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	struct FVector LinkRelativeStart; // 0x1c(0x0c)
	struct FVector LinkRelativeEnd; // 0x28(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector VaultPoint; // 0x38(0x0c)
	struct FVector VaultDirect; // 0x44(0x0c)
	enum class EVaultType VaultAnimate; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector VaultLandPoint; // 0x54(0x0c)
};

// ScriptStruct Solarland.SolarNetMovementState
// Size: 0xa0 (Inherited: 0x00)
struct FSolarNetMovementState {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Solarland.ObjectArray
// Size: 0x10 (Inherited: 0x00)
struct FObjectArray {
	struct TArray<struct UObject*> ObjectArray; // 0x00(0x10)
};

// ScriptStruct Solarland.OBTeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FOBTeamInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Solarland.OBTeammateInfo
// Size: 0x48 (Inherited: 0x00)
struct FOBTeammateInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Solarland.OperationUIElement
// Size: 0x50 (Inherited: 0x00)
struct FOperationUIElement {
	struct FString PanelName; // 0x00(0x10)
	struct FString PanelAliasName; // 0x10(0x10)
	float CurScale; // 0x20(0x04)
	float MinScale; // 0x24(0x04)
	float MaxScale; // 0x28(0x04)
	float CurOpacity; // 0x2c(0x04)
	float MinOpacity; // 0x30(0x04)
	float MaxOpacity; // 0x34(0x04)
	bool bCanHide; // 0x38(0x01)
	bool bVisible; // 0x39(0x01)
	bool bLockAxisX; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float minOffsetY; // 0x3c(0x04)
	float maxOffsetY; // 0x40(0x04)
	bool bCannotChangeScale; // 0x44(0x01)
	bool bCannotChangeOpacity; // 0x45(0x01)
	bool bVisibleInVehicle; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct FVector2D Translation; // 0x48(0x08)
};

// ScriptStruct Solarland.PerceivableEAInfluenceConfig
// Size: 0x60 (Inherited: 0x00)
struct FPerceivableEAInfluenceConfig {
	struct TMap<enum class EPerceivableEffectAreaType, float> AreaTypeValueMap; // 0x00(0x50)
	float HostileAreaFactor; // 0x50(0x04)
	float NeutralAreaFactor; // 0x54(0x04)
	float FriendlyAreaFactor; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Solarland.PerceivableEffectArea
// Size: 0x2c (Inherited: 0x00)
struct FPerceivableEffectArea {
	enum class EPerceivableEffectAreaType AreaType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector EffectLocation; // 0x04(0x0c)
	float EffectRadius; // 0x10(0x04)
	struct TWeakObjectPtr<struct AActor> EffectActor; // 0x14(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x1c(0x08)
	char pad_24[0x8]; // 0x24(0x08)
};

// ScriptStruct Solarland.PickupListViewItemData
// Size: 0xd0 (Inherited: 0x00)
struct FPickupListViewItemData {
	struct FSolarItemData ItemData; // 0x00(0xb8)
	int32_t Index; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AActor* PickActor; // 0xc0(0x08)
	enum class EItemType PickActroItemType; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Solarland.ActorArrayMap
// Size: 0x50 (Inherited: 0x00)
struct FActorArrayMap {
	struct TMap<int32_t, struct FActorArray> ActorArrayMap; // 0x00(0x50)
};

// ScriptStruct Solarland.ActorArray
// Size: 0x10 (Inherited: 0x00)
struct FActorArray {
	struct TArray<struct AActor*> ActorArray; // 0x00(0x10)
};

// ScriptStruct Solarland.ChargingInfo
// Size: 0x30 (Inherited: 0x00)
struct FChargingInfo {
	struct TWeakObjectPtr<struct ASolarCharacter> Ch; // 0x00(0x08)
	float Time; // 0x08(0x04)
	float LastChargeTime; // 0x0c(0x04)
	bool bShowEffect; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Quantity; // 0x14(0x04)
	float Frequency; // 0x18(0x04)
	enum class EPileHealingType PileHealingType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float TotalChargeEnergy; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct USolarBackpackComponent* BackpackComponent; // 0x28(0x08)
};

// ScriptStruct Solarland.ChargingPilePreset
// Size: 0x150 (Inherited: 0x00)
struct FChargingPilePreset {
	struct FSoftObjectPath NormalMeshPath; // 0x00(0x18)
	struct FSoftObjectPath BrokenMeshPath; // 0x18(0x18)
	struct FSoftObjectPath BrokenMatPath; // 0x30(0x18)
	struct FSoftObjectPath RangeRingPath; // 0x48(0x18)
	struct FSoftObjectPath RangeRingMatPath; // 0x60(0x18)
	struct FSoftObjectPath ChargeCirclePath; // 0x78(0x18)
	struct FSoftObjectPath ChargeCircleMatPath; // 0x90(0x18)
	struct FSoftObjectPath ChargeParticleEffectPath; // 0xa8(0x18)
	struct FSoftObjectPath OutlineMatPath; // 0xc0(0x18)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform RangeRingTrans; // 0xe0(0x30)
	struct FTransform ChargeCircleTrans; // 0x110(0x30)
	struct FVector BeamStartPos; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct Solarland.PlayerActivityHeatRawData
// Size: 0x50 (Inherited: 0x00)
struct FPlayerActivityHeatRawData {
	enum class EPlayerActivityHeatType PlayerActivityHeatType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HeatDataTimeStamp; // 0x04(0x04)
	float ActivityHeatTimeOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FPlayerActivityHeatKillDetail KillDetail; // 0x10(0x40)
};

// ScriptStruct Solarland.PlayerActivityHeatKillDetail
// Size: 0x40 (Inherited: 0x00)
struct FPlayerActivityHeatKillDetail {
	float KillTime; // 0x00(0x04)
	struct FVector VictimPosition; // 0x04(0x0c)
	struct FString KillerID; // 0x10(0x10)
	struct FString VictimID; // 0x20(0x10)
	bool IsAbilityKill; // 0x30(0x01)
	bool IsScopedKill; // 0x31(0x01)
	bool IsVehicleKill; // 0x32(0x01)
	bool IsHeadShot; // 0x33(0x01)
	bool IsAbilityActivated; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t weaponid; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.ScreenshotManager
// Size: 0x50 (Inherited: 0x00)
struct FScreenshotManager {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Solarland.BagItemInfo
// Size: 0xc0 (Inherited: 0x00)
struct FBagItemInfo {
	struct FSolarItemData ItemData; // 0x00(0xb8)
	int32_t Grade; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Solarland.RadarDelegateHandle
// Size: 0x08 (Inherited: 0x00)
struct FRadarDelegateHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.ScannedVehicleDisplayRow
// Size: 0x40 (Inherited: 0x08)
struct FScannedVehicleDisplayRow : FTableRowBase {
	int32_t VehicleID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UObject> Icon; // 0x10(0x28)
	struct FVector2D IconSize; // 0x38(0x08)
};

// ScriptStruct Solarland.PerspectiveActorInfo
// Size: 0x02 (Inherited: 0x00)
struct FPerspectiveActorInfo {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Solarland.ScannedInfo
// Size: 0x1c (Inherited: 0x00)
struct FScannedInfo {
	uint32_t UniqueId; // 0x00(0x04)
	enum class EActorRegisterType TargetType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	uint32_t VehicleID; // 0x08(0x04)
	struct FVector TargetLocation; // 0x0c(0x0c)
	float TargetToward; // 0x18(0x04)
};

// ScriptStruct Solarland.StreamingDistanceScaleParam
// Size: 0x18 (Inherited: 0x08)
struct FStreamingDistanceScaleParam : FTableRowBase {
	enum class ESolarGraphicsQualityLevel GraphicsQualityLevel; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float RelativeStreamingDistanceScaleParam; // 0x0c(0x04)
	float RelativeStreamingDistanceScaleParam_PC; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.NarrateEventInfoResult
// Size: 0x28 (Inherited: 0x00)
struct FNarrateEventInfoResult {
	float EventTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NarrateText; // 0x08(0x10)
	struct FString AudioAssetPath; // 0x18(0x10)
};

// ScriptStruct Solarland.AutoDirectorNodeInfo
// Size: 0x48 (Inherited: 0x00)
struct FAutoDirectorNodeInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Solarland.AutoDirectorActivityEventScoresInfo
// Size: 0x28 (Inherited: 0x00)
struct FAutoDirectorActivityEventScoresInfo {
	float ScoreSum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> PlayerScores; // 0x08(0x10)
	struct TArray<bool> PlayerMakeFollow; // 0x18(0x10)
};

// ScriptStruct Solarland.SubGraphInfo
// Size: 0x60 (Inherited: 0x00)
struct FSubGraphInfo {
	char TeamIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct TWeakObjectPtr<struct ASolarPlayerState>> AllPlayerStates; // 0x08(0x50)
	float ScoreSum; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Solarland.SolarActorGroupOfReplayCamera
// Size: 0x18 (Inherited: 0x00)
struct FSolarActorGroupOfReplayCamera {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.ReplayFindSpectateTargetParams
// Size: 0x18 (Inherited: 0x00)
struct FReplayFindSpectateTargetParams {
	char pad_0[0x10]; // 0x00(0x10)
	struct ASolarPlayerState* SuggestTarget; // 0x10(0x08)
};

// ScriptStruct Solarland.PlayerHighlightOverview
// Size: 0x28 (Inherited: 0x00)
struct FPlayerHighlightOverview {
	int32_t KillNum; // 0x00(0x04)
	int32_t AssistNum; // 0x04(0x04)
	int32_t Damage; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerId; // 0x10(0x10)
	int32_t RemainPlayers; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.FilteredData
// Size: 0x110 (Inherited: 0x00)
struct FFilteredData {
	struct FARFilter Filter; // 0x00(0xe8)
	struct TArray<struct FAssetData> Results; // 0xe8(0x10)
	struct UObject* ObjectBaseClassType; // 0xf8(0x08)
	struct TArray<struct FSavedTagAndValueData> SavedTagAndValueData; // 0x100(0x10)
};

// ScriptStruct Solarland.SavedTagAndValueData
// Size: 0x50 (Inherited: 0x00)
struct FSavedTagAndValueData {
	struct TMap<struct FName, struct FString> SavedTagsAndValue; // 0x00(0x50)
};

// ScriptStruct Solarland.PatfaceShowTime
// Size: 0x10 (Inherited: 0x00)
struct FPatfaceShowTime {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t CanShowTimeStamp; // 0x08(0x08)
};

// ScriptStruct Solarland.NeverShowCheckWindow
// Size: 0x18 (Inherited: 0x00)
struct FNeverShowCheckWindow {
	int32_t ConfirmID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime Timestamp; // 0x08(0x08)
	enum class ENeverShowDuration Duration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarShieldCreatorEffect
// Size: 0x60 (Inherited: 0x00)
struct FSolarShieldCreatorEffect {
	struct FSoftObjectPath TeammatePath; // 0x00(0x18)
	struct FSoftObjectPath EnemyPath; // 0x18(0x18)
	struct FTransform RelativeTransform; // 0x30(0x30)
};

// ScriptStruct Solarland.SkeletalMeshMergeParams
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x00(0x10)
	int32_t StripTopLODS; // 0x10(0x04)
	char bNeedsCpuAccess : 1; // 0x14(0x01)
	char bSkeletonBefore : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct USkeleton* Skeleton; // 0x18(0x08)
};

// ScriptStruct Solarland.SkeletalMeshMergeUVTransformMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshMergeUVTransformMapping_BP {
	struct TArray<struct FSkeletalMeshMergeUVTransforms_BP> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct Solarland.SkeletalMeshMergeUVTransforms_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshMergeUVTransforms_BP {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct Solarland.SkeletalMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarSubClusterGrenadeData
// Size: 0x18 (Inherited: 0x00)
struct FSolarSubClusterGrenadeData {
	struct ASolarSkill_ClusterGrenade* SubClusterGrenadeClass; // 0x00(0x08)
	float DelaySpawnTime; // 0x08(0x04)
	float SpawnTimer; // 0x0c(0x04)
	bool bLaunchSpawnTimer; // 0x10(0x01)
	bool bSpawned; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Solarland.SolarEMPParticleInfo
// Size: 0x80 (Inherited: 0x00)
struct FSolarEMPParticleInfo {
	struct FSoftObjectPath ParticlePathForTeammate; // 0x00(0x18)
	struct FSoftObjectPath ParticlePathForEnemy; // 0x18(0x18)
	struct FTransform RelativeTransform; // 0x30(0x30)
	bool bAttachMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName AttachSocketName; // 0x64(0x08)
	enum class EAttachLocation AttachLocationType; // 0x6c(0x01)
	bool bAutoDestroy; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float Duration; // 0x70(0x04)
	enum class EPSCPoolMethod PoolMode; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct Solarland.SolarDamageShapeData
// Size: 0x90 (Inherited: 0x00)
struct FSolarDamageShapeData {
	enum class ESolarDamageShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector ShapeExtent; // 0x04(0x0c)
	struct FTransform DamageRelativeTransform; // 0x10(0x30)
	struct FSolarEffectData EffectData; // 0x40(0x50)
};

// ScriptStruct Solarland.SolarEffectData
// Size: 0x50 (Inherited: 0x00)
struct FSolarEffectData {
	struct FSoftObjectPath Path; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
};

// ScriptStruct Solarland.SolarProjectileCustomBounceData
// Size: 0x08 (Inherited: 0x00)
struct FSolarProjectileCustomBounceData {
	float CanBounceAngle; // 0x00(0x04)
	int32_t MaxBounceCount; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarSkillProjectileData
// Size: 0xd0 (Inherited: 0x00)
struct FSolarSkillProjectileData {
	float PredictTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class ESlateDetailMode, float> PredictSimFrequencyMap; // 0x08(0x50)
	float PredictRadius; // 0x58(0x04)
	float PredictSpeed; // 0x5c(0x04)
	float PredictGravityZ; // 0x60(0x04)
	float GravityScale; // 0x64(0x04)
	float PredictAngle; // 0x68(0x04)
	struct FName StartSocketName; // 0x6c(0x08)
	struct FVector StartSocketOffset; // 0x74(0x0c)
	bool bDisplayHoldModel; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName HoldSocketName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FTransform HoldModelTransform; // 0x90(0x30)
	int32_t count; // 0xc0(0x04)
	float HorizontalOffsetAngle; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct Solarland.SolarSurroundLightningConfig
// Size: 0x98 (Inherited: 0x00)
struct FSolarSurroundLightningConfig {
	struct FVector ParticleDefaultScale; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve ParticleScaleByDistanceCurve; // 0x10(0x88)
};

// ScriptStruct Solarland.BuffDurationInfo
// Size: 0x60 (Inherited: 0x00)
struct FBuffDurationInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Solarland.SolarSkinnedSkeletalMesh
// Size: 0x70 (Inherited: 0x08)
struct FSolarSkinnedSkeletalMesh : FSolarSkinnedAsset {
	struct FSoftObjectPath DefaultSkinnedSkeletalMesh; // 0x08(0x18)
	struct TMap<int32_t, struct FSoftObjectPath> SkinnedSkeletalMeshes; // 0x20(0x50)
};

// ScriptStruct Solarland.SolarSkinnedStaticMesh
// Size: 0x70 (Inherited: 0x08)
struct FSolarSkinnedStaticMesh : FSolarSkinnedAsset {
	struct FSoftObjectPath DefaultSkinnedStaticMesh; // 0x08(0x18)
	struct TMap<int32_t, struct FSoftObjectPath> SkinnedStaticMeshes; // 0x20(0x50)
};

// ScriptStruct Solarland.SolarSoftObjectReference
// Size: 0x20 (Inherited: 0x08)
struct FSolarSoftObjectReference : FTableRowBase {
	struct FSoftObjectPath ObjectReference; // 0x08(0x18)
};

// ScriptStruct Solarland.SolarSummonPreview
// Size: 0x18 (Inherited: 0x00)
struct FSolarSummonPreview {
	struct UStreamableRenderAsset* Mesh; // 0x00(0x08)
	struct UMaterialInterface* ValidMaterial; // 0x08(0x08)
	struct UMaterialInterface* InvalidMaterial; // 0x10(0x08)
};

// ScriptStruct Solarland.SolarSummonCondition
// Size: 0x80 (Inherited: 0x00)
struct FSolarSummonCondition {
	struct TArray<enum class EObjectTypeQuery> SurfaceCheckTypes; // 0x00(0x10)
	struct TArray<enum class EPhysicalSurface> ForbiddenSurfaces; // 0x10(0x10)
	struct TArray<struct AActor*> ForbiddenSurfaceClasses; // 0x20(0x10)
	bool bUseChannelTest; // 0x30(0x01)
	enum class ECollisionChannel TestCollisionChannel; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<enum class EObjectTypeQuery> CollisionCheckTypes; // 0x38(0x10)
	struct TArray<struct AActor*> CollisionCheckIgnoreClasses; // 0x48(0x10)
	float MaxPlaceableAngle; // 0x58(0x04)
	bool bDisplayOverThanPlaceableAngle; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FVector CheckSize; // 0x60(0x0c)
	float CollisionToGroundDistance; // 0x6c(0x04)
	bool bEnableSummonInRoom; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float RoomCheckHalfHeight; // 0x74(0x04)
	bool bKeepPreviewUpright; // 0x78(0x01)
	bool bIgnorePlacementCollision; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct Solarland.SolarSummonTimer
// Size: 0x08 (Inherited: 0x00)
struct FSolarSummonTimer {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Timer; // 0x04(0x04)
};

// ScriptStruct Solarland.InvisibleZoneParticleInfo
// Size: 0x70 (Inherited: 0x00)
struct FInvisibleZoneParticleInfo {
	struct FSoftObjectPath ParticlePathForTeammate; // 0x00(0x18)
	struct FSoftObjectPath ParticlePathForEnemy; // 0x18(0x18)
	struct FTransform RelativeTransform; // 0x30(0x30)
	bool bAttach; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct Solarland.TowerParticleInfo
// Size: 0x50 (Inherited: 0x00)
struct FTowerParticleInfo {
	struct FSoftObjectPath ParticlePath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
};

// ScriptStruct Solarland.TowerPadEffect
// Size: 0x50 (Inherited: 0x00)
struct FTowerPadEffect {
	struct UParticleSystem* Particle; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct UParticleSystemComponent* Handle; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Solarland.SolarSyncMoveMessageParams
// Size: 0x10 (Inherited: 0x00)
struct FSolarSyncMoveMessageParams {
	float Value; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct Solarland.SolarLocaleInfo
// Size: 0x20 (Inherited: 0x00)
struct FSolarLocaleInfo {
	struct FString Language; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
};

// ScriptStruct Solarland.SolarTablesDataBase
// Size: 0x10 (Inherited: 0x00)
struct FSolarTablesDataBase {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarTables_AccountFixedExp
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_AccountFixedExp : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_AccountFixedExp> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_AccountFixedExp
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_AccountFixedExp : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t Exp; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_AccountFlag
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_AccountFlag : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_AccountFlag> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_AccountFlag
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_AccountFlag : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t FlagType; // 0x14(0x04)
	struct FString FlagIcon; // 0x18(0x10)
	struct FString StateName; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_Achievement
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Achievement : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Achievement> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Achievement
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_Achievement : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t Order; // 0x14(0x04)
	struct FSolarTablesLocalText AchieveName; // 0x18(0x04)
	int32_t AchieveTab; // 0x1c(0x04)
	int32_t AchieveType; // 0x20(0x04)
	int32_t AchieveScore; // 0x24(0x04)
	struct TArray<int32_t> AwardList; // 0x28(0x10)
	struct FString AchieveIcon; // 0x38(0x10)
	struct FString AchieveIconS; // 0x48(0x10)
	int32_t AchieveTask; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32_t> AchieveTV; // 0x60(0x10)
	int32_t AchieveTT; // 0x70(0x04)
	int32_t ReportType; // 0x74(0x04)
	struct FSolarTablesLocalText AchieveTC; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTablesLocalText
// Size: 0x04 (Inherited: 0x00)
struct FSolarTablesLocalText {
	int32_t ID; // 0x00(0x04)
};

// ScriptStruct Solarland.SolarTables_Airline
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Airline : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Airline> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Airline
// Size: 0x68 (Inherited: 0x10)
struct FSolarTablesData_Airline : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> AirlineCoordinateA; // 0x18(0x10)
	struct TArray<float> RealPointA; // 0x28(0x10)
	struct TArray<float> AirlineCoordinateB; // 0x38(0x10)
	struct TArray<float> RealPointB; // 0x48(0x10)
	int32_t UseGameMode; // 0x58(0x04)
	int32_t MapID; // 0x5c(0x04)
	float AirlineAltitude; // 0x60(0x04)
	float CapsuleSpeed; // 0x64(0x04)
};

// ScriptStruct Solarland.SolarTables_ArmorProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ArmorProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ArmorProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ArmorProperty
// Size: 0x90 (Inherited: 0x10)
struct FSolarTablesData_ArmorProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float MaxValue; // 0x74(0x04)
	float RecoverySpeed; // 0x78(0x04)
	float EnergyCost; // 0x7c(0x04)
	float MaterialCost; // 0x80(0x04)
	float MinMaterialCost; // 0x84(0x04)
	int32_t ArmorWorth; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Solarland.SolarTables_Armory
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Armory : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Armory> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Armory
// Size: 0x88 (Inherited: 0x10)
struct FSolarTablesData_Armory : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t WeaponType; // 0x14(0x04)
	int32_t WeaponDescription; // 0x18(0x04)
	int32_t SkillName; // 0x1c(0x04)
	int32_t SkillDescription; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString UrlName; // 0x28(0x10)
	struct FString WeaponMovie; // 0x38(0x10)
	struct FString WeaponConfig; // 0x48(0x10)
	int32_t WeaponUnlockLevel; // 0x58(0x04)
	int32_t WeaponDamage; // 0x5c(0x04)
	int32_t WeaponRateOfFire; // 0x60(0x04)
	int32_t WeaponRecoil; // 0x64(0x04)
	int32_t WeaponSpread; // 0x68(0x04)
	int32_t WeaponRange; // 0x6c(0x04)
	int32_t WeaponMobility; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString SilhouetteIcon; // 0x78(0x10)
};

// ScriptStruct Solarland.SolarTables_AutoDirector
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_AutoDirector : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_AutoDirector> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_AutoDirector
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_AutoDirector : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t SpectateAreaRadius; // 0x14(0x04)
	int32_t CollectScoreWindow; // 0x18(0x04)
	float MinFocusTime; // 0x1c(0x04)
	float MaxFocusTime; // 0x20(0x04)
	float NewCutThreshold; // 0x24(0x04)
	float PreFreeCameraTime; // 0x28(0x04)
	int32_t AutoDirectorMinEnableTime; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_AutoDirectorActivityScore
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_AutoDirectorActivityScore : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_AutoDirectorActivityScore> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_AutoDirectorActivityScore
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_AutoDirectorActivityScore : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	float Score; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_BackpackProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BackpackProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BackpackProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BackpackProperty
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_BackpackProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	struct FString BackpackMeshPath; // 0x50(0x10)
	struct FString PreviewBpPath; // 0x60(0x10)
	int32_t StartFrame; // 0x70(0x04)
	int32_t EndFrame; // 0x74(0x04)
	float Length; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTables_BackpackTrailProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BackpackTrailProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BackpackTrailProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BackpackTrailProperty
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_BackpackTrailProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	struct FString PreviewTrailPath; // 0x50(0x10)
	struct FString AssemblingId; // 0x60(0x10)
};

// ScriptStruct Solarland.SolarTables_BattleEndRankSettlement
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BattleEndRankSettlement : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BattleEndRankSettlement> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BattleEndRankSettlement
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_BattleEndRankSettlement : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t RuleID; // 0x14(0x04)
	int32_t RealPerson; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> ItemDrop; // 0x20(0x10)
};

// ScriptStruct Solarland.SolarTables_BattleRoyaleMode
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BattleRoyaleMode : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BattleRoyaleMode> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BattleRoyaleMode
// Size: 0x50 (Inherited: 0x10)
struct FSolarTablesData_BattleRoyaleMode : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> GlobalOutcomes; // 0x18(0x10)
	int32_t BattleMap; // 0x28(0x04)
	int32_t ReadyMap; // 0x2c(0x04)
	float ReadyStateTime; // 0x30(0x04)
	int32_t StartTime; // 0x34(0x04)
	float EenTime; // 0x38(0x04)
	int32_t CharacterEXPCoefficient; // 0x3c(0x04)
	struct TArray<struct FString> EventSets; // 0x40(0x10)
};

// ScriptStruct Solarland.SolarTables_BattleUpgradeContent
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BattleUpgradeContent : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BattleUpgradeContent> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BattleUpgradeContent
// Size: 0x40 (Inherited: 0x10)
struct FSolarTablesData_BattleUpgradeContent : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ModelID; // 0x18(0x10)
	int32_t Grade; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<int32_t> UpgradeContent; // 0x30(0x10)
};

// ScriptStruct Solarland.SolarTables_BattleUpgradeEffect
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BattleUpgradeEffect : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BattleUpgradeEffect> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BattleUpgradeEffect
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_BattleUpgradeEffect : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	enum class ESolarTablesEnum_BattleUpgradeEffectType Effect; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t EffectValue; // 0x18(0x04)
	int32_t StackingTimes; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_BattleUpgradeEffectPool
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BattleUpgradeEffectPool : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BattleUpgradeEffectPool> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BattleUpgradeEffectPool
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_BattleUpgradeEffectPool : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> Pool; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_Behavior
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Behavior : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Behavior> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Behavior
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_Behavior : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	enum class ESolarTablesEnum_BehaviorType BehaviorType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t CharacterGetExp; // 0x18(0x04)
	int32_t WeaponGetExp; // 0x1c(0x04)
	int32_t WeaponExp_2; // 0x20(0x04)
	int32_t WeaponExp_3; // 0x24(0x04)
	int32_t WeaponExp_5; // 0x28(0x04)
	struct FSolarTablesLocalText CharaGetExpText; // 0x2c(0x04)
	int32_t WeaponGetExpText; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.SolarTables_BpAward
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_BpAward : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_BpAward> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_BpAward
// Size: 0x50 (Inherited: 0x10)
struct FSolarTablesData_BpAward : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t BpID; // 0x14(0x04)
	int32_t Level; // 0x18(0x04)
	int32_t Exp; // 0x1c(0x04)
	int32_t UpdateValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<int32_t> FreeAward; // 0x28(0x10)
	struct TArray<int32_t> PayAward; // 0x38(0x10)
	bool UnlockExtraTask; // 0x48(0x01)
	bool BuyLevel; // 0x49(0x01)
	bool LoopReward; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct Solarland.SolarTables_CapsuleProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CapsuleProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CapsuleProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CapsuleProperty
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_CapsuleProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	struct FString CapsuleBPPath; // 0x50(0x10)
	struct FString PreviewBpPath; // 0x60(0x10)
};

// ScriptStruct Solarland.SolarTables_CaseToggleAlphabet
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CaseToggleAlphabet : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CaseToggleAlphabet> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CaseToggleAlphabet
// Size: 0x98 (Inherited: 0x10)
struct FSolarTablesData_CaseToggleAlphabet : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	bool IsLower; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString de; // 0x18(0x10)
	struct FString fr; // 0x28(0x10)
	struct FString es; // 0x38(0x10)
	struct FString pt; // 0x48(0x10)
	struct FString it; // 0x58(0x10)
	struct FString pl; // 0x68(0x10)
	struct FString tr; // 0x78(0x10)
	struct FString ru; // 0x88(0x10)
};

// ScriptStruct Solarland.SolarTables_CharacterAbility
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CharacterAbility : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CharacterAbility> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CharacterAbility
// Size: 0x60 (Inherited: 0x10)
struct FSolarTablesData_CharacterAbility : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t CharacterId; // 0x14(0x04)
	struct FString DataAssetsPath; // 0x18(0x10)
	struct FSolarTablesLocalText Name; // 0x28(0x04)
	struct FSolarTablesLocalText Info; // 0x2c(0x04)
	int32_t DataID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString AbilityBP; // 0x38(0x10)
	struct FString Icon; // 0x48(0x10)
	int32_t Data; // 0x58(0x04)
	bool IfActive; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Solarland.SolarTables_CharacterPassiveAbility
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CharacterPassiveAbility : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CharacterPassiveAbility> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CharacterPassiveAbility
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_CharacterPassiveAbility : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DataAssetsPath; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_CharacterVoiceover
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CharacterVoiceover : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CharacterVoiceover> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CharacterVoiceover
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_CharacterVoiceover : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t QuickVoiceID; // 0x14(0x04)
	int32_t CharacterId; // 0x18(0x04)
	int32_t SkinId; // 0x1c(0x04)
	struct FString AudioEventName; // 0x20(0x10)
	int32_t LocalizationID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.SolarTables_Chest
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Chest : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Chest> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Chest
// Size: 0x88 (Inherited: 0x10)
struct FSolarTablesData_Chest : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t openType; // 0x74(0x04)
	int32_t CostQuantity; // 0x78(0x04)
	int32_t CostType; // 0x7c(0x04)
	int32_t OpenTime; // 0x80(0x04)
	int32_t Drop; // 0x84(0x04)
};

// ScriptStruct Solarland.SolarTables_ChestSpawn
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ChestSpawn : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ChestSpawn> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ChestSpawn
// Size: 0x40 (Inherited: 0x10)
struct FSolarTablesData_ChestSpawn : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	enum class ESolarTablesEnum_ChestType ChestType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<int32_t> Chests; // 0x18(0x10)
	struct TArray<int32_t> Weight; // 0x28(0x10)
	int32_t SpawnCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.SolarTables_ChestSpawnGroup
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ChestSpawnGroup : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ChestSpawnGroup> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ChestSpawnGroup
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_ChestSpawnGroup : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ChestGroup; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_CircularCameras
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_CircularCameras : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_CircularCameras> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_CircularCameras
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_CircularCameras : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t MiniDistance; // 0x14(0x04)
	float BorderRatio; // 0x18(0x04)
	int32_t FOV; // 0x1c(0x04)
	int32_t Pitch; // 0x20(0x04)
	int32_t InitAngleWithMainDir; // 0x24(0x04)
	float BlendAlpha; // 0x28(0x04)
	float AngularSpeed; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_ClanFlag
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ClanFlag : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ClanFlag> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ClanFlag
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_ClanFlag : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString FlagIcon; // 0x18(0x10)
	struct FString WebIcon; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_Collect
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Collect : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Collect> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Collect
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_Collect : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t lobbyCollectId; // 0x74(0x04)
	int32_t Level; // 0x78(0x04)
	int32_t EventId; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTables_Dance
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Dance : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Dance> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Dance
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_Dance : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t LoopTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString BlueprintPath; // 0x58(0x10)
	int32_t ShopID; // 0x68(0x04)
	bool IfDefault; // 0x6c(0x01)
	bool IfShow; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	struct FString BeginTime; // 0x70(0x10)
};

// ScriptStruct Solarland.SolarTables_DayAndNight
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_DayAndNight : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_DayAndNight> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_DayAndNight
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_DayAndNight : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t TimeOfDays; // 0x14(0x04)
	int32_t ChangingSpeed; // 0x18(0x04)
	float ChargingRate; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_DsVariableRange
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_DsVariableRange : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_DsVariableRange> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_DsVariableRange
// Size: 0x40 (Inherited: 0x10)
struct FSolarTablesData_DsVariableRange : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString VariableName; // 0x18(0x10)
	float ValueStart; // 0x28(0x04)
	float ValueEnd; // 0x2c(0x04)
	int32_t ValueType; // 0x30(0x04)
	int32_t Tolerance; // 0x34(0x04)
	int32_t ProbeInterval; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.SolarTables_Emote
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Emote : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Emote> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Emote
// Size: 0xa8 (Inherited: 0x10)
struct FSolarTablesData_Emote : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t EmoteType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString EmoteBlueprintPath; // 0x58(0x10)
	struct FString EmoteResourcePath; // 0x68(0x10)
	float EmoteDuration; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString EmoteAppearSound; // 0x80(0x10)
	struct FString EmoteSound; // 0x90(0x10)
	int32_t ShopID; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Solarland.SolarTables_EnergyProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EnergyProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EnergyProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EnergyProperty
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_EnergyProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float AddedEnergyMax; // 0x74(0x04)
	int32_t EnergyModuleWorth; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTables_EscapeExp
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EscapeExp : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EscapeExp> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EscapeExp
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_EscapeExp : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	enum class ESolarTablesEnum_BehaviorType BehaviorType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t CharacterGetExp; // 0x18(0x04)
	int32_t WeaponGetExp; // 0x1c(0x04)
	int32_t WeaponExp_2; // 0x20(0x04)
	int32_t WeaponExp_3; // 0x24(0x04)
	int32_t WeaponExp_5; // 0x28(0x04)
	struct FSolarTablesLocalText CharaGetExpText; // 0x2c(0x04)
	int32_t WeaponGetExpText; // 0x30(0x04)
	int32_t ExpID; // 0x34(0x04)
};

// ScriptStruct Solarland.SolarTables_EShop
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EShop : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EShop> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EShop
// Size: 0x40 (Inherited: 0x10)
struct FSolarTablesData_EShop : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> PoolGroupID; // 0x18(0x10)
	bool IfMapShow; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<int32_t> PoolRefreshTime; // 0x30(0x10)
};

// ScriptStruct Solarland.SolarTables_EShopDemoModel
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EShopDemoModel : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EShopDemoModel> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EShopDemoModel
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_EShopDemoModel : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t ModelID; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_EShopGoodsPool
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EShopGoodsPool : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EShopGoodsPool> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EShopGoodsPool
// Size: 0x60 (Inherited: 0x10)
struct FSolarTablesData_EShopGoodsPool : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> Equipments; // 0x18(0x10)
	struct TArray<int32_t> Prize; // 0x28(0x10)
	struct TArray<int32_t> Nums; // 0x38(0x10)
	struct TArray<int32_t> Weight; // 0x48(0x10)
	int32_t NumbersToDisplay; // 0x58(0x04)
	int32_t ColdDown; // 0x5c(0x04)
};

// ScriptStruct Solarland.SolarTables_EShopGoodsPoolGroup
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EShopGoodsPoolGroup : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EShopGoodsPoolGroup> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EShopGoodsPoolGroup
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_EShopGoodsPoolGroup : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> PoolIDs; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_EShopSpawn
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_EShopSpawn : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_EShopSpawn> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_EShopSpawn
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_EShopSpawn : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> Eshops; // 0x18(0x10)
	struct TArray<int32_t> Weight; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_ExtraEnergyProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ExtraEnergyProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ExtraEnergyProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ExtraEnergyProperty
// Size: 0xb8 (Inherited: 0x10)
struct FSolarTablesData_ExtraEnergyProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t QualityColor; // 0x74(0x04)
	float ExtraEnergyMax; // 0x78(0x04)
	float ExtraEnergyCharge; // 0x7c(0x04)
	float ChargeCD; // 0x80(0x04)
	int32_t ExtraEnergyWorth; // 0x84(0x04)
	float RechargeFrequencyFromSky; // 0x88(0x04)
	float RechargeFrequencyFromDeathBox; // 0x8c(0x04)
	float RechargeFrequencyFromPile; // 0x90(0x04)
	float RechargeQuantityFromSky; // 0x94(0x04)
	float RechargeQuantityFromDeathBox; // 0x98(0x04)
	float RechargeQuantityFromPile; // 0x9c(0x04)
	struct FString Sketch; // 0xa0(0x10)
	int32_t SketchLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Solarland.SolarTables_GameMap
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GameMap : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GameMap> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GameMap
// Size: 0xc0 (Inherited: 0x10)
struct FSolarTablesData_GameMap : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString MapName; // 0x18(0x10)
	struct FString ResPath; // 0x28(0x10)
	int32_t MapImage; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<float> MapImageSize; // 0x40(0x10)
	struct TArray<float> MapTopLeftCoord; // 0x50(0x10)
	struct TArray<float> MapRightBottomCoord; // 0x60(0x10)
	struct TArray<int32_t> LocationIcon; // 0x70(0x10)
	struct TArray<struct FString> ItemSubLevels; // 0x80(0x10)
	float HorizonLineZ; // 0x90(0x04)
	float TopZ; // 0x94(0x04)
	float BottomZ; // 0x98(0x04)
	float AverageZ; // 0x9c(0x04)
	float InitFogZ; // 0xa0(0x04)
	float TargetFogZ; // 0xa4(0x04)
	float MapFOV; // 0xa8(0x04)
	int32_t Speed1; // 0xac(0x04)
	int32_t Speed2; // 0xb0(0x04)
	float MapFOV1; // 0xb4(0x04)
	float MapFOV2; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Solarland.SolarTables_GameModeGroup
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GameModeGroup : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GameModeGroup> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GameModeGroup
// Size: 0x88 (Inherited: 0x10)
struct FSolarTablesData_GameModeGroup : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText ModeGroupName; // 0x14(0x04)
	int32_t SortId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> ModeID; // 0x20(0x10)
	struct FString GroupBg; // 0x30(0x10)
	struct FString Icon_s; // 0x40(0x10)
	struct FString Icon_mini; // 0x50(0x10)
	struct FString Icon_recruit; // 0x60(0x10)
	int32_t DefaultSelect; // 0x70(0x04)
	bool IfMultiple; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FString GuideVideoUrl; // 0x78(0x10)
};

// ScriptStruct Solarland.SolarTables_GameModeMain
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GameModeMain : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GameModeMain> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GameModeMain
// Size: 0x170 (Inherited: 0x10)
struct FSolarTablesData_GameModeMain : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t groupid; // 0x14(0x04)
	bool Enabled; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t DefaultSelect; // 0x1c(0x04)
	struct FSolarTablesLocalText Name; // 0x20(0x04)
	struct FSolarTablesLocalText Desc; // 0x24(0x04)
	struct FSolarTablesLocalText DetailDes; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Icon; // 0x30(0x10)
	struct FString Icon_s; // 0x40(0x10)
	struct FString Icon_recruit; // 0x50(0x10)
	struct FString Icon_recruit_issue; // 0x60(0x10)
	struct FString Icon_mini; // 0x70(0x10)
	bool IfRecruitShow; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t ModeType; // 0x84(0x04)
	int32_t OutcomeSet; // 0x88(0x04)
	int32_t LifeTime; // 0x8c(0x04)
	struct TArray<int32_t> AccessClient; // 0x90(0x10)
	struct TArray<int32_t> AccessServer; // 0xa0(0x10)
	struct TArray<int32_t> AccessAccount; // 0xb0(0x10)
	struct TArray<int32_t> AccessActivity; // 0xc0(0x10)
	int32_t UnlockLvl; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<int32_t> MatchRule; // 0xd8(0x10)
	int32_t DefaultMatchRule; // 0xe8(0x04)
	int32_t Backpack; // 0xec(0x04)
	struct FString UIConfig; // 0xf0(0x10)
	struct FString ModeConfig; // 0x100(0x10)
	struct FString Parameters; // 0x110(0x10)
	bool AIMatch; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FString SettlementBPPath; // 0x128(0x10)
	bool ReEnterBattle; // 0x138(0x01)
	bool IsAutoFillTeammate; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct TArray<int32_t> CustomRoomNum; // 0x140(0x10)
	bool GetSupplyBox; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t ChunkID; // 0x154(0x04)
	struct TArray<int32_t> ChunkIdList; // 0x158(0x10)
	enum class ESolarTablesEnum_ClassModeType ClassModeType; // 0x168(0x01)
	bool WarmUp; // 0x169(0x01)
	bool EnableCustomRoomReplay; // 0x16a(0x01)
	bool EnableReplayAutoDirector; // 0x16b(0x01)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct Solarland.SolarTables_GameTimeLine
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GameTimeLine : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GameTimeLine> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GameTimeLine
// Size: 0x50 (Inherited: 0x10)
struct FSolarTablesData_GameTimeLine : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> CheckEvent; // 0x18(0x10)
	int32_t GameMode; // 0x28(0x04)
	int32_t StartTime; // 0x2c(0x04)
	int32_t DaylightChange; // 0x30(0x04)
	int32_t AirDrops; // 0x34(0x04)
	bool IfPoisonShrink; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<int32_t> RedZone; // 0x40(0x10)
};

// ScriptStruct Solarland.SolarTables_GetPoint
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GetPoint : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GetPoint> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GetPoint
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_GetPoint : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t Point; // 0x14(0x04)
	int32_t TaskValue; // 0x18(0x04)
	struct FSolarTablesLocalText TaskText; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_GlobalOutcome
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GlobalOutcome : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GlobalOutcome> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GlobalOutcome
// Size: 0x58 (Inherited: 0x10)
struct FSolarTablesData_GlobalOutcome : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ItemIDs; // 0x18(0x10)
	struct TArray<int32_t> ItemNums; // 0x28(0x10)
	int32_t SingleMaxTimes; // 0x38(0x04)
	int32_t TotalMaxTimes; // 0x3c(0x04)
	int32_t TotalMinTimes; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<int32_t> AffectedOutcomes; // 0x48(0x10)
};

// ScriptStruct Solarland.SolarTables_GlobalSensitivity
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GlobalSensitivity : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GlobalSensitivity> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GlobalSensitivity
// Size: 0xa0 (Inherited: 0x10)
struct FSolarTablesData_GlobalSensitivity : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> HoldWeaponSensitivity; // 0x18(0x10)
	struct TArray<float> FireWeaponSensitivity; // 0x28(0x10)
	float ShoulderShootSenSItivity; // 0x38(0x04)
	float ShoulderShootFireSenSItivity; // 0x3c(0x04)
	struct TArray<float> SkillSensitivity; // 0x40(0x10)
	struct TArray<float> SightSensitivity; // 0x50(0x10)
	struct TArray<float> VehicleDriverSensitivity; // 0x60(0x10)
	struct TArray<float> VehicleFireSensitivity; // 0x70(0x10)
	struct TArray<float> SuperSkillSensitivity; // 0x80(0x10)
	struct TArray<float> TacticalSkillSensitivity; // 0x90(0x10)
};

// ScriptStruct Solarland.SolarTables_GunProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_GunProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_GunProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_GunProperty
// Size: 0xb0 (Inherited: 0x10)
struct FSolarTablesData_GunProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t weaponid; // 0x74(0x04)
	bool Disused; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString BigIcon; // 0x80(0x10)
	int32_t WeaponLv; // 0x90(0x04)
	bool UseWeaponAccessory; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	int32_t WeaponAccessory1; // 0x98(0x04)
	int32_t WeaponAccessory2; // 0x9c(0x04)
	int32_t WeaponAccessory3; // 0xa0(0x04)
	int32_t WeaponAccessory4; // 0xa4(0x04)
	int32_t WeaponAccessory5; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Solarland.SolarTables_HeroPowerFormula
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_HeroPowerFormula : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_HeroPowerFormula> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_HeroPowerFormula
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_HeroPowerFormula : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t MatchRuleID; // 0x14(0x04)
	int32_t Battlerank; // 0x18(0x04)
	int32_t RankScore; // 0x1c(0x04)
	float KillRealConfig; // 0x20(0x04)
	float KillAiConfig; // 0x24(0x04)
};

// ScriptStruct Solarland.SolarTables_HighlightRating
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_HighlightRating : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_HighlightRating> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_HighlightRating
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_HighlightRating : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	float MinScore; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_HotSpot
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_HotSpot : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_HotSpot> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_HotSpot
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_HotSpot : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UIResource; // 0x18(0x10)
	float JumpTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_InputAction
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_InputAction : FSolarTablesDataBase {
	struct TMap<struct FString, struct FSolarTablesData_InputAction> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_InputAction
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_InputAction : FSolarTablesDataBase {
	struct FString ID; // 0x10(0x10)
	bool bFlagBigMap; // 0x20(0x01)
	bool bFlagBackpack; // 0x21(0x01)
	bool bFlagChat; // 0x22(0x01)
	bool bFlagParachute; // 0x23(0x01)
	bool bFlagSpectate; // 0x24(0x01)
	bool bFlagTeamDeath; // 0x25(0x01)
	bool bFlagRelive; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

// ScriptStruct Solarland.SolarTables_InputMapping
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_InputMapping : FSolarTablesDataBase {
	struct TMap<struct FString, struct FSolarTablesData_InputMapping> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_InputMapping
// Size: 0x98 (Inherited: 0x10)
struct FSolarTablesData_InputMapping : FSolarTablesDataBase {
	struct FString ID; // 0x10(0x10)
	struct FString ActionName; // 0x20(0x10)
	enum class ESolarTablesEnum_InputActionType ActionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Scale; // 0x34(0x04)
	enum class ESolarTablesEnum_InputTriggerType TriggerType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString FirstDefaultKeys; // 0x40(0x10)
	struct FString SecondDefaultKeys; // 0x50(0x10)
	struct FString ThirdDefaultKeys; // 0x60(0x10)
	enum class ESolarTablesEnum_InputCtrlType CtrlType; // 0x70(0x01)
	enum class ESolarTablesEnum_InputContextType ContextType; // 0x71(0x01)
	enum class ESolarTablesEnum_InputRelatedType RelatedType; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	struct FSolarTablesLocalText ActionDisplayName; // 0x74(0x04)
	struct FSolarTablesLocalText ActionTipsDesc; // 0x78(0x04)
	enum class ESolarTablesEnum_InputTabType TabType; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t GroupIndex; // 0x80(0x04)
	struct FSolarTablesLocalText GroupTitle; // 0x84(0x04)
	enum class ESolarTablesEnum_InputGroupType GroupType; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t GroupPriority; // 0x8c(0x04)
	bool AffectedByActionTipsSettings; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Solarland.SolarTables_Item
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Item : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Item> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Item
// Size: 0x50 (Inherited: 0x10)
struct FSolarTablesData_Item : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
};

// ScriptStruct Solarland.SolarTables_ItemBehavior
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemBehavior : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemBehavior> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemBehavior
// Size: 0x78 (Inherited: 0x10)
struct FSolarTablesData_ItemBehavior : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t BehaviorExpID; // 0x74(0x04)
};

// ScriptStruct Solarland.SolarTables_ItemCustomType
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemCustomType : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemCustomType> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemCustomType
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_ItemCustomType : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ItemIDs; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_ItemInBattle
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemInBattle : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemInBattle> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemInBattle
// Size: 0x78 (Inherited: 0x10)
struct FSolarTablesData_ItemInBattle : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Solarland.SolarTables_ItemQuality
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemQuality : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemQuality> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemQuality
// Size: 0xe8 (Inherited: 0x10)
struct FSolarTablesData_ItemQuality : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Color; // 0x18(0x10)
	struct TArray<float> HUDColor; // 0x28(0x10)
	struct TArray<float> OutsideColor; // 0x38(0x10)
	struct TArray<float> InsideColor; // 0x48(0x10)
	struct TArray<float> HighQualityColor; // 0x58(0x10)
	struct TArray<float> LowQualityColor; // 0x68(0x10)
	struct TArray<float> HUDBGColor; // 0x78(0x10)
	struct TArray<float> HUDDecorateColor; // 0x88(0x10)
	struct FString Qualitypic; // 0x98(0x10)
	struct FString QualityColor; // 0xa8(0x10)
	struct FString Qualitystr; // 0xb8(0x10)
	struct FString QualityBG; // 0xc8(0x10)
	struct FString QualityBG2; // 0xd8(0x10)
};

// ScriptStruct Solarland.SolarTables_ItemSound
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemSound : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemSound> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemSound
// Size: 0x48 (Inherited: 0x10)
struct FSolarTablesData_ItemSound : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PickupSound; // 0x18(0x10)
	struct FString EquippedSound; // 0x28(0x10)
	struct FString PassiveSound; // 0x38(0x10)
};

// ScriptStruct Solarland.SolarTables_ItemWeaponParts
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ItemWeaponParts : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ItemWeaponParts> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ItemWeaponParts
// Size: 0x90 (Inherited: 0x10)
struct FSolarTablesData_ItemWeaponParts : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t PartsType; // 0x74(0x04)
	int32_t Level; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString PreviewIcon; // 0x80(0x10)
};

// ScriptStruct Solarland.SolarTables_JetPackModuleProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_JetPackModuleProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_JetPackModuleProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_JetPackModuleProperty
// Size: 0xb8 (Inherited: 0x10)
struct FSolarTablesData_JetPackModuleProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t VerticalDashSpeedTimes; // 0x74(0x04)
	int32_t HorizontalDashSpeedTimes; // 0x78(0x04)
	float VerticalDashSpeedScale; // 0x7c(0x04)
	float HorizontalDashSpeedScale; // 0x80(0x04)
	float VerticalDashCoolDownScale; // 0x84(0x04)
	float HorizontalDashCoolDownScale; // 0x88(0x04)
	float VerticalDashEnergyScale; // 0x8c(0x04)
	float HorizontalDashEnergyScale; // 0x90(0x04)
	float VerticalChargingScale; // 0x94(0x04)
	float HorizontalChargingScale; // 0x98(0x04)
	int32_t JetPackModuleWorth; // 0x9c(0x04)
	struct FString Sketch; // 0xa0(0x10)
	int32_t SketchLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Solarland.SolarTables_KillNotify
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_KillNotify : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_KillNotify> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_KillNotify
// Size: 0xd0 (Inherited: 0x10)
struct FSolarTablesData_KillNotify : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	struct FString KillNotifyPath; // 0x50(0x10)
	struct FString KillNotifySpecialPath; // 0x60(0x10)
	struct FString KillNotifyBackGroundPath; // 0x70(0x10)
	struct FString KillNotifyBackground; // 0x80(0x10)
	struct FString TextColor; // 0x90(0x10)
	struct FString IconColor; // 0xa0(0x10)
	struct FString BackgroundColor; // 0xb0(0x10)
	struct FString Param; // 0xc0(0x10)
};

// ScriptStruct Solarland.SolarTables_LanguageSwitcher
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_LanguageSwitcher : FSolarTablesDataBase {
	struct TMap<struct FString, struct FSolarTablesData_LanguageSwitcher> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_LanguageSwitcher
// Size: 0x60 (Inherited: 0x10)
struct FSolarTablesData_LanguageSwitcher : FSolarTablesDataBase {
	struct FString ID; // 0x10(0x10)
	struct FString ButtonText; // 0x20(0x10)
	bool IfOpened; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t LanguageIndex; // 0x34(0x04)
	struct FString MarqueeDirection; // 0x38(0x10)
	struct FString TextAbbr; // 0x48(0x10)
	int32_t VoiceID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Solarland.SolarTables_LobbyAutoDownload
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_LobbyAutoDownload : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_LobbyAutoDownload> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_LobbyAutoDownload
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_LobbyAutoDownload : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t ChunkID; // 0x14(0x04)
	int32_t ChunkName; // 0x18(0x04)
	bool IncludeMain; // 0x1c(0x01)
	bool IncludeOptional; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Solarland.SolarTables_Localization
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_BattleUI
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_BattleUI : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_BattleUI> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_BattleUI
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_BattleUI : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_EventSystem
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_EventSystem : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_EventSystem> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_EventSystem
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_EventSystem : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_General
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_General : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_General> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_General
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_General : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_Heroes
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_Heroes : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_Heroes> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_Heroes
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_Heroes : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_Item
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_Item : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_Item> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_Item
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_Item : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_Tournament
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_Tournament : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_Tournament> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_Tournament
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_Tournament : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_Localization_Uncategorized
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Localization_Uncategorized : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Localization_Uncategorized> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Localization_Uncategorized
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_Localization_Uncategorized : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString zh_TW; // 0x58(0x10)
	struct FString ja; // 0x68(0x10)
	struct FString ko; // 0x78(0x10)
	struct FString fr; // 0x88(0x10)
	struct FString de; // 0x98(0x10)
	struct FString ru; // 0xa8(0x10)
	struct FString ar; // 0xb8(0x10)
	struct FString tr; // 0xc8(0x10)
	struct FString tl; // 0xd8(0x10)
	struct FString es; // 0xe8(0x10)
	struct FString hi; // 0xf8(0x10)
	struct FString vi; // 0x108(0x10)
	struct FString th; // 0x118(0x10)
	struct FString it; // 0x128(0x10)
	struct FString pl; // 0x138(0x10)
	struct FString po; // 0x148(0x10)
	struct FString Op; // 0x158(0x10)
};

// ScriptStruct Solarland.SolarTables_LookAtCameras
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_LookAtCameras : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_LookAtCameras> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_LookAtCameras
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_LookAtCameras : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t MiniDistance; // 0x14(0x04)
	float BorderRatio; // 0x18(0x04)
	int32_t FOV; // 0x1c(0x04)
	int32_t Pitch; // 0x20(0x04)
	int32_t InitAngleWithMainDir; // 0x24(0x04)
	float BlendAlpha; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_MapMarkIcon
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_MapMarkIcon : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_MapMarkIcon> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_MapMarkIcon
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_MapMarkIcon : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString AtlasPath; // 0x18(0x10)
	struct TArray<float> IconSize; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_MatchRule
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_MatchRule : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_MatchRule> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_MatchRule
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_MatchRule : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t MatchType; // 0x14(0x04)
	int32_t MinPlayer; // 0x18(0x04)
	int32_t MaxPlayer; // 0x1c(0x04)
	int32_t NumMode; // 0x20(0x04)
	int32_t StopMatchTime; // 0x24(0x04)
	struct TArray<int32_t> PlayerStructure; // 0x28(0x10)
	int32_t MinGroup; // 0x38(0x04)
	int32_t EloSettleType; // 0x3c(0x04)
	int32_t RankSettleType; // 0x40(0x04)
	int32_t groupid; // 0x44(0x04)
	int32_t RankGroupNameID; // 0x48(0x04)
	bool MatchSameBattle; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t KeepMatchTimeID; // 0x50(0x04)
	int32_t OBNum; // 0x54(0x04)
	bool MaxPlayerStopMatch; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t StatisticsType; // 0x5c(0x04)
	int32_t HistoryModeType; // 0x60(0x04)
	bool HeroCombatAbility; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t RestartMatchTime; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Solarland.SolarTables_MaterialProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_MaterialProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_MaterialProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_MaterialProperty
// Size: 0x68 (Inherited: 0x10)
struct FSolarTablesData_MaterialProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t Prize; // 0x50(0x04)
	bool IfCollection; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t Level; // 0x58(0x04)
	struct FSolarTablesLocalText CoverName; // 0x5c(0x04)
	int32_t Substitution; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Solarland.SolarTables_NameCardBackground
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_NameCardBackground : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_NameCardBackground> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_NameCardBackground
// Size: 0x48 (Inherited: 0x10)
struct FSolarTablesData_NameCardBackground : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t ItemID; // 0x14(0x04)
	struct FSolarTablesLocalText Name; // 0x18(0x04)
	int32_t ShopID; // 0x1c(0x04)
	int32_t Exclusive; // 0x20(0x04)
	int32_t IsAIEquiped; // 0x24(0x04)
	struct FString BackgroundPath; // 0x28(0x10)
	struct FString BackgroundTexturePath; // 0x38(0x10)
};

// ScriptStruct Solarland.SolarTables_NameCardPose
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_NameCardPose : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_NameCardPose> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_NameCardPose
// Size: 0x78 (Inherited: 0x10)
struct FSolarTablesData_NameCardPose : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t ItemID; // 0x14(0x04)
	struct FSolarTablesLocalText Name; // 0x18(0x04)
	int32_t ShopID; // 0x1c(0x04)
	int32_t Exclusive; // 0x20(0x04)
	int32_t IsAIEquiped; // 0x24(0x04)
	struct FString PosePath; // 0x28(0x10)
	struct FString PosePath_M; // 0x38(0x10)
	struct FString PosePath_F; // 0x48(0x10)
	struct FString PosePath_MCP; // 0x58(0x10)
	struct FString PosePath_FFM; // 0x68(0x10)
};

// ScriptStruct Solarland.SolarTables_ObGift
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ObGift : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ObGift> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ObGift
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_ObGift : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t gift_type; // 0x14(0x04)
	struct FString item_name; // 0x18(0x10)
	struct FString item_back_res; // 0x28(0x10)
	struct FString item_text_res; // 0x38(0x10)
	int32_t gift_hot_num; // 0x48(0x04)
	int32_t currency_type; // 0x4c(0x04)
	int32_t item_price; // 0x50(0x04)
	float item_back; // 0x54(0x04)
	int32_t item_show_time; // 0x58(0x04)
	int32_t item_id; // 0x5c(0x04)
	int32_t small_time; // 0x60(0x04)
	int32_t interact_num; // 0x64(0x04)
	int32_t CD; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Solarland.SolarTables_OBSubtitle_Action2Feature
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OBSubtitle_Action2Feature : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OBSubtitle_Action2Feature> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OBSubtitle_Action2Feature
// Size: 0x48 (Inherited: 0x10)
struct FSolarTablesData_OBSubtitle_Action2Feature : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ActionName; // 0x18(0x10)
	int32_t Priority; // 0x28(0x04)
	int32_t DefualtEmotion; // 0x2c(0x04)
	int32_t MaxSuccessiveCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> FeatureList; // 0x38(0x10)
};

// ScriptStruct Solarland.SolarTables_OBSubtitle_Emotion2Pattern
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OBSubtitle_Emotion2Pattern : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OBSubtitle_Emotion2Pattern> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OBSubtitle_Emotion2Pattern
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_OBSubtitle_Emotion2Pattern : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t EmotionLevel; // 0x14(0x04)
	struct TArray<int32_t> PatternList; // 0x18(0x10)
};

// ScriptStruct Solarland.SolarTables_OBSubtitle_Feature2Emotion
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OBSubtitle_Feature2Emotion : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OBSubtitle_Feature2Emotion> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OBSubtitle_Feature2Emotion
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_OBSubtitle_Feature2Emotion : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString FeatureName; // 0x18(0x10)
	struct TArray<int32_t> EmotionList; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_OBSubtitle_Pattern2Subtitle
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OBSubtitle_Pattern2Subtitle : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OBSubtitle_Pattern2Subtitle> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OBSubtitle_Pattern2Subtitle
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_OBSubtitle_Pattern2Subtitle : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FSolarTablesLocalText> SubTitleList; // 0x18(0x10)
	struct TArray<int32_t> ENLengthList; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_Outcome
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Outcome : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Outcome> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Outcome
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_Outcome : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t OutcomeType; // 0x14(0x04)
	int32_t MaxTimes; // 0x18(0x04)
	int32_t MinTimes; // 0x1c(0x04)
	struct TArray<int32_t> Contents; // 0x20(0x10)
	struct TArray<int32_t> LimitId; // 0x30(0x10)
	struct TArray<int32_t> LimitIdMax; // 0x40(0x10)
	struct TArray<int32_t> LimitIdMin; // 0x50(0x10)
	struct FString Refresh; // 0x60(0x10)
};

// ScriptStruct Solarland.SolarTables_OutcomeContent
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OutcomeContent : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OutcomeContent> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OutcomeContent
// Size: 0x40 (Inherited: 0x10)
struct FSolarTablesData_OutcomeContent : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t ItemID; // 0x14(0x04)
	int32_t Weight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> RandomNum; // 0x20(0x10)
	int32_t MaxTimes; // 0x30(0x04)
	int32_t MinTimes; // 0x34(0x04)
	int32_t RelatedContentID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.SolarTables_OutcomeSet
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_OutcomeSet : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_OutcomeSet> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_OutcomeSet
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_OutcomeSet : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> OutcomeRef; // 0x18(0x10)
	struct TArray<int32_t> GlobalOutcome; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_PickupPriorityItem
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_PickupPriorityItem : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_PickupPriorityItem> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_PickupPriorityItem
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_PickupPriorityItem : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t PriorityValue; // 0x14(0x04)
	int32_t MutiAutoPickup; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_PickupPriorityWeaponPart
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_PickupPriorityWeaponPart : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_PickupPriorityWeaponPart> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_PickupPriorityWeaponPart
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_PickupPriorityWeaponPart : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t PriorityValue; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_PlayerOperationListLayout
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_PlayerOperationListLayout : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_PlayerOperationListLayout> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_PlayerOperationListLayout
// Size: 0x48 (Inherited: 0x10)
struct FSolarTablesData_PlayerOperationListLayout : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UIName; // 0x18(0x10)
	int32_t Normal; // 0x28(0x04)
	int32_t Driver; // 0x2c(0x04)
	int32_t Passgner; // 0x30(0x04)
	int32_t EquipVehicleWeapon; // 0x34(0x04)
	int32_t Cruising; // 0x38(0x04)
	int32_t Parachuting; // 0x3c(0x04)
	int32_t Swimming; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Solarland.SolarTables_QuickChat
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_QuickChat : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_QuickChat> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_QuickChat
// Size: 0x158 (Inherited: 0x10)
struct FSolarTablesData_QuickChat : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t LocalizationID; // 0x14(0x04)
	struct FString zh_CN; // 0x18(0x10)
	struct FString en; // 0x28(0x10)
	struct FString pt; // 0x38(0x10)
	struct FString ind; // 0x48(0x10)
	struct FString fr; // 0x58(0x10)
	struct FString de; // 0x68(0x10)
	struct FString ru; // 0x78(0x10)
	struct FString ar; // 0x88(0x10)
	struct FString es; // 0x98(0x10)
	struct FString hi; // 0xa8(0x10)
	struct FString it; // 0xb8(0x10)
	struct FString ja; // 0xc8(0x10)
	struct FString ko; // 0xd8(0x10)
	struct FString ms; // 0xe8(0x10)
	struct FString pl; // 0xf8(0x10)
	struct FString th; // 0x108(0x10)
	struct FString tl; // 0x118(0x10)
	struct FString tr; // 0x128(0x10)
	struct FString vi; // 0x138(0x10)
	struct FString zh_TW; // 0x148(0x10)
};

// ScriptStruct Solarland.SolarTables_QuickVoice
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_QuickVoice : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_QuickVoice> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_QuickVoice
// Size: 0x70 (Inherited: 0x10)
struct FSolarTablesData_QuickVoice : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	int32_t LocalizationID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AudioEventName; // 0x30(0x10)
	struct FString AudioEventNameFemale; // 0x40(0x10)
	int32_t IsMarkIcon; // 0x50(0x04)
	int32_t PassiveTriggeredCD; // 0x54(0x04)
	int32_t PassiveTriggeredProb; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString ReplyMessageID; // 0x60(0x10)
};

// ScriptStruct Solarland.SolarTables_RankLevel
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_RankLevel : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_RankLevel> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_RankLevel
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_RankLevel : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t RankID; // 0x14(0x04)
	struct FSolarTablesLocalText RankName; // 0x18(0x04)
	struct FSolarTablesLocalText Name; // 0x1c(0x04)
	int32_t LevelID; // 0x20(0x04)
	int32_t RankStart; // 0x24(0x04)
	int32_t RankEnd; // 0x28(0x04)
	int32_t RankProtect; // 0x2c(0x04)
	int32_t FrustrationValue; // 0x30(0x04)
	int32_t RankReduce; // 0x34(0x04)
	struct FString Icon; // 0x38(0x10)
	struct FString Icon_s; // 0x48(0x10)
	struct FString IconWord; // 0x58(0x10)
	struct FString IconWord_s; // 0x68(0x10)
	int32_t RandomLowerLimit; // 0x78(0x04)
	int32_t RandomUpLimit; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTables_RankMatch
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_RankMatch : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_RankMatch> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_RankMatch
// Size: 0x60 (Inherited: 0x10)
struct FSolarTablesData_RankMatch : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t MatchType; // 0x14(0x04)
	int32_t NumOfAI; // 0x18(0x04)
	int32_t AiLevel; // 0x1c(0x04)
	struct FString AILevelConfig; // 0x20(0x10)
	int32_t AITeamPresetsID; // 0x30(0x04)
	bool EnableTeamManager; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<int32_t> MLApplication; // 0x38(0x10)
	int32_t MLApply; // 0x48(0x04)
	int32_t MaxWait; // 0x4c(0x04)
	int32_t StopMatchTime; // 0x50(0x04)
	bool HasAITeammate; // 0x54(0x01)
	bool AIAccompany; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	int32_t AIAccompanyTimeline; // 0x58(0x04)
	int32_t MinPlayer; // 0x5c(0x04)
};

// ScriptStruct Solarland.SolarTables_Rescue
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Rescue : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Rescue> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Rescue
// Size: 0x68 (Inherited: 0x10)
struct FSolarTablesData_Rescue : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	float RescueMaxDistance; // 0x14(0x04)
	float FallenHp; // 0x18(0x04)
	float RescueRecoveryHp; // 0x1c(0x04)
	int32_t RescueTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<float> FallenLossHp; // 0x28(0x10)
	struct TArray<float> FallenMoveLossHp; // 0x38(0x10)
	float FallenMoveSpeed; // 0x48(0x04)
	float RescueMoveSpeed; // 0x4c(0x04)
	float InvincibleTime; // 0x50(0x04)
	float MaxRescueAngle; // 0x54(0x04)
	float RemindRescueCooldownTime; // 0x58(0x04)
	float RemindRescueSoundCD; // 0x5c(0x04)
	int32_t RemindRescueSoundIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Solarland.SolarTables_SecondMode
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_SecondMode : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_SecondMode> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_SecondMode
// Size: 0x28 (Inherited: 0x10)
struct FSolarTablesData_SecondMode : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t UpperLimit; // 0x14(0x04)
	float RestoreProgressPerSec; // 0x18(0x04)
	float RestoreProgressPerKill; // 0x1c(0x04)
	float RestoreProgressPerDmg; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Solarland.SolarTables_ShieldProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_ShieldProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_ShieldProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_ShieldProperty
// Size: 0xd8 (Inherited: 0x10)
struct FSolarTablesData_ShieldProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemType; // 0x30(0x04)
	bool IfReplace; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Pile; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AbilityBP; // 0x40(0x10)
	struct FString ItemBP; // 0x50(0x10)
	struct FString AudioEventName; // 0x60(0x10)
	bool UseOnPickup; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float MaxValue; // 0x74(0x04)
	float RecoverySpeed; // 0x78(0x04)
	float EnergyCost; // 0x7c(0x04)
	int32_t CoolDownTime; // 0x80(0x04)
	float RecoveryDuration; // 0x84(0x04)
	float RecoveryDurationB; // 0x88(0x04)
	float RecoveryAmount; // 0x8c(0x04)
	float EnergyConsumption; // 0x90(0x04)
	int32_t ShieldWorth; // 0x94(0x04)
	struct FString Sketch; // 0x98(0x10)
	int32_t SketchLevel; // 0xa8(0x04)
	int32_t QualityColor; // 0xac(0x04)
	int32_t AutoRecharge; // 0xb0(0x04)
	float LeaveCombatTime; // 0xb4(0x04)
	float AutoRechargeInterval; // 0xb8(0x04)
	float AutoRechargeValue; // 0xbc(0x04)
	int32_t NextUpgradeCost; // 0xc0(0x04)
	int32_t NextUpgradeItemID; // 0xc4(0x04)
	int32_t UpgradeItemCost; // 0xc8(0x04)
	float UpgradeTimeCost; // 0xcc(0x04)
	float ShieldRechargeDelayTime; // 0xd0(0x04)
	float ShieldRecoveryTime; // 0xd4(0x04)
};

// ScriptStruct Solarland.SolarTables_Skin
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Skin : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Skin> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Skin
// Size: 0xe8 (Inherited: 0x10)
struct FSolarTablesData_Skin : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t CharaId; // 0x14(0x04)
	struct FSolarTablesLocalText Name; // 0x18(0x04)
	bool IfShow; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString BeginTime; // 0x20(0x10)
	int32_t ShopPropertyid; // 0x30(0x04)
	int32_t ItemID; // 0x34(0x04)
	struct FString MVPDataAssetPath; // 0x38(0x10)
	struct FString MVPSequencePath; // 0x48(0x10)
	int32_t SceneId; // 0x58(0x04)
	bool IsMVP; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FString CharacterSkinResource; // 0x60(0x10)
	struct FString CharacterLobbySkinResource; // 0x70(0x10)
	struct FString ChunkDir; // 0x80(0x10)
	int32_t ChunkID; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString CharacterLowSkinResource; // 0x98(0x10)
	struct TArray<int32_t> CharacterPrologue; // 0xa8(0x10)
	struct FString CharacterProtrait; // 0xb8(0x10)
	int32_t SkinSort; // 0xc8(0x04)
	int32_t MVPSettlementStartFrame; // 0xcc(0x04)
	int32_t MVPSettlementEndFrame; // 0xd0(0x04)
	int32_t MVPAnchorPoint; // 0xd4(0x04)
	struct FString IdleShowSequencePath; // 0xd8(0x10)
};

// ScriptStruct Solarland.SolarTables_Tables
// Size: 0x2e88 (Inherited: 0x00)
struct FSolarTables_Tables {
	char pad_0[0x8]; // 0x00(0x08)
	struct FSolarTables_AccountFixedExp AccountFixedExp; // 0x08(0x60)
	struct FSolarTables_AccountFlag AccountFlag; // 0x68(0x60)
	struct FSolarTables_Airline Airline; // 0xc8(0x60)
	struct FSolarTables_Armory Armory; // 0x128(0x60)
	struct FSolarTables_BattleUpgradeContent BattleUpgradeContent; // 0x188(0x60)
	struct FSolarTables_BattleUpgradeEffect BattleUpgradeEffect; // 0x1e8(0x60)
	struct FSolarTables_BattleUpgradeEffectPool BattleUpgradeEffectPool; // 0x248(0x60)
	struct FSolarTables_BattleEndRankSettlement BattleEndRankSettlement; // 0x2a8(0x60)
	struct FSolarTables_BpAward BpAward; // 0x308(0x60)
	struct FSolarTables_Behavior Behavior; // 0x368(0x60)
	struct FSolarTables_EscapeExp EscapeExp; // 0x3c8(0x60)
	struct FSolarTables_CaseToggleAlphabet CaseToggleAlphabet; // 0x428(0x60)
	struct FSolarTables_UnitCharacter UnitCharacter; // 0x488(0x60)
	struct FSolarTables_CharacterAbility CharacterAbility; // 0x4e8(0x60)
	struct FSolarTables_CharacterPassiveAbility CharacterPassiveAbility; // 0x548(0x60)
	struct FSolarTables_GetPoint GetPoint; // 0x5a8(0x60)
	struct FSolarTables_ChestSpawn ChestSpawn; // 0x608(0x60)
	struct FSolarTables_ChestSpawnGroup ChestSpawnGroup; // 0x668(0x60)
	struct FSolarTables_ClanFlag ClanFlag; // 0x6c8(0x60)
	struct FSolarTables_DayAndNight DayAndNight; // 0x728(0x60)
	struct FSolarTables_DsVariableRange DsVariableRange; // 0x788(0x60)
	struct FSolarTables_EShop EShop; // 0x7e8(0x60)
	struct FSolarTables_EShopDemoModel EShopDemoModel; // 0x848(0x60)
	struct FSolarTables_EShopGoodsPool EShopGoodsPool; // 0x8a8(0x60)
	struct FSolarTables_EShopGoodsPoolGroup EShopGoodsPoolGroup; // 0x908(0x60)
	struct FSolarTables_EShopSpawn EShopSpawn; // 0x968(0x60)
	struct FSolarTables_BattleRoyaleMode BattleRoyaleMode; // 0x9c8(0x60)
	struct FSolarTables_GameModeGroup GameModeGroup; // 0xa28(0x60)
	struct FSolarTables_GameModeMain GameModeMain; // 0xa88(0x60)
	struct FSolarTables_OutcomeSet OutcomeSet; // 0xae8(0x60)
	struct FSolarTables_GameTimeLine GameTimeLine; // 0xb48(0x60)
	struct FSolarTables_GlobalOutcome GlobalOutcome; // 0xba8(0x60)
	struct FSolarTables_GlobalSensitivity GlobalSensitivity; // 0xc08(0x60)
	struct FSolarTables_HeroPowerFormula HeroPowerFormula; // 0xc68(0x60)
	struct FSolarTables_InputAction InputAction; // 0xcc8(0x60)
	struct FSolarTables_InputMapping InputMapping; // 0xd28(0x60)
	struct FSolarTables_Item Item; // 0xd88(0x60)
	struct FSolarTables_BackpackProperty BackpackProperty; // 0xde8(0x60)
	struct FSolarTables_BackpackTrailProperty BackpackTrailProperty; // 0xe48(0x60)
	struct FSolarTables_CapsuleProperty CapsuleProperty; // 0xea8(0x60)
	struct FSolarTables_Dance Dance; // 0xf08(0x60)
	struct FSolarTables_Emote Emote; // 0xf68(0x60)
	struct FSolarTables_KillNotify KillNotify; // 0xfc8(0x60)
	struct FSolarTables_MaterialProperty MaterialProperty; // 0x1028(0x60)
	struct FSolarTables_VehicleSkinProperty VehicleSkinProperty; // 0x1088(0x60)
	struct FSolarTables_Voice Voice; // 0x10e8(0x60)
	struct FSolarTables_WeaponSkinProperty WeaponSkinProperty; // 0x1148(0x60)
	struct FSolarTables_ItemCustomType ItemCustomType; // 0x11a8(0x60)
	struct FSolarTables_ItemInBattle ItemInBattle; // 0x1208(0x60)
	struct FSolarTables_ArmorProperty ArmorProperty; // 0x1268(0x60)
	struct FSolarTables_Chest Chest; // 0x12c8(0x60)
	struct FSolarTables_Collect Collect; // 0x1328(0x60)
	struct FSolarTables_EnergyProperty EnergyProperty; // 0x1388(0x60)
	struct FSolarTables_ExtraEnergyProperty ExtraEnergyProperty; // 0x13e8(0x60)
	struct FSolarTables_GunProperty GunProperty; // 0x1448(0x60)
	struct FSolarTables_ItemBehavior ItemBehavior; // 0x14a8(0x60)
	struct FSolarTables_ItemWeaponParts ItemWeaponParts; // 0x1508(0x60)
	struct FSolarTables_JetPackModuleProperty JetPackModuleProperty; // 0x1568(0x60)
	struct FSolarTables_ShieldProperty ShieldProperty; // 0x15c8(0x60)
	struct FSolarTables_ItemQuality ItemQuality; // 0x1628(0x60)
	struct FSolarTables_ItemSound ItemSound; // 0x1688(0x60)
	struct FSolarTables_LobbyAutoDownload LobbyAutoDownload; // 0x16e8(0x60)
	struct FSolarTables_LanguageSwitcher LanguageSwitcher; // 0x1748(0x60)
	struct FSolarTables_Localization Localization; // 0x17a8(0x60)
	struct FSolarTables_Localization_BattleUI Localization_BattleUI; // 0x1808(0x60)
	struct FSolarTables_Localization_EventSystem Localization_EventSystem; // 0x1868(0x60)
	struct FSolarTables_Localization_General Localization_General; // 0x18c8(0x60)
	struct FSolarTables_Localization_Heroes Localization_Heroes; // 0x1928(0x60)
	struct FSolarTables_Localization_Item Localization_Item; // 0x1988(0x60)
	struct FSolarTables_Localization_Tournament Localization_Tournament; // 0x19e8(0x60)
	struct FSolarTables_Localization_Uncategorized Localization_Uncategorized; // 0x1a48(0x60)
	struct FSolarTables_GameMap GameMap; // 0x1aa8(0x60)
	struct FSolarTables_MapMarkIcon MapMarkIcon; // 0x1b08(0x60)
	struct FSolarTables_MatchRule MatchRule; // 0x1b68(0x60)
	struct FSolarTables_RankMatch RankMatch; // 0x1bc8(0x60)
	struct FSolarTables_NameCardBackground NameCardBackground; // 0x1c28(0x60)
	struct FSolarTables_NameCardPose NameCardPose; // 0x1c88(0x60)
	struct FSolarTables_ObGift ObGift; // 0x1ce8(0x60)
	struct FSolarTables_OBSubtitle_Action2Feature OBSubtitle_Action2Feature; // 0x1d48(0x60)
	struct FSolarTables_OBSubtitle_Feature2Emotion OBSubtitle_Feature2Emotion; // 0x1da8(0x60)
	struct FSolarTables_OBSubtitle_Emotion2Pattern OBSubtitle_Emotion2Pattern; // 0x1e08(0x60)
	struct FSolarTables_OBSubtitle_Pattern2Subtitle OBSubtitle_Pattern2Subtitle; // 0x1e68(0x60)
	struct FSolarTables_Outcome Outcome; // 0x1ec8(0x60)
	struct FSolarTables_OutcomeContent OutcomeContent; // 0x1f28(0x60)
	struct FSolarTables_PickupPriorityItem PickupPriorityItem; // 0x1f88(0x60)
	struct FSolarTables_PickupPriorityWeaponPart PickupPriorityWeaponPart; // 0x1fe8(0x60)
	struct FSolarTables_CharacterVoiceover CharacterVoiceover; // 0x2048(0x60)
	struct FSolarTables_QuickChat QuickChat; // 0x20a8(0x60)
	struct FSolarTables_QuickVoice QuickVoice; // 0x2108(0x60)
	struct FSolarTables_VODownload VODownload; // 0x2168(0x60)
	struct FSolarTables_RankLevel RankLevel; // 0x21c8(0x60)
	struct FSolarTables_AutoDirector AutoDirector; // 0x2228(0x60)
	struct FSolarTables_AutoDirectorActivityScore AutoDirectorActivityScore; // 0x2288(0x60)
	struct FSolarTables_CircularCameras CircularCameras; // 0x22e8(0x60)
	struct FSolarTables_HighlightRating HighlightRating; // 0x2348(0x60)
	struct FSolarTables_HotSpot HotSpot; // 0x23a8(0x60)
	struct FSolarTables_LookAtCameras LookAtCameras; // 0x2408(0x60)
	struct FSolarTables_Rescue Rescue; // 0x2468(0x60)
	struct FSolarTables_Skin Skin; // 0x24c8(0x60)
	struct FSolarTables_Achievement Achievement; // 0x2528(0x60)
	struct FSolarTables_TaskProgress TaskProgress; // 0x2588(0x60)
	struct FSolarTables_TaskSystem TaskSystem; // 0x25e8(0x60)
	struct FSolarTables_PlayerOperationListLayout PlayerOperationListLayout; // 0x2648(0x60)
	struct FSolarTables_Variables Variables; // 0x26a8(0x60)
	struct FSolarTables_Vehicle Vehicle; // 0x2708(0x60)
	struct FSolarTables_VehicleSkin VehicleSkin; // 0x2768(0x60)
	struct FSolarTables_VehicleType VehicleType; // 0x27c8(0x60)
	struct FSolarTables_VehicleSpawn VehicleSpawn; // 0x2828(0x60)
	struct FSolarTables_VehicleSpawnGroup VehicleSpawnGroup; // 0x2888(0x60)
	struct FSolarTables_WarmGame WarmGame; // 0x28e8(0x60)
	struct FSolarTables_WarmGameMode WarmGameMode; // 0x2948(0x60)
	struct FSolarTables_WeaponDamage WeaponDamage; // 0x29a8(0x60)
	struct FSolarTables_Weapon Weapon; // 0x2a08(0x60)
	struct FSolarTables_WeaponAmmo WeaponAmmo; // 0x2a68(0x60)
	struct FSolarTables_WeaponBattleUpgrade WeaponBattleUpgrade; // 0x2ac8(0x60)
	struct FSolarTables_WeaponDefault WeaponDefault; // 0x2b28(0x60)
	struct FSolarTables_WeaponKillTip WeaponKillTip; // 0x2b88(0x60)
	struct FSolarTables_WeaponParts WeaponParts; // 0x2be8(0x60)
	struct FSolarTables_WeaponPartsOp WeaponPartsOp; // 0x2c48(0x60)
	struct FSolarTables_WeaponQuality WeaponQuality; // 0x2ca8(0x60)
	struct FSolarTables_SecondMode SecondMode; // 0x2d08(0x60)
	struct FSolarTables_WeaponSkin WeaponSkin; // 0x2d68(0x60)
	struct FSolarTables_WeaponSound WeaponSound; // 0x2dc8(0x60)
	struct FSolarTables_WeaponStatu WeaponStatu; // 0x2e28(0x60)
};

// ScriptStruct Solarland.SolarTables_WeaponStatu
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponStatu : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponStatu> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponStatu
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_WeaponStatu : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	float Stand; // 0x14(0x04)
	float CrouchDown; // 0x18(0x04)
	float Still; // 0x1c(0x04)
	float Run; // 0x20(0x04)
	float Spint; // 0x24(0x04)
	float Jump; // 0x28(0x04)
	float Fly; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponSound
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponSound : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponSound> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponSound
// Size: 0x4f8 (Inherited: 0x10)
struct FSolarTablesData_WeaponSound : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Play_Fire_Auto_1P; // 0x18(0x10)
	struct FString Play_Fire_Auto_3P; // 0x28(0x10)
	struct FString Play_Fire_Auto_3P_Enemy; // 0x38(0x10)
	struct FString Stop_Fire_Auto_1P; // 0x48(0x10)
	struct FString Stop_Fire_Auto_3P; // 0x58(0x10)
	struct FString Stop_Fire_Auto_3P_Enemy; // 0x68(0x10)
	struct FString Play_Fire_Sigle_1P; // 0x78(0x10)
	struct FString Play_Fire_Sigle_3P; // 0x88(0x10)
	struct FString Play_Fire_Sigle_3P_Enemy; // 0x98(0x10)
	struct FString Play_Fire_Burst_1P; // 0xa8(0x10)
	struct FString Play_Fire_Burst_3P; // 0xb8(0x10)
	struct FString Play_Fire_Burst_3P_Enemy; // 0xc8(0x10)
	struct FString Stop_Fire_Burst_1P; // 0xd8(0x10)
	struct FString Stop_Fire_Burst_3P; // 0xe8(0x10)
	struct FString Stop_Fire_Burst_3P_Enemy; // 0xf8(0x10)
	struct FString Play_FIRE_LAST_1P; // 0x108(0x10)
	struct FString Play_FIRE_LAST_3P; // 0x118(0x10)
	struct FString Play_FIRE_LAST_3P_Enemy; // 0x128(0x10)
	struct FString Remain_Gun_RTPC_NAME; // 0x138(0x10)
	struct FString Play_Skill_Cast_1P; // 0x148(0x10)
	struct FString Play_Skill_Cast_3P; // 0x158(0x10)
	struct FString Play_Skill_Cast_3P_Enemy; // 0x168(0x10)
	struct FString Play_Fire_Lay_Tl_1P; // 0x178(0x10)
	struct FString Play_Fire_Lay_Tl_3P; // 0x188(0x10)
	struct FString Play_Fire_Lay_Tl_3P_Enemy; // 0x198(0x10)
	struct FString Play_Land_Fly_Once_3P; // 0x1a8(0x10)
	struct FString Play_Land_Fly_Once_3P_Enemy; // 0x1b8(0x10)
	struct FString Play_Land_Fly_Loop_1P; // 0x1c8(0x10)
	struct FString Play_Land_Fly_Loop_3P; // 0x1d8(0x10)
	struct FString Play_Land_Fly_Loop_3P_Enemy; // 0x1e8(0x10)
	struct FString Stop_Land_Fly_Loop_1P; // 0x1f8(0x10)
	struct FString Stop_Land_Fly_Loop_3P; // 0x208(0x10)
	struct FString Stop_Land_Fly_Loop_3P_Enemy; // 0x218(0x10)
	struct FString Play_Land_Common_Hit_1P; // 0x228(0x10)
	struct FString Play_Land_Common_Hit_3P; // 0x238(0x10)
	struct FString Play_Land_Common_Hit_3P_Enemy; // 0x248(0x10)
	struct FString Play_Fire_Overload_1P; // 0x258(0x10)
	struct FString Play_Fire_Overload_3P; // 0x268(0x10)
	struct FString Play_Fire_Overload_3P_Enemy; // 0x278(0x10)
	struct FString Play_Reload_01_1P; // 0x288(0x10)
	struct FString Play_Reload_01_3P; // 0x298(0x10)
	struct FString Play_Reload_01_3P_Enemy; // 0x2a8(0x10)
	struct FString Play_Reload_02_1P; // 0x2b8(0x10)
	struct FString Play_Reload_02_3P; // 0x2c8(0x10)
	struct FString Play_Reload_02_3P_Enemy; // 0x2d8(0x10)
	struct FString Play_Reload_03_1P; // 0x2e8(0x10)
	struct FString Play_Reload_03_3P; // 0x2f8(0x10)
	struct FString Play_Reload_03_3P_Enemy; // 0x308(0x10)
	struct FString Play_Bolt_1P; // 0x318(0x10)
	struct FString Play_Bolt_3P; // 0x328(0x10)
	struct FString Play_Bolt_3P_Enemy; // 0x338(0x10)
	struct FString Play_Vehicle_Gun_On_3P; // 0x348(0x10)
	struct FString Play_Vehicle_Gun_On_3P_Enemy; // 0x358(0x10)
	struct FString Play_Vehicle_Gun_Loop_3P; // 0x368(0x10)
	struct FString Play_Vehicle_Gun_Loop_3P_Enemy; // 0x378(0x10)
	struct FString Play_Vehicle_Gun_Off_3P; // 0x388(0x10)
	struct FString Play_Vehicle_Gun_Off_3P_Enemy; // 0x398(0x10)
	struct FString Play_Fire_Auto_1P_Mute; // 0x3a8(0x10)
	struct FString Play_Fire_Auto_3P_Mute; // 0x3b8(0x10)
	struct FString Play_Fire_Auto_3P_Enemy_Mute; // 0x3c8(0x10)
	struct FString Stop_Fire_Auto_1P_Mute; // 0x3d8(0x10)
	struct FString Stop_Fire_Auto_3P_Mute; // 0x3e8(0x10)
	struct FString Stop_Fire_Auto_3P_Enemy_Mute; // 0x3f8(0x10)
	struct FString Play_Fire_Sigle_1P_Mute; // 0x408(0x10)
	struct FString Play_Fire_Sigle_3P_Mute; // 0x418(0x10)
	struct FString Play_Fire_Sigle_3P_Enemy_Mute; // 0x428(0x10)
	struct FString Play_Fire_Burst_1P_Mute; // 0x438(0x10)
	struct FString Play_Fire_Burst_3P_Mute; // 0x448(0x10)
	struct FString Play_Fire_Burst_3P_Enemy_Mute; // 0x458(0x10)
	struct FString Stop_Fire_Burst_1P_Mute; // 0x468(0x10)
	struct FString Stop_Fire_Burst_3P_Mute; // 0x478(0x10)
	struct FString Stop_Fire_Burst_3P_Enemy_Mute; // 0x488(0x10)
	struct FString Play_Fire_Lay_Tl_1P_Mute; // 0x498(0x10)
	struct FString Play_Fire_Lay_Tl_3P_Mute; // 0x4a8(0x10)
	struct FString Play_Fire_Lay_Tl_3P_Enemy_Mute; // 0x4b8(0x10)
	struct FString Play_Fire_Empty_1p; // 0x4c8(0x10)
	struct FString Play_Fire_Empty_3p; // 0x4d8(0x10)
	struct FString Play_Fire_Empty_3p_Enemy; // 0x4e8(0x10)
};

// ScriptStruct Solarland.SolarTables_WeaponSkin
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponSkin : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponSkin> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponSkin
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_WeaponSkin : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t WeaponSkinType; // 0x14(0x04)
	struct FString WeaponSkillQuality; // 0x18(0x10)
	int32_t SortId; // 0x28(0x04)
	int32_t weaponid; // 0x2c(0x04)
	struct FString WeaponSkinResource; // 0x30(0x10)
	int32_t WeaponSkinAquiredThru; // 0x40(0x04)
	int32_t JumpPage; // 0x44(0x04)
	struct FString KillBroadcast; // 0x48(0x10)
	int32_t ShopPropertyid; // 0x58(0x04)
	int32_t ItemID; // 0x5c(0x04)
	bool DisplayInWeaponry; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString ChunkDir; // 0x68(0x10)
	int32_t ChunkID; // 0x78(0x04)
	int32_t AIRandomWeight; // 0x7c(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponQuality
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponQuality : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponQuality> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponQuality
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_WeaponQuality : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t Quality; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponPartsOp
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponPartsOp : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponPartsOp> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponPartsOp
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_WeaponPartsOp : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t EffectOperator; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponParts
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponParts : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponParts> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponParts
// Size: 0x100 (Inherited: 0x10)
struct FSolarTablesData_WeaponParts : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t WeaponLevel; // 0x14(0x04)
	enum class ESolarTablesEnum_PartsType PartsType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<struct FString, struct FString> AttributeSub; // 0x20(0x50)
	int32_t PartsQuality; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString PartsBPResource; // 0x78(0x10)
	struct FString PartsIcon; // 0x88(0x10)
	int32_t EffectCondition; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<int32_t> PartsEffect; // 0xa0(0x10)
	struct TArray<float> PartsValue; // 0xb0(0x10)
	struct TArray<int32_t> PartsWeaponID; // 0xc0(0x10)
	int32_t PartsName; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FString> PartsDesc; // 0xd8(0x10)
	int32_t WeaponPartDamage; // 0xe8(0x04)
	int32_t WeaponPartRateOfFire; // 0xec(0x04)
	int32_t WeaponPartRecoil; // 0xf0(0x04)
	int32_t WeaponPartSpread; // 0xf4(0x04)
	int32_t WeaponPartRange; // 0xf8(0x04)
	int32_t WeaponPartMobility; // 0xfc(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponKillTip
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponKillTip : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponKillTip> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponKillTip
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_WeaponKillTip : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t KillTipType; // 0x14(0x04)
	int32_t KillTipValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString KillTipIcon; // 0x20(0x10)
	struct FSolarTablesLocalText KillTipname; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponDefault
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponDefault : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponDefault> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponDefault
// Size: 0x90 (Inherited: 0x10)
struct FSolarTablesData_WeaponDefault : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	enum class ESolarTablesEnum_AccessoryType AccessoryType1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<int32_t> SlotSubtype1; // 0x18(0x10)
	int32_t AccessoryID1; // 0x28(0x04)
	enum class ESolarTablesEnum_AccessoryType AccessoryType2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<int32_t> SlotSubtype2; // 0x30(0x10)
	int32_t AccessoryID2; // 0x40(0x04)
	enum class ESolarTablesEnum_AccessoryType AccessoryType3; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<int32_t> SlotSubtype3; // 0x48(0x10)
	int32_t AccessoryID3; // 0x58(0x04)
	enum class ESolarTablesEnum_AccessoryType AccessoryType4; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<int32_t> SlotSubtype4; // 0x60(0x10)
	int32_t AccessoryID4; // 0x70(0x04)
	enum class ESolarTablesEnum_AccessoryType AccessoryType5; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<int32_t> SlotSubtype5; // 0x78(0x10)
	int32_t AccessoryID5; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponBattleUpgrade
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponBattleUpgrade : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponBattleUpgrade> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponBattleUpgrade
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_WeaponBattleUpgrade : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t Exp; // 0x14(0x04)
	int32_t Retrofit; // 0x18(0x04)
	int32_t UpgradeCost; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_WeaponAmmo
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponAmmo : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponAmmo> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponAmmo
// Size: 0x168 (Inherited: 0x10)
struct FSolarTablesData_WeaponAmmo : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t AmmoType; // 0x14(0x04)
	int32_t PropID; // 0x18(0x04)
	int32_t SoundID; // 0x1c(0x04)
	bool IfTimedExplode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t BounceTimes; // 0x24(0x04)
	float LifeTime; // 0x28(0x04)
	float BaseReloadTime; // 0x2c(0x04)
	float ReloadBoltTime; // 0x30(0x04)
	enum class ESolarTablesEnum_FireMethodType FireMethodType; // 0x34(0x01)
	enum class ESolarTablesEnum_TrajectoryType TrajectoryType; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float CustomValue; // 0x38(0x04)
	enum class ESolarTablesEnum_TriggerType TriggerType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MaxRange; // 0x40(0x04)
	float EffRange; // 0x44(0x04)
	float ProjectileMaxGravity; // 0x48(0x04)
	float DamageMaxRange; // 0x4c(0x04)
	float DamageEffRange; // 0x50(0x04)
	float Radius; // 0x54(0x04)
	float PostFireOverload; // 0x58(0x04)
	float InitSpeed; // 0x5c(0x04)
	float FireStreakBreakTime; // 0x60(0x04)
	enum class ESolarTablesEnum_FireCostType FireCostType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t FireCostPerAttack; // 0x68(0x04)
	int32_t FireSpeedChangeTime; // 0x6c(0x04)
	float FireSpeedChangeCOP; // 0x70(0x04)
	float FireIntervalRevertPreTime; // 0x74(0x04)
	float FireIntervalReavertSpeed; // 0x78(0x04)
	float FastestFireInterval; // 0x7c(0x04)
	float SlowestFireInterval; // 0x80(0x04)
	float BaseFireInterval; // 0x84(0x04)
	float BoltActionTime; // 0x88(0x04)
	float BurstShootInterval; // 0x8c(0x04)
	float BurstFireInterval; // 0x90(0x04)
	float StartBoltDuration; // 0x94(0x04)
	bool UsePrimaryModeAmmoCap; // 0x98(0x01)
	bool UseBag; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct TArray<float> SkillCDDiscountArray; // 0xa0(0x10)
	int32_t SkillType; // 0xb0(0x04)
	float VhADSSpreadCOP; // 0xb4(0x04)
	float ADSSpreadCOP; // 0xb8(0x04)
	float SpreadFirePreTime; // 0xbc(0x04)
	float SpreadPostFireSpeed; // 0xc0(0x04)
	float SpreadRestorePreTime; // 0xc4(0x04)
	float SpreadRestoreSpeed; // 0xc8(0x04)
	float VRecoilCostTime; // 0xcc(0x04)
	int32_t VRecoilAPoint; // 0xd0(0x04)
	float VRecoilAPointMax; // 0xd4(0x04)
	float VRecoilAPointMin; // 0xd8(0x04)
	int32_t VRecoilBPoint; // 0xdc(0x04)
	float VRecoilBPointMax; // 0xe0(0x04)
	float VRecoilBPointMin; // 0xe4(0x04)
	float HRecoilCostTime; // 0xe8(0x04)
	int32_t HRecoilAPoint; // 0xec(0x04)
	float HRecoilAPointMax; // 0xf0(0x04)
	float HRecoilAPointMin; // 0xf4(0x04)
	int32_t HRecoilBPoint; // 0xf8(0x04)
	float HRecoilBPointMax; // 0xfc(0x04)
	float HRecoilBPointMin; // 0x100(0x04)
	int32_t RecoilCOP; // 0x104(0x04)
	float ADSRecoilCOP; // 0x108(0x04)
	float RollCostTime; // 0x10c(0x04)
	int32_t RollAPoint; // 0x110(0x04)
	int32_t RollBPoint; // 0x114(0x04)
	float RollHightestPointMax; // 0x118(0x04)
	float RollHightestPointMin; // 0x11c(0x04)
	float RollLowesttPointMax; // 0x120(0x04)
	float RollLowesttPointMin; // 0x124(0x04)
	float ADSRollCOP; // 0x128(0x04)
	float ScopeRollCostTime; // 0x12c(0x04)
	int32_t ScopeRollAPoint; // 0x130(0x04)
	int32_t ScopeRollBPoint; // 0x134(0x04)
	float ScopeRollHightestPointMax; // 0x138(0x04)
	float ScopeRollHightestPointMin; // 0x13c(0x04)
	float ScopeRollLowesttPointMax; // 0x140(0x04)
	float ScopeRollLowesttPointMin; // 0x144(0x04)
	float ScopeVMaxDistanceOffSet; // 0x148(0x04)
	float ScopeHMaxDistanceOffSet; // 0x14c(0x04)
	float ScopeVVibrationDuration; // 0x150(0x04)
	float ScopeHVibrationDuration; // 0x154(0x04)
	float CrossHairVibrationScale; // 0x158(0x04)
	float ScopeVContinuousFallingDuration; // 0x15c(0x04)
	int32_t ScopeVContinuousFallingPointIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// ScriptStruct Solarland.SolarTables_Weapon
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Weapon : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Weapon> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Weapon
// Size: 0x1f0 (Inherited: 0x10)
struct FSolarTablesData_Weapon : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	enum class ESolarTablesEnum_WeaponType WeaponType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t WeaponBrand; // 0x1c(0x04)
	bool SupportSecondaryAmmo; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<int32_t> AccessoryID; // 0x28(0x10)
	struct FString WeaponIcon; // 0x38(0x10)
	bool Single; // 0x48(0x01)
	bool Burst; // 0x49(0x01)
	bool Automatic; // 0x4a(0x01)
	bool OneKeyScope; // 0x4b(0x01)
	float HitHead; // 0x4c(0x04)
	int32_t SecModeLimitTypeID; // 0x50(0x04)
	int32_t BurstMaxCount; // 0x54(0x04)
	struct FString WeaponDamage; // 0x58(0x10)
	float MaxSpread; // 0x68(0x04)
	float MinSpread; // 0x6c(0x04)
	float HipFireBaseSpread; // 0x70(0x04)
	float VhADSBaseSpread; // 0x74(0x04)
	float ADSBaseSpread; // 0x78(0x04)
	float SpreadStatuSpeed; // 0x7c(0x04)
	float SpreadStatuIncreaseID; // 0x80(0x04)
	float SpreadStatuReduceID; // 0x84(0x04)
	int32_t SpreadCOPID; // 0x88(0x04)
	int32_t PrimaryAmmo; // 0x8c(0x04)
	int32_t PrimaryAmmoCap; // 0x90(0x04)
	int32_t SecondaryAmmo; // 0x94(0x04)
	int32_t SecondaryAmmoCap; // 0x98(0x04)
	bool CanOverload; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float OverloadMaxValue; // 0xa0(0x04)
	float NormalOverloadCoolingRate; // 0xa4(0x04)
	float OverloadCoolingPeriod; // 0xa8(0x04)
	float OverloadWarningRate; // 0xac(0x04)
	bool CanAutoFire; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float AutoFireDelayMs; // 0xb4(0x04)
	float AutoFireEndDelayMs; // 0xb8(0x04)
	bool CanAimAssist; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<float> HipSoftZone; // 0xc0(0x10)
	float HipAimAssistStepRatio; // 0xd0(0x04)
	float HipMinAssistStepRatio; // 0xd4(0x04)
	float HipAimAssistStepSpeed; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<float> AdsSoftZone; // 0xe0(0x10)
	float AdsAimAssistStepRatio; // 0xf0(0x04)
	float AdsMinAssistStepRatio; // 0xf4(0x04)
	float AdsAimAssistStepSpeed; // 0xf8(0x04)
	bool CanOpenScopeAimAssist; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float OpenScopeAimAssistStepRatio; // 0x100(0x04)
	float OpenScopeMinAssistStepRatio; // 0x104(0x04)
	float OpenScopeAssistStepSpeed; // 0x108(0x04)
	float OnVehicleAssistStepRatio; // 0x10c(0x04)
	float Weight; // 0x110(0x04)
	float HipFireSpeed; // 0x114(0x04)
	float ADSFireSpeed; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<int32_t> DefaultParts; // 0x120(0x10)
	float ScopeOpenTime; // 0x130(0x04)
	float FovFactor; // 0x134(0x04)
	float WeaponSwitchTime; // 0x138(0x04)
	float WeaponUnequipTime; // 0x13c(0x04)
	struct TArray<int32_t> PartSlots; // 0x140(0x10)
	struct TMap<struct FString, struct FString> EquipAttributeSub; // 0x150(0x50)
	struct TMap<struct FString, struct FString> HoldAttributeSub; // 0x1a0(0x50)
};

// ScriptStruct Solarland.SolarTables_WeaponDamage
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponDamage : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponDamage> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponDamage
// Size: 0x20 (Inherited: 0x10)
struct FSolarTablesData_WeaponDamage : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	float NpcDamageFactor; // 0x14(0x04)
	float BotDamageFactor; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarTables_WarmGameMode
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WarmGameMode : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WarmGameMode> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WarmGameMode
// Size: 0x68 (Inherited: 0x10)
struct FSolarTablesData_WarmGameMode : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t UniqueId; // 0x14(0x04)
	int32_t CCUStart; // 0x18(0x04)
	int32_t CCUEnd; // 0x1c(0x04)
	int32_t NumOfAI; // 0x20(0x04)
	int32_t AiLevel; // 0x24(0x04)
	struct FString AILevelConfig; // 0x28(0x10)
	int32_t AITeamPresetsID; // 0x38(0x04)
	bool EnableTeamManager; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t MinPlayer; // 0x40(0x04)
	int32_t MaxRealGroup; // 0x44(0x04)
	int32_t LeastRealPlayer; // 0x48(0x04)
	int32_t MaxWait; // 0x4c(0x04)
	bool HasMonster; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t ReadyStateTime; // 0x54(0x04)
	int32_t StopMatchTime; // 0x58(0x04)
	bool HasAITeammate; // 0x5c(0x01)
	bool AIAccompany; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	int32_t AIAccompanyTimeline; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Solarland.SolarTables_WarmGame
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WarmGame : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WarmGame> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WarmGame
// Size: 0x80 (Inherited: 0x10)
struct FSolarTablesData_WarmGame : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t WarmType; // 0x14(0x04)
	int32_t MatchType; // 0x18(0x04)
	int32_t EloStart; // 0x1c(0x04)
	int32_t EloEnd; // 0x20(0x04)
	int32_t NumStart; // 0x24(0x04)
	int32_t NumEnd; // 0x28(0x04)
	int32_t KillStart; // 0x2c(0x04)
	int32_t KillEnd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString WarmSubType; // 0x38(0x10)
	int32_t UniqueId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString Abid; // 0x50(0x10)
	struct FString WarmGameFillCheckBox; // 0x60(0x10)
	struct FString WarmGameFillTeammate; // 0x70(0x10)
};

// ScriptStruct Solarland.SolarTables_VehicleSpawnGroup
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VehicleSpawnGroup : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VehicleSpawnGroup> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VehicleSpawnGroup
// Size: 0x98 (Inherited: 0x10)
struct FSolarTablesData_VehicleSpawnGroup : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> VehicleIDs; // 0x18(0x10)
	struct TArray<int32_t> VehicleCounts; // 0x28(0x10)
	struct TArray<int32_t> VehicleSum; // 0x38(0x10)
	struct FString VehicleWeightSet; // 0x48(0x10)
	struct TArray<int32_t> AlternateId; // 0x58(0x10)
	struct FString AlternateType; // 0x68(0x10)
	struct FString AlternateTime; // 0x78(0x10)
	struct FString AlternateDate; // 0x88(0x10)
};

// ScriptStruct Solarland.SolarTables_VehicleSpawn
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VehicleSpawn : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VehicleSpawn> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VehicleSpawn
// Size: 0x38 (Inherited: 0x10)
struct FSolarTablesData_VehicleSpawn : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> VehicleSet; // 0x18(0x10)
	struct TArray<int32_t> WeightSet; // 0x28(0x10)
};

// ScriptStruct Solarland.SolarTables_VehicleType
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VehicleType : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VehicleType> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VehicleType
// Size: 0xf8 (Inherited: 0x10)
struct FSolarTablesData_VehicleType : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t DefaultId; // 0x14(0x04)
	struct FSolarTablesLocalText Name; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString VehicleIcon; // 0x20(0x10)
	struct FString AudioEventName; // 0x30(0x10)
	int32_t VehicleClass; // 0x40(0x04)
	float LobbyDurability; // 0x44(0x04)
	float LobbySpeed; // 0x48(0x04)
	float LobbyFirepower; // 0x4c(0x04)
	float LobbyControl; // 0x50(0x04)
	int32_t SeatNum; // 0x54(0x04)
	struct TArray<int32_t> Seat1WeaponID; // 0x58(0x10)
	struct TArray<int32_t> Seat2WeaponID; // 0x68(0x10)
	struct TArray<int32_t> Seat3WeaponID; // 0x78(0x10)
	struct TArray<int32_t> Seat4WeaponID; // 0x88(0x10)
	struct TArray<int32_t> Seat1SkillID; // 0x98(0x10)
	struct TArray<int32_t> Seat2SkillID; // 0xa8(0x10)
	struct TArray<int32_t> Seat3SkillID; // 0xb8(0x10)
	struct TArray<int32_t> Seat4SkillID; // 0xc8(0x10)
	struct FString VehicleLink; // 0xd8(0x10)
	struct FString SilhouetteIcon; // 0xe8(0x10)
};

// ScriptStruct Solarland.SolarTables_VehicleSkin
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VehicleSkin : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VehicleSkin> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VehicleSkin
// Size: 0x90 (Inherited: 0x10)
struct FSolarTablesData_VehicleSkin : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t VehicleTypeID; // 0x14(0x04)
	int32_t ItemID; // 0x18(0x04)
	struct FSolarTablesLocalText SkinName; // 0x1c(0x04)
	bool IfShow; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString BeginTime; // 0x28(0x10)
	struct TArray<int32_t> JumpLink; // 0x38(0x10)
	struct FString VehicleSkinBPPath; // 0x48(0x10)
	struct FString VehiclePreviewBP; // 0x58(0x10)
	struct FString VehicleIcon; // 0x68(0x10)
	struct FString VehicleSound; // 0x78(0x10)
	int32_t AIRandomWeight; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Solarland.SolarTables_Vehicle
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Vehicle : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Vehicle> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Vehicle
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_Vehicle : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString VehicleBP; // 0x18(0x10)
	int32_t groupid; // 0x28(0x04)
	int32_t VehicleTypeID; // 0x2c(0x04)
};

// ScriptStruct Solarland.SolarTables_Variables
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Variables : FSolarTablesDataBase {
	struct TMap<struct FString, struct FSolarTablesData_Variables> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Variables
// Size: 0x30 (Inherited: 0x10)
struct FSolarTablesData_Variables : FSolarTablesDataBase {
	struct FString ID; // 0x10(0x10)
	struct FString Value; // 0x20(0x10)
};

// ScriptStruct Solarland.SolarTables_TaskSystem
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_TaskSystem : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_TaskSystem> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_TaskSystem
// Size: 0xb8 (Inherited: 0x10)
struct FSolarTablesData_TaskSystem : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t taskDesc; // 0x14(0x04)
	int32_t Task; // 0x18(0x04)
	int32_t TaskType; // 0x1c(0x04)
	struct FString cond1_sheet; // 0x20(0x10)
	int32_t cond1; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString cond2_sheet; // 0x38(0x10)
	int32_t cond2; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString cond3_sheet; // 0x50(0x10)
	int32_t cond3; // 0x60(0x04)
	int32_t Target; // 0x64(0x04)
	struct TArray<int32_t> Item; // 0x68(0x10)
	int32_t MinLevel; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<int32_t> link; // 0x80(0x10)
	int32_t Weight; // 0x90(0x04)
	int32_t sort; // 0x94(0x04)
	bool Progress; // 0x98(0x01)
	bool isCircle; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t circleTimes; // 0x9c(0x04)
	int32_t resetType; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<int32_t> taskTips; // 0xa8(0x10)
};

// ScriptStruct Solarland.SolarTables_TaskProgress
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_TaskProgress : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_TaskProgress> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_TaskProgress
// Size: 0x18 (Inherited: 0x10)
struct FSolarTablesData_TaskProgress : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	int32_t isRefresh; // 0x14(0x04)
};

// ScriptStruct Solarland.SolarTables_VODownload
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VODownload : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VODownload> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VODownload
// Size: 0x58 (Inherited: 0x10)
struct FSolarTablesData_VODownload : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ChunkDir; // 0x18(0x10)
	int32_t ChunkID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ButtonText; // 0x30(0x10)
	int32_t LanguageIndex; // 0x40(0x04)
	int32_t IsDefaultChunk; // 0x44(0x04)
	struct FString WwiseLanguageCode; // 0x48(0x10)
};

// ScriptStruct Solarland.SolarTables_WeaponSkinProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_WeaponSkinProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_WeaponSkinProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_WeaponSkinProperty
// Size: 0x68 (Inherited: 0x10)
struct FSolarTablesData_WeaponSkinProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t WeaponSkinID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString WeaponIcon_M; // 0x58(0x10)
};

// ScriptStruct Solarland.SolarTables_Voice
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_Voice : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_Voice> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_Voice
// Size: 0x60 (Inherited: 0x10)
struct FSolarTablesData_Voice : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t Type; // 0x50(0x04)
	int32_t VoiceID; // 0x54(0x04)
	int32_t CharacterId; // 0x58(0x04)
	bool IfBotUse; // 0x5c(0x01)
	bool IfDefault; // 0x5d(0x01)
	bool IfDefaultEquip; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// ScriptStruct Solarland.SolarTables_VehicleSkinProperty
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_VehicleSkinProperty : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_VehicleSkinProperty> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_VehicleSkinProperty
// Size: 0x78 (Inherited: 0x10)
struct FSolarTablesData_VehicleSkinProperty : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FString Icon; // 0x18(0x10)
	struct FSolarTablesLocalText Info; // 0x28(0x04)
	int32_t Quality; // 0x2c(0x04)
	int32_t ItemClass; // 0x30(0x04)
	int32_t ItemType; // 0x34(0x04)
	bool ShowInStorage; // 0x38(0x01)
	bool IfUse; // 0x39(0x01)
	bool IfRecycle; // 0x3a(0x01)
	enum class ESolarTablesEnum_StackType StackType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> JumpLink; // 0x40(0x10)
	int32_t VehicleSkinId; // 0x50(0x04)
	int32_t VehicleSkinAquiredThre; // 0x54(0x04)
	int32_t JumpPage; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString KillBroadcast; // 0x60(0x10)
	bool DisplayInVehiclery; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Solarland.SolarTables_UnitCharacter
// Size: 0x60 (Inherited: 0x10)
struct FSolarTables_UnitCharacter : FSolarTablesDataBase {
	struct TMap<int32_t, struct FSolarTablesData_UnitCharacter> Data; // 0x10(0x50)
};

// ScriptStruct Solarland.SolarTablesData_UnitCharacter
// Size: 0x180 (Inherited: 0x10)
struct FSolarTablesData_UnitCharacter : FSolarTablesDataBase {
	int32_t ID; // 0x10(0x04)
	struct FSolarTablesLocalText Name; // 0x14(0x04)
	struct FSolarTablesLocalText name_extra; // 0x18(0x04)
	struct FSolarTablesLocalText Info; // 0x1c(0x04)
	int32_t Gender; // 0x20(0x04)
	int32_t Body; // 0x24(0x04)
	enum class ESolarTablesEnum_CharacterType CharacterType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ClassTypeIcon; // 0x30(0x10)
	struct FSolarTablesLocalText ClassTypeInfo; // 0x40(0x04)
	bool defaultChara; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t defaultSkin; // 0x48(0x04)
	int32_t defaultPose; // 0x4c(0x04)
	int32_t defaultBackground; // 0x50(0x04)
	bool usableChara; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FString CharacterProtrait; // 0x58(0x10)
	struct FString UrlName; // 0x68(0x10)
	struct TMap<struct FString, struct FString> CharacterAttributesID; // 0x78(0x50)
	float MaxNormalHP; // 0xc8(0x04)
	int32_t defaultArmor; // 0xcc(0x04)
	int32_t defaultShield; // 0xd0(0x04)
	int32_t defaultJetPackModule; // 0xd4(0x04)
	struct FString BasicItemMax; // 0xd8(0x10)
	float InitialSolarCharge; // 0xe8(0x04)
	float RechargeFrequencyFromSky; // 0xec(0x04)
	float RechargeFrequencyFromDeathBox; // 0xf0(0x04)
	float RechargeFrequencyFromPile; // 0xf4(0x04)
	float RechargeQuantityFromSky; // 0xf8(0x04)
	float RechargeQuantityFromDeathBox; // 0xfc(0x04)
	float RechargeQuantityFromPile; // 0x100(0x04)
	float InitialEnergyLimit; // 0x104(0x04)
	float InitialExtraEnergyLimit; // 0x108(0x04)
	float InitialExtraEnergyCharge; // 0x10c(0x04)
	float InitialChargeCD; // 0x110(0x04)
	int32_t ExpID; // 0x114(0x04)
	float ExpBonus; // 0x118(0x04)
	int32_t CharaGiftID; // 0x11c(0x04)
	struct FString CharacterIngameBP; // 0x120(0x10)
	struct FString AnimBPResPath; // 0x130(0x10)
	int32_t StandJogSpeed; // 0x140(0x04)
	int32_t StandRunSpeed; // 0x144(0x04)
	int32_t StandSprintSpeed; // 0x148(0x04)
	int32_t CrouchJogSpeed; // 0x14c(0x04)
	int32_t CrouchRunSpeed; // 0x150(0x04)
	int32_t CrouchSprintSpeed; // 0x154(0x04)
	int32_t ItemID; // 0x158(0x04)
	float BackpackScale; // 0x15c(0x04)
	int32_t CharacterSize; // 0x160(0x04)
	int32_t BotConfigID; // 0x164(0x04)
	int32_t CharacterSort; // 0x168(0x04)
	int32_t CharacterTag1; // 0x16c(0x04)
	int32_t CharacterTag2; // 0x170(0x04)
	int32_t HeroPickSortOrder; // 0x174(0x04)
	int32_t HeroPickSortOrderB; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// ScriptStruct Solarland.SolarTablesDeviceRes
// Size: 0x10 (Inherited: 0x00)
struct FSolarTablesDeviceRes {
	struct FString res; // 0x00(0x10)
};

// ScriptStruct Solarland.SolarTablesRangeFloat
// Size: 0x08 (Inherited: 0x00)
struct FSolarTablesRangeFloat {
	float Left; // 0x00(0x04)
	float Right; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarTablesRangeInt
// Size: 0x08 (Inherited: 0x00)
struct FSolarTablesRangeInt {
	int32_t Left; // 0x00(0x04)
	int32_t Right; // 0x04(0x04)
};

// ScriptStruct Solarland.TaskHandleFuncConfig
// Size: 0x40 (Inherited: 0x08)
struct FTaskHandleFuncConfig : FTableRowBase {
	int64_t TaskType; // 0x08(0x08)
	struct FString taskDesc; // 0x10(0x10)
	struct FString TargetValueName; // 0x20(0x10)
	struct FString FuncName; // 0x30(0x10)
};

// ScriptStruct Solarland.TaskHandleFuncInfo
// Size: 0x18 (Inherited: 0x00)
struct FTaskHandleFuncInfo {
	int64_t TaskID; // 0x00(0x08)
	struct FString FuncName; // 0x08(0x10)
};

// ScriptStruct Solarland.BattlePassTimeInfo
// Size: 0x18 (Inherited: 0x00)
struct FBattlePassTimeInfo {
	int64_t BattlePassID; // 0x00(0x08)
	int64_t currWeek; // 0x08(0x08)
	int64_t maxWeek; // 0x10(0x08)
};

// ScriptStruct Solarland.SolarTeamAttributeSet
// Size: 0x78 (Inherited: 0x00)
struct FSolarTeamAttributeSet {
	struct FSolarTeamAttribute TeamTreatmentDurationReductionMultiple; // 0x00(0x18)
	struct FSolarTeamAttribute TeamShieldChargeDurationReductionMultiple; // 0x18(0x18)
	struct FSolarTeamAttribute TeamBigShieldChargeDurationReductionMultiple; // 0x30(0x18)
	struct FSolarTeamAttribute TeamItemDiscountMultiple; // 0x48(0x18)
	struct FSolarTeamAttribute TeamItemAdditionMultiple; // 0x60(0x18)
};

// ScriptStruct Solarland.SolarTeamAttribute
// Size: 0x18 (Inherited: 0x00)
struct FSolarTeamAttribute {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ASCMPlayerState*> Contributors; // 0x08(0x10)
};

// ScriptStruct Solarland.TeamInfoRow
// Size: 0x28 (Inherited: 0x08)
struct FTeamInfoRow : FTableRowBase {
	struct FText TeamName; // 0x08(0x18)
	char MemberLimit; // 0x20(0x01)
	char MatchCount; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Solarland.SlateFontSizeForLang
// Size: 0x18 (Inherited: 0x00)
struct FSlateFontSizeForLang {
	bool bEnableFontForLang; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DefaultFontSize; // 0x04(0x04)
	struct TArray<struct FSlateFontSizeLangData> FontForLangGroup; // 0x08(0x10)
};

// ScriptStruct Solarland.SlateFontSizeLangData
// Size: 0x08 (Inherited: 0x00)
struct FSlateFontSizeLangData {
	enum class ESolarSupportLanguages SpecialLang; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SpecialFontSize; // 0x04(0x04)
};

// ScriptStruct Solarland.TitanWeaponSetting
// Size: 0x18 (Inherited: 0x00)
struct FTitanWeaponSetting {
	struct ASolarVehicleWeapon* TitanWeaponClass; // 0x00(0x08)
	struct FName TitanWeaponSocket; // 0x08(0x08)
	struct ASolarVehicleWeapon* TitanVehicleWeapon; // 0x10(0x08)
};

// ScriptStruct Solarland.TransformerSetting
// Size: 0x98 (Inherited: 0x00)
struct FTransformerSetting {
	enum class EVehicleControlUIType ControlUIType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USolarVehicleGameplayAbility* AbilityClass; // 0x08(0x08)
	struct ASolarVehicleWeapon* WeaponClass; // 0x10(0x08)
	struct ASolarVehicleWeapon* SkinWeaponClass; // 0x18(0x08)
	struct FName WeaponSocketName; // 0x20(0x08)
	struct UVehicleCameraDataAsset* CameraDataAsset; // 0x28(0x08)
	struct UVehicleCameraDataAsset* PassengerOutShootCamera; // 0x30(0x08)
	struct UVehicleCameraDataAsset* PassengerOutShootAimCamera; // 0x38(0x08)
	struct ASolarVehicleWeapon* VehicleWeapon; // 0x40(0x08)
	struct TMap<enum class EPhysicalSurface, struct TSoftObjectPtr<UParticleSystem>> RaiseDustEffects; // 0x48(0x50)
};

// ScriptStruct Solarland.SpawonTreasureBoxIdAndWeight
// Size: 0x08 (Inherited: 0x00)
struct FSpawonTreasureBoxIdAndWeight {
	int32_t TreasureId; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)
};

// ScriptStruct Solarland.TutorialTableRowBase
// Size: 0x10 (Inherited: 0x08)
struct FTutorialTableRowBase : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Solarland.TutorialConditionTableRow
// Size: 0x38 (Inherited: 0x10)
struct FTutorialConditionTableRow : FTutorialTableRowBase {
	char TriggerType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Parameters; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
};

// ScriptStruct Solarland.TutorialActionTableRow
// Size: 0x1d0 (Inherited: 0x10)
struct FTutorialActionTableRow : FTutorialTableRowBase {
	struct FString Desc; // 0x10(0x10)
	enum class ETutorialUIType UIType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FTutorialTipAndEffectUI TutorialTipAndEffectUI; // 0x28(0x70)
	struct FTutorialSpecialUI TutorialSpecialUI; // 0x98(0x18)
	int32_t NoticeLocTextId; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FTutorialSubtitle TutorialSubtitle; // 0xb8(0x18)
	bool bRepeatTip; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FTutorialRepeatTip RepeatTip; // 0xd8(0x18)
	struct FTutorialBackgroundMusicTableRow TutorialBackgroundMusic; // 0xf0(0x20)
	struct FTutorialSoftCondition EndCondition; // 0x110(0x28)
	struct FTutorialSoftCondition InterruptCondition; // 0x138(0x28)
	float WaitTime; // 0x160(0x04)
	float MinExecuteTime; // 0x164(0x04)
	struct TArray<int32_t> OpenBehaviors; // 0x168(0x10)
	struct TArray<int32_t> CloseBehaviors; // 0x178(0x10)
	int32_t FixedTriggerAreaID; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct TArray<int32_t> BotAISpawnIDs; // 0x190(0x10)
	struct TArray<int32_t> BotAIDeathIDs; // 0x1a0(0x10)
	struct TArray<int32_t> BotAIOnVehicleSpawnIDs; // 0x1b0(0x10)
	struct TArray<int32_t> BotAIOnVehicleDeathIDs; // 0x1c0(0x10)
};

// ScriptStruct Solarland.TutorialSoftCondition
// Size: 0x28 (Inherited: 0x00)
struct FTutorialSoftCondition {
	struct FString ConditionStr; // 0x00(0x10)
	struct FSoftObjectPath ConditionBP; // 0x10(0x18)
};

// ScriptStruct Solarland.TutorialBackgroundMusicTableRow
// Size: 0x20 (Inherited: 0x00)
struct FTutorialBackgroundMusicTableRow {
	struct FString TutorialPlayMusicName; // 0x00(0x10)
	struct FString TutorialStopMusicName; // 0x10(0x10)
};

// ScriptStruct Solarland.TutorialRepeatTip
// Size: 0x18 (Inherited: 0x00)
struct FTutorialRepeatTip {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTutorialSingleSubtitle> Subtitles; // 0x08(0x10)
};

// ScriptStruct Solarland.TutorialSingleSubtitle
// Size: 0x20 (Inherited: 0x00)
struct FTutorialSingleSubtitle {
	struct FString LocalTextId; // 0x00(0x10)
	struct FString Voice; // 0x10(0x10)
};

// ScriptStruct Solarland.TutorialSubtitle
// Size: 0x18 (Inherited: 0x00)
struct FTutorialSubtitle {
	struct TArray<struct FTutorialSingleSubtitle> Subtitles; // 0x00(0x10)
	float DelayTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.TutorialSpecialUI
// Size: 0x18 (Inherited: 0x00)
struct FTutorialSpecialUI {
	struct FSoftObjectPath TutorialSpecialUIBPPath; // 0x00(0x18)
};

// ScriptStruct Solarland.TutorialTipAndEffectUI
// Size: 0x70 (Inherited: 0x00)
struct FTutorialTipAndEffectUI {
	struct FString LinkedComponent; // 0x00(0x10)
	struct FString LimitedListView; // 0x10(0x10)
	struct FSoftObjectPath TutorialExpressionBPPath; // 0x20(0x18)
	struct FSoftObjectPath TutorialEffectBPPath; // 0x38(0x18)
	struct FVector2D TutorialBPLocation; // 0x50(0x08)
	bool HorizontalDirection; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t LocTextID; // 0x5c(0x04)
	float LocTextDuration; // 0x60(0x04)
	float DelayShowUITime; // 0x64(0x04)
	float WaitUIShowTime; // 0x68(0x04)
	enum class ETutorialUIParent UIParent; // 0x6c(0x01)
	bool OpenEffectSound; // 0x6d(0x01)
	bool NeedMask; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct Solarland.TutorialTableRow
// Size: 0x98 (Inherited: 0x10)
struct FTutorialTableRow : FTutorialTableRowBase {
	struct FString Desc; // 0x10(0x10)
	enum class ETutorialType Type; // 0x20(0x01)
	enum class ETutorialStage TriggerStage; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FTutorialSoftCondition TriggerCondition; // 0x28(0x28)
	int32_t EndNum; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FTutorialSoftCondition ForeverClosedCondition; // 0x58(0x28)
	struct TArray<int32_t> ActionIDs; // 0x80(0x10)
	bool bUpload; // 0x90(0x01)
	bool bMandatory; // 0x91(0x01)
	bool bStartUpload; // 0x92(0x01)
	bool bWindows; // 0x93(0x01)
	bool biOS; // 0x94(0x01)
	bool bAndroid; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct Solarland.TutorialLevelConfig
// Size: 0x38 (Inherited: 0x00)
struct FTutorialLevelConfig {
	struct TArray<struct FTutorialLevelConfigData> LevelConfigDatas; // 0x00(0x10)
	struct FSoftObjectPath MainMapPath; // 0x10(0x18)
	int32_t VeteranTutorialID; // 0x28(0x04)
	float RepeatOperationTime; // 0x2c(0x04)
	float WaitToEndTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Solarland.TutorialLevelConfigData
// Size: 0x20 (Inherited: 0x00)
struct FTutorialLevelConfigData {
	struct FString LevelName; // 0x00(0x10)
	struct TArray<int32_t> TutorialIds; // 0x10(0x10)
};

// ScriptStruct Solarland.TutorialLevelSaveData
// Size: 0x28 (Inherited: 0x00)
struct FTutorialLevelSaveData {
	struct FString LevelName; // 0x00(0x10)
	struct FString PlayerStartTag; // 0x10(0x10)
	bool bTutorialHasFinished; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t TutorialID; // 0x24(0x04)
};

// ScriptStruct Solarland.ConditionReturnInfo_NoParams
// Size: 0x01 (Inherited: 0x00)
struct FConditionReturnInfo_NoParams {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Solarland.ConditionReturnInfo
// Size: 0x18 (Inherited: 0x00)
struct FConditionReturnInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.CacheConditionInfo
// Size: 0x20 (Inherited: 0x00)
struct FCacheConditionInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Solarland.MatAppearingData
// Size: 0x10 (Inherited: 0x00)
struct FMatAppearingData {
	struct UCurveFloat* MatCurve; // 0x00(0x08)
	struct FName MatParam; // 0x08(0x08)
};

// ScriptStruct Solarland.ObstacleInitialPosParams
// Size: 0x08 (Inherited: 0x00)
struct FObstacleInitialPosParams {
	float Scale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct Solarland.DetectorShapeParams
// Size: 0x18 (Inherited: 0x00)
struct FDetectorShapeParams {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector BoxExtent; // 0x0c(0x0c)
};

// ScriptStruct Solarland.ClusterBombBullet
// Size: 0x168 (Inherited: 0x00)
struct FClusterBombBullet {
	struct FSolarVirtualBulletHitParameter CacheHitParam; // 0x00(0x78)
	char pad_78[0x98]; // 0x78(0x98)
	struct UParticleSystemComponent* BulletEffectComponent; // 0x110(0x08)
	struct USolarAirPlaneMissileConfig* MissileDataAsset; // 0x118(0x08)
	struct USolarVirtualBulletAKComponent* BulletAkComponent; // 0x120(0x08)
	char pad_128[0x40]; // 0x128(0x40)
};

// ScriptStruct Solarland.SolarVirtualBulletHitParameter
// Size: 0x78 (Inherited: 0x00)
struct FSolarVirtualBulletHitParameter {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	float FireTimeStamp; // 0x04(0x04)
	float HitTimeStamp; // 0x08(0x04)
	struct FVector_NetQuantize PlayerViewDir; // 0x0c(0x0c)
	int8_t FireChargePhase; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float FireChargeTime; // 0x1c(0x04)
	int32_t HitStartIndex; // 0x20(0x04)
	struct FVector_NetQuantize StartLoc; // 0x24(0x0c)
	struct FVector_NetQuantize TargetLoc; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UAmmoConfig* Ammo; // 0x40(0x08)
	struct TArray<struct FSolarWeaponHitAntiData> HitAntiDatas; // 0x48(0x10)
	struct TArray<struct FHitResult> Hits; // 0x58(0x10)
	struct TArray<struct AActor*> IgnoreHitedActors; // 0x68(0x10)
};

// ScriptStruct Solarland.SolarWeaponHitAntiData
// Size: 0x40 (Inherited: 0x00)
struct FSolarWeaponHitAntiData {
	struct FVector_NetQuantize RelavantHitLocationWithCharacter; // 0x00(0x0c)
	struct FVector_NetQuantize HitBoneScale; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat HitBoneRotation; // 0x20(0x10)
	struct FVector_NetQuantize HitLoc; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Solarland.SpawnClusterBombParam
// Size: 0x20 (Inherited: 0x00)
struct FSpawnClusterBombParam {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	float FireTimeStamp; // 0x04(0x04)
	struct FVector_NetQuantize StartLoc; // 0x08(0x0c)
	struct FVector_NetQuantizeNormal StartDir; // 0x14(0x0c)
};

// ScriptStruct Solarland.FlameHitData
// Size: 0x48 (Inherited: 0x00)
struct FFlameHitData {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	float FireTimeStamp; // 0x04(0x04)
	struct TArray<struct FVector_NetQuantize> FireStartLocations; // 0x08(0x10)
	struct TArray<struct FVector_NetQuantize> FireEndLocations; // 0x18(0x10)
	struct TArray<struct FHitResult> HitResultDatas; // 0x28(0x10)
	struct TArray<struct FSolarWeaponHitAntiData> HitAntiDatas; // 0x38(0x10)
};

// ScriptStruct Solarland.VehicleEquipWeaponOverlapCapsule
// Size: 0x14 (Inherited: 0x00)
struct FVehicleEquipWeaponOverlapCapsule {
	struct FVector Postion; // 0x00(0x0c)
	float HalfHeight; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
};

// ScriptStruct Solarland.VehicleEquipWeaponOverlapBox
// Size: 0x18 (Inherited: 0x00)
struct FVehicleEquipWeaponOverlapBox {
	struct FVector Postion; // 0x00(0x0c)
	struct FVector TraceBox; // 0x0c(0x0c)
};

// ScriptStruct Solarland.CacheDecalComponent
// Size: 0x10 (Inherited: 0x00)
struct FCacheDecalComponent {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Solarland.CacheQueryActor
// Size: 0x10 (Inherited: 0x00)
struct FCacheQueryActor {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Solarland.VehicleHealthResource
// Size: 0x60 (Inherited: 0x00)
struct FVehicleHealthResource {
	struct TSoftObjectPtr<UTexture2D> BodyTexture2D; // 0x00(0x28)
	struct TSoftObjectPtr<UTexture2D> FillImageTexture2D; // 0x28(0x28)
	struct TArray<struct FWeakPointImgInfo> WeakPointImgInfos; // 0x50(0x10)
};

// ScriptStruct Solarland.WeakPointImgInfo
// Size: 0x60 (Inherited: 0x00)
struct FWeakPointImgInfo {
	struct TSoftObjectPtr<UTexture2D> Texture2D; // 0x00(0x28)
	struct FAnchors Anchors; // 0x28(0x10)
	struct FVector2D Postion; // 0x38(0x08)
	struct FVector2D Size; // 0x40(0x08)
	struct FVector2D Alignment; // 0x48(0x08)
	bool bAutoSize; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float Angle; // 0x54(0x04)
	struct FVector2D Scale; // 0x58(0x08)
};

// ScriptStruct Solarland.VehicleDamageLevelColor
// Size: 0x34 (Inherited: 0x00)
struct FVehicleDamageLevelColor {
	struct FLinearColor BackgroundColor; // 0x00(0x10)
	struct FLinearColor BackgroundLeftPartColor; // 0x10(0x10)
	struct FLinearColor OutlineColor; // 0x20(0x10)
	int32_t DamageBonus; // 0x30(0x04)
};

// ScriptStruct Solarland.SolarVehicleMaterialData
// Size: 0x28 (Inherited: 0x00)
struct FSolarVehicleMaterialData {
	int8_t MaterialIndex; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParamName; // 0x04(0x08)
	float OnValue; // 0x0c(0x04)
	float OffValue; // 0x10(0x04)
	float ActiveSpeed; // 0x14(0x04)
	struct UMaterialInstanceDynamic* MatInstanceDynamic; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Solarland.VehicleCollisionInfo
// Size: 0x50 (Inherited: 0x00)
struct FVehicleCollisionInfo {
	struct UPrimitiveComponent* CollidedPrimitive; // 0x00(0x08)
	struct FVector_NetQuantize SelfPreVelocity; // 0x08(0x0c)
	struct FVector_NetQuantize SelfCurrentVelocity; // 0x14(0x0c)
	struct FVector_NetQuantize OtherVehicleLinearVelocity; // 0x20(0x0c)
	struct FVector_NetQuantize OtherVehicleAngularVelocity; // 0x2c(0x0c)
	struct FVector_NetQuantize OtherVehicleLocation; // 0x38(0x0c)
	struct FVector_NetQuantizeNormal OtherVehicleRotation; // 0x44(0x0c)
};

// ScriptStruct Solarland.BasedMovement
// Size: 0x28 (Inherited: 0x00)
struct FBasedMovement {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FVector_NetQuantize100 Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	bool bRelativeRotation; // 0x20(0x01)
	bool bServerHasVelocity; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Solarland.VehicleSeatSlot
// Size: 0xd8 (Inherited: 0x00)
struct FVehicleSeatSlot {
	struct FName SeatSocketName; // 0x00(0x08)
	struct FName SeatWeaponSocket; // 0x08(0x08)
	bool bDisplayBackpack; // 0x10(0x01)
	bool SeatStickOutEnable; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UVehicleCameraDataAsset* OutShootCameraData; // 0x18(0x08)
	struct UVehicleCameraDataAsset* OutShootAimCameraData; // 0x20(0x08)
	struct UCurveFloat* OutShootPitchLimitCurve; // 0x28(0x08)
	struct TArray<struct FVehicleSeatAbility> VechicleAbilities; // 0x30(0x10)
	struct ASolarVehicleWeapon* VehicleWeaponClass; // 0x40(0x08)
	struct ASolarVehicleWeapon* VehicleWeaponSkinClass; // 0x48(0x08)
	bool bAutoEquipWeapon; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TSoftObjectPtr<UTexture2D> SeatDisplayIcon; // 0x58(0x28)
	float DamageRatio; // 0x80(0x04)
	float PenetrationDamageRatio; // 0x84(0x04)
	struct FBoxSphereBounds PenetrationSphere; // 0x88(0x1c)
	struct FRotator EjectRotation; // 0xa4(0x0c)
	bool bOverrideDefaultEjectParams; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FVehicleEjectParams EjectParams; // 0xb4(0x10)
	struct TWeakObjectPtr<struct ASolarCharacter> SeatPassenger; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct ASolarVehicleWeapon* SeatWeapon; // 0xd0(0x08)
};

// ScriptStruct Solarland.VehicleSeatAbility
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSeatAbility {
	struct USolarVehicleGameplayAbility* AbilityClass; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle ServerOrDriverAbilityHandle; // 0x08(0x04)
	struct FGameplayAbilitySpecHandle SkinPreAbilityHandle; // 0x0c(0x04)
};

// ScriptStruct Solarland.VehicleVFXMesh
// Size: 0x80 (Inherited: 0x00)
struct FVehicleVFXMesh {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x00(0x28)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x28(0x10)
	struct FName AttachedSocket; // 0x38(0x08)
	struct FTransform OffsetTransform; // 0x40(0x30)
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct Solarland.DamageStatusVehicleVFXs
// Size: 0x10 (Inherited: 0x00)
struct FDamageStatusVehicleVFXs {
	struct TArray<struct FVehicleVFX> VehicleVFXs; // 0x00(0x10)
};

// ScriptStruct Solarland.VehicleVFX
// Size: 0x90 (Inherited: 0x00)
struct FVehicleVFX {
	struct TSoftObjectPtr<UParticleSystem> Particle; // 0x00(0x28)
	struct FName AttachedSocket; // 0x28(0x08)
	struct FTransform OffsetTransform; // 0x30(0x30)
	struct UCurveFloat* ActivateCurve; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char pad_70[0x20]; // 0x70(0x20)
};

// ScriptStruct Solarland.SiegeVehicleOpenTraceData
// Size: 0x18 (Inherited: 0x00)
struct FSiegeVehicleOpenTraceData {
	struct FVector BoxPostion; // 0x00(0x0c)
	struct FVector TraceBox; // 0x0c(0x0c)
};

// ScriptStruct Solarland.PIDController
// Size: 0x1c (Inherited: 0x00)
struct FPIDController {
	float PCoeff; // 0x00(0x04)
	float ICoeff; // 0x04(0x04)
	float DCoeff; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct Solarland.CarPadSpeedData
// Size: 0x14 (Inherited: 0x00)
struct FCarPadSpeedData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Solarland.SolarLavaZone
// Size: 0x70 (Inherited: 0x00)
struct FSolarLavaZone {
	char pad_0[0x20]; // 0x00(0x20)
	struct FZoneServerValidate ServerValidate; // 0x20(0x40)
	struct UParticleSystemComponent* LavaZoneParticleComponent; // 0x60(0x08)
	struct USolarVirtualBulletAKComponent* LavaZoneAkComponent; // 0x68(0x08)
};

// ScriptStruct Solarland.ZoneServerValidate
// Size: 0x40 (Inherited: 0x00)
struct FZoneServerValidate {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	struct FVector_NetQuantize ServerSpawnLocation; // 0x04(0x0c)
	struct FVector_NetQuantizeNormal ServerSpawnDirection; // 0x10(0x0c)
	float ServerTimeStamp; // 0x1c(0x04)
	struct ASolarCharacter* LavaZoneOwner; // 0x20(0x08)
	float OverlapInterval; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct AActor*> OverlappedActors; // 0x30(0x10)
};

// ScriptStruct Solarland.SolarLavaBullet
// Size: 0xe8 (Inherited: 0x00)
struct FSolarLavaBullet {
	struct ASolarCharacter* CacheCharacter; // 0x00(0x08)
	struct FSolarVirtualBulletHitParameter CacheHitParam; // 0x08(0x78)
	char pad_80[0x50]; // 0x80(0x50)
	struct UParticleSystemComponent* BulletEffectComponent; // 0xd0(0x08)
	struct UParticleSystemComponent* TrajectoryEffectComponent; // 0xd8(0x08)
	struct USolarVirtualBulletAKComponent* BulletAkComponent; // 0xe0(0x08)
};

// ScriptStruct Solarland.BoneIKPreset
// Size: 0x20 (Inherited: 0x00)
struct FBoneIKPreset {
	struct FVector LeftIKTarget; // 0x00(0x0c)
	struct FVector RightIKTarget; // 0x0c(0x0c)
	struct FVector2D ChangeIKThreshold; // 0x18(0x08)
};

// ScriptStruct Solarland.SpawnedRocketData
// Size: 0x28 (Inherited: 0x00)
struct FSpawnedRocketData {
	struct FVector RocketSpawnLocation; // 0x00(0x0c)
	float RocketSpawnDelayTime; // 0x0c(0x04)
	float AlertLineRemainTime; // 0x10(0x04)
	float SpawnedTime; // 0x14(0x04)
	bool bRocketSpawned; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UStaticMeshComponent* AlertLineBombingMesh; // 0x20(0x08)
};

// ScriptStruct Solarland.BombingAreaAsset
// Size: 0x60 (Inherited: 0x00)
struct FBombingAreaAsset {
	struct TSoftObjectPtr<UStaticMesh> BombingAreaMeshClass; // 0x00(0x28)
	struct TSoftObjectPtr<UMaterialInterface> BombingDecalMaterialClass; // 0x28(0x28)
	struct UStaticMeshComponent* BombingAreaMeshComponent; // 0x50(0x08)
	struct UDecalComponent* BombingAreaDecalComponent; // 0x58(0x08)
};

// ScriptStruct Solarland.BombingAreaData
// Size: 0x28 (Inherited: 0x00)
struct FBombingAreaData {
	int32_t AreaIndex; // 0x00(0x04)
	struct FVector_NetQuantize CenterLocation; // 0x04(0x0c)
	enum class ERocketFireMode SpawnedFireMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ServerStartedTime; // 0x14(0x04)
	char MaxRocketCounter; // 0x18(0x01)
	char SpawnedRocketCounter; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FVector2D LastLandLocation2D; // 0x1c(0x08)
	bool bTriggered; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Solarland.FireModeSetting
// Size: 0x38 (Inherited: 0x00)
struct FFireModeSetting {
	float AreaMeshScale; // 0x00(0x04)
	struct FVector BombingAreaDecalSize; // 0x04(0x0c)
	float FirstRocketSpawnTimer; // 0x10(0x04)
	float RocketSpawnDelay; // 0x14(0x04)
	float AlertLineRemainTime; // 0x18(0x04)
	float RocketSpawnInterval; // 0x1c(0x04)
	float BombingAreaDisplayDelay; // 0x20(0x04)
	int32_t LaunchRocketNum; // 0x24(0x04)
	float BombingAreaRadius; // 0x28(0x04)
	float MiniSpawnDistance; // 0x2c(0x04)
	struct FVector2D AimDistanceRange; // 0x30(0x08)
};

// ScriptStruct Solarland.VehicleSpawner
// Size: 0xd0 (Inherited: 0x00)
struct FVehicleSpawner {
	struct ASolarVehicleSpawnerSets* SolarVehicleSpawnerSets; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform VehicleSpawnerTransform; // 0x10(0x30)
	enum class EVehicleSpawnType VehicleSpawnType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t SpawnerID; // 0x44(0x04)
	bool bVehicleRefresh; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FVehicleSpawnRefreshInfo VehicleSpawnRefreshInfo; // 0x50(0x48)
	char pad_98[0x8]; // 0x98(0x08)
	struct ASolarVehicleSpawnEffect* VehicleSpawnEffect; // 0xa0(0x08)
	char pad_A8[0x28]; // 0xa8(0x28)
};

// ScriptStruct Solarland.VehicleSpawnRefreshInfo
// Size: 0x48 (Inherited: 0x00)
struct FVehicleSpawnRefreshInfo {
	int32_t VehicleRefreshSecond; // 0x00(0x04)
	bool bVehicleRefreshRand; // 0x04(0x01)
	bool bVehicleRefreshWaitPreBroken; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int64_t VehicleRefreshCheckRoleDisSquared; // 0x08(0x08)
	struct FVector VehicleCheckBoxSize; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftClassPtr<UObject> VehicleSpawnEffectClass; // 0x20(0x28)
};

// ScriptStruct Solarland.VehicleStateTransition
// Size: 0x18 (Inherited: 0x00)
struct FVehicleStateTransition {
	char pad_0[0x8]; // 0x00(0x08)
	struct ASolarVehiclePawn* Owner; // 0x08(0x08)
	struct USolarLeggedVehicleMovement* MovementComponent; // 0x10(0x08)
};

// ScriptStruct Solarland.VehicleState
// Size: 0x78 (Inherited: 0x00)
struct FVehicleState {
	char pad_0[0x8]; // 0x00(0x08)
	struct USolarVehicleStateMachine* StateMachine; // 0x08(0x08)
	struct ASolarVehiclePawn* Owner; // 0x10(0x08)
	struct USolarLeggedVehicleMovement* MovementComponent; // 0x18(0x08)
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct Solarland.VehicleWeakPointSpec
// Size: 0x1f0 (Inherited: 0x00)
struct FVehicleWeakPointSpec {
	float CurrentHealth; // 0x00(0x04)
	bool bInRepairing; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct USolarVehicleWeakPointComponent* WeakPointMeshComponent; // 0x08(0x08)
	struct ASolarVehiclePawn* VehiclePawn; // 0x10(0x08)
	char WeakPointID; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> WeakPointSockets; // 0x20(0x10)
	struct FVector WeakPointOffset; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<UStaticMesh> WeakPointStaticMesh; // 0x40(0x28)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform WeakPointRelativeTransform; // 0x70(0x30)
	float MaxWeakPointHealth; // 0xa0(0x04)
	float RepairDuration; // 0xa4(0x04)
	bool bRecoverBoneScaleAfterVFXFinished; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FVehicleVFX BrokenWeakPointVFX; // 0xb0(0x90)
	struct FVehicleVFX RepairingWeakPointVFX; // 0x140(0x90)
	float FacingAngle; // 0x1d0(0x04)
	float DistFromCharacterToWeakPoint; // 0x1d4(0x04)
	char pad_1D8[0x18]; // 0x1d8(0x18)
};

// ScriptStruct Solarland.BulletLandAreaData
// Size: 0x18 (Inherited: 0x00)
struct FBulletLandAreaData {
	struct UParticleSystemComponent* TargetParticleComponent; // 0x00(0x08)
	struct UDecalComponent* TargetDecalComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Solarland.SolarVirtualBullet
// Size: 0x1a8 (Inherited: 0x00)
struct FSolarVirtualBullet {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	enum class EVirtualBulletType BulletType; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct UParticleSystemComponent* BulletEffect; // 0x10(0x08)
	struct UParticleSystemComponent* TrajectoryEffect; // 0x18(0x08)
	struct UParticleSystemComponent* TrajectoryBeamEffect; // 0x20(0x08)
	struct USolarVirtualBulletAKComponent* AkComponent; // 0x28(0x08)
	char pad_30[0x140]; // 0x30(0x140)
	struct FVector_NetQuantize PlayerViewDir; // 0x170(0x0c)
	struct FVector_NetQuantize PlayerViewLoc; // 0x17c(0x0c)
	char IsScopeOpen; // 0x188(0x01)
	char pad_189[0x1f]; // 0x189(0x1f)
};

// ScriptStruct Solarland.SolarVirtualBulletSpawnParameter
// Size: 0xa8 (Inherited: 0x00)
struct FSolarVirtualBulletSpawnParameter {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	float FireTimeStamp; // 0x04(0x04)
	float PreElapsedTime; // 0x08(0x04)
	struct FVector PlayerViewDir; // 0x0c(0x0c)
	struct FVector_NetQuantize PlayerViewLoc; // 0x18(0x0c)
	char IsScopeOpen; // 0x24(0x01)
	int8_t FireChargePhase; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float FireChargeTime; // 0x28(0x04)
	struct FVector_NetQuantize StartLoc; // 0x2c(0x0c)
	struct FVector_NetQuantize TargetLoc; // 0x38(0x0c)
	struct FVector_NetQuantizeNormal Dir; // 0x44(0x0c)
	struct FVector_NetQuantize MuzzleFxLoc; // 0x50(0x0c)
	float CurveOffsetAngle; // 0x5c(0x04)
	struct FSolarVirtualBulletHomingTarget HomingTarget; // 0x60(0x18)
	struct UAmmoConfig* Ammo; // 0x78(0x08)
	struct FString AntiData; // 0x80(0x10)
	struct TWeakObjectPtr<struct AActor> Target; // 0x90(0x08)
	struct FVector_NetQuantize HitTargetRelativeLocation; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Solarland.SolarVirtualBulletHomingTarget
// Size: 0x18 (Inherited: 0x00)
struct FSolarVirtualBulletHomingTarget {
	bool bSet; // 0x00(0x01)
	bool bLocalCharacterLock; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct TWeakObjectPtr<struct AActor> HomingTargetActor; // 0x04(0x08)
	struct FVector CurrentLoc; // 0x0c(0x0c)
};

// ScriptStruct Solarland.SolarWeaponExpData
// Size: 0x08 (Inherited: 0x00)
struct FSolarWeaponExpData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.CameraShakeData
// Size: 0x20 (Inherited: 0x00)
struct FCameraShakeData {
	struct UCameraShake* CameraShakeClass; // 0x00(0x08)
	struct UCurveFloat* CameraShakeScaleCurve; // 0x08(0x08)
	float ScaleMultiplier; // 0x10(0x04)
	float ScopeScaleMultiplier; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Solarland.PlaySoundParams
// Size: 0x0c (Inherited: 0x00)
struct FPlaySoundParams {
	bool HasSilencer; // 0x00(0x01)
	bool InSameTeam; // 0x01(0x01)
	bool IsInRoom; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t SoundFireAutoCount; // 0x04(0x04)
	bool bTriggerSoundFireBurst; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Solarland.MultiHitResult
// Size: 0xa4 (Inherited: 0x88)
struct FMultiHitResult : FHitResult {
	char Num; // 0x88(0x01)
	char Seed; // 0x89(0x01)
	char Mode; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	struct FVector_NetQuantize Start; // 0x8c(0x0c)
	struct FVector_NetQuantize End; // 0x98(0x0c)
};

// ScriptStruct Solarland.ImpactDisplayInfo
// Size: 0x10 (Inherited: 0x00)
struct FImpactDisplayInfo {
	struct FVector Pos; // 0x00(0x0c)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct Solarland.FireMode
// Size: 0x28 (Inherited: 0x00)
struct FFireMode {
	char Index; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FireRateAccumulation; // 0x04(0x04)
	float FireRateAccumulationBurstInterval; // 0x08(0x04)
	char pad_C[0x14]; // 0x0c(0x14)
	struct UParticleSystemComponent* ChargingEffect; // 0x20(0x08)
};

// ScriptStruct Solarland.SolarBlackHoleTestActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FSolarBlackHoleTestActorInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.SolarBlackHoleParticleData
// Size: 0x18 (Inherited: 0x00)
struct FSolarBlackHoleParticleData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Solarland.SolarBlackHoleParticleInfo
// Size: 0x80 (Inherited: 0x00)
struct FSolarBlackHoleParticleInfo {
	struct FSoftObjectPath ParticlePathForTeammate; // 0x00(0x18)
	struct FSoftObjectPath ParticlePathForEnemy; // 0x18(0x18)
	struct FTransform RelativeTransform; // 0x30(0x30)
	bool bAttachMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName AttachSocketName; // 0x64(0x08)
	enum class EAttachLocation AttachLocationType; // 0x6c(0x01)
	bool bAutoDestroy; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float Duration; // 0x70(0x04)
	enum class EPSCPoolMethod PoolMode; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct Solarland.WeaponFireLaserElement
// Size: 0x48 (Inherited: 0x00)
struct FWeaponFireLaserElement {
	char pad_0[0x38]; // 0x00(0x38)
	struct UParticleSystemComponent* BeamEffect; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Solarland.BulletContainerColor
// Size: 0x08 (Inherited: 0x00)
struct FBulletContainerColor {
	struct FColor Normal; // 0x00(0x04)
	struct FColor Energy; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarBulletContainerLayout
// Size: 0x1c (Inherited: 0x00)
struct FSolarBulletContainerLayout {
	struct FVector2D Offset; // 0x00(0x08)
	float SpinAngle; // 0x08(0x04)
	struct FVector2D Scale; // 0x0c(0x08)
	struct FVector2D OneBulletSize; // 0x14(0x08)
};

// ScriptStruct Solarland.SolarBulletWidgetState
// Size: 0x10 (Inherited: 0x00)
struct FSolarBulletWidgetState {
	struct UWidget* BulletWidget; // 0x00(0x08)
	bool bReloadState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Solarland.WeaponShotHitResult
// Size: 0x3c (Inherited: 0x00)
struct FWeaponShotHitResult {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FName BoneName; // 0x14(0x08)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x1c(0x0c)
	char bBlockingHit : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x2c(0x08)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x34(0x08)
};

// ScriptStruct Solarland.SpawnProjParam
// Size: 0x50 (Inherited: 0x00)
struct FSpawnProjParam {
	struct FVector_NetQuantize Start; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	char Mode; // 0x18(0x01)
	char CurRocketNum; // 0x19(0x01)
	char bTriggerAnim : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float Scale; // 0x1c(0x04)
	float SpeedScale; // 0x20(0x04)
	struct TWeakObjectPtr<struct AActor> Target; // 0x24(0x08)
	uint32_t SpawnID; // 0x2c(0x04)
	float Timestamp; // 0x30(0x04)
	struct TWeakObjectPtr<struct ASolarPlayerController> InstigatorController; // 0x34(0x08)
	struct FVector_NetQuantize RelativeLocation; // 0x3c(0x0c)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Solarland.AmmoExtraAbilityStruct
// Size: 0x20 (Inherited: 0x00)
struct FAmmoExtraAbilityStruct {
	struct TArray<struct ASolarAbility*> PrimaryExtraAbilies; // 0x00(0x10)
	struct TArray<struct ASolarAbility*> SecondaryExtraAbilies; // 0x10(0x10)
};

// ScriptStruct Solarland.OverrideBulletStruct
// Size: 0x18 (Inherited: 0x00)
struct FOverrideBulletStruct {
	struct ASolarBullet* PrimaryOverrideBulletClass; // 0x00(0x08)
	struct ASolarBullet* SecondaryOverrideBulletClass; // 0x08(0x08)
	struct ASolarBullet* PrimaryOverrideTraceBulletClass; // 0x10(0x08)
};

// ScriptStruct Solarland.WeaponDebugFlag
// Size: 0x04 (Inherited: 0x00)
struct FWeaponDebugFlag {
	bool bIgnoreActivated; // 0x00(0x01)
	bool bExtraInfo; // 0x01(0x01)
	bool bMechanicalState; // 0x02(0x01)
	bool bShowShootDir; // 0x03(0x01)
};

// ScriptStruct Solarland.LocationEffectParam
// Size: 0x1c (Inherited: 0x00)
struct FLocationEffectParam {
	struct FRotator Rotation; // 0x00(0x0c)
	struct FVector Scale; // 0x0c(0x0c)
	bool bAutoDestroy; // 0x18(0x01)
	enum class EPSCPoolMethod PoolingMethod; // 0x19(0x01)
	bool bAutoActivateSystem; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Solarland.AttachedEffectParam
// Size: 0x28 (Inherited: 0x00)
struct FAttachedEffectParam {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Scale; // 0x18(0x0c)
	enum class EAttachLocation LocationType; // 0x24(0x01)
	bool bAutoDestroy; // 0x25(0x01)
	enum class EPSCPoolMethod PoolingMethod; // 0x26(0x01)
	bool bAutoActivate; // 0x27(0x01)
};

// ScriptStruct Solarland.SpawnBulletParam
// Size: 0x34 (Inherited: 0x00)
struct FSpawnBulletParam {
	struct FVector Start; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float SpeedScale; // 0x18(0x04)
	int32_t Mode; // 0x1c(0x04)
	bool TriggerAnim; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Scale; // 0x24(0x04)
	int32_t LastClipAmmo; // 0x28(0x04)
	float LastFireTime; // 0x2c(0x04)
	bool bStartBlocked; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Solarland.MutiBulletHitData
// Size: 0x50 (Inherited: 0x00)
struct FMutiBulletHitData {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	int8_t FireMode; // 0x04(0x01)
	int8_t IsScopeOpen; // 0x05(0x01)
	bool bValidHit; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct FVector StartLocation; // 0x08(0x0c)
	struct FVector WeaponLocation; // 0x14(0x0c)
	float ServerTimeSeconds; // 0x20(0x04)
	float DamageScale; // 0x24(0x04)
	int32_t LastClipAmmo; // 0x28(0x04)
	float LastFireTime; // 0x2c(0x04)
	struct TArray<struct FSolarWeaponHitAntiData> HitAntiDatas; // 0x30(0x10)
	struct TArray<struct FBulletHitDetailData> HitDetailDataArray; // 0x40(0x10)
};

// ScriptStruct Solarland.BulletHitDetailData
// Size: 0x4c (Inherited: 0x00)
struct FBulletHitDetailData {
	struct TWeakObjectPtr<struct APawn> SourcePawn; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x08(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // 0x10(0x08)
	struct FVector HitActorLocation; // 0x18(0x0c)
	struct FVector HitLocation; // 0x24(0x0c)
	struct FVector HitNormal; // 0x30(0x0c)
	struct FName HitBone; // 0x3c(0x08)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x44(0x08)
};

// ScriptStruct Solarland.BulletHitData
// Size: 0xc0 (Inherited: 0x00)
struct FBulletHitData {
	struct FFireUniqueID FireUniqueID; // 0x00(0x04)
	int8_t FireMode; // 0x04(0x01)
	bool bValidHit; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector StartLocation; // 0x08(0x0c)
	struct FVector WeaponLocation; // 0x14(0x0c)
	float ServerTimeSeconds; // 0x20(0x04)
	float DamageScale; // 0x24(0x04)
	int32_t LastClipAmmo; // 0x28(0x04)
	float LastFireTime; // 0x2c(0x04)
	struct FSolarWeaponHitAntiData HitAntiData; // 0x30(0x40)
	struct FBulletHitDetailData HitDetailData; // 0x70(0x4c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Solarland.WeaponHitResponse
// Size: 0x01 (Inherited: 0x00)
struct FWeaponHitResponse {
	char bForceBlock : 1; // 0x00(0x01)
	char bForcePenetrate : 1; // 0x00(0x01)
	char bForceAimIgnore : 1; // 0x00(0x01)
	char bAffectHalo : 1; // 0x00(0x01)
	char bTakeDamage : 1; // 0x00(0x01)
	char bShowExplode : 1; // 0x00(0x01)
	char bShowDecal : 1; // 0x00(0x01)
	char bPlaySound : 1; // 0x00(0x01)
};

// ScriptStruct Solarland.WeaponAnimationInfo
// Size: 0x30 (Inherited: 0x00)
struct FWeaponAnimationInfo {
	struct FSoftObjectPath AssetPath; // 0x00(0x18)
	float PlayRate; // 0x18(0x04)
	bool bUseAdaptivePlayRate; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct UAnimMontage* Animation; // 0x20(0x08)
	struct UAnimMontage* AnimOverride; // 0x28(0x08)
};

// ScriptStruct Solarland.WeaponMergeMeshStruct
// Size: 0x30 (Inherited: 0x00)
struct FWeaponMergeMeshStruct {
	struct FGuid Guid; // 0x00(0x10)
	int32_t weaponid; // 0x10(0x04)
	int32_t SkinId; // 0x14(0x04)
	struct TArray<int32_t> Parts; // 0x18(0x10)
	struct USkeletalMesh* MergeMesh; // 0x28(0x08)
};

// ScriptStruct Solarland.SolarWeaponPartDescRow
// Size: 0x18 (Inherited: 0x08)
struct FSolarWeaponPartDescRow : FTableRowBase {
	struct TArray<struct FSolarWeaponPartEffectDesc> DescriptionArray; // 0x08(0x10)
};

// ScriptStruct Solarland.SolarWeaponPartEffectDesc
// Size: 0x20 (Inherited: 0x00)
struct FSolarWeaponPartEffectDesc {
	struct FString EffectValue; // 0x00(0x10)
	int32_t DescriptionLocalTextID; // 0x10(0x04)
	int32_t Priority; // 0x14(0x04)
	int32_t PartID; // 0x18(0x04)
	int32_t weaponid; // 0x1c(0x04)
};

// ScriptStruct Solarland.SolarWeaponFPPConfig
// Size: 0x70 (Inherited: 0x00)
struct FSolarWeaponFPPConfig {
	struct FRangeFloat AspectRatioRange; // 0x00(0x08)
	struct FSolarWeaponFPPData FPPData; // 0x08(0x68)
};

// ScriptStruct Solarland.SolarWeaponFPPData
// Size: 0x68 (Inherited: 0x00)
struct FSolarWeaponFPPData {
	struct TMap<enum class EWeaponScopeType, struct FSolarWeaponScopeFPPConfig> ScopeFPPConfigByScopeTypeMap; // 0x00(0x50)
	struct FSolarWeaponScopeFPPData DefaultFPPDataForScopeType; // 0x50(0x18)
};

// ScriptStruct Solarland.SolarWeaponScopeFPPData
// Size: 0x18 (Inherited: 0x00)
struct FSolarWeaponScopeFPPData {
	struct FVector RelativeLocation; // 0x00(0x0c)
	struct FRotator RelativeRotation; // 0x0c(0x0c)
};

// ScriptStruct Solarland.SolarWeaponScopeFPPConfig
// Size: 0x68 (Inherited: 0x00)
struct FSolarWeaponScopeFPPConfig {
	struct TMap<int32_t, struct FSolarWeaponScopeFPPData> ScopeFPPDataByWeaponSkinIDMap; // 0x00(0x50)
	struct FSolarWeaponScopeFPPData DefaultFPPDataForWeaponSkinID; // 0x50(0x18)
};

// ScriptStruct Solarland.WheelData
// Size: 0x270 (Inherited: 0x00)
struct FWheelData {
	bool bIsPowered; // 0x00(0x01)
	bool bIsPoweredInDrift; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName BoneName; // 0x04(0x08)
	struct FVector Offset; // 0x0c(0x0c)
	struct FVector WheelForceOffset; // 0x18(0x0c)
	float Radius; // 0x24(0x04)
	float RadiusAfterBroken; // 0x28(0x04)
	float Width; // 0x2c(0x04)
	float MaxRaise; // 0x30(0x04)
	float MaxDrop; // 0x34(0x04)
	float SpringStiffness; // 0x38(0x04)
	float DamperStiffness; // 0x3c(0x04)
	float LaterialFriction; // 0x40(0x04)
	float LaterialFrictionAfterBroken; // 0x44(0x04)
	float LaterialFrictionInDrift; // 0x48(0x04)
	float DriftingLaterialFrictionLerpSpeed; // 0x4c(0x04)
	struct FRuntimeFloatCurve EndDriftFrictionCurve; // 0x50(0x88)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FVehicleVFX DriftDecal; // 0xe0(0x90)
	float RollingFriction; // 0x170(0x04)
	float BrakeDeceleration; // 0x174(0x04)
	float DustEffectScale; // 0x178(0x04)
	float DustEffectScaleAfterBroken; // 0x17c(0x04)
	float DriftEffectScale; // 0x180(0x04)
	char pad_184[0xdc]; // 0x184(0xdc)
	struct UParticleSystemComponent* RaiseDustParticleComponent; // 0x260(0x08)
	struct UParticleSystemComponent* DriftParticleComponent; // 0x268(0x08)
};

// ScriptStruct Solarland.GearSetting
// Size: 0x18 (Inherited: 0x00)
struct FGearSetting {
	float MinSpeed; // 0x00(0x04)
	float MaxSpeed; // 0x04(0x04)
	float StartRpm; // 0x08(0x04)
	float MaxRpm; // 0x0c(0x04)
	float RpmDescendSpeed; // 0x10(0x04)
	float MinDescendRPM; // 0x14(0x04)
};

// ScriptStruct Solarland.GearData
// Size: 0x1c (Inherited: 0x00)
struct FGearData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Solarland.SolarVirtualInput
// Size: 0x20 (Inherited: 0x00)
struct FSolarVirtualInput {
	enum class EInputEventHandleType InputBindType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey VirtualKey; // 0x08(0x18)
};

// ScriptStruct Solarland.ZiplineObjData
// Size: 0x74 (Inherited: 0x00)
struct FZiplineObjData {
	struct FSidesOfZiplineData ASideData; // 0x00(0x30)
	struct FSidesOfZiplineData BSideData; // 0x30(0x30)
	enum class EZiplineType ZiplineType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float CableCollisionScale; // 0x64(0x04)
	bool bLookAtTarget; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SlidingVelocity; // 0x6c(0x04)
	float CancelledVelocity; // 0x70(0x04)
};

// ScriptStruct Solarland.SidesOfZiplineData
// Size: 0x30 (Inherited: 0x00)
struct FSidesOfZiplineData {
	struct FVector BeginningLocation; // 0x00(0x0c)
	struct FVector ArrivingLocation; // 0x0c(0x0c)
	struct FVector LandingLocation; // 0x18(0x0c)
	float ArrivingVelocity; // 0x24(0x04)
	bool bLandingAfterArriving; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float LandingVelocity; // 0x2c(0x04)
};

// ScriptStruct Solarland.SoundPoolContainer
// Size: 0x10 (Inherited: 0x00)
struct FSoundPoolContainer {
	struct TArray<struct USoundPoolDataAsset*> SoundPoolDataAssets; // 0x00(0x10)
};

// ScriptStruct Solarland.SoundGroupContainer
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroupContainer {
	struct TArray<struct USoundGroupDataAsset*> SoundGroupDataAssets; // 0x00(0x10)
	struct TArray<struct UDataTable*> SoundGroupDataTables; // 0x10(0x10)
};

// ScriptStruct Solarland.SoundGroupByBattleAdvancedTableData
// Size: 0x98 (Inherited: 0x08)
struct FSoundGroupByBattleAdvancedTableData : FSoundGroupTableDataBase {
	struct FSoundGroupSoundEvent IAttackOtherEvent; // 0x08(0x30)
	struct FSoundGroupSoundEvent OtherAttackMeEvent; // 0x38(0x30)
	struct FSoundGroupSoundEvent OtherEvent; // 0x68(0x30)
};

// ScriptStruct Solarland.SoundGroupSoundEvent
// Size: 0x30 (Inherited: 0x00)
struct FSoundGroupSoundEvent {
	struct FString SoundEvent; // 0x00(0x10)
	struct FSoundGroupWwiseParams WwiseParams; // 0x10(0x20)
};

// ScriptStruct Solarland.SoundGroupWwiseParams
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroupWwiseParams {
	struct TArray<struct FWwiseSwitchParam> SwitchParams; // 0x00(0x10)
	struct TArray<struct FWwiseRTPCParam> RTPCParams; // 0x10(0x10)
};

// ScriptStruct Solarland.WwiseRTPCParam
// Size: 0x18 (Inherited: 0x00)
struct FWwiseRTPCParam {
	struct FString RTPC; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Solarland.WwiseSwitchParam
// Size: 0x20 (Inherited: 0x00)
struct FWwiseSwitchParam {
	struct FString SwitchGroup; // 0x00(0x10)
	struct FString SwitchState; // 0x10(0x10)
};

// ScriptStruct Solarland.SoundGroupByTeammateAdvancedTableData
// Size: 0x98 (Inherited: 0x08)
struct FSoundGroupByTeammateAdvancedTableData : FSoundGroupTableDataBase {
	struct FSoundGroupSoundEvent SelfEvent; // 0x08(0x30)
	struct FSoundGroupSoundEvent TeammateEvent; // 0x38(0x30)
	struct FSoundGroupSoundEvent OtherEvent; // 0x68(0x30)
};

// ScriptStruct Solarland.SoundGroupSimpleAdvancedTableData
// Size: 0x38 (Inherited: 0x08)
struct FSoundGroupSimpleAdvancedTableData : FSoundGroupTableDataBase {
	struct FSoundGroupSoundEvent SoundEvent; // 0x08(0x30)
};

// ScriptStruct Solarland.SoundGroupShareParamsTableDataBase
// Size: 0x28 (Inherited: 0x08)
struct FSoundGroupShareParamsTableDataBase : FSoundGroupTableDataBase {
	struct FSoundGroupWwiseParams WwiseParams; // 0x08(0x20)
};

// ScriptStruct Solarland.SoundGroupByBattleTableData
// Size: 0x58 (Inherited: 0x28)
struct FSoundGroupByBattleTableData : FSoundGroupShareParamsTableDataBase {
	struct FString IAttackOtherEvent; // 0x28(0x10)
	struct FString OtherAttackMeEvent; // 0x38(0x10)
	struct FString OtherEvent; // 0x48(0x10)
};

// ScriptStruct Solarland.SoundGroupByTeammateTableData
// Size: 0x58 (Inherited: 0x28)
struct FSoundGroupByTeammateTableData : FSoundGroupShareParamsTableDataBase {
	struct FString SelfEvent; // 0x28(0x10)
	struct FString TeammateEvent; // 0x38(0x10)
	struct FString OtherEvent; // 0x48(0x10)
};

// ScriptStruct Solarland.SoundGroupSimpleTableData
// Size: 0x38 (Inherited: 0x28)
struct FSoundGroupSimpleTableData : FSoundGroupShareParamsTableDataBase {
	struct FString SoundEvent; // 0x28(0x10)
};

// ScriptStruct Solarland.SoundGroupPlayContextSimple
// Size: 0x10 (Inherited: 0x08)
struct FSoundGroupPlayContextSimple : FSoundGroupPlayContext {
	enum class ESoundGroupPlayContextEnum Context; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Solarland.SpatializeItem
// Size: 0x18 (Inherited: 0x0c)
struct FSpatializeItem : FFastArraySerializerItem {
	struct FVector Location; // 0x0c(0x0c)
};

// ScriptStruct Solarland.TrackArray
// Size: 0x130 (Inherited: 0x108)
struct FTrackArray : FFastArraySerializer {
	struct TArray<struct FTrackItem> Tracks; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
};

// ScriptStruct Solarland.TrackItem
// Size: 0x40 (Inherited: 0x18)
struct FTrackItem : FSpatializeItem {
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PID; // 0x20(0x10)
	bool bValid; // 0x30(0x01)
	bool bProjected; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector FloorLocation; // 0x34(0x0c)
};

// ScriptStruct Solarland.SolarImageProgressInfo
// Size: 0x20 (Inherited: 0x00)
struct FSolarImageProgressInfo {
	enum class ESolarImageProgressType ProgressType; // 0x00(0x01)
	enum class ESolarImageProgressLineDirType LineProgressDir; // 0x01(0x01)
	enum class ESolarImageProgressQuaterCirclePrivotType QuaterProgressPrivot; // 0x02(0x01)
	enum class ESolarImageProgressHalfCirclePrivotType HalfProgressPrivot; // 0x03(0x01)
	float CircleProgressInitDegree; // 0x04(0x04)
	bool bInvertProgressDir; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Progress; // 0x0c(0x04)
	struct UMaterial* Material; // 0x10(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x18(0x08)
};

// ScriptStruct Solarland.PlayerBattleRequestInfo
// Size: 0x30 (Inherited: 0x00)
struct FPlayerBattleRequestInfo {
	struct FString NickName; // 0x00(0x10)
	int32_t AccountLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FPlatformParams PlatformParams; // 0x18(0x18)
};

// ScriptStruct Solarland.PlatformParams
// Size: 0x18 (Inherited: 0x00)
struct FPlatformParams {
	int64_t UserId; // 0x00(0x08)
	struct FString OpenId; // 0x08(0x10)
};

// ScriptStruct Solarland.StartBattleRequestInfo
// Size: 0x08 (Inherited: 0x00)
struct FStartBattleRequestInfo {
	int32_t aiNum; // 0x00(0x04)
	int32_t AiLevel; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarSummonSoundData
// Size: 0x10 (Inherited: 0x00)
struct FSolarSummonSoundData {
	struct TArray<struct FString> SoundNames; // 0x00(0x10)
};

// ScriptStruct Solarland.SplineMeshDetails
// Size: 0x50 (Inherited: 0x00)
struct FSplineMeshDetails {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	enum class ESplineMeshAxis ForwardAxis; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UMaterialInterface* FirstMaterial; // 0x10(0x08)
	struct UMaterialInterface* SecondMaterial; // 0x18(0x08)
	struct FVector2D StartScale; // 0x20(0x08)
	float StartRoll; // 0x28(0x04)
	struct FVector2D StartOffset; // 0x2c(0x08)
	struct FVector2D EndScale; // 0x34(0x08)
	float EndRoll; // 0x3c(0x04)
	struct FVector2D EndOffset; // 0x40(0x08)
	int32_t TranslucencySortPriority; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Solarland.UITweenBaseStruct
// Size: 0x20 (Inherited: 0x00)
struct FUITweenBaseStruct {
	char pad_0[0x8]; // 0x00(0x08)
	bool IsValid; // 0x08(0x01)
	enum class ETweenInterpolationType InterpolationType; // 0x09(0x01)
	enum class EEasingFunc EaseType; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct UCurveFloat* InterpolationCurve; // 0x10(0x08)
	struct UWidget* Widget; // 0x18(0x08)
};

// ScriptStruct Solarland.TextColorTween
// Size: 0x48 (Inherited: 0x20)
struct FTextColorTween : FUITweenBaseStruct {
	struct FLinearColor Original; // 0x20(0x10)
	struct FLinearColor TargetColor; // 0x30(0x10)
	struct UTextBlock* TargetText; // 0x40(0x08)
};

// ScriptStruct Solarland.ImageColorTween
// Size: 0x48 (Inherited: 0x20)
struct FImageColorTween : FUITweenBaseStruct {
	struct FLinearColor Original; // 0x20(0x10)
	struct FLinearColor TargetColor; // 0x30(0x10)
	struct UImage* Image; // 0x40(0x08)
};

// ScriptStruct Solarland.UIRenderOpacityTween
// Size: 0x28 (Inherited: 0x20)
struct FUIRenderOpacityTween : FUITweenBaseStruct {
	float OriginalOpacity; // 0x20(0x04)
	float TargetOpacity; // 0x24(0x04)
};

// ScriptStruct Solarland.UIPositionTween
// Size: 0x40 (Inherited: 0x20)
struct FUIPositionTween : FUITweenBaseStruct {
	struct FVector2D OriginalPosition; // 0x20(0x08)
	struct FVector2D TargetPosition; // 0x28(0x08)
	bool bHandleAsRelativeChange; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct Solarland.UIScaleTween
// Size: 0x40 (Inherited: 0x20)
struct FUIScaleTween : FUITweenBaseStruct {
	struct FVector2D OriginalScale; // 0x20(0x08)
	struct FVector2D TargetScale; // 0x28(0x08)
	bool bHandleAsMultiplier; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct Solarland.OBTeamColor
// Size: 0x30 (Inherited: 0x00)
struct FOBTeamColor {
	struct FString Desc; // 0x00(0x10)
	struct FLinearColor Main; // 0x10(0x10)
	struct FLinearColor Vice; // 0x20(0x10)
};

// ScriptStruct Solarland.ItemQualityData
// Size: 0x88 (Inherited: 0x00)
struct FItemQualityData {
	struct FLinearColor BaseColor; // 0x00(0x10)
	struct FLinearColor HUDColor; // 0x10(0x10)
	struct FLinearColor HighQualityColor; // 0x20(0x10)
	struct FLinearColor LowQualityColor; // 0x30(0x10)
	struct FLinearColor HUDBGColor; // 0x40(0x10)
	struct FLinearColor HUDDecorateColor; // 0x50(0x10)
	struct FSoftObjectPath QualityIcon; // 0x60(0x18)
	struct FString QualityChar; // 0x78(0x10)
};

// ScriptStruct Solarland.TeamMemberColor
// Size: 0x20 (Inherited: 0x00)
struct FTeamMemberColor {
	struct FLinearColor Main; // 0x00(0x10)
	struct FLinearColor Vice; // 0x10(0x10)
};

// ScriptStruct Solarland.DestroyObjectStruct
// Size: 0x28 (Inherited: 0x00)
struct FDestroyObjectStruct {
	struct UUserWidget* RootWidget; // 0x00(0x08)
	struct FString FullPath; // 0x08(0x10)
	struct TArray<struct FDestroyObjectEntry> Objects; // 0x18(0x10)
};

// ScriptStruct Solarland.DestroyObjectEntry
// Size: 0x18 (Inherited: 0x00)
struct FDestroyObjectEntry {
	struct UObject* Object; // 0x00(0x08)
	struct FString FullPath; // 0x08(0x10)
};

// ScriptStruct Solarland.CustomWidget_TableRow
// Size: 0x98 (Inherited: 0x08)
struct FCustomWidget_TableRow : FTableRowBase {
	struct FSoftObjectPath TeammateState; // 0x08(0x18)
	struct FSoftObjectPath BattleScore; // 0x20(0x18)
	struct FSoftObjectPath SpectatorListPath; // 0x38(0x18)
	struct FSoftObjectPath SafeAreaProgress; // 0x50(0x18)
	struct FSoftObjectPath JobEffectListPath; // 0x68(0x18)
	struct FSoftObjectPath JobEffectSelectPanelPath; // 0x80(0x18)
};

// ScriptStruct Solarland.KillTotalNoticeWidget
// Size: 0x18 (Inherited: 0x00)
struct FKillTotalNoticeWidget {
	struct TArray<struct UImage*> Img_KillTotals; // 0x00(0x10)
	struct USolarTextBlock* Txt_KillTotal; // 0x10(0x08)
};

// ScriptStruct Solarland.UIPanelConfigEntry
// Size: 0x38 (Inherited: 0x00)
struct FUIPanelConfigEntry {
	struct FSoftClassPath MobileUIPath; // 0x00(0x18)
	struct FSoftClassPath DesktopUIPath; // 0x18(0x18)
	enum class EUIRoot UILayerRoot; // 0x30(0x01)
	bool bPrecache; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Solarland.InteractionButtonSpec
// Size: 0x04 (Inherited: 0x00)
struct FInteractionButtonSpec {
	int32_t Priority; // 0x00(0x04)
};

// ScriptStruct Solarland.StarterUIInfo
// Size: 0x88 (Inherited: 0x00)
struct FStarterUIInfo {
	char pad_0[0x10]; // 0x00(0x10)
	struct UUserWidget* UIClass; // 0x10(0x08)
	struct TSoftClassPtr<UObject> MobileUIClass; // 0x18(0x28)
	struct TSoftClassPtr<UObject> DesktopUIClass; // 0x40(0x28)
	bool bCreateForEachDisplay; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t OrderFromTopOverride; // 0x6c(0x04)
	bool bFullScreen; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// ScriptStruct Solarland.LruWidgetPool
// Size: 0x80 (Inherited: 0x00)
struct FLruWidgetPool {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UUserWidget*> ActiveWidgetStack; // 0x08(0x10)
	char pad_18[0x68]; // 0x18(0x68)
};

// ScriptStruct Solarland.VehicleSkinWeakPoint
// Size: 0x70 (Inherited: 0x00)
struct FVehicleSkinWeakPoint {
	struct TSoftObjectPtr<UStaticMesh> WeakPointStaticMesh; // 0x00(0x28)
	bool bWeakPointOffset; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector WeakPointOffset; // 0x2c(0x0c)
	bool bWeakPointTransform; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTransform WeakPointRelativeTransform; // 0x40(0x30)
};

// ScriptStruct Solarland.VehicleSkinSeat
// Size: 0x58 (Inherited: 0x00)
struct FVehicleSkinSeat {
	struct TArray<struct USolarVehicleGameplayAbility*> VechicleSkinAbilities; // 0x00(0x10)
	struct ASolarVehicleWeapon* VehicleSkinWeapon; // 0x10(0x08)
	struct UVehicleCameraDataAsset* OutShootCameraData; // 0x18(0x08)
	struct UVehicleCameraDataAsset* OutShootAimCameraData; // 0x20(0x08)
	struct UCurveFloat* OutShootPitchLimitCurve; // 0x28(0x08)
	struct TSoftObjectPtr<UTexture2D> SeatDisplayIcon; // 0x30(0x28)
};

// ScriptStruct Solarland.SolarVehicleSkinPreviewPageInfo
// Size: 0x02 (Inherited: 0x00)
struct FSolarVehicleSkinPreviewPageInfo {
	bool bMirror; // 0x00(0x01)
	bool bChangeAnim; // 0x01(0x01)
};

// ScriptStruct Solarland.SolarVehicleSkinPreviewMeshInfo
// Size: 0xc0 (Inherited: 0x00)
struct FSolarVehicleSkinPreviewMeshInfo {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct UAnimationAsset* AnimToPlay; // 0x40(0x08)
	struct UAnimationAsset* PageAnimToPlay[0xa]; // 0x48(0x50)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x98(0x10)
	struct FName SocketName; // 0xa8(0x08)
	struct TArray<float> CustomData; // 0xb0(0x10)
};

// ScriptStruct Solarland.VehicleStateAir
// Size: 0x80 (Inherited: 0x78)
struct FVehicleStateAir : FVehicleState {
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Solarland.VehicleAirToGround
// Size: 0x18 (Inherited: 0x18)
struct FVehicleAirToGround : FVehicleStateTransition {
};

// ScriptStruct Solarland.VehicleStateGround
// Size: 0x90 (Inherited: 0x78)
struct FVehicleStateGround : FVehicleState {
	char pad_78[0x18]; // 0x78(0x18)
};

// ScriptStruct Solarland.VehicleGroundToSliding
// Size: 0x18 (Inherited: 0x18)
struct FVehicleGroundToSliding : FVehicleStateTransition {
};

// ScriptStruct Solarland.VehicleStateSliding
// Size: 0x78 (Inherited: 0x78)
struct FVehicleStateSliding : FVehicleState {
};

// ScriptStruct Solarland.VehicleSlidingToGround
// Size: 0x18 (Inherited: 0x18)
struct FVehicleSlidingToGround : FVehicleStateTransition {
};

// ScriptStruct Solarland.StealthMaterialParams
// Size: 0xa0 (Inherited: 0x00)
struct FStealthMaterialParams {
	struct TMap<struct FName, float> ScalarParams; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParams; // 0x50(0x50)
};

// ScriptStruct Solarland.VehicleWeaponCrossHairInfo
// Size: 0x24 (Inherited: 0x00)
struct FVehicleWeaponCrossHairInfo {
	bool bShowCrossHair; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D CrossHairPosition; // 0x04(0x08)
	float CrossHairOpacity; // 0x0c(0x04)
	bool bShowReticleDirection; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D ReticleDirectionPosition; // 0x14(0x08)
	float ReticleDirectionAngle; // 0x1c(0x04)
	bool bCrossHairForbid; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Solarland.VertexAnimInfo
// Size: 0x10 (Inherited: 0x00)
struct FVertexAnimInfo {
	int32_t StartFrame; // 0x00(0x04)
	int32_t EndFrame; // 0x04(0x04)
	float Length; // 0x08(0x04)
	bool Loop; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Solarland.VibrateWeaponFactorDeviceMap
// Size: 0x50 (Inherited: 0x00)
struct FVibrateWeaponFactorDeviceMap {
	struct TMap<enum class EVibrateDeviceType, float> DeviceMap; // 0x00(0x50)
};

// ScriptStruct Solarland.VibrateDataDTRow
// Size: 0x20 (Inherited: 0x08)
struct FVibrateDataDTRow : FTableRowBase {
	struct FSoftObjectPath ClipPath; // 0x08(0x18)
};

// ScriptStruct Solarland.VisualSoundData
// Size: 0x58 (Inherited: 0x00)
struct FVisualSoundData {
	struct FVisualSoundTagData TagsCondition; // 0x00(0x40)
	enum class EVisualSoundDetectionRule DetectionRule; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float DetectionDis; // 0x44(0x04)
	float DetectionZ; // 0x48(0x04)
	float AliveTime; // 0x4c(0x04)
	float CanBreakTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Solarland.VisualSoundTagData
// Size: 0x40 (Inherited: 0x00)
struct FVisualSoundTagData {
	struct FGameplayTagContainer RequiredTagsAny; // 0x00(0x20)
	struct FGameplayTagContainer BlockedTagsAny; // 0x20(0x20)
};

// ScriptStruct Solarland.AnimMsgData
// Size: 0x08 (Inherited: 0x00)
struct FAnimMsgData {
	enum class EWeaponAnimState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Speed; // 0x04(0x04)
};

// ScriptStruct Solarland.WeaponAssistAimByCharacterTag
// Size: 0x58 (Inherited: 0x00)
struct FWeaponAssistAimByCharacterTag {
	struct FGameplayTagRequirements TagRequirements; // 0x00(0x50)
	struct UWeaponAssistAimWeaponConfig* AssistAimConfig; // 0x50(0x08)
};

// ScriptStruct Solarland.WeaponAssistAimWeaponConfigAll
// Size: 0x60 (Inherited: 0x00)
struct FWeaponAssistAimWeaponConfigAll {
	struct UWeaponAssistAimWeaponConfig* DefaultConfig; // 0x00(0x08)
	struct UWeaponAssistAimWeaponConfig* DefaultScopeConfig; // 0x08(0x08)
	struct TMap<enum class EWeaponScopeType, struct UWeaponAssistAimWeaponConfig*> ScopeConfigMap; // 0x10(0x50)
};

// ScriptStruct Solarland.BaseFollowSpeedByTag
// Size: 0xe8 (Inherited: 0x00)
struct FBaseFollowSpeedByTag {
	struct FGameplayTagRequirements TagRequirements; // 0x00(0x50)
	float SameTargetTriggerCooldown; // 0x50(0x04)
	float HorizontalSpeed; // 0x54(0x04)
	float VerticalSpeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FRuntimeFloatCurve SpeedScaleByDistanceCurve; // 0x60(0x88)
};

// ScriptStruct Solarland.PlayerWeaponSoundGroupMappingData
// Size: 0x100 (Inherited: 0x08)
struct FPlayerWeaponSoundGroupMappingData : FTableRowBase {
	struct TMap<int32_t, struct FName> SkinMapping; // 0x08(0x50)
	struct TMap<int32_t, struct FName> IDMapping; // 0x58(0x50)
	struct TMap<enum class EWeaponType, struct FName> TypeMapping; // 0xa8(0x50)
	struct FName Default; // 0xf8(0x08)
};

// ScriptStruct Solarland.SolarWeaponAttachDataTableRow
// Size: 0x160 (Inherited: 0x08)
struct FSolarWeaponAttachDataTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FWeaponAttachData DefaultAttachData; // 0x10(0x100)
	struct TMap<int32_t, struct FWeaponAttachData> WeaponSkinSpecificData; // 0x110(0x50)
};

// ScriptStruct Solarland.WeaponAttachData
// Size: 0x100 (Inherited: 0x00)
struct FWeaponAttachData {
	struct FWeaponAttachTransformData DefaultRelativeTransform; // 0x00(0x60)
	struct TMap<enum class ECharacterBodyScaleType, struct FWeaponAttachTransformData> TransformByBodyScale; // 0x60(0x50)
	struct TMap<int32_t, struct FWeaponAttachDataByCharacter> CharacterSpecificData; // 0xb0(0x50)
};

// ScriptStruct Solarland.WeaponAttachDataByCharacter
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponAttachDataByCharacter {
	struct FWeaponAttachTransformData DefaultRelativeTransform; // 0x00(0x60)
	struct TMap<int32_t, struct FWeaponAttachTransformData> SkinSpecificData; // 0x60(0x50)
};

// ScriptStruct Solarland.WeaponAttachTransformData
// Size: 0x60 (Inherited: 0x00)
struct FWeaponAttachTransformData {
	struct FTransform RelativeTransformIdle; // 0x00(0x30)
	struct FTransform RelativeTransformCrouch; // 0x30(0x30)
};

// ScriptStruct Solarland.SolarWeaponLODTableRow
// Size: 0x148 (Inherited: 0x08)
struct FSolarWeaponLODTableRow : FTableRowBase {
	struct TMap<enum class ESolarWeaponLODState, struct FSolarWeaponLODData> WeaponDefaultLODMap; // 0x08(0x50)
	struct TMap<enum class ESolarWeaponLODState, struct FSolarWeaponLODData> WeaponFocusedLODMap; // 0x58(0x50)
	struct TMap<enum class ESolarWeaponLODState, struct FSolarWeaponLODData> WeaponPartDefaultLODMap; // 0xa8(0x50)
	struct TMap<enum class ESolarWeaponLODState, struct FSolarWeaponLODData> WeaponPartFocusedLODMap; // 0xf8(0x50)
};

// ScriptStruct Solarland.SolarWeaponLODData
// Size: 0x08 (Inherited: 0x00)
struct FSolarWeaponLODData {
	int32_t ForcedLOD; // 0x00(0x04)
	int32_t MinLOD; // 0x04(0x04)
};

// ScriptStruct Solarland.SolarWeaponSkinTableRow
// Size: 0x20 (Inherited: 0x08)
struct FSolarWeaponSkinTableRow : FTableRowBase {
	struct FSoftObjectPath WeaponSkinDataPath; // 0x08(0x18)
};

// ScriptStruct Solarland.WeaponScopeSensitivityRow
// Size: 0x48 (Inherited: 0x08)
struct FWeaponScopeSensitivityRow : FTableRowBase {
	struct FName TypeName; // 0x08(0x08)
	float FovValue; // 0x10(0x04)
	float HipToAdsTime; // 0x14(0x04)
	struct TSoftObjectPtr<UCurveFloat> FovChangeCurve; // 0x18(0x28)
	float HitEffectScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Solarland.WeaponAppearanceDTRow
// Size: 0x250 (Inherited: 0x08)
struct FWeaponAppearanceDTRow : FTableRowBase {
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	struct FSoftObjectPath MaterialPath; // 0x20(0x18)
	enum class EWeaponType WPType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t FireModeNameLocalizationID; // 0x3c(0x04)
	struct FSlateBrush TriggerIcon; // 0x40(0xe0)
	int32_t UpgradeFireModeNameLocalizationID; // 0x120(0x04)
	char pad_124[0xc]; // 0x124(0x0c)
	struct FSlateBrush UpgradeTriggerIcon; // 0x130(0xe0)
	float Radius; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)
	struct FTransform SphereTransform; // 0x220(0x30)
};

// ScriptStruct Solarland.WeaponDTRow
// Size: 0x50 (Inherited: 0x08)
struct FWeaponDTRow : FTableRowBase {
	struct FString WeaponDesc; // 0x08(0x10)
	struct FSoftClassPath FightWeaponBPPath; // 0x18(0x18)
	struct FSoftClassPath PreviewWeaponBPPath; // 0x30(0x18)
	struct USingleWeaponConfig* WeaponConfig; // 0x48(0x08)
};

// ScriptStruct Solarland.WeaponFireTPPAnimUtility
// Size: 0x40 (Inherited: 0x00)
struct FWeaponFireTPPAnimUtility {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Solarland.WeaponFireFPPAnimUtility
// Size: 0xc8 (Inherited: 0x00)
struct FWeaponFireFPPAnimUtility {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct Solarland.WeaponFireTPPAnimConfig
// Size: 0x28 (Inherited: 0x00)
struct FWeaponFireTPPAnimConfig {
	float SingleFirePulse; // 0x00(0x04)
	float SingleStiffnessCoefficient; // 0x04(0x04)
	float LoopFirePulse; // 0x08(0x04)
	float LoopStiffnessCoefficient; // 0x0c(0x04)
	float RecoverSpeed; // 0x10(0x04)
	float BlendSpaceScale; // 0x14(0x04)
	struct UBlendSpace* BlendSpace; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Solarland.WeaponFireFPPAnimConfig
// Size: 0x70 (Inherited: 0x00)
struct FWeaponFireFPPAnimConfig {
	float SingleFireStraightPulse; // 0x00(0x04)
	float SingleStiffnessCoefficient; // 0x04(0x04)
	float SingleFireBackwardOffset; // 0x08(0x04)
	float LoopFireStraightPulse; // 0x0c(0x04)
	float LoopStiffnessCoefficient; // 0x10(0x04)
	float LoopFireBackwardOffset; // 0x14(0x04)
	struct UCurveFloat* StraightStiffnessCurve; // 0x18(0x08)
	float StraightRecoverSpeed; // 0x20(0x04)
	struct FVector ShakePivotOffset; // 0x24(0x0c)
	struct TArray<struct FVector2D> ShakeOffsets; // 0x30(0x10)
	struct TArray<struct FRotator> ShakeRotations; // 0x40(0x10)
	bool bNeedEndShake; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UCurveVector* EndShakeOffsetCurve; // 0x58(0x08)
	struct UCurveVector* EndShakeRotateCurve; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Solarland.WeaponMeshEffectData
// Size: 0x60 (Inherited: 0x00)
struct FWeaponMeshEffectData {
	struct FSoftObjectPath EffectPath; // 0x00(0x18)
	struct FName SocketName; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
	struct UCurveVector* ScaleCurveForFOV; // 0x50(0x08)
	struct UCurveVector* LocationCurveForFOV; // 0x58(0x08)
};

// ScriptStruct Solarland.WeaponBodyData
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponBodyData {
	int32_t weaponid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSoftObjectPath WeaponMesh; // 0x08(0x18)
	struct UWeaponAnimInstance* WeaponAnimBP; // 0x20(0x08)
	struct TMap<enum class ECharacterMontage, struct FSoftObjectPath> OverrideWeaponAnimSequenceMap; // 0x28(0x50)
	struct FSoftObjectPath LodpMesh; // 0x78(0x18)
	struct TArray<struct FSoftObjectPath> WeaponMaterials; // 0x90(0x10)
	struct TArray<struct FWeaponSkinExtraPS> SkinPSArray; // 0xa0(0x10)
};

// ScriptStruct Solarland.WeaponSkinExtraPS
// Size: 0x30 (Inherited: 0x00)
struct FWeaponSkinExtraPS {
	bool bStimulatedShow; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Socket; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UParticleSystem* ps; // 0x10(0x08)
	struct FSoftObjectPath PSPath; // 0x18(0x18)
};

// ScriptStruct Solarland.WeaponSkinPartData
// Size: 0x40 (Inherited: 0x00)
struct FWeaponSkinPartData {
	int32_t WeaponPartId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString WeaponPartDesc; // 0x08(0x10)
	struct FSoftObjectPath PartDataAsset; // 0x18(0x18)
	struct TArray<struct FSoftObjectPath> WeaponMaterials; // 0x30(0x10)
};

// ScriptStruct Solarland.WeaponMechanicalState
// Size: 0x50 (Inherited: 0x00)
struct FWeaponMechanicalState {
	enum class EWeaponMechanicalUniqueState UniqueState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class EWeaponMechanicalSideFlag SideFlags; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct ASolarWeapon* Weapon; // 0x10(0x08)
	struct USingleWeaponConfig* Config; // 0x18(0x08)
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct Solarland.WeaponUpgradeNetData
// Size: 0x20 (Inherited: 0x00)
struct FWeaponUpgradeNetData {
	int32_t TotalScore; // 0x00(0x04)
	int32_t LevelScore; // 0x04(0x04)
	struct TArray<struct FUpgradeSlotStruct> UpgradeSlots; // 0x08(0x10)
	int32_t UpgradeCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Solarland.UpgradeSlotStruct
// Size: 0x100 (Inherited: 0x00)
struct FUpgradeSlotStruct {
	int32_t SlotID; // 0x00(0x04)
	bool Unlock; // 0x04(0x01)
	enum class EWeaponUpgradeType AccessoryType; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t AccessoryID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSlateBrush IconOverride; // 0x10(0xe0)
	struct FLinearColor IconColorOverride; // 0xf0(0x10)
};

// ScriptStruct Solarland.WeaponPartWeaponAttributeByWeaponType
// Size: 0x28 (Inherited: 0x00)
struct FWeaponPartWeaponAttributeByWeaponType {
	enum class EWeaponType WeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FWeaponAttributeModifierContainer AttributeModifiers; // 0x08(0x10)
	struct TArray<struct FWeaponPartWeaponAttributeByWeaponID> ModifiersByWeaponID; // 0x18(0x10)
};

// ScriptStruct Solarland.WeaponPartWeaponAttributeByWeaponID
// Size: 0x18 (Inherited: 0x00)
struct FWeaponPartWeaponAttributeByWeaponID {
	int32_t weaponid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FWeaponAttributeModifierContainer AttributeModifiers; // 0x08(0x10)
};

// ScriptStruct Solarland.WeaponAttributeModifierContainer
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAttributeModifierContainer {
	struct TArray<struct FWeaponAttributeModifier> Modifiers; // 0x00(0x10)
};

// ScriptStruct Solarland.WeaponAttributeModifier
// Size: 0x18 (Inherited: 0x00)
struct FWeaponAttributeModifier {
	struct FGameplayTag AttributeTag; // 0x00(0x08)
	struct TArray<struct FWeaponAttributeParam> Modifiers; // 0x08(0x10)
};

// ScriptStruct Solarland.WeaponAttributeParam
// Size: 0x08 (Inherited: 0x00)
struct FWeaponAttributeParam {
	enum class EWeaponAttributeParamType ParamType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Solarland.WeaponPartGripDataForCharacter
// Size: 0x138 (Inherited: 0x00)
struct FWeaponPartGripDataForCharacter {
	struct FVector LeftHandIkEffectLocation; // 0x00(0x0c)
	struct FVector LeftHandIkJointLocation; // 0x0c(0x0c)
	struct FVector LeftHandIkJointLocationForGunIdle; // 0x18(0x0c)
	struct FVector LeftHandIkJointLocationForGunIdleWhenCrouch; // 0x24(0x0c)
	struct FLeftHandGripConfig LeftHandGripRotationConfig; // 0x30(0x84)
	struct FLeftHandGripConfig LeftHandGripRotationConfigForGunIdle; // 0xb4(0x84)
};

// ScriptStruct Solarland.SolarAmmoMeshData
// Size: 0x48 (Inherited: 0x00)
struct FSolarAmmoMeshData {
	int32_t MaterialIndex; // 0x00(0x04)
	struct FLinearColor DefaultColor; // 0x04(0x10)
	struct FLinearColor WarningColor; // 0x14(0x10)
	struct FLinearColor SeriousWarningColor; // 0x24(0x10)
	float WarningLine; // 0x34(0x04)
	float SeriousWarningLine; // 0x38(0x04)
	float SeriousWarningBlinkLine; // 0x3c(0x04)
	float SeriousWarningBlinkStrength; // 0x40(0x04)
	float SeriousWarningBlinkFrequence; // 0x44(0x04)
};

// ScriptStruct Solarland.PartScopeCorrect
// Size: 0x18 (Inherited: 0x00)
struct FPartScopeCorrect {
	struct FVector FPPLocation; // 0x00(0x0c)
	struct FRotator FPPRotation; // 0x0c(0x0c)
};

// ScriptStruct Solarland.ValueCurveBySprayingTime
// Size: 0x18 (Inherited: 0x00)
struct FValueCurveBySprayingTime {
	struct UCurveVector* ValueCurve; // 0x00(0x08)
	float TimeScale; // 0x08(0x04)
	struct FVector ValueScale; // 0x0c(0x0c)
};

// ScriptStruct Solarland.FixedSectionInfo
// Size: 0x10 (Inherited: 0x00)
struct FFixedSectionInfo {
	int32_t SprayingCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UWeaponRecoilValueGenerator* ValueGenerator; // 0x08(0x08)
};

// ScriptStruct Solarland.WeaponRecoilRotatorGenerator
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilRotatorGenerator {
	struct UWeaponRecoilValueGenerator* PitchGenerator; // 0x00(0x08)
	struct UWeaponRecoilValueGenerator* YawGenerator; // 0x08(0x08)
	struct UWeaponRecoilValueGenerator* RollGenerator; // 0x10(0x08)
};

// ScriptStruct Solarland.WeaponRecoilVectorGenerator
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilVectorGenerator {
	struct UWeaponRecoilValueGenerator* XGenerator; // 0x00(0x08)
	struct UWeaponRecoilValueGenerator* YGenerator; // 0x08(0x08)
	struct UWeaponRecoilValueGenerator* ZGenerator; // 0x10(0x08)
};

// ScriptStruct Solarland.ScopeSliderData
// Size: 0x28 (Inherited: 0x00)
struct FScopeSliderData {
	struct FVector2D SliderPercentRange; // 0x00(0x08)
	float SliderAnimeTimer; // 0x08(0x04)
	enum class EVehicleWeaponScopeType ScopeMagnifier; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText DisplayText; // 0x10(0x18)
};

// ScriptStruct Solarland.CrossHairShootConfig
// Size: 0x10 (Inherited: 0x00)
struct FCrossHairShootConfig {
	float GunKickOffsetInheritRatio; // 0x00(0x04)
	float SkewOffsetInheritRatio; // 0x04(0x04)
	struct URecoverableRecoilPattern* CrossHairKickPattern; // 0x08(0x08)
};

// ScriptStruct Solarland.WeaponSkewAdjustment
// Size: 0x90 (Inherited: 0x00)
struct FWeaponSkewAdjustment {
	enum class EWeaponSkewInputType InputType; // 0x00(0x01)
	enum class EWeaponSkewAdjustmentType AdjustmentType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FRuntimeFloatCurve AdjustmentCurve; // 0x08(0x88)
};

// ScriptStruct Solarland.GunKickScale
// Size: 0x18 (Inherited: 0x00)
struct FGunKickScale {
	float XOffsetScale; // 0x00(0x04)
	float YOffsetScale; // 0x04(0x04)
	float ZOffsetScale; // 0x08(0x04)
	float PitchScale; // 0x0c(0x04)
	float YawScale; // 0x10(0x04)
	float RollScale; // 0x14(0x04)
};

// ScriptStruct Solarland.WeaponAttributeModifiersByTag
// Size: 0x60 (Inherited: 0x10)
struct FWeaponAttributeModifiersByTag : FWeaponAttributeModifierContainer {
	struct FGameplayTagRequirements TagRequirements; // 0x10(0x50)
};

// ScriptStruct Solarland.SpreadScaleIncrease
// Size: 0x14 (Inherited: 0x00)
struct FSpreadScaleIncrease {
	int32_t SprayingCount; // 0x00(0x04)
	float MinSpreadScale; // 0x04(0x04)
	float MaxSpreadScale; // 0x08(0x04)
	struct FRangeFloat ScaleIncreaseRange; // 0x0c(0x08)
};

// ScriptStruct Solarland.WeaponAction
// Size: 0x08 (Inherited: 0x00)
struct FWeaponAction {
	int32_t ActionCount; // 0x00(0x04)
	int32_t ActionParameter; // 0x04(0x04)
};

// ScriptStruct Solarland.WeaponSystemInteract
// Size: 0x50 (Inherited: 0x00)
struct FWeaponSystemInteract {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Solarland.WeaponSysBolt
// Size: 0x14 (Inherited: 0x00)
struct FWeaponSysBolt {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Solarland.WeaponSysInput
// Size: 0x03 (Inherited: 0x00)
struct FWeaponSysInput {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Solarland.WeaponSysStateStruct
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSysStateStruct {
	int32_t State; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)
	bool bPost; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Solarland.WeaponSysPostStateStruct
// Size: 0x10 (Inherited: 0x10)
struct FWeaponSysPostStateStruct : FWeaponSysStateStruct {
};

// ScriptStruct Solarland.WeaponRealAttachInfo
// Size: 0x08 (Inherited: 0x00)
struct FWeaponRealAttachInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Solarland.WeaponUIStyleSheetRow
// Size: 0x10 (Inherited: 0x08)
struct FWeaponUIStyleSheetRow : FTableRowBase {
	bool bSameQualityPlus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Quality; // 0x0c(0x04)
};

// ScriptStruct Solarland.WorldMarkDataDetails
// Size: 0x128 (Inherited: 0x108)
struct FWorldMarkDataDetails : FFastArraySerializer {
	char PlayerPosMax; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FWorldMarkData> AllMarkDatas; // 0x110(0x10)
	struct USolarTeamInfoComponent* Owner; // 0x120(0x08)
};

