// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
// Size: 0xa78 (Inherited: 0xa60)
struct USolarGameInstance_C : USolarGameInstanceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa60(0x08)
	struct FMulticastInlineDelegate OnBroadcastModeChanged; // 0xa68(0x10)

	void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void ShutdownAnoSDK(); // Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void LuaGetBroadcastPlayerNameCopy(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void LuaInitGameFrameWork(); // Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void InitLuaClasses(); // Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void SolarGM_AddItemLua(int32_t ItemID, int32_t count); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void ShutDownPCSDK(); // Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void AsyncDownLoadConfigFile(int64_t TaskID, struct FString URL); // Function SolarGameInstance.SolarGameInstance_C.AsyncDownLoadConfigFile // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void ExecuteChangeAudioModeLuaCall(bool bTurnOn); // Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void LuaGetBroadcastHeroNameCopy(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void LuaStartGameFrameWork(); // Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope); // Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void ReceiveShutdown(); // Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void SolarGM_TransmitGMLua(struct FString playerName, struct TArray<struct FString>& GmArray); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb66830
	void ShutDownLimSdk(); // Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void RegisterNetworkManager(); // Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void OnDisconnect(); // Function SolarGameInstance.SolarGameInstance_C.OnDisconnect // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void CheckSavedDirFiles(struct TArray<struct FString>& Files); // Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb66830
	void SolarGM_LobbyLua(struct FString CmdName, struct TArray<struct FString>& Params); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb66830
	void ReportLoadingInfoToBI(struct TArray<struct FString>& LoadingInfo, float LoadingTime, bool bIsFinished); // Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb66830
	void GoHomeLuaCall(); // Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void ExecuteBackKeyLuaCall(); // Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall // (Event|Public|BlueprintEvent) // @ game+0xb66830
	void LuaOnBroadcastModeChanged(); // Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void LuaGetBroadcastPlayerName(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb66830
	void LuaGetBroadcastHeroName(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb66830
	void SolarGM_TestCrashWithBP(); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP // (Exec|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void SolarGM_TestEnsureMsgWithBP(); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP // (Exec|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint); // Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance // (Final|UbergraphFunction) // @ game+0x2d0d160
	void OnBroadcastModeChanged__DelegateSignature(); // Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
};

