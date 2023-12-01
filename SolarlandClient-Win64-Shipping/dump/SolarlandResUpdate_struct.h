// Enum SolarlandResUpdate.EDownloadTaskError
enum class EDownloadTaskError : uint8 {
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
	EDownloadTaskError_MAX = 10
};

// Enum SolarlandResUpdate.ELoginAnnouncement
enum class ELoginAnnouncement : uint8 {
	ServerCloseAnnounce = 0,
	UpdateAnnounce = 1,
	Unknown = 2,
	ELoginAnnouncement_MAX = 3
};

