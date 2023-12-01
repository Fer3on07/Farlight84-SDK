// Enum LLHSDK.ELLHSDKNetworkType
enum class ELLHSDKNetworkType : uint8 {
	Unknown = 0,
	NotConnected = 1,
	Type_WiFi = 2,
	Type_Unknown_Cell = 3,
	Type_2G = 4,
	Type_3G = 5,
	Type_4G = 6,
	Type_5G = 7,
	ELLHSDKNetworkType_MAX = 8
};

// Enum LLHSDK.ELLHSDKLoginType
enum class ELLHSDKLoginType : uint8 {
	TYPE_NONE = 0,
	TYPE_QUICK_LOGIN = 1,
	TYPE_LILITH_LOGIN = 2,
	TYPE_MOBILE_LOGIN = 2,
	TYPE_FACEBOOK_LOGIN = 3,
	TYPE_GAME_CENTER_LOGIN = 4,
	TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN = 5,
	TYPE_WECHAT_LOGIN = 6,
	TYPE_QQ_LOGIN = 7,
	TYPE_AUTO_LOGIN = 8,
	TYPE_VK_LOGIN = 9,
	TYPE_GOOGLE_LOGIN = 10,
	TYPE_LINE_LOGIN = 11,
	TYPE_TWITTER_LOGIN = 12,
	TYPE_APPLE_LOGIN = 13,
	TYPE_WEIBO_LOGIN = 14,
	TYPE_PGS_LOGIN = 15,
	TYPE_TIKTOK_LOGIN = 16,
	TYPE_STEAM_LOGIN = 17,
	TYPE_NINTENDO_LOGIN = 18,
	TYPE_MAX = 19
};

// Enum LLHSDK.ELLHSDKScreenOrientation
enum class ELLHSDKScreenOrientation : uint8 {
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	ELLHSDKScreenOrientation_MAX = 8
};

// Enum LLHSDK.ELLHSDKPayType
enum class ELLHSDKPayType : uint8 {
	None = 0,
	Apple = 1,
	Google = 2,
	Ali = 3,
	Wechat = 4,
	Union = 5,
	PlayPhone = 6,
	MyCard = 7,
	Payssion = 8,
	HuaweiAbroad = 9,
	Paypal = 10,
	Voucher = 11,
	Samsung = 12,
	Switch = 13,
	ELLHSDKPayType_MAX = 14
};

// Enum LLHSDK.ELLHSDKPayGenericSkuItemType
enum class ELLHSDKPayGenericSkuItemType : uint8 {
	Normal = 0,
	Subscription = 1,
	ELLHSDKPayGenericSkuItemType_MAX = 2
};

// Enum LLHSDK.ELLHSDKCustomerServiceRateAction
enum class ELLHSDKCustomerServiceRateAction : uint8 {
	Success = 0,
	FeedBack = 1,
	Close = 2,
	Fail = 3,
	ELLHSDKCustomerServiceRateAction_MAX = 4
};

// Enum LLHSDK.ELLHSDKSupportedLanguage
enum class ELLHSDKSupportedLanguage : uint8 {
	DefaultLanguage = 0,
	Arabic = 1,
	English = 2,
	French = 3,
	German = 4,
	Indonesian = 5,
	Italian = 6,
	Japanese = 7,
	Korean = 8,
	Malay = 9,
	Polish = 10,
	Portuguese = 11,
	Russian = 12,
	Spanish = 13,
	Thai = 14,
	Turkish = 15,
	Vietnamese = 16,
	Hindi = 17,
	SimplifiedChinese = 18,
	TraditionalChinese = 19,
	ELLHSDKSupportedLanguage_MAX = 20
};

// Enum LLHSDK.ELLHSDKReportCurrencyType
enum class ELLHSDKReportCurrencyType : uint8 {
	USA_Dollar = 0,
	China_Yuan = 1,
	Taiwan_Dollar = 2,
	ELLHSDKReportCurrencyType_MAX = 3
};

// Enum LLHSDK.ELLHSDKOpenAlbumErrorCode
enum class ELLHSDKOpenAlbumErrorCode : uint8 {
	None = 0,
	Cancel = 1,
	NoPermission = 2,
	ELLHSDKOpenAlbumErrorCode_MAX = 3
};

// Enum LLHSDK.EReleaseType
enum class EReleaseType : uint8 {
	GrayRelease = 0,
	Release = 1,
	EReleaseType_MAX = 2
};

// Enum LLHSDK.EDistributionRegion
enum class EDistributionRegion : uint8 {
	International = 0,
	Domestic = 1,
	EDistributionRegion_MAX = 2
};

// Enum LLHSDK.ELLHSDKLoginUIStyle
enum class ELLHSDKLoginUIStyle : uint8 {
	NormalStyle = 0,
	SoulHunterStyle = 1,
	GameCenterStyle = 2,
	DomesticStyle = 3,
	GameCenterDomesticStyle = 4,
	ELLHSDKLoginUIStyle_MAX = 5
};

// Enum LLHSDK.ELLHSDKGravity
enum class ELLHSDKGravity : uint8 {
	NO_GRAVITY = 0,
	LeftTop = 1,
	LeftCenter = 2,
	LeftBottom = 3,
	MidTop = 4,
	MidBottom = 5,
	RightTop = 6,
	RightCenter = 7,
	RightBottom = 8,
	ELLHSDKGravity_MAX = 9
};

