// Enum LimNativeWidget.EChatGMERoomType
enum class EChatGMERoomType : uint8 {
	Fluency = 0,
	Standard = 1,
	HighQuality = 2,
	EChatGMERoomType_MAX = 3
};

// Enum LimNativeWidget.EChatGMERoomTypeSubEvent
enum class EChatGMERoomTypeSubEvent : uint8 {
	EnterRoom = 0,
	Start = 1,
	Complete = 2,
	Request = 3,
	EChatGMERoomTypeSubEvent_MAX = 4
};

// Enum LimNativeWidget.EChatGMERoomManagementOp
enum class EChatGMERoomManagementOp : uint8 {
	Capture = 0,
	Play = 1,
	AudioSend = 2,
	AudioREC = 3,
	Mic = 4,
	Speaker = 5,
	GetMicState = 6,
	GetSpeakerState = 7,
	Fobin = 8,
	EChatGMERoomManagementOp_MAX = 9
};

// Enum LimNativeWidget.EChatGMEEventIDUserUpdate
enum class EChatGMEEventIDUserUpdate : uint8 {
	Enter = 0,
	Exit = 1,
	HasCameraVideo = 2,
	NoCameraVideo = 3,
	HasAudio = 4,
	NoAudio = 5,
	HasOpenMic = 6,
	HasCloseMic = 7,
	EChatGMEEventIDUserUpdate_MAX = 8
};

// Enum LimNativeWidget.EChatGMEAudioRouteRecvType
enum class EChatGMEAudioRouteRecvType : uint8 {
	RecvInquireError = 0,
	NotRecvFromAnyone = 1,
	RecvFromAll = 2,
	RecvBlacklist = 3,
	RecvWhitelist = 4,
	EChatGMEAudioRouteRecvType_MAX = 5
};

// Enum LimNativeWidget.EChatGMEAudioRouteSendType
enum class EChatGMEAudioRouteSendType : uint8 {
	InquireError = 0,
	NotSendToAnyone = 1,
	SendToAll = 2,
	SendBlacklist = 3,
	SendWhitelist = 4,
	EChatGMEAudioRouteSendType_MAX = 5
};

// Enum LimNativeWidget.EChatGMERangeAudioMode
enum class EChatGMERangeAudioMode : uint8 {
	World = 0,
	Team = 1,
	EChatGMERangeAudioMode_MAX = 2
};

// Enum LimNativeWidget.EIOSAudioPermissionState
enum class EIOSAudioPermissionState : uint8 {
	AudioPermission_Unknown = 0,
	AudioPermission_Undetermined = 1,
	AudioPermission_Denied = 2,
	AudioPermission_Granted = 3,
	AudioPermission_MAX = 4
};

// Enum LimNativeWidget.EChatGMEAudioRouteType
enum class EChatGMEAudioRouteType : uint8 {
	Others = 0,
	BuildInreciever = 1,
	Speaker = 2,
	Headphone = 3,
	Bluetooth = 4,
	EChatGMEAudioRouteType_MAX = 5
};

// Enum LimNativeWidget.EChatGMEKaraokeType
enum class EChatGMEKaraokeType : uint8 {
	Original = 0,
	Pop = 1,
	Rock = 2,
	RB = 3,
	Dance = 4,
	Heaven = 5,
	TTS = 6,
	Vigorous = 7,
	Limpid = 8,
	Count = 9,
	EChatGMEKaraokeType_MAX = 10
};

// Enum LimNativeWidget.EChatGMEVoiceType
enum class EChatGMEVoiceType : uint8 {
	OriginalSound = 0,
	Lotita = 1,
	Uncle = 2,
	Intangible = 3,
	DeadFatboy = 4,
	HeavyMental = 5,
	Dialect = 6,
	Influenza = 7,
	CagedAnimal = 8,
	HeavyMachine = 9,
	StrongCurrent = 10,
	Kindergarten = 11,
	Huang = 12,
	Count = 13,
	EChatGMEVoiceType_MAX = 14
};

// Enum LimNativeWidget.EChatGMELogLevel
enum class EChatGMELogLevel : uint8 {
	None = 0,
	Error = 1,
	Info = 2,
	Debug = 3,
	Verbose = 4,
	EChatGMELogLevel_MAX = 5
};

// Enum LimNativeWidget.EChatGMEAudioRouteSubEventType
enum class EChatGMEAudioRouteSubEventType : uint8 {
	Update = 0,
	EChatGMEAudioRouteSubEventType_MAX = 1
};

