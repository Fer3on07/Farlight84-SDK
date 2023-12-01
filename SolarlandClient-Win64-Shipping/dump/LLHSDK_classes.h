// Class LLHSDK.LLHSDKAppUtils
// Size: 0x38 (Inherited: 0x28)
struct ULLHSDKAppUtils : UObject {
	struct FMulticastInlineDelegate OnSteamUserStatesUpdate; // 0x28(0x10)

	bool ShowSteamVirtualKeyboard(); // Function LLHSDK.LLHSDKAppUtils.ShowSteamVirtualKeyboard // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eca70
	bool SDKConfigIsMultiDetect(); // Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec880
	bool SDKConfigIsDebug(); // Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec850
	void OnSteamUserStatesUpdate__DelegateSignature(struct FString SteamId, bool IsFriend, bool Online, struct FString FriendName); // DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	bool IsSteamFriendOnline(struct FString SteamId); // Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec7b0
	bool IsSimulator(); // Function LLHSDK.LLHSDKAppUtils.IsSimulator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x95aae0
	bool IsPlatformSteamDeck(); // Function LLHSDK.LLHSDKAppUtils.IsPlatformSteamDeck // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec780
	bool IsPackageInstalled(struct FString InPackageName); // Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec690
	bool IsGrayRelease(); // Function LLHSDK.LLHSDKAppUtils.IsGrayRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x95aae0
	bool InviteSteamUserToGame(struct FString SteamId); // Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec5f0
	struct FString GetVersionName(); // Function LLHSDK.LLHSDKAppUtils.GetVersionName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetVersionCode(); // Function LLHSDK.LLHSDKAppUtils.GetVersionCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct TArray<bool> GetSteamFriendsOnlineList(); // Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec430
	struct TArray<struct FString> GetSteamFriendsNameList(); // Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec3b0
	struct FString GetSteamFriendName(struct FString SteamId); // Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec2d0
	struct TArray<struct FString> GetSteamFriendIDList(); // Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec250
	int32_t GetSteamFriendCount(); // Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec220
	struct FString GetSDKVersionName(); // Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetSDKVersionCode(); // Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetRunningProcessName(); // Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetOperatingSystemId(); // Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec1a0
	struct ULLHSDKAppUtils* GetInstance(); // Function LLHSDK.LLHSDKAppUtils.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec110
	int64_t GetGameTime(); // Function LLHSDK.LLHSDKAppUtils.GetGameTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec0e0
	struct FString GetGameID(); // Function LLHSDK.LLHSDKAppUtils.GetGameID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetEnvId(); // Function LLHSDK.LLHSDKAppUtils.GetEnvId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec060
	struct FString GetDeviceUUID(); // Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetChannelID(); // Function LLHSDK.LLHSDKAppUtils.GetChannelID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetBiosUUID(); // Function LLHSDK.LLHSDKAppUtils.GetBiosUUID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebe20
	struct FString GetAppName(); // Function LLHSDK.LLHSDKAppUtils.GetAppName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebda0
	struct FString GetAppIDRaw(); // Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebd20
	struct FString GetAppID(); // Function LLHSDK.LLHSDKAppUtils.GetAppID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebca0
	bool DoesDistributeForDomestic(); // Function LLHSDK.LLHSDKAppUtils.DoesDistributeForDomestic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eba40
	void DismissSteamVirtualKeyboard(); // Function LLHSDK.LLHSDKAppUtils.DismissSteamVirtualKeyboard // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eba20
	void DestoryInstance(); // Function LLHSDK.LLHSDKAppUtils.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eb9c0
	void BindOnlineSubsystemSteamPresence(); // Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eb860
};

// Class LLHSDK.LLHSDKCommunity
// Size: 0x78 (Inherited: 0x28)
struct ULLHSDKCommunity : UObject {
	struct FMulticastInlineDelegate OnInitCommunity; // 0x28(0x10)
	struct FMulticastInlineDelegate OnExitCommunity; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGetCommunityRedhint; // 0x48(0x10)
	struct FMulticastInlineDelegate OnClearCommunityRedhint; // 0x58(0x10)
	struct FMulticastInlineDelegate OnImageDownload; // 0x68(0x10)

