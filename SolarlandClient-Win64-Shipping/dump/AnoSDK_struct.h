// Enum AnoSDK.ETssSDKEntryId
enum class ETssSDKEntryId : uint8 {
	QZONE = 0,
	MM = 1,
	FACEBOOK = 2,
	TWITTER = 3,
	LINE = 4,
	WHATSAPP = 5,
	GAMECENTER = 6,
	GOOGLEPLAY = 7,
	VK = 8,
	KUAISHOU = 9,
	APPLE = 10,
	NEXON = 11,
	NAVER = 12,
	GARENA = 13,
	HUAWEI = 14,
	RIOT = 15,
	NINTENDO = 16,
	PSN = 17,
	MICROSOFT = 18,
	EA = 19,
	FARLIGHT = 20,
	OTHERS = 21,
	ETssSDKEntryId_MAX = 22
};

// Enum AnoSDK.ETssSDKRequestCmdId
enum class ETssSDKRequestCmdId : uint8 {
	IsEmulator = 0,
	CommQuery = 1,
	InitSwitchStr = 2,
	ETssSDKRequestCmdId_MAX = 3
};

// ScriptStruct AnoSDK.AnoSDKAntiData
// Size: 0x18 (Inherited: 0x00)
struct FAnoSDKAntiData {
	int32_t Length; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AntiData; // 0x08(0x10)
};

