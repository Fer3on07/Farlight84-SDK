// Enum LimNative.ELimNativeConvType
enum class ELimNativeConvType : uint8 {
	Group = 0,
	Peer = 1,
	Room = 2,
	CustomGroup = 3,
	Robot = 4,
	System = 5,
	TempGroup = 6,
	ELimNativeConvType_MAX = 7
};

// Enum LimNative.ELimNativeMsgDirType
enum class ELimNativeMsgDirType : uint8 {
	After = 0,
	Around = 1,
	Before = 2,
	ELimNativeMsgDirType_MAX = 3
};

// Enum LimNative.ELimNativeSupportedLanguage
enum class ELimNativeSupportedLanguage : uint8 {
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
	PO = 21,
	OP = 22,
	ELimNativeSupportedLanguage_MAX = 23
};

// Enum LimNative.ELimNativeErrorType
enum class ELimNativeErrorType : uint8 {
	OK = 0,
	ApiNotFound = 1,
	ParameterInvalid = 2,
	NetworkError = 3,
	InitializeError = 4,
	ResourceNotFound = 5,
	ApiTimeout = 6,
	LoginFailed = 7,
	MsgSendFailed = 8,
	MsgSendTimeout = 9,
	MsgBuildFailed = 10,
	MsgSetStateFailed = 11,
	ConvsGetFailed = 12,
	ConvDiscardFailed = 13,
	UnImplemented = 14,
	Exception = 15,
	UserInfoGetFailed = 16,
	JsonDecodeFailed = 17,
	Unknown = 18,
	ELimNativeErrorType_MAX = 19
};

// Enum LimNative.ELimNativeMsgContentType
enum class ELimNativeMsgContentType : uint8 {
	Unknown = 0,
	Text = 1,
	Voice = 2,
	Image = 3,
	Notification = 4,
	ShareGameCard = 5,
	CustomEmotion = 6,
	Recalled = 7,
	ELimNativeMsgContentType_MAX = 8
};

// Enum LimNative.ELimNativeFriendStateType
enum class ELimNativeFriendStateType : uint8 {
	InIdle = 0,
	InTeam = 1,
	InMatching = 2,
	InGaming = 3,
	Offline = 4,
	ELimNativeFriendStateType_MAX = 5
};

// Enum LimNative.ELimNativeUserSexType
enum class ELimNativeUserSexType : uint8 {
	Unknow = 0,
	Male = 1,
	FeMale = 2,
	ELimNativeUserSexType_MAX = 3
};

// Enum LimNative.ELimNativeMsgState
enum class ELimNativeMsgState : uint8 {
	Created = 0,
	Sending = 1,
	Sent = 2,
	Failed = 3,
	Unread = 4,
	Read = 5,
	ReadAll = 6,
	Played = 7,
	Revoked = 8,
	ELimNativeMsgState_MAX = 9
};

// Enum LimNative.ELimNativePackType
enum class ELimNativePackType : uint8 {
	StaticPicture = 0,
	DynamicPicture = 1,
	ELimNativePackType_MAX = 2
};

// Enum LimNative.ELimNativeOSType
enum class ELimNativeOSType : uint8 {
	Android = 0,
	iOS = 1,
	Windows = 2,
	ELimNativeOSType_MAX = 3
};

// Enum LimNative.ELimNativeUserPeerStatus
enum class ELimNativeUserPeerStatus : uint8 {
	Online = 0,
	Blocking = 1,
	Blocked = 2,
	ELimNativeUserPeerStatus_MAX = 3
};

// Enum LimNative.ELimNativeUserAllowType
enum class ELimNativeUserAllowType : uint8 {
	Any = 0,
	Confirm = 1,
	None = 2,
	ELimNativeUserAllowType_MAX = 3
};

// Enum LimNative.ELimNativeProtType
enum class ELimNativeProtType : uint8 {
	Game = 0,
	App = 1,
	ELimNativeProtType_MAX = 2
};

// Enum LimNative.ELimNativeGroupRoleType
enum class ELimNativeGroupRoleType : uint8 {
	Owner = 0,
	Admin = 1,
	Member = 2,
	ELimNativeGroupRoleType_MAX = 3
};

// Enum LimNative.ELimNativeGroupJoinType
enum class ELimNativeGroupJoinType : uint8 {
	Free = 0,
	Verify = 1,
	Forbidden = 2,
	ELimNativeGroupJoinType_MAX = 3
};

// Enum LimNative.ELimNativeGroupType
enum class ELimNativeGroupType : uint8 {
	Normal = 0,
	Temp = 1,
	Room = 2,
	Custom = 3,
	ELimNativeGroupType_MAX = 4
};

// Enum LimNative.ELimNativeEventType
enum class ELimNativeEventType : uint8 {
	SDKReady = 0,
	SDKError = 1,
	NetDisconnected = 2,
	NetConnecting = 3,
	NetConnected = 4,
	NetReconnected = 5,
	NetReconnecting = 6,
	NetInterrupt = 7,
	TokenRenewed = 8,
	TokenExpired = 9,
	KickedOut = 10,
	LoginFreqLimit = 11,
	Logining = 12,
	Logined = 13,
	MsgReceived = 14,
	MsgRevoked = 15,
	MsgRead = 16,
	MsgEdited = 17,
	MsgLogicReceived = 18,
	MsgCaptTriggerred = 19,
	MsgCaptDispose = 20,
	ConvsUpdated = 21,
	FriendChanged = 22,
	FriendRequestChanged = 23,
	BlockeeChanged = 24,
	BadgesChanged = 25,
	UnkownEvent = 26,
	ELimNativeEventType_MAX = 27
};

