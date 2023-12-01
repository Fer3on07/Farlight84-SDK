// Enum DownloaderTool.ERawDataAction
enum class ERawDataAction : uint8 {
	Default = 0,
	UTF8String = 1,
	ReverseDecryptString = 2,
	Texture2DDynamic = 3,
	ERawDataAction_MAX = 4
};

// Enum DownloaderTool.EDownloaderFailedType
enum class EDownloaderFailedType : uint8 {
	ConnectFailed = 0,
	RequestHeadFailed = 1,
	CreateFileFailed = 2,
	DownloadFailed = 3,
	WriteFailed = 4,
	DeleteOldFailed = 5,
	MoveFailed = 6,
	CreateDownloadTaskFail = 7,
	GetPlatformFileFail = 8,
	GetWrongJsonFormat = 9,
	RequestTimeOut = 10,
	RequestInvalid = 11,
	ResponseInvalid = 12,
	RequestCanceled = 13,
	ResponseNoContent = 14,
	TaskHasCompleted = 15,
	FileIODownloadFailed = 16,
	EDownloaderFailedType_MAX = 17
};

// Enum DownloaderTool.EServerInfoState
enum class EServerInfoState : uint8 {
	ESIS_NotReady = 0,
	ESIS_Downloading = 1,
	ESIS_Ready = 2,
	ESIS_Failed = 3,
	ESIS_OutOfDate = 4,
	ESIS_MAX = 5
};

// Enum DownloaderTool.EDownloaderState
enum class EDownloaderState : uint8 {
	NotStart = 0,
	Downloading = 1,
	Pausing = 2,
	Completed = 3,
	EDownloaderState_MAX = 4
};

// ScriptStruct DownloaderTool.DownloaderResponse
// Size: 0x48 (Inherited: 0x00)
struct FDownloaderResponse {
	struct FString URL; // 0x00(0x10)
	int32_t ErrorCode; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<char> Data; // 0x18(0x10)
	bool bWasSuccessful; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ContentLength; // 0x2c(0x04)
	int32_t DataLength; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t Timestamp; // 0x38(0x08)
	enum class ERawDataAction RawDataAction; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct DownloaderTool.DownloaderTaskInfo
// Size: 0x70 (Inherited: 0x00)
struct FDownloaderTaskInfo {
	struct FString URL; // 0x00(0x10)
	struct FString JsonRequestStr; // 0x10(0x10)
	bool bCompleted; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	int64_t CompleteTimeStamp; // 0x28(0x08)
	bool bUsingResumeTrans; // 0x30(0x01)
	bool bForceRedownload; // 0x31(0x01)
	bool bSaveToCache; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FString FileDirectory; // 0x38(0x10)
	struct FString Filename; // 0x48(0x10)
	struct FString FileExtension; // 0x58(0x10)
	enum class ERawDataAction RawDataAction; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

