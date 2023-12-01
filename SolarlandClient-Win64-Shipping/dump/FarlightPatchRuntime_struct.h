// ScriptStruct FarlightPatchRuntime.PakEntryInfo
// Size: 0x40 (Inherited: 0x00)
struct FPakEntryInfo {
	struct FString Filename; // 0x00(0x10)
	struct FString MountPoint; // 0x10(0x10)
	int64_t Size; // 0x20(0x08)
	int64_t Offset; // 0x28(0x08)
	struct FString Hash; // 0x30(0x10)
};

