// Class SolarlandResUpdate.DownloadFileTask
// Size: 0xc8 (Inherited: 0x28)
struct UDownloadFileTask : UObject {
	struct FMulticastInlineDelegate OnDownloadComplete; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDownloadProgress; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDownloadFailed; // 0x48(0x10)
	char pad_58[0x70]; // 0x58(0x70)

	void StartDownload(); // Function SolarlandResUpdate.DownloadFileTask.StartDownload // (Final|Native|Public|BlueprintCallable) // @ game+0x29fe8b0
	void SetSaveToFile(bool InSet); // Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile // (Final|Native|Public|BlueprintCallable) // @ game+0x29fe820
	void SetForceRedownload(bool inForceRedownload); // Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload // (Final|Native|Public|BlueprintCallable) // @ game+0x29fe790
	struct FString GetUrl(); // Function SolarlandResUpdate.DownloadFileTask.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29fe710
	struct UDownloadFileTask* CreateNoFile(struct FString URL, bool bByChunk); // Function SolarlandResUpdate.DownloadFileTask.CreateNoFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29fe630
	struct UDownloadFileTask* Create(struct FString URL, struct FString FileDirectory, struct FString Filename, bool bByChunk, bool bForceWrite); // Function SolarlandResUpdate.DownloadFileTask.Create // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29fe460
};

// Class SolarlandResUpdate.SolarlandResUpdater
// Size: 0xe0 (Inherited: 0x28)
struct USolarlandResUpdater : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FDelegate OnPatchPrompt; // 0x30(0x10)
	struct FDelegate OnPatchComplete; // 0x40(0x10)
	struct FDelegate OnPatchFailed; // 0x50(0x10)
	struct FDelegate OnCDNDownloadFailed; // 0x60(0x10)
	struct FDelegate OnPatchProgress; // 0x70(0x10)
	struct FDelegate OnServerClose; // 0x80(0x10)
	struct FDelegate OnBackdoorComplete; // 0x90(0x10)
	struct FDelegate OnBackdoorFaild; // 0xa0(0x10)
	struct FDelegate OnBackdoorProgress; // 0xb0(0x10)
	struct FDelegate OnAnnouncementGet; // 0xc0(0x10)
	struct FDelegate OnAnnouncementGetFail; // 0xd0(0x10)
};