// Enum LimNative.ELimNativeConvMentionType
enum class ELimNativeConvMentionType : uint8 {
	AtMe = 0,
	AtAll = 1,
	AtAllMe = 2,
	ELimNativeConvMentionType_MAX = 3
};

// ScriptStruct LimNative.LimNativeLowLevelWrapper
// Size: 0x10 (Inherited: 0x00)
struct FLimNativeLowLevelWrapper {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct LimNative.LimNativeDataObjectBase
// Size: 0x08 (Inherited: 0x00)
struct FLimNativeDataObjectBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct LimNative.UidList
// Size: 0x18 (Inherited: 0x08)
struct FUidList : FLimNativeDataObjectBase {
	struct TArray<struct FString> Uids; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeInitConfig
// Size: 0x78 (Inherited: 0x08)
struct FLimNativeInitConfig : FLimNativeDataObjectBase {
	enum class ELimNativeSupportedLanguage Lang; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Mode; // 0x0c(0x04)
	struct FString EnvId; // 0x10(0x10)
	struct FString AppId; // 0x20(0x10)
	struct FString SDKRegion; // 0x30(0x10)
	int32_t GameID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString SlsSvr; // 0x48(0x10)
	int32_t FarlightDomain; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString ParkEnvID; // 0x60(0x10)
	int32_t Timeout; // 0x70(0x04)
	int32_t UseHttps; // 0x74(0x04)
};

// ScriptStruct LimNative.LimNativeDataCallBackBase
// Size: 0x30 (Inherited: 0x08)
struct FLimNativeDataCallBackBase : FLimNativeDataObjectBase {
	struct FString FuncName; // 0x08(0x10)
	enum class ELimNativeErrorType ErrorCode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Code; // 0x1c(0x04)
	struct FString Message; // 0x20(0x10)
};

// ScriptStruct LimNative.LimNativeFriendCommonCallBack
// Size: 0x58 (Inherited: 0x30)
struct FLimNativeFriendCommonCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeDataCallBackDataBase ResultData; // 0x30(0x28)
};

// ScriptStruct LimNative.LimNativeDataCallBackDataBase
// Size: 0x28 (Inherited: 0x08)
struct FLimNativeDataCallBackDataBase : FLimNativeDataObjectBase {
	struct FLimNativeResult ResultData; // 0x08(0x20)
};

// ScriptStruct LimNative.LimNativeResult
// Size: 0x20 (Inherited: 0x08)
struct FLimNativeResult : FLimNativeDataObjectBase {
	int32_t ErrCode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ErrMsg; // 0x10(0x10)
};

// ScriptStruct LimNative.LimNativeOnGroupMemberAddCallBack
// Size: 0x98 (Inherited: 0x30)
struct FLimNativeOnGroupMemberAddCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMGroup Data; // 0x30(0x68)
};

// ScriptStruct LimNative.LimNativeIMGroupBrief
// Size: 0x38 (Inherited: 0x08)
struct FLimNativeIMGroupBrief : FLimNativeDataObjectBase {
	struct FString ChannelId; // 0x08(0x10)
	struct FString Name; // 0x18(0x10)
	struct FString Extra; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeIMGroup
// Size: 0x68 (Inherited: 0x38)
struct FLimNativeIMGroup : FLimNativeIMGroupBrief {
	struct FString GameID; // 0x38(0x10)
	struct FString Uid; // 0x48(0x10)
	struct TArray<struct FLimNativeIMChannelMember> members; // 0x58(0x10)
};

// ScriptStruct LimNative.LimNativeIMChannelMember
// Size: 0x38 (Inherited: 0x08)
struct FLimNativeIMChannelMember : FLimNativeDataObjectBase {
	struct FString ChannelId; // 0x08(0x10)
	struct FString Uid; // 0x18(0x10)
	struct FString Role; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnConvHandleCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnConvHandleCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeConvHandleCallBackData Data; // 0x30(0x38)
};

// ScriptStruct LimNative.LimNativeConvHandleCallBackData
// Size: 0x38 (Inherited: 0x08)
struct FLimNativeConvHandleCallBackData : FLimNativeDataObjectBase {
	struct FLimNativeResult Result; // 0x08(0x20)
	struct FString Msg; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnConvsGetCallBack
// Size: 0x48 (Inherited: 0x30)
struct FLimNativeOnConvsGetCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeOnConvsGetCallBackData Data; // 0x30(0x18)
};

// ScriptStruct LimNative.LimNativeOnConvsGetCallBackData
// Size: 0x18 (Inherited: 0x08)
struct FLimNativeOnConvsGetCallBackData : FLimNativeDataObjectBase {
	struct TArray<struct FLimNativeConversationData> ConvList; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeConversationData
// Size: 0xb0 (Inherited: 0x08)
struct FLimNativeConversationData : FLimNativeDataObjectBase {
	struct FString ConvID; // 0x08(0x10)
	enum class ELimNativeConvType ConvType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t SubType; // 0x1c(0x04)
	struct FString Name; // 0x20(0x10)
	struct FString Avatar; // 0x30(0x10)
	int32_t UnreadCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString LastMsgId; // 0x48(0x10)
	enum class ELimNativeMsgContentType LastMsgType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString LastMsgTs; // 0x60(0x10)
	struct FString LastReadMsgId; // 0x70(0x10)
	struct FString LastMsgContent; // 0x80(0x10)
	struct FString BaseMsgId; // 0x90(0x10)
	struct FString Flags; // 0xa0(0x10)
};

// ScriptStruct LimNative.LimNativeOnCreateFriendRequestCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnCreateFriendRequestCallBack : FLimNativeDataCallBackBase {
	struct FCreateFriendRequestData FriendRequestCallBackData; // 0x30(0x38)
};

// ScriptStruct LimNative.CreateFriendRequestData
// Size: 0x38 (Inherited: 0x28)
struct FCreateFriendRequestData : FLimNativeDataCallBackDataBase {
	struct FString RequestID; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnCreateGroupCallBack
// Size: 0x98 (Inherited: 0x30)
struct FLimNativeOnCreateGroupCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMGroup Data; // 0x30(0x68)
};

// ScriptStruct LimNative.LimNativeOnGroupDestoryCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupDestoryCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnGroupAttrGetAllCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupAttrGetAllCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnGetBlockeesCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnGetBlockeesCallBack : FLimNativeDataCallBackBase {
	struct FGetBlockeesData Data; // 0x30(0x38)
};