	void OnInitCommunity__DelegateSignature(struct FString ResultStr); // DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnImageDownload__DelegateSignature(bool bSuccess); // DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGetCommunityRedhint__DelegateSignature(struct FString ResultStr); // DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnExitCommunity__DelegateSignature(struct FString ResultStr); // DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnClearCommunityRedhint__DelegateSignature(struct FString ResultStr); // DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void InitCommunityConfig(struct FString UrlInfo, struct FString ReqMethod, struct FString ExtraHttpParams); // Function LLHSDK.LLHSDKCommunity.InitCommunityConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec4b0
	struct ULLHSDKCommunity* GetInstance(); // Function LLHSDK.LLHSDKCommunity.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec140
	void GetCommunityRedHint(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams); // Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebf20
	void ExitCommunity(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams); // Function LLHSDK.LLHSDKCommunity.ExitCommunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebb60
	void DownloadImage(struct FString URL, struct FString FilePath); // Function LLHSDK.LLHSDKCommunity.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eba70
	void DestoryInstance(); // Function LLHSDK.LLHSDKCommunity.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eb9e0
	void ClearCommunityRedHint(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams); // Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eb880
};

// Class LLHSDK.LLHSDKCustomerService
// Size: 0x40 (Inherited: 0x28)
struct ULLHSDKCustomerService : UObject {
	struct FMulticastInlineDelegate OnReceiveNotification; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	void ShowCustomerServicePage(struct FString ExtInfoStr); // Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void SetCustomerServiceDebug(bool& bIsPspDebug, struct FString PlayerId, int64_t ServerId); // Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ec8b0
	void OnReceiveNotification__DelegateSignature(int32_t NotificationType); // DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	struct ULLHSDKCustomerService* GetInstance(); // Function LLHSDK.LLHSDKCustomerService.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec170
	void DestoryInstance(); // Function LLHSDK.LLHSDKCustomerService.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eba00
};

// Class LLHSDK.LLHSDKDeviceUtils
// Size: 0x48 (Inherited: 0x28)
struct ULLHSDKDeviceUtils : UObject {
	struct FMulticastInlineDelegate OnGoogleAdID; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDeviceScore; // 0x38(0x10)

