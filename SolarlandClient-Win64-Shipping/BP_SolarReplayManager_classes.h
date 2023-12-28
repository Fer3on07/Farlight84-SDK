// BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
// Size: 0x5c0 (Inherited: 0x5c0)
struct UBP_SolarReplayManager_C : USolarReplayManager {

	void OnRecordingStartedDelegate_FE40778D4A385DA6467C39867BEA36B3(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_FE40778D4A385DA6467C39867BEA36B3 // (MulticastDelegate|Public|Delegate) // @ game+0xb596e0
	void OnRecordingStartedDelegate_741B8F8341EFC56884539CB0C99BC992(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_741B8F8341EFC56884539CB0C99BC992 // (MulticastDelegate|Public|Delegate) // @ game+0xb596e0
	void OnPlayingStartedDelegate_1366DE304DE898147E40708D83A5FF1A(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_1366DE304DE898147E40708D83A5FF1A // (MulticastDelegate|Public|Delegate) // @ game+0xb596e0
	void RequestWatchingLiveOfPlayer(struct FString SolarPlayerID); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb67940
	void ReceivePlayingStartFailed(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed // (Event|Public|BlueprintEvent) // @ game+0xb67940
	bool IsReady(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady // (Event|Public|BlueprintEvent) // @ game+0xb67940
	struct FString GetBattleIDByIndex(int32_t Index); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void RequestPlayReplayOfCurrentBattle(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb67940
	void SendLiveWatchOnlyMsg(struct FString Msg); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.SendLiveWatchOnlyMsg // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void RequestBattleList(int32_t PageIndex, int32_t PageSize); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void SetReadyToRecord(bool bIsReady, struct TArray<struct FString>& OBPlayerIDs); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb67940
	void ReportHighlightConversion(struct FHighlightReportData HighlightReportData); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReportHighlightConversion // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void RequestPlayReplay(struct FString InBattleID, bool IsLive); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb67940
	bool IsHighlightVersionOut(struct FString HighlightFileName); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsHighlightVersionOut // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void GetStartRecordingParams(struct FStartRecordingParams& OutParams); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xb67940
	void LuaBindDelegates(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void OnLiveWatchTargetLost(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void LuaOnPostLoadMapWithWorld(struct FString LevelName); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld // (Event|Public|BlueprintEvent) // @ game+0xb67940
	bool IsRequestingReplayDownloadInfo(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void SetRequestTryStrategy(float Interval, int32_t Times); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb67940
	bool ReceivePlayingFinished(enum class EReplayPlayingFinishReason reason, char StreamerErrorCode, struct FString StreamerErrorMsg); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished // (Event|Public|BlueprintEvent) // @ game+0xb67940
	bool NotifyBackendPlayReplayFinished(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished // (Event|Public|BlueprintEvent) // @ game+0xb67940
	void RequestCheckpointForLiveWatch(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch // (Event|Protected|BlueprintEvent) // @ game+0xb67940
};