// Enum LimNativeWidget.EChatGMECustomDataSubEvent
enum class EChatGMECustomDataSubEvent : uint8 {
	Update = 0,
	EChatGMECustomDataSubEvent_MAX = 1
};

// Enum LimNativeWidget.EChatGMEChorusSubEvent
enum class EChatGMEChorusSubEvent : uint8 {
	HasNoCMDPack = 0,
	HadCMDPack = 1,
	Start = 2,
	Stop = 3,
	AccompanierOption = 4,
	StatusRefuse = 5,
	StopByPeer = 6,
	EChatGMEChorusSubEvent_MAX = 7
};

// Enum LimNativeWidget.EChatGMEEventType
enum class EChatGMEEventType : uint8 {
	None = 0,
	EnterRoom = 1,
	ExitRoom = 2,
	RoomDisconnect = 3,
	UserUpdate = 4,
	NumberOfUsersUpdate = 5,
	NumberOfAudioStreamsUpdate = 6,
	ReconnectStart = 7,
	ReconnectSuccess = 8,
	SwitchRoom = 9,
	ChangeRoomType = 10,
	AudioDataEmpty = 11,
	RoomSharingStart = 12,
	RoomSharingStop = 13,
	RecordCompleted = 14,
	RecordPreviewCompleted = 15,
	RecordMixCompleted = 16,
	AudioRouteUpdate = 17,
	SpeakerDefaultDeviceChanged = 18,
	SpeakerNewDevice = 19,
	SpeakerLostDevice = 20,
	MicNewDevice = 21,
	MicLostDevice = 22,
	MicDefaultDeviceChanged = 23,
	AudioRouteChanged = 24,
	UserVolumes = 25,
	ChangeRoomQuality = 26,
	AccompanyFinish = 27,
	ServerAudioRouteEvent = 28,
	CustomDataUpdate = 29,
	RealtimeASR = 30,
	ChorusEvent = 31,
	ChangeTeamId = 32,
	AudioReady = 33,
	HardwareTestRecordFinish = 34,
	HardwareTestPreviewFinish = 35,
	PTTRecordComplete = 36,
	PTTUploadComplete = 37,
	PTTDownloadComplete = 38,
	PTTPlayComplete = 39,
	PTTSpeech2TextComplete = 40,
	PTTStreamingRecognitionComplete = 41,
	PTTStreamingRecognitionIsRunning = 42,
	RoomManagementOperator = 43,
	EChatGMEEventType_MAX = 44
};

// Enum LimNativeWidget.EChatGMEASRSubEvent
enum class EChatGMEASRSubEvent : uint8 {
	Start = 0,
	Content = 1,
	End = 2,
	EChatGMEASRSubEvent_MAX = 3
};

// Enum LimNativeWidget.EChatGMERecordPermission
enum class EChatGMERecordPermission : uint8 {
	Granted = 0,
	Denied = 1,
	NotDetermined = 2,
	Error = 3,
	EChatGMERecordPermission_MAX = 4
};