	void OnGoogleAdID__DelegateSignature(struct FString GoogleAdID); // DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnDeviceScore__DelegateSignature(int32_t DeviceScore); // DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	bool IsEmulator(); // Function LLHSDK.LLHSDKDeviceUtils.IsEmulator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	struct FString GetTotalRAM(); // Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0860
	struct FString GetTotalMemorySize(); // Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f07e0
	struct FString GetTimezoneName(); // Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0760
	struct FString GetOSVersion(); // Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f05c0
	enum class ELLHSDKNetworkType GetNetworkTypeEnum(); // Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0590
	struct FString GetNetworkType(); // Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0510
	struct FString GetMacAddress(); // Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct ULLHSDKDeviceUtils* GetInstance(); // Function LLHSDK.LLHSDKDeviceUtils.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0240
	struct FString GetIMSI(); // Function LLHSDK.LLHSDKDeviceUtils.GetIMSI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetIDFA(); // Function LLHSDK.LLHSDKDeviceUtils.GetIDFA // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	void GetGoogleAdID(); // Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0220
	struct TArray<float> GetDisplayMetrics(); // Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f01a0
	struct TArray<float> GetDisplayCutout(); // Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0120
	struct FString GetDeviceType(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	void GetDeviceScore(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0100
	struct FString GetDeviceModel(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0080
	struct FString GetDeviceID(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0000
	struct FString GetDeviceCarrier(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetDeviceBrand(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eff80
	struct FString GetDeviceAbi(); // Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FString GetCPUModel(); // Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eff00
	struct FString GetCPUHardWareName(); // Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9eff00
	struct FString GetAvailableRAM(); // Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe80
	struct FString GetAndroidID(); // Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	void DestoryInstance(); // Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efaa0
};

// Class LLHSDK.LLHSDKLocalization
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKLocalization : UObject {

	void SetLocaleName(struct FString InLocale); // Function LLHSDK.LLHSDKLocalization.SetLocaleName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f16a0
	void SetLocale(enum class ELLHSDKSupportedLanguage InLocale); // Function LLHSDK.LLHSDKLocalization.SetLocale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1630
	struct FString GetLocaleName(); // Function LLHSDK.LLHSDKLocalization.GetLocaleName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct FLLHSDKLocaleInfo GetLocaleInfo(); // Function LLHSDK.LLHSDKLocalization.GetLocaleInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0450
	enum class ELLHSDKSupportedLanguage GetLocaleEnum(); // Function LLHSDK.LLHSDKLocalization.GetLocaleEnum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	struct ULLHSDKLocalization* GetInstance(); // Function LLHSDK.LLHSDKLocalization.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0270
	void DestoryInstance(); // Function LLHSDK.LLHSDKLocalization.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efac0
};

// Class LLHSDK.LLHSDKLogin
// Size: 0x1f8 (Inherited: 0x28)
struct ULLHSDKLogin : UObject {
	struct FMulticastInlineDelegate OnInitFinish; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLoginFinish; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoginFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnBindFinish; // 0x58(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFinish; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnProtocolClick; // 0x88(0x10)
	struct FMulticastInlineDelegate OnLimSteamSDKInited; // 0x98(0x10)
	struct FMulticastInlineDelegate OnSteamAutoLogin; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnSteamRegister; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnGetSteamRegisterUrl; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnGetThirdPartyLoginResult; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnSteamBindUrlGet; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSteamLoginResultSet; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSteamGetAccountInfo; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSteamBindFinish; // 0x118(0x10)
	struct FMulticastInlineDelegate OnNSSDKInited; // 0x128(0x10)
	struct FMulticastInlineDelegate OnNSLoginStart; // 0x138(0x10)
	struct FMulticastInlineDelegate OnNSAccountInfoGet; // 0x148(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKInited; // 0x158(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKEventCallback; // 0x168(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLogin; // 0x178(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLogout; // 0x188(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKOpenAccountPage; // 0x198(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKOpenSwitchAccountPage; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLanguageChange; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKGetUserInfo; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKCommonReportPoint; // 0x1d8(0x10)
	struct FString LimPCAlilogFields; // 0x1e8(0x10)

	void UpdateSteamCallBack(); // Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f2160
	void SwitchOrLinkAccount(); // Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1f30
	bool SteamRegister(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamRegister // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1e90
	bool SteamLoginResultSet(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamLoginResultSet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1df0
	bool SteamGetAccountInfo(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1d50
	void SteamFree(); // Function LLHSDK.LLHSDKLogin.SteamFree // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1d30
	bool SteamBindUrlGet(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamBindUrlGet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1c90
	bool SteamAutoLogin(struct FString Params); // Function LLHSDK.LLHSDKLogin.SteamAutoLogin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1bf0
	void ShowProtocolViewV2Ok(); // Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void ShowProtocolViewV2Confirm(); // Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1800
	int32_t SetLimPCSDKLogHandler(); // Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1600
	int32_t SetLimPCSDKEventHandler(); // Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f15d0
	void SetLimPCAlilogFieldsData(struct FString LimPCAlilogFieldsStr); // Function LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1540
	struct FLLHSDKLoginUserInfo QueryCurrentUserInfo(); // Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f14d0
	struct FLLHSDKLoginUser QueryCurrentUser(); // Function LLHSDK.LLHSDKLogin.QueryCurrentUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1380
	bool OpenSteamBindPage(struct FString URL); // Function LLHSDK.LLHSDKLogin.OpenSteamBindPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1230
	int32_t OpenLIMPCSwitchAccPage(); // Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1170
	int32_t OpenLIMPCAccountPage(struct FString Params); // Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f10d0
	void OnProtocolClick__DelegateSignature(bool bConfirmed); // DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnLoginFinish__DelegateSignature(struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType); // DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnLoginFailed__DelegateSignature(enum class ELLHSDKLoginType LoginType, int32_t ErrorCode); // DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnInitFinish__DelegateSignature(); // DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnBindFinish__DelegateSignature(bool bSuccess, struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType); // DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void NSLogout(); // Function LLHSDK.LLHSDKLogin.NSLogout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b5550
	bool NSLoginStart(struct FString Params); // Function LLHSDK.LLHSDKLogin.NSLoginStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0a20
	void NSFinalize(); // Function LLHSDK.LLHSDKLogin.NSFinalize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b5550
	bool NSAccountInfoGet(struct FString Params); // Function LLHSDK.LLHSDKLogin.NSAccountInfoGet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0a20
	int32_t LogoutLimPCSDK(); // Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f10a0
	void Logout(); // Function LLHSDK.LLHSDKLogin.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	struct FString LoginUserInfo_ToString(struct FLLHSDKLoginUserInfo& InUserInfo); // Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f0e20
	struct FString LoginUser_ToString(struct FLLHSDKLoginUser& InUser); // Function LLHSDK.LLHSDKLogin.LoginUser_ToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f0f30
	int32_t LoginLimPCSDK(struct FString Params); // Function LLHSDK.LLHSDKLogin.LoginLimPCSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0d80
	void Login(); // Function LLHSDK.LLHSDKLogin.Login // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0d60
	void LimSteamSDKCallBack__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LimPCSDKCallBack__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LimOnSteamLoginResultSet__DelegateSignature(struct FString AppUid, struct FString AppToken, struct FString AppId); // DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	bool IsInitFinish(); // Function LLHSDK.LLHSDKLogin.IsInitFinish // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec880
	bool IsCurrentUserNewReg(); // Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef920
	bool InitNSSDK(struct FString Params); // Function LLHSDK.LLHSDKLogin.InitNSSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0a20
	bool InitLimSteamSDK(struct FString Params); // Function LLHSDK.LLHSDKLogin.InitLimSteamSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0980
	int32_t InitLimPCSDK(struct FString Params); // Function LLHSDK.LLHSDKLogin.InitLimPCSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f08e0
	struct FString GetSteamToken(); // Function LLHSDK.LLHSDKLogin.GetSteamToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f06e0
	bool GetSteamRegisterUrl(struct FString Params); // Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0640
	int32_t GetLimPCUserInfo(struct FString Params); // Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f03b0
	struct FString GetLimPCAlilogFieldsData(); // Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0330
	int32_t GetLimPCAlilogFields(); // Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFields // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0300
	struct ULLHSDKLogin* GetInstance(); // Function LLHSDK.LLHSDKLogin.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f02a0
	void FreeLimPCSDK(); // Function LLHSDK.LLHSDKLogin.FreeLimPCSDK // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe60
	bool DoSteamBind(struct FString URL); // Function LLHSDK.LLHSDKLogin.DoSteamBind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efc10
	void DestoryInstance(); // Function LLHSDK.LLHSDKLogin.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efae0
	void DAPLogAdd(struct FString Params); // Function LLHSDK.LLHSDKLogin.DAPLogAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efa10
	int32_t CommonReportLimPCPoint(struct FString Params); // Function LLHSDK.LLHSDKLogin.CommonReportLimPCPoint // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef970
	bool ClearAutoLogin(); // Function LLHSDK.LLHSDKLogin.ClearAutoLogin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef920
	int32_t ChangeLIMPCLanguage(struct FString Params); // Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef850
	bool CanContinueLogin(); // Function LLHSDK.LLHSDKLogin.CanContinueLogin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef800
	void CancelSteamCallBack(); // Function LLHSDK.LLHSDKLogin.CancelSteamCallBack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef830
};

// Class LLHSDK.LLHSDKMisc
// Size: 0x148 (Inherited: 0x28)
struct ULLHSDKMisc : UObject {
	struct FMulticastInlineDelegate OnBrowserClosed; // 0x28(0x10)
	struct FMulticastInlineDelegate OnScreenshotCaptured; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FMulticastInlineDelegate OnFacebookPhotoShared; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
	struct FMulticastInlineDelegate OnSystemShared; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct FMulticastInlineDelegate OnGetFacebookToken; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct FMulticastInlineDelegate OnQueryThirdPartyUserInfo; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnRefreshFirebaseToken; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnHttpDiagnosisCallBack; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnPingDiagnosisCallBack; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnTcpPingDiagnosisCallBack; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnMtrDiagnosisCallBack; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnDnsDiagnosisCallBack; // 0x108(0x10)
	struct FMulticastInlineDelegate OnLimPCOpenWebview; // 0x118(0x10)
	struct FMulticastInlineDelegate OnLimPCCloseWebview; // 0x128(0x10)
	struct FMulticastInlineDelegate OnPickFileFromAlbumCallBack; // 0x138(0x10)

	void UpdateNetworkExtensions(struct FString InUserId, struct FString InDeviceID); // Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void TwitterShareText(struct FString InText); // Function LLHSDK.LLHSDKMisc.TwitterShareText // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void TwitterSharePhoto(struct FString InText, struct FString InFilePath); // Function LLHSDK.LLHSDKMisc.TwitterSharePhoto // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void TryToEnableAndroidNotification(); // Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void TcpPingDetect(struct FString InDomain, int32_t Port); // Function LLHSDK.LLHSDKMisc.TcpPingDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f2090
	void SystemShare(int32_t& ShareType, struct FString Description, struct FString FilePath); // Function LLHSDK.LLHSDKMisc.SystemShare // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f1f50
	void StartIOSFarlightBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation); // Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1ac0
	void StartBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation); // Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1990
	void StartBrowser(struct FString URL, struct FString Title); // Function LLHSDK.LLHSDKMisc.StartBrowser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1820
	void SetNetworkPolicyDomain(struct FString InDomain); // Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void SetNetworkMultipleDetect(bool InEnable); // Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1780
	void SetNetworkDiagnosisDeviceID(struct FString InDeviceID); // Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void RestartApplication(struct FString IntentString); // Function LLHSDK.LLHSDKMisc.RestartApplication // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void RefreshFirebaseMessagingToken(); // Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void RefreshAndroidMediaScanner(struct FString InFullFilePath); // Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void QueryThirdPartUserInfo(); // Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void PingDetect(struct FString InDomain); // Function LLHSDK.LLHSDKMisc.PingDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void PickFileFromAlbum(); // Function LLHSDK.LLHSDKMisc.PickFileFromAlbum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f1360
	void OpenSteamPayWebPage(struct FString URL); // Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f12d0
	void OpenLimPCWebPage(struct FString Params); // Function LLHSDK.LLHSDKMisc.OpenLimPCWebPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f11a0
	void OnSystemShared__DelegateSignature(bool bSuccess); // DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnScreenshotCapturedEvent__DelegateSignature(struct FString FullPath); // DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnRefreshFirebaseToken__DelegateSignature(struct FString FirebaseToken); // DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t ErrorCode, struct TArray<struct FSDKSocialUserInfo> SocialUserInfoList); // DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnPickFileFromAlbumFinishEvent__DelegateSignature(struct FString PickFilePath, int32_t ErrorCode); // DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnLimPCOpenWebview__DelegateSignature(struct FString Params); // DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnLimPCCloseWebview__DelegateSignature(struct FString Params); // DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGetFacebookToken__DelegateSignature(bool Result, struct FString Token, struct FString ApplicationId, struct FString UserId, struct FString GraphDomain); // DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnFacebookPhotoShared__DelegateSignature(struct FString FilePath, bool bSuccess); // DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnBrowserClosed__DelegateSignature(); // DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void NetworkDiagnosisCallback__DelegateSignature(struct FString Type, struct FString Ret); // DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void MtrDetect(struct FString InDomain); // Function LLHSDK.LLHSDKMisc.MtrDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void JumpToMarket(struct FString InAppPkg, struct FString InMarketPkg); // Function LLHSDK.LLHSDKMisc.JumpToMarket // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void JumpToAppStore(struct FString AppStoreUrl); // Function LLHSDK.LLHSDKMisc.JumpToAppStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	bool IsFacebookShareable(); // Function LLHSDK.LLHSDKMisc.IsFacebookShareable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	bool IsAppRooted(); // Function LLHSDK.LLHSDKMisc.IsAppRooted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	bool IsAndroidNotificationEnabled(); // Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef920
	void InitNetworkDiagnosis(struct FString InProject, struct FString InSecretKey, struct FString InEndPoint, struct FString InAccessKeyId, struct FString InAccessKeySecret, struct FString InUid, struct FString InChannel); // Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f0ac0
	void HttpDetect(struct FString InUrl); // Function LLHSDK.LLHSDKMisc.HttpDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	struct FString GetNetworkDiagnosisDeviceID(); // Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	struct ULLHSDKMisc* GetInstance(); // Function LLHSDK.LLHSDKMisc.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f02d0
	struct FString GetFirebaseMessagingToken(); // Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ebea0
	void GetFacebookToken(); // Function LLHSDK.LLHSDKMisc.GetFacebookToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void FacebookSharePhotoWithFileAndDescription(struct FString Description, struct FString FilePath); // Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void FacebookSharePhotoByPath(struct FString InFilePath); // Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void FacebookSharePhoto(); // Function LLHSDK.LLHSDKMisc.FacebookSharePhoto // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efe40
	void FacebookShareLink(struct FString InLinkURL, struct FString InPreviewURL, struct FString InTitle, struct FString InDesc); // Function LLHSDK.LLHSDKMisc.FacebookShareLink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efcb0
	void DnsDetect(struct FString InServer, struct FString InDomain); // Function LLHSDK.LLHSDKMisc.DnsDetect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void DestoryInstance(); // Function LLHSDK.LLHSDKMisc.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb00
	void CloseLimPCWebPageAll(); // Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef950
	bool CheckGyroSensorSupport(); // Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
};

// Class LLHSDK.LLHSDKPay
// Size: 0x160 (Inherited: 0x28)
struct ULLHSDKPay : UObject {
	struct FMulticastInlineDelegate OnLSteamQuerySkus; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLSteamSDKPayApplied; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLimPCQueryPriceLadder; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLimPCQueryPriceLadderWithRegion; // 0x58(0x10)
	struct FMulticastInlineDelegate OnLimPCPayApplied; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayGetConsumables; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayGetConsumableItems; // 0x88(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayEShopOpen; // 0x98(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayOrdersCheck; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayOrdersConsume; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnGooglePayFinished; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetails; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetailsSubscription; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumeGoods; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumePointsGoods; // 0x108(0x10)
	struct FMulticastInlineDelegate OnIOSQuerySkus; // 0x118(0x10)
	struct FMulticastInlineDelegate OnIOSLLHPayFinished; // 0x128(0x10)
	struct FMulticastInlineDelegate OnGetIOSPurchaseExtNull; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)

	struct FString Test_Google_SkuItemDetailsToString(struct FLLHSDKGenericSkuItemsDetailList InDetails); // Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5d40
	void SwitchSDKPayOrdersConsume__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersConsume__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void SwitchSDKPayOrdersCheck__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersCheck__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void SwitchSDKPayGetConsumables__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumables__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void SwitchSDKPayGetConsumableItems__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumableItems__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void SwitchSDKPayEShopOpen__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayEShopOpen__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void Switch_OrdersConsume(struct FString Params); // Function LLHSDK.LLHSDKPay.Switch_OrdersConsume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void Switch_OrdersCheck(struct FString Params); // Function LLHSDK.LLHSDKPay.Switch_OrdersCheck // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void Switch_GetConsumables(struct FString Params); // Function LLHSDK.LLHSDKPay.Switch_GetConsumables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void Switch_GetConsumableItems(struct FString Params); // Function LLHSDK.LLHSDKPay.Switch_GetConsumableItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void Switch_EShopOpen(struct FString Params); // Function LLHSDK.LLHSDKPay.Switch_EShopOpen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void SteamQuerySkus(struct FString Params); // Function LLHSDK.LLHSDKPay.SteamQuerySkus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5c20
	void Steam_StartPay(struct FString SteamPayInfo); // Function LLHSDK.LLHSDKPay.Steam_StartPay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5cb0
	void SetPayNotifyUrl(struct FString InNotifyUrl); // Function LLHSDK.LLHSDKPay.SetPayNotifyUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void OnLLHQuerySkus__DelegateSignature(struct FLLHSDKGenericSkuItemsDetailList ItemsDetailList, struct TArray<struct FString>& InvalidProductIDs); // DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d0d160
	void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, struct FString ErrorMsg, int32_t PayValue, struct FString ProductID, enum class ELLHSDKPayType PayType); // DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, struct FString ItemsDetailListJsonString); // DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, struct FString ItemsDetailListJsonString); // DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, int32_t Price, struct FString ItemID, enum class ELLHSDKPayType PayType); // DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGetIOSPurchaseExtNull__DelegateSignature(struct FString AppUid, struct FString ProductID); // DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnGetGoogleConsumeGoods__DelegateSignature(struct TArray<struct FString>& Skus); // DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d0d160
	void LSteamSDKQuerySkus__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LSteamSDKPayApplied__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LimPCStartPay(struct FString Params); // Function LLHSDK.LLHSDKPay.LimPCStartPay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4640
	void LimPCSDKQueryPriceLadder__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LimPCSDKPayApplied__DelegateSignature(struct FString Datas); // DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LimPCQueryPriceLadderWithRegion(struct FString Params); // Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f45b0
	void LimPCQueryPriceLadder(); // Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4590
	void IOS_SetUserPayExtInCallback(struct FString ProductID, struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9efb20
	void IOS_SetUserPayExt(struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ec9e0
	void IOS_SetAutoPayExt(bool bEnabled); // Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4510
	void IOS_QuerySkus(struct TArray<struct FString>& ProductIDs); // Function LLHSDK.LLHSDKPay.IOS_QuerySkus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f4450
	void IOS_LLHPay(struct FString ProductID, struct FString PayExt); // Function LLHSDK.LLHSDKPay.IOS_LLHPay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4360
	bool IOS_GetAutoPayExt(); // Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4330
	void Google_StartPaySubscription(struct FString PayItemID, struct FString PayContext); // Function LLHSDK.LLHSDKPay.Google_StartPaySubscription // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f41c0
	void Google_StartPay(struct FString PayItemID, struct FString PayContext); // Function LLHSDK.LLHSDKPay.Google_StartPay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f41c0
	void Google_QuerySkuItemDetailsSubscription(struct TArray<struct FString> Items); // Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4060
	void Google_QuerySkuItemDetails(struct TArray<struct FString> Items); // Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3f00
	bool Google_HasConsumePointsGoods(); // Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	bool Google_HasConsumeGoods(); // Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ef8f0
	struct TArray<struct FString> Google_GetConsumePointsGoods(); // Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3e80
	struct TArray<struct FString> Google_GetConsumeGoods(); // Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3e80
	void Google_ConsumeGoods(struct TArray<struct FString> Skus, struct TArray<struct FString> Contexts); // Function LLHSDK.LLHSDKPay.Google_ConsumeGoods // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3c30
	struct ULLHSDKPay* GetInstance(); // Function LLHSDK.LLHSDKPay.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3bd0
	void DestoryInstance(); // Function LLHSDK.LLHSDKPay.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3b90
};

// Class LLHSDK.LLHSDKReport
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKReport : UObject {

	bool ReportToThirdParty_TwoParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5ad0
	bool ReportToThirdParty_ThreeParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5930
	bool ReportToThirdParty_OneParam(struct FString EventName, struct FString Parameter); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f46d0
	bool ReportToThirdParty_FourParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5730
	bool ReportToThirdParty_FiveParams(struct FString EventName, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4, struct FString Parameter5); // Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f54e0
	bool ReportToThirdParty(struct FString EventName); // Function LLHSDK.LLHSDKReport.ReportToThirdParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5440
	bool ReportRevenueToThirdParty_TwoParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5260
	bool ReportRevenueToThirdParty_ThreeParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f5020
	bool ReportRevenueToThirdParty_OneParam(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4e90
	bool ReportRevenueToThirdParty_FourParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4bf0
	bool ReportRevenueToThirdParty_FiveParams(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct FString Parameter1, struct FString Parameter2, struct FString Parameter3, struct FString Parameter4, struct FString Parameter5); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4900
	bool ReportRevenueToThirdParty(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue); // Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f47c0
	bool ReportJsonToLilithImmediate(struct FString EventName, struct FString JsonContentStr); // Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f46d0
	struct ULLHSDKReport* GetInstance(); // Function LLHSDK.LLHSDKReport.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3c00
	void DestoryInstance(); // Function LLHSDK.LLHSDKReport.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f3bb0
};

// Class LLHSDK.LLHSDKSettings
// Size: 0x338 (Inherited: 0x38)
struct ULLHSDKSettings : UDeveloperSettings {
	enum class EDistributionRegion DistributionRegion; // 0x38(0x01)
	enum class EReleaseType ReleaseType; // 0x39(0x01)
	bool bIsSDKDebuggable; // 0x3a(0x01)
	bool bIsGrayRelease; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString SDKGroupName; // 0x40(0x10)
	struct FString SDKFeatureName; // 0x50(0x10)
	struct FString SDKVersion; // 0x60(0x10)
	bool bHasFacebook; // 0x70(0x01)
	bool bHasTiktok; // 0x71(0x01)
	bool bHasFirebaseMessaging; // 0x72(0x01)
	bool bHasJiGuangPush; // 0x73(0x01)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString SDKAppIdForGrayRelease; // 0x78(0x10)
	struct FString SDKGameIdForGrayRelease; // 0x88(0x10)
	struct FString PspAppIdForGrayRelease; // 0x98(0x10)
	struct FString AndroidDebugParkwayEnvIdForGrayRelease; // 0xa8(0x10)
	struct FString AndroidReleaseParkwayEnvIdForGrayRelease; // 0xb8(0x10)
	struct FString FacebookAppIDForGrayRelease; // 0xc8(0x10)
	struct FString FacebookContentProviderForGrayRelease; // 0xd8(0x10)
	struct FString SDKAppId; // 0xe8(0x10)
	struct FString SDKGameId; // 0xf8(0x10)
	struct FString FacebookContentProvider; // 0x108(0x10)
	struct FString FacebookAppID; // 0x118(0x10)
	struct FString IOSFacebookContentProvider; // 0x128(0x10)
	struct FString IOSFacebookAppID; // 0x138(0x10)
	struct FString PspAppId; // 0x148(0x10)
	struct FString AndroidDebugParkwayEnvId; // 0x158(0x10)
	struct FString AndroidReleaseParkwayEnvId; // 0x168(0x10)
	struct FString IOSDebugParkwayEnvId; // 0x178(0x10)
	struct FString IOSReleaseParkwayEnvId; // 0x188(0x10)
	struct FString SteamDebugParkwayEnvId; // 0x198(0x10)
	struct FString SteamReleaseParkwayEnvId; // 0x1a8(0x10)
	struct FString OffcialWinDebugParkwayEnvId; // 0x1b8(0x10)
	struct FString OffcialWinReleaseParkwayEnvId; // 0x1c8(0x10)
	struct FString EpicDebugParkwayEnvId; // 0x1d8(0x10)
	struct FString EpicReleaseParkwayEnvId; // 0x1e8(0x10)
	struct FString SDKAppIdForDomesticRelease; // 0x1f8(0x10)
	struct FString SDKGameIdForDomesticRelease; // 0x208(0x10)
	struct FString AndroidDebugParkwayEnvIdForDomesticRelease; // 0x218(0x10)
	struct FString AndroidReleaseParkwayEnvIdForDomesticRelease; // 0x228(0x10)
	struct FString IOSDebugParkwayEnvIdForDomesticRelease; // 0x238(0x10)
	struct FString IOSReleaseParkwayEnvIdForDomesticRelease; // 0x248(0x10)
	struct FString PspAppIdForDomesticRelease; // 0x258(0x10)
	struct FString OffcialWinDebugParkwayEnvIdForDomesticRelease; // 0x268(0x10)
	struct FString OffcialWinReleaseParkwayEnvIdForDomesticRelease; // 0x278(0x10)
	bool bAndroidXEnabled; // 0x288(0x01)
	bool bMultiDexEnabled; // 0x289(0x01)
	bool bShouldUseOverridedConfig; // 0x28a(0x01)
	char pad_28B[0x5]; // 0x28b(0x05)
	struct FString FirebaseCoreVersion; // 0x290(0x10)
	struct FString FirebaseMessagingVersion; // 0x2a0(0x10)
	struct FString GoogleServicesVersion; // 0x2b0(0x10)
	struct FString PlayServicesBasementVersion; // 0x2c0(0x10)
	enum class ELLHSDKGravity PlayPhoneGravity; // 0x2d0(0x01)
	bool bEnableAndroidScreenshotListener; // 0x2d1(0x01)
	bool bEnableAndroidMultipleDetect; // 0x2d2(0x01)
	bool bShowLogo; // 0x2d3(0x01)
	enum class ELLHSDKLoginUIStyle LoginUIStyle; // 0x2d4(0x01)
	bool bIOSShouldUseOverridedConfig; // 0x2d5(0x01)
	bool bIOSShowTermsByServer; // 0x2d6(0x01)
	char pad_2D7[0x1]; // 0x2d7(0x01)
	struct FString FacebookDisplayName; // 0x2d8(0x10)
	struct FString QQAppID; // 0x2e8(0x10)
	struct FString WechatAppID; // 0x2f8(0x10)
	struct FString GoogleReversedClientID; // 0x308(0x10)
	struct FString TwitterAPIKey; // 0x318(0x10)
	struct FString DefaultNSUserTrackingUsageDescription; // 0x328(0x10)
};