// ScriptStruct LimNative.GetBlockeesData
// Size: 0x38 (Inherited: 0x28)
struct FGetBlockeesData : FLimNativeDataCallBackDataBase {
	struct TArray<struct FLimUserInfo> UserInfoList; // 0x28(0x10)
};

// ScriptStruct LimNative.LimUserInfo
// Size: 0x38 (Inherited: 0x08)
struct FLimUserInfo : FLimNativeDataObjectBase {
	struct FString Uid; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	struct FString AvatarUrl; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnGetCommonMsgsCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnGetCommonMsgsCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetCommonCallBackData Data; // 0x30(0x38)
};

// ScriptStruct LimNative.LimNativeGetCommonCallBackData
// Size: 0x38 (Inherited: 0x08)
struct FLimNativeGetCommonCallBackData : FLimNativeDataObjectBase {
	struct TArray<struct FLimNativeCommonMsg> CommonMessages; // 0x08(0x10)
	struct FLimNativeResult Result; // 0x18(0x20)
};

// ScriptStruct LimNative.LimNativeCommonMsg
// Size: 0x60 (Inherited: 0x08)
struct FLimNativeCommonMsg : FLimNativeDataObjectBase {
	struct FString ServerMsgId; // 0x08(0x10)
	struct FString TargetId; // 0x18(0x10)
	int32_t TargetType; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FLimNativeCommonMsgData Data; // 0x30(0x20)
	struct FString Timestamp; // 0x50(0x10)
};

// ScriptStruct LimNative.LimNativeCommonMsgData
// Size: 0x20 (Inherited: 0x08)
struct FLimNativeCommonMsgData : FLimNativeDataObjectBase {
	int32_t Type; // 0x08(0x04)
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct LimNative.LimNativeOnGetConfigCallBack
// Size: 0x50 (Inherited: 0x30)
struct FLimNativeOnGetConfigCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMConfig Data; // 0x30(0x20)
};

// ScriptStruct LimNative.LimNativeIMConfig
// Size: 0x20 (Inherited: 0x08)
struct FLimNativeIMConfig : FLimNativeDataObjectBase {
	enum class ELimNativeSupportedLanguage Lang; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ResDir; // 0x10(0x10)
};

// ScriptStruct LimNative.LimNativeGetConnStateCallBack
// Size: 0x40 (Inherited: 0x30)
struct FLimNativeGetConnStateCallBack : FLimNativeDataCallBackBase {
	struct FLimNativConnStateData Data; // 0x30(0x10)
};