// ScriptStruct LLHSDK.LLHSDKLoginUser
// Size: 0x48 (Inherited: 0x00)
struct FLLHSDKLoginUser {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AppUid; // 0x08(0x10)
	struct FString AppToken; // 0x18(0x10)
	enum class ELLHSDKLoginType LoginType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString Name; // 0x30(0x10)
	bool bIsGuest; // 0x40(0x01)
	bool bIsSafe; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t LimitDeviceCount; // 0x44(0x04)
};

// ScriptStruct LLHSDK.LLHSDKLoginUserInfo
// Size: 0x140 (Inherited: 0x00)
struct FLLHSDKLoginUserInfo {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Phone; // 0x08(0x10)
	struct FString Email; // 0x18(0x10)
	struct FString UserRegion; // 0x28(0x10)
	struct FString IP; // 0x38(0x10)
	int32_t RestPoint; // 0x48(0x04)
	bool bDomesticHasBindAnyOne; // 0x4c(0x01)
	bool bIsNewReg; // 0x4d(0x01)
	bool bIsIdentified; // 0x4e(0x01)
	bool bIsAbusePrevented; // 0x4f(0x01)
	struct TSet<enum class ELLHSDKLoginType> BoundLoginTypes; // 0x50(0x50)
	struct TMap<enum class ELLHSDKLoginType, struct FLLHSDKLoginUserInfoMap> BoundInfoMap; // 0xa0(0x50)
	struct FLLHSDKLoginUserInfoMap UserExtra; // 0xf0(0x50)
};

// ScriptStruct LLHSDK.LLHSDKLoginUserInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FLLHSDKLoginUserInfoMap {
	struct TMap<struct FString, struct FString> Info; // 0x00(0x50)
};

// ScriptStruct LLHSDK.SDKSocialUserInfo
// Size: 0x38 (Inherited: 0x00)
struct FSDKSocialUserInfo {
	struct FString Avatar; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Email; // 0x20(0x10)
	int32_t BindType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct LLHSDK.LLHSDKGenericSkuItemsDetailList
// Size: 0x10 (Inherited: 0x00)
struct FLLHSDKGenericSkuItemsDetailList {
	struct TArray<struct FLLHSDKGoogleSkuItemDetail> Items; // 0x00(0x10)
};

// ScriptStruct LLHSDK.LLHSDKGoogleSkuItemDetail
// Size: 0x70 (Inherited: 0x00)
struct FLLHSDKGoogleSkuItemDetail {
	enum class ELLHSDKPayGenericSkuItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FString Price; // 0x28(0x10)
	struct FString Sku; // 0x38(0x10)
	struct FString Currency; // 0x48(0x10)
	int32_t PriceAmountMicros; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SdkConvertSymbol; // 0x60(0x10)
};

// ScriptStruct LLHSDK.LLHSDKCustomerServiceExtra
// Size: 0x60 (Inherited: 0x00)
struct FLLHSDKCustomerServiceExtra {
	struct TArray<struct FString> Tags; // 0x00(0x10)
	struct TMap<struct FString, struct FString> CustomParams; // 0x10(0x50)
};

// ScriptStruct LLHSDK.LLHSDKLocaleInfo
// Size: 0x20 (Inherited: 0x00)
struct FLLHSDKLocaleInfo {
	struct FString Language; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
};

// ScriptStruct LLHSDK.LLHSDKGenericSkuSubItemsDetailList
// Size: 0x10 (Inherited: 0x00)
struct FLLHSDKGenericSkuSubItemsDetailList {
	struct TArray<struct FLLHSDKGoogleSkuSubItemDetail> Items; // 0x00(0x10)
};

// ScriptStruct LLHSDK.LLHSDKGoogleSkuSubItemDetail
// Size: 0x50 (Inherited: 0x00)
struct FLLHSDKGoogleSkuSubItemDetail {
	enum class ELLHSDKPayGenericSkuItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FString Sku; // 0x28(0x10)
	int32_t SubGoodsSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FLLHSDKGoogleSkuSubGood> SubGoods; // 0x40(0x10)
};

// ScriptStruct LLHSDK.LLHSDKGoogleSkuSubGood
// Size: 0x38 (Inherited: 0x00)
struct FLLHSDKGoogleSkuSubGood {
	struct FString OfferToken; // 0x00(0x10)
	int32_t CombineSize; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FLLHSDKGoogleSubCombineItem> CombineItems; // 0x18(0x10)
	struct TArray<struct FString> OfferTags; // 0x28(0x10)
};

// ScriptStruct LLHSDK.LLHSDKGoogleSubCombineItem
// Size: 0x70 (Inherited: 0x00)
struct FLLHSDKGoogleSubCombineItem {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ProductID; // 0x08(0x10)
	struct FString CombineItemName1; // 0x18(0x10)
	struct FString CombineItemName2; // 0x28(0x10)
	struct FString Price; // 0x38(0x10)
	struct FString Currency; // 0x48(0x10)
	int32_t PriceAmountMicros; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SdkConvertSymbol; // 0x60(0x10)
};

