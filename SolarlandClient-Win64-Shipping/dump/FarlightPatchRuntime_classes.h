// Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject {

	void ReloadRedirectSettingsFromIni(struct FString IniPath); // Function FarlightPatchRuntime.PakHelper.ReloadRedirectSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f650
	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath); // Function FarlightPatchRuntime.PakHelper.ReloadIniFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f560
	void ReloadGameUserSettings(); // Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f540
	void ReloadDeviceProfiles(); // Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f520
	void ReloadCVarSettingsFromIni(); // Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f500
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique); // Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c4f3d0
	bool MountPak(struct FString InPakFilename, int32_t PakOrder); // Function FarlightPatchRuntime.PakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f2f0
	struct FString GetStrippedConfigFileName(struct FString IniName); // Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f1f0
	struct FString GetProjectName(); // Function FarlightPatchRuntime.PakHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4f170
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint); // Function FarlightPatchRuntime.PakHelper.CreatePakWriter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4ef50
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex); // Function FarlightPatchRuntime.PakHelper.CreatePakReader // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4ee70
};

// Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	int64_t GetTotalSize(); // Function FarlightPatchRuntime.PakReader.GetTotalSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c4f2d0
	struct TArray<struct FPakEntryInfo> GetPakIndex(); // Function FarlightPatchRuntime.PakReader.GetPakIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c4f050
	void Close(); // Function FarlightPatchRuntime.PakReader.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x1c4ee50
};

// Class FarlightPatchRuntime.PakWriter
// Size: 0xc0 (Inherited: 0x28)
struct UPakWriter : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