// ScriptStruct LimNative.LimNativConnStateData
// Size: 0x10 (Inherited: 0x08)
struct FLimNativConnStateData : FLimNativeDataObjectBase {
	int32_t Connect_State; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LimNative.LimNativeOnGetConvChatLevelConfigCallBack
// Size: 0x40 (Inherited: 0x30)
struct FLimNativeOnGetConvChatLevelConfigCallBack : FLimNativeDataCallBackBase {
	struct TArray<struct FLimNativeConvChatLevelConfigData> DataList; // 0x30(0x10)
};

// ScriptStruct LimNative.LimNativeConvChatLevelConfigData
// Size: 0x48 (Inherited: 0x28)
struct FLimNativeConvChatLevelConfigData : FLimNativeDataCallBackDataBase {
	enum class ELimNativeConvType ConvType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t Level; // 0x2c(0x04)
	int32_t Interval; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FLimNativeConvNumLimitData> NumLimits; // 0x38(0x10)
};

// ScriptStruct LimNative.LimNativeConvNumLimitData
// Size: 0x10 (Inherited: 0x08)
struct FLimNativeConvNumLimitData : FLimNativeDataObjectBase {
	int32_t Duration; // 0x08(0x04)
	int32_t Number; // 0x0c(0x04)
};

// ScriptStruct LimNative.LimNativeOnGetFriendRequestCallBack
// Size: 0x78 (Inherited: 0x30)
struct FLimNativeOnGetFriendRequestCallBack : FLimNativeDataCallBackBase {
	struct FGetFriendRequestData GetFriendRequestData; // 0x30(0x48)
};

// ScriptStruct LimNative.GetFriendRequestData
// Size: 0x48 (Inherited: 0x28)
struct FGetFriendRequestData : FLimNativeDataCallBackDataBase {
	struct TArray<struct FSendFriendRequestData> SendRequests; // 0x28(0x10)
	struct TArray<struct FReceivedFriendRequestData> ReceiveRequests; // 0x38(0x10)
};

// ScriptStruct LimNative.ReceivedFriendRequestData
// Size: 0x60 (Inherited: 0x08)
struct FReceivedFriendRequestData : FLimNativeDataObjectBase {
	struct FString RequestID; // 0x08(0x10)
	struct FString TargetId; // 0x18(0x10)
	struct FString NickName; // 0x28(0x10)
	struct FString AvatarUrl; // 0x38(0x10)
	struct FString Timestamp; // 0x48(0x10)
	bool IsOffLineRequest; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct LimNative.SendFriendRequestData
// Size: 0x58 (Inherited: 0x08)
struct FSendFriendRequestData : FLimNativeDataObjectBase {
	struct FString RequestID; // 0x08(0x10)
	struct FString TargetId; // 0x18(0x10)
	struct FString NickName; // 0x28(0x10)
	struct FString AvatarUrl; // 0x38(0x10)
	struct FString Timestamp; // 0x48(0x10)
};

// ScriptStruct LimNative.LimNativeOnGetFriendCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnGetFriendCallBack : FLimNativeDataCallBackBase {
	struct FFriendInfoList FriendData; // 0x30(0x38)
};

// ScriptStruct LimNative.FriendInfoList
// Size: 0x38 (Inherited: 0x28)
struct FFriendInfoList : FLimNativeDataCallBackDataBase {
	struct TArray<struct FFriendInfo> FriendList; // 0x28(0x10)
};

// ScriptStruct LimNative.FriendInfo
// Size: 0x1d0 (Inherited: 0x08)
struct FFriendInfo : FLimNativeDataObjectBase {
	struct FString Uid; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	struct FString AvatarUrl; // 0x28(0x10)
	enum class ELimNativeUserSexType Sex; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGuild Guild; // 0x40(0x48)
	struct FKingdom Kingdom; // 0x88(0x48)
	struct TArray<struct FSubTitleItem> SubTitleList; // 0xd0(0x10)
	struct FString BadgeUrl; // 0xe0(0x10)
	struct FString AvatarFrameUrl; // 0xf0(0x10)
	struct FBubbleConfigs BubbleConfigs; // 0x100(0xa8)
	int32_t VipLevel; // 0x1a8(0x04)
	bool IsShowVip; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	int32_t ServerTime; // 0x1b0(0x04)
	int32_t LastFetchTime; // 0x1b4(0x04)
	struct FPresence Presence; // 0x1b8(0x18)
};

// ScriptStruct LimNative.Presence
// Size: 0x18 (Inherited: 0x08)
struct FPresence : FLimNativeDataObjectBase {
	bool IsOnline; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t TeamID; // 0x0c(0x04)
	int32_t TeamStatus; // 0x10(0x04)
	bool IsInMyTeam; // 0x14(0x01)
	enum class ELimNativeFriendStateType FriendState; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct LimNative.BubbleConfigs
// Size: 0xa8 (Inherited: 0x08)
struct FBubbleConfigs : FLimNativeDataObjectBase {
	struct FBubbleConfig LeftNormal; // 0x08(0x28)
	struct FBubbleConfig LeftPressed; // 0x30(0x28)
	struct FBubbleConfig RightNormal; // 0x58(0x28)
	struct FBubbleConfig RightPressed; // 0x80(0x28)
};

// ScriptStruct LimNative.BubbleConfig
// Size: 0x28 (Inherited: 0x08)
struct FBubbleConfig : FLimNativeDataObjectBase {
	struct FString URL; // 0x08(0x10)
	float Top; // 0x18(0x04)
	float Left; // 0x1c(0x04)
	float Bottom; // 0x20(0x04)
	float Right; // 0x24(0x04)
};

// ScriptStruct LimNative.SubTitleItem
// Size: 0x38 (Inherited: 0x08)
struct FSubTitleItem : FLimNativeDataObjectBase {
	struct FString Key; // 0x08(0x10)
	struct FString Content; // 0x18(0x10)
	struct FString BGUrl; // 0x28(0x10)
};

// ScriptStruct LimNative.Kingdom
// Size: 0x48 (Inherited: 0x08)
struct FKingdom : FLimNativeDataObjectBase {
	struct FString StoryId; // 0x08(0x10)
	struct FString KingdomId; // 0x18(0x10)
	struct FString Name; // 0x28(0x10)
	struct FString AvatarUrl; // 0x38(0x10)
};

// ScriptStruct LimNative.Guild
// Size: 0x48 (Inherited: 0x08)
struct FGuild : FLimNativeDataObjectBase {
	struct FString ID; // 0x08(0x10)
	struct FString Name; // 0x18(0x10)
	struct FString AvatarUrl; // 0x28(0x10)
	struct FString AbbrName; // 0x38(0x10)
};

// ScriptStruct LimNative.LimNativeGetGMETokenCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeGetGMETokenCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetGMETokenData Data; // 0x30(0x38)
};

// ScriptStruct LimNative.LimNativeGetGMETokenData
// Size: 0x38 (Inherited: 0x28)
struct FLimNativeGetGMETokenData : FLimNativeDataCallBackDataBase {
	struct TArray<char> AuthBuffer; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnGroupAttrGetCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupAttrGetCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnGroupGetCallBack
// Size: 0x98 (Inherited: 0x30)
struct FLimNativeOnGroupGetCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMGroup Data; // 0x30(0x68)
};

// ScriptStruct LimNative.LimNativeOnGroupMemberGetCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupMemberGetCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnGroupMembersGetCallBack
// Size: 0x98 (Inherited: 0x30)
struct FLimNativeOnGroupMembersGetCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMGroup Data; // 0x30(0x68)
};