// ScriptStruct LimNativeWidget.ChatGMEDataResult
// Size: 0x28 (Inherited: 0x00)
struct FChatGMEDataResult {
	char pad_0[0x8]; // 0x00(0x08)
	bool bSuccess; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ErrorInfo; // 0x10(0x10)
	int32_t ErrorCode; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct LimNativeWidget.ChatGMEDataDeviceInfo
// Size: 0x50 (Inherited: 0x28)
struct FChatGMEDataDeviceInfo : FChatGMEDataResult {
	struct FString DeviceID; // 0x28(0x10)
	struct FString DeviceName; // 0x38(0x10)
	bool bNewDevice; // 0x48(0x01)
	bool bUsedDevice; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct LimNativeWidget.ChatGMEDataRoomQuality
// Size: 0x18 (Inherited: 0x00)
struct FChatGMEDataRoomQuality {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)
	float Loss; // 0x0c(0x04)
	int32_t Delay; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LimNativeWidget.ChatGMEDataChangeRoomType
// Size: 0x30 (Inherited: 0x28)
struct FChatGMEDataChangeRoomType : FChatGMEDataResult {
	enum class EChatGMERoomTypeSubEvent NewRoomType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct LimNativeWidget.ChatGMEDataFileInfo
// Size: 0x58 (Inherited: 0x28)
struct FChatGMEDataFileInfo : FChatGMEDataResult {
	struct FString FileID; // 0x28(0x10)
	struct FString FilePath; // 0x38(0x10)
	struct FString Text; // 0x48(0x10)
};

// ScriptStruct LimNativeWidget.ChatGMEDataNumberOfAudioStreamsUpdate
// Size: 0x10 (Inherited: 0x00)
struct FChatGMEDataNumberOfAudioStreamsUpdate {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t AudioStreamsNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LimNativeWidget.ChatGMEDataNumberOfUserUpdate
// Size: 0x18 (Inherited: 0x00)
struct FChatGMEDataNumberOfUserUpdate {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t AllUserNum; // 0x08(0x04)
	int32_t AccUserNum; // 0x0c(0x04)
	int32_t ProxyUserNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LimNativeWidget.ChatGMEDataRecordCompleted
// Size: 0x48 (Inherited: 0x28)
struct FChatGMEDataRecordCompleted : FChatGMEDataResult {
	struct FString FilePath; // 0x28(0x10)
	struct FString Duration; // 0x38(0x10)
};

// ScriptStruct LimNativeWidget.ChatGMEDataRoomOperator
// Size: 0x50 (Inherited: 0x28)
struct FChatGMEDataRoomOperator : FChatGMEDataResult {
	struct FString SenderId; // 0x28(0x10)
	struct FString ReceiverId; // 0x38(0x10)
	enum class EChatGMERoomManagementOp OperateType; // 0x48(0x01)
	bool bOpenCmd; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct LimNativeWidget.ChatGMEDataUserUpdate
// Size: 0x20 (Inherited: 0x00)
struct FChatGMEDataUserUpdate {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EChatGMEEventIDUserUpdate EventId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FString> UserList; // 0x10(0x10)
};

// ScriptStruct LimNativeWidget.ChatGMEDataUserVolumes
// Size: 0x58 (Inherited: 0x00)
struct FChatGMEDataUserVolumes {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FString, float> Volumes; // 0x08(0x50)
};

// ScriptStruct LimNativeWidget.ChatListConvData
// Size: 0x18 (Inherited: 0x00)
struct FChatListConvData {
	struct FString ConvID; // 0x00(0x10)
	enum class ELimNativeConvType ConvType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LimNativeWidget.ChatListUserData
// Size: 0x50 (Inherited: 0x00)
struct FChatListUserData {
	struct FString Uid; // 0x00(0x10)
	struct FString NickName; // 0x10(0x10)
	struct FString AvatarUrl; // 0x20(0x10)
	struct FString AvatarFrameUrl; // 0x30(0x10)
	enum class ELimNativeUserSexType Sex; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t VipLevel; // 0x44(0x04)
	bool IsShowVip; // 0x48(0x01)
	enum class ELimNativeFriendStateType OnlineState; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct LimNativeWidget.NewChatListMessageData
// Size: 0x178 (Inherited: 0x00)
struct FNewChatListMessageData {
	struct FString SendId; // 0x00(0x10)
	struct FString MsgId; // 0x10(0x10)
	enum class ELimNativeMsgState MsgState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString MsgContent; // 0x28(0x10)
	struct FString UUID; // 0x38(0x10)
	struct FString URL; // 0x48(0x10)
	struct FString Size; // 0x58(0x10)
	int32_t Duration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString Ext; // 0x70(0x10)
	enum class ELimNativeMsgContentType MsgType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString ConvID; // 0x88(0x10)
	enum class ELimNativeConvType ConvType; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString Timestamp; // 0xa0(0x10)
	struct FLimNativeIMChatMessage MsgData; // 0xb0(0x70)
	struct FLimNativeIMChatMessageBase MsgBase; // 0x120(0x58)
};

// ScriptStruct LimNativeWidget.ChatListMessageData
// Size: 0x98 (Inherited: 0x00)
struct FChatListMessageData {
	struct FString SendId; // 0x00(0x10)
	struct FString MsgId; // 0x10(0x10)
	enum class ELimNativeMsgState MsgState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FLimNativeIMChatMessage MsgData; // 0x28(0x70)
};

// ScriptStruct LimNativeWidget.NertcUserUpdateData
// Size: 0x10 (Inherited: 0x00)
struct FNertcUserUpdateData {
	struct TArray<struct FString> UserList; // 0x00(0x10)
};

// ScriptStruct LimNativeWidget.ChatLogicMessageData
// Size: 0x10 (Inherited: 0x00)
struct FChatLogicMessageData {
	int32_t Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FLimNativeDataObjectBase BizObj; // 0x08(0x08)
};