// ScriptStruct LimNative.LimNativeOnGroupsGetCallBack
// Size: 0x50 (Inherited: 0x30)
struct FLimNativeOnGroupsGetCallBack : FLimNativeDataCallBackBase {
	struct FString GameID; // 0x30(0x10)
	struct TArray<struct FLimNativeIMGroupBrief> Channels; // 0x40(0x10)
};

// ScriptStruct LimNative.LimNativeGetMiscConfigInfoCallBack
// Size: 0x70 (Inherited: 0x30)
struct FLimNativeGetMiscConfigInfoCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetConfigInfoData Data; // 0x30(0x40)
};

// ScriptStruct LimNative.LimNativeGetConfigInfoData
// Size: 0x40 (Inherited: 0x28)
struct FLimNativeGetConfigInfoData : FLimNativeDataCallBackDataBase {
	struct FLimNativConfigInfoData Data; // 0x28(0x10)
	int32_t ResultCode; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct LimNative.LimNativConfigInfoData
// Size: 0x10 (Inherited: 0x08)
struct FLimNativConfigInfoData : FLimNativeDataObjectBase {
	int32_t Interval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LimNative.LimNativeOnGetMsgsCallBack
// Size: 0x48 (Inherited: 0x30)
struct FLimNativeOnGetMsgsCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeMsgConvData Data; // 0x30(0x18)
};

// ScriptStruct LimNative.LimNativeMsgConvData
// Size: 0x18 (Inherited: 0x08)
struct FLimNativeMsgConvData : FLimNativeDataObjectBase {
	struct TArray<struct FLimNativeMsgConvListData> MsgConvList; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeMsgConvListData
// Size: 0x30 (Inherited: 0x08)
struct FLimNativeMsgConvListData : FLimNativeDataObjectBase {
	struct FString ConvID; // 0x08(0x10)
	enum class ELimNativeConvType ConvType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FLimNativeMsgListData> MsgList; // 0x20(0x10)
};

// ScriptStruct LimNative.LimNativeOnChatMsgCallBackData
// Size: 0x90 (Inherited: 0x08)
struct FLimNativeOnChatMsgCallBackData : FLimNativeDataObjectBase {
	struct FString MsgId; // 0x08(0x10)
	enum class ELimNativeMsgState State; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FLimNativeIMChatMessage Msg; // 0x20(0x70)
};

// ScriptStruct LimNative.LimNativeIMChatMessage
// Size: 0x70 (Inherited: 0x08)
struct FLimNativeIMChatMessage : FLimNativeDataObjectBase {
	struct FLimNativeIMChatMessageInfo BaseInfo; // 0x08(0x50)
	char pad_58[0x10]; // 0x58(0x10)
	enum class ELimNativeMsgContentType MsgType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct LimNative.LimNativeIMChatMessageInfo
// Size: 0x50 (Inherited: 0x08)
struct FLimNativeIMChatMessageInfo : FLimNativeDataObjectBase {
	struct FString ConvID; // 0x08(0x10)
	enum class ELimNativeConvType ConvType; // 0x18(0x01)
	enum class ELimNativeMsgContentType MsgType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Ext; // 0x20(0x10)
	struct FString Nonce; // 0x30(0x10)
	struct FString Timestamp; // 0x40(0x10)
};

// ScriptStruct LimNative.LimNativeMsgListData
// Size: 0xa8 (Inherited: 0x90)
struct FLimNativeMsgListData : FLimNativeOnChatMsgCallBackData {
	struct FString SenderId; // 0x90(0x10)
	bool IsISent; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct LimNative.LimNativeGetOssTokenCallBack
// Size: 0xd0 (Inherited: 0x30)
struct FLimNativeGetOssTokenCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetOssTokenData Data; // 0x30(0xa0)
};

// ScriptStruct LimNative.LimNativeGetOssTokenData
// Size: 0xa0 (Inherited: 0x28)
struct FLimNativeGetOssTokenData : FLimNativeDataCallBackDataBase {
	struct FLimNativeOssTokenData Data; // 0x28(0x70)
	int32_t ResultCode; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct LimNative.LimNativeOssTokenData
// Size: 0x70 (Inherited: 0x08)
struct FLimNativeOssTokenData : FLimNativeDataObjectBase {
	struct FString AssessKeyID; // 0x08(0x10)
	struct FString AccessKeySecret; // 0x18(0x10)
	int32_t ExpirationUtc; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString SecurityToken; // 0x30(0x10)
	struct FString Bucket; // 0x40(0x10)
	struct FString EndPoint; // 0x50(0x10)
	struct FString FilePath; // 0x60(0x10)
};

// ScriptStruct LimNative.LimNativeOnGetUserCallBack
// Size: 0x168 (Inherited: 0x30)
struct FLimNativeOnGetUserCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetUserData Data; // 0x30(0x138)
};

// ScriptStruct LimNative.LimNativeGetUserData
// Size: 0x138 (Inherited: 0x28)
struct FLimNativeGetUserData : FLimNativeDataCallBackDataBase {
	struct FString AvatarFrameUrl; // 0x28(0x10)
	struct FString AvatarUrl; // 0x38(0x10)
	int32_t CreateTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FGuild Guild; // 0x50(0x48)
	struct FKingdom Kingdom; // 0x98(0x48)
	int32_t LastFetchTime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString NickName; // 0xe8(0x10)
	int32_t ServerTime; // 0xf8(0x04)
	bool IsShowVip; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct TArray<struct FSubTitleItem> SubTitleList; // 0x100(0x10)
	struct FString Uid; // 0x110(0x10)
	int32_t VipLevel; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FString GameExtra; // 0x128(0x10)
};

// ScriptStruct LimNative.LimNativeOnGetUsersCallBack
// Size: 0x68 (Inherited: 0x30)
struct FLimNativeOnGetUsersCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeGetUsersData Data; // 0x30(0x38)
};

// ScriptStruct LimNative.LimNativeGetUsersData
// Size: 0x38 (Inherited: 0x28)
struct FLimNativeGetUsersData : FLimNativeDataCallBackDataBase {
	struct TArray<struct FLimNativeGetUserData> DataResultList; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeOnGetUsersStateCallBack
// Size: 0xa8 (Inherited: 0x30)
struct FLimNativeOnGetUsersStateCallBack : FLimNativeDataCallBackBase {
	struct FUsersPresence Data; // 0x30(0x78)
};

// ScriptStruct LimNative.UsersPresence
// Size: 0x78 (Inherited: 0x28)
struct FUsersPresence : FLimNativeDataCallBackDataBase {
	struct TMap<struct FString, struct FPresence> Result; // 0x28(0x50)
};

// ScriptStruct LimNative.LimNativeOnGroupJoinCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupJoinCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnLoginCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnLoginCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnLogoutCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnLogoutCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnMsgLogicReceivedEventCallBack
// Size: 0x38 (Inherited: 0x08)
struct FLimNativeOnMsgLogicReceivedEventCallBack : FLimNativeDataObjectBase {
	struct FLimNativeMsgLogiMsgData Data; // 0x08(0x30)
};

// ScriptStruct LimNative.LimNativeMsgLogiMsgData
// Size: 0x30 (Inherited: 0x08)
struct FLimNativeMsgLogiMsgData : FLimNativeDataObjectBase {
	struct FLimNativeMsgLogiCommonMsgData Data; // 0x08(0x28)
};

// ScriptStruct LimNative.LimNativeMsgLogiCommonMsgData
// Size: 0x28 (Inherited: 0x08)
struct FLimNativeMsgLogiCommonMsgData : FLimNativeDataObjectBase {
	int32_t Type; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLimNativeDataBizFullObj BizObj; // 0x10(0x18)
};

// ScriptStruct LimNative.LimNativeDataBizFullObj
// Size: 0x18 (Inherited: 0x08)
struct FLimNativeDataBizFullObj : FLimNativeDataObjectBase {
	struct FString Uid; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeOnMsgReceivedEventCallBack
// Size: 0x40 (Inherited: 0x08)
struct FLimNativeOnMsgReceivedEventCallBack : FLimNativeDataObjectBase {
	struct FLimNativeOnMsgReceivedData Data; // 0x08(0x38)
};

// ScriptStruct LimNative.LimNativeOnMsgReceivedData
// Size: 0x38 (Inherited: 0x28)
struct FLimNativeOnMsgReceivedData : FLimNativeDataCallBackDataBase {
	struct TArray<struct FLimNativeReceivedMsgData> MsgDataList; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeReceivedMsgData
// Size: 0xc8 (Inherited: 0x28)
struct FLimNativeReceivedMsgData : FLimNativeDataCallBackDataBase {
	struct FString LanguageList; // 0x28(0x10)
	struct FString SenderId; // 0x38(0x10)
	struct FString MsgId; // 0x48(0x10)
	struct FLimNativeIMChatMessage Msg; // 0x58(0x70)
};

// ScriptStruct LimNative.LimNativeOnMsgRevokedEventCallBack
// Size: 0x60 (Inherited: 0x08)
struct FLimNativeOnMsgRevokedEventCallBack : FLimNativeDataObjectBase {
	struct FLimNativeOnMsgRevokedData Data; // 0x08(0x58)
};

// ScriptStruct LimNative.LimNativeOnMsgRevokedData
// Size: 0x58 (Inherited: 0x28)
struct FLimNativeOnMsgRevokedData : FLimNativeDataCallBackDataBase {
	struct FString ConvID; // 0x28(0x10)
	enum class ELimNativeConvType ConvType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString MessageId; // 0x40(0x10)
	int32_t SenderId; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct LimNative.LimNativeOnGroupQuitCallBack
// Size: 0x50 (Inherited: 0x30)
struct FLimNativeOnGroupQuitCallBack : FLimNativeDataCallBackBase {
	struct FString GameID; // 0x30(0x10)
	struct FString ChannelId; // 0x40(0x10)
};

// ScriptStruct LimNative.LimNativeOnGroupMemberRemoveCallBack
// Size: 0x98 (Inherited: 0x30)
struct FLimNativeOnGroupMemberRemoveCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeIMGroup Data; // 0x30(0x68)
};

// ScriptStruct LimNative.LimNativeOnRevokeMsgCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnRevokeMsgCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnSendMsgCallBack
// Size: 0xc0 (Inherited: 0x30)
struct FLimNativeOnSendMsgCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeOnChatMsgCallBackData Data; // 0x30(0x90)
};

// ScriptStruct LimNative.LimNativeOnSetConvReadCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnSetConvReadCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeOnGroupAttrSetCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnGroupAttrSetCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeLanguageConfig
// Size: 0x10 (Inherited: 0x08)
struct FLimNativeLanguageConfig : FLimNativeDataObjectBase {
	enum class ELimNativeSupportedLanguage Lang; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct LimNative.LimNativeOnSetMsgStateCallBack
// Size: 0x30 (Inherited: 0x30)
struct FLimNativeOnSetMsgStateCallBack : FLimNativeDataCallBackBase {
};

// ScriptStruct LimNative.LimNativeParkConfig
// Size: 0x58 (Inherited: 0x08)
struct FLimNativeParkConfig : FLimNativeDataObjectBase {
	struct FString App_Id; // 0x08(0x10)
	struct FString Sdk_Env; // 0x18(0x10)
	struct FString Sdk_Region; // 0x28(0x10)
	struct FString Gid; // 0x38(0x10)
	struct FString SlsSvr; // 0x48(0x10)
};

// ScriptStruct LimNative.LimNativeReportConfig
// Size: 0xc8 (Inherited: 0x08)
struct FLimNativeReportConfig : FLimNativeDataObjectBase {
	struct FString PackageName; // 0x08(0x10)
	struct FString Android_Id; // 0x18(0x10)
	struct FString Goodle_Aid; // 0x28(0x10)
	struct FString Os_Version; // 0x38(0x10)
	struct FString Mac; // 0x48(0x10)
	struct FString Device_Model; // 0x58(0x10)
	struct FString Open_Id; // 0x68(0x10)
	struct FString Idfa; // 0x78(0x10)
	struct FString App_Version; // 0x88(0x10)
	struct FString Server_Id; // 0x98(0x10)
	struct FString Device_Id; // 0xa8(0x10)
	struct FString SlsSvr; // 0xb8(0x10)
};

// ScriptStruct LimNative.LimNativeResDirConfig
// Size: 0x18 (Inherited: 0x08)
struct FLimNativeResDirConfig : FLimNativeDataObjectBase {
	struct FString ResDir; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeTextTranslateCallBack
// Size: 0x88 (Inherited: 0x30)
struct FLimNativeTextTranslateCallBack : FLimNativeDataCallBackBase {
	struct FLimNativeTextTranslateData Data; // 0x30(0x58)
};

// ScriptStruct LimNative.LimNativeTextTranslateData
// Size: 0x58 (Inherited: 0x28)
struct FLimNativeTextTranslateData : FLimNativeDataCallBackDataBase {
	struct FString TranslatedText; // 0x28(0x10)
	struct FString Translator; // 0x38(0x10)
	struct FString ExtraInfo; // 0x48(0x10)
};

// ScriptStruct LimNative.LimNativeIMChatMessageBase
// Size: 0x58 (Inherited: 0x08)
struct FLimNativeIMChatMessageBase : FLimNativeDataObjectBase {
	char pad_8[0x50]; // 0x08(0x50)
};

// ScriptStruct LimNative.LimNativeIMEmotionMessage
// Size: 0xb0 (Inherited: 0x58)
struct FLimNativeIMEmotionMessage : FLimNativeIMChatMessageBase {
	struct FString PackName; // 0x58(0x10)
	enum class ELimNativePackType PackType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString EmotionName; // 0x70(0x10)
	struct FString EmotionId; // 0x80(0x10)
	struct FString EmotionUrl; // 0x90(0x10)
	struct FString Desc; // 0xa0(0x10)
};

// ScriptStruct LimNative.LimNativeIMImageMessage
// Size: 0xa0 (Inherited: 0x58)
struct FLimNativeIMImageMessage : FLimNativeIMChatMessageBase {
	struct FString UUID; // 0x58(0x10)
	struct FString Fmt; // 0x68(0x10)
	struct FString URL; // 0x78(0x10)
	int32_t Width; // 0x88(0x04)
	int32_t Height; // 0x8c(0x04)
	struct FString Size; // 0x90(0x10)
};

// ScriptStruct LimNative.LimNativeIMShareMessage
// Size: 0xc0 (Inherited: 0x58)
struct FLimNativeIMShareMessage : FLimNativeIMChatMessageBase {
	int32_t Type; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Text; // 0x60(0x10)
	struct FString Title; // 0x70(0x10)
	struct FString Detail; // 0x80(0x10)
	struct FString Img; // 0x90(0x10)
	struct FString URL; // 0xa0(0x10)
	struct FString Extra; // 0xb0(0x10)
};

// ScriptStruct LimNative.LimNativeIMTextMessage
// Size: 0x68 (Inherited: 0x58)
struct FLimNativeIMTextMessage : FLimNativeIMChatMessageBase {
	struct FString Text; // 0x58(0x10)
};

// ScriptStruct LimNative.LimNativeIMTextWithAtMessage
// Size: 0x68 (Inherited: 0x58)
struct FLimNativeIMTextWithAtMessage : FLimNativeIMChatMessageBase {
	struct FString Text; // 0x58(0x10)
};

// ScriptStruct LimNative.LimNativeIMVoiceMessage
// Size: 0x90 (Inherited: 0x58)
struct FLimNativeIMVoiceMessage : FLimNativeIMChatMessageBase {
	struct FString UUID; // 0x58(0x10)
	struct FString URL; // 0x68(0x10)
	struct FString Size; // 0x78(0x10)
	int32_t Duration; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct LimNative.LimNativeSetMsgState
// Size: 0x40 (Inherited: 0x08)
struct FLimNativeSetMsgState : FLimNativeDataObjectBase {
	enum class ELimNativeConvType ConvType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ConvID; // 0x10(0x10)
	enum class ELimNativeMsgContentType MsgType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString MsgId; // 0x28(0x10)
	enum class ELimNativeMsgState MsgState; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct LimNative.LimNativeOnMsgLogicReceivedData
// Size: 0x38 (Inherited: 0x28)
struct FLimNativeOnMsgLogicReceivedData : FLimNativeDataCallBackDataBase {
	struct TArray<struct FLimNativeCommonMsg> CommonMessage; // 0x28(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjFriendBase
// Size: 0x48 (Inherited: 0x08)
struct FLimNativeBizObjFriendBase : FLimNativeDataObjectBase {
	struct FString Uid; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	struct FString AvatarUrl; // 0x28(0x10)
	struct FString AvatarFrameUrl; // 0x38(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjRefreshFriend
// Size: 0x58 (Inherited: 0x48)
struct FLimNativeBizObjRefreshFriend : FLimNativeBizObjFriendBase {
	struct FString EmblemUrls; // 0x48(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjFriendRequest
// Size: 0x98 (Inherited: 0x48)
struct FLimNativeBizObjFriendRequest : FLimNativeBizObjFriendBase {
	struct FString RequestID; // 0x48(0x10)
	struct FString RequestMsg; // 0x58(0x10)
	struct FString RequestSource; // 0x68(0x10)
	struct FString Timestamp; // 0x78(0x10)
	struct FString Lang; // 0x88(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjGroupBase
// Size: 0x18 (Inherited: 0x08)
struct FLimNativeBizObjGroupBase : FLimNativeDataObjectBase {
	struct FString groupid; // 0x08(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjExitGroup
// Size: 0x30 (Inherited: 0x18)
struct FLimNativeBizObjExitGroup : FLimNativeBizObjGroupBase {
	enum class ELimNativeGroupType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Uid; // 0x20(0x10)
};

// ScriptStruct LimNative.LimNativeBizObjGroupPerms
// Size: 0x28 (Inherited: 0x18)
struct FLimNativeBizObjGroupPerms : FLimNativeBizObjGroupBase {
	struct FString Perms; // 0x18(0x10)
};

// ScriptStruct LimNative.LimNativeIMNotificationMessage
// Size: 0x68 (Inherited: 0x58)
struct FLimNativeIMNotificationMessage : FLimNativeIMChatMessageBase {
	struct FString Text; // 0x58(0x10)
};

// ScriptStruct LimNative.LimNativeEventDataBase
// Size: 0x40 (Inherited: 0x08)
struct FLimNativeEventDataBase : FLimNativeDataObjectBase {
	struct FString JsonData; // 0x08(0x10)
	struct FString ErrorCode; // 0x18(0x10)
	struct FString Message; // 0x28(0x10)
	enum class ELimNativeEventType EventCode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

