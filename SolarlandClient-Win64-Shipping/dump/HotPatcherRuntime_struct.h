// Enum HotPatcherRuntime.ETargetPlatform
enum class ETargetPlatform : uint8 {
	None = 0,
	AllPlatforms = 1,
	ETargetPlatform_MAX = 2
};

// Enum HotPatcherRuntime.EMatchOperator
enum class EMatchOperator : uint8 {
	None = 0,
	GREAT_THAN = 1,
	LESS_THAN = 2,
	EQUAL = 3,
	EMatchOperator_MAX = 4
};

// Enum HotPatcherRuntime.EMatchRule
enum class EMatchRule : uint8 {
	None = 0,
	MATCH = 1,
	IGNORE = 2,
	EMatchRule_MAX = 3
};

// Enum HotPatcherRuntime.EMonolithicPathMode
enum class EMonolithicPathMode : uint8 {
	MountPath = 0,
	PackagePath = 1,
	EMonolithicPathMode_MAX = 2
};

// Enum HotPatcherRuntime.EAssetRegistryRule
enum class EAssetRegistryRule : uint8 {
	PATCH = 0,
	PER_CHUNK = 1,
	CUSTOM = 2,
	EAssetRegistryRule_MAX = 3
};

// Enum HotPatcherRuntime.EShaderLibNameRule
enum class EShaderLibNameRule : uint8 {
	VERSION_ID = 0,
	PROJECT_NAME = 1,
	CUSTOM = 2,
	EShaderLibNameRule_MAX = 3
};

// Enum HotPatcherRuntime.EAssetRegistryDependencyTypeEx
enum class EAssetRegistryDependencyTypeEx : uint8 {
	None = 0,
	Soft = 1,
	Hard = 2,
	SearchableName = 4,
	SoftManage = 8,
	HardManage = 16,
	Packages = 3,
	Manage = 24,
	All = 31,
	EAssetRegistryDependencyTypeEx_MAX = 32
};

// Enum HotPatcherRuntime.EPSOSaveMode
enum class EPSOSaveMode : uint8 {
	Incremental = 0,
	BoundPSOsOnly = 1,
	SortedBoundPSOs = 2,
	EPSOSaveMode_MAX = 3
};

// Enum HotPatcherRuntime.ESearchCaseMode
enum class ESearchCaseMode : uint8 {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCaseMode_MAX = 2
};

// ScriptStruct HotPatcherRuntime.PakMountInfo
// Size: 0x18 (Inherited: 0x00)
struct FPakMountInfo {
	struct FString Pak; // 0x00(0x10)
	int32_t PakOrder; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct HotPatcherRuntime.AssetDependenciesDetail
// Size: 0x60 (Inherited: 0x00)
struct FAssetDependenciesDetail {
	struct FString ModuleCategory; // 0x00(0x10)
	struct TMap<struct FString, struct FAssetDetail> AssetDependencyDetails; // 0x10(0x50)
};

// ScriptStruct HotPatcherRuntime.AssetDetail
// Size: 0x18 (Inherited: 0x00)
struct FAssetDetail {
	struct FName PackagePath; // 0x00(0x08)
	struct FName AssetType; // 0x08(0x08)
	struct FName Guid; // 0x10(0x08)
};

// ScriptStruct HotPatcherRuntime.AssetDependenciesInfo
// Size: 0x50 (Inherited: 0x00)
struct FAssetDependenciesInfo {
	struct TMap<struct FString, struct FAssetDependenciesDetail> AssetsDependenciesMap; // 0x00(0x50)
};

// ScriptStruct HotPatcherRuntime.BinariesPatchConfig
// Size: 0x50 (Inherited: 0x00)
struct FBinariesPatchConfig {
	enum class EBinariesPatchFeature BinariesPatchType; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
	struct FPakEncryptSettings EncryptSettings; // 0x18(0x18)
	struct TArray<struct FPlatformBasePak> BaseVersionPaks; // 0x30(0x10)
	struct TArray<struct FMatchRule> MatchRules; // 0x40(0x10)
};

// ScriptStruct HotPatcherRuntime.MatchRule
// Size: 0x28 (Inherited: 0x00)
struct FMatchRule {
	enum class EMatchRule Rule; // 0x00(0x01)
	enum class EMatchOperator Operator; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Size; // 0x04(0x04)
	struct TArray<struct FString> Formaters; // 0x08(0x10)
	struct TArray<struct FString> AssetTypes; // 0x18(0x10)
};

// ScriptStruct HotPatcherRuntime.PlatformBasePak
// Size: 0x18 (Inherited: 0x00)
struct FPlatformBasePak {
	enum class ETargetPlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFilePath> Paks; // 0x08(0x10)
};

// ScriptStruct HotPatcherRuntime.PakEncryptSettings
// Size: 0x18 (Inherited: 0x00)
struct FPakEncryptSettings {
	bool bUseDefaultCryptoIni; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FFilePath CryptoKeys; // 0x08(0x10)
};

// ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
// Size: 0x148 (Inherited: 0x00)
struct FChunkAssetDescribe {
	char pad_0[0x148]; // 0x00(0x148)
};

// ScriptStruct HotPatcherRuntime.ChunkPakCommand
// Size: 0x40 (Inherited: 0x00)
struct FChunkPakCommand {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct HotPatcherRuntime.ChunkInfo
// Size: 0x88 (Inherited: 0x00)
struct FChunkInfo {
	struct FString ChunkName; // 0x00(0x10)
	bool bMonolithic; // 0x10(0x01)
	enum class EMonolithicPathMode MonolithicPathMode; // 0x11(0x01)
	bool bStorageUnrealPakList; // 0x12(0x01)
	bool bStorageIoStorePakList; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x18(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x28(0x10)
	bool bAnalysisFilterDependencies; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x40(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x50(0x10)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x60(0x10)
	struct FPakInternalInfo InternalFiles; // 0x70(0x06)
	char pad_76[0x12]; // 0x76(0x12)
};

// ScriptStruct HotPatcherRuntime.PakInternalInfo
// Size: 0x06 (Inherited: 0x00)
struct FPakInternalInfo {
	char pad_0[0x3]; // 0x00(0x03)
	bool bIncludeEngineIni; // 0x03(0x01)
	bool bIncludePluginIni; // 0x04(0x01)
	bool bIncludeProjectIni; // 0x05(0x01)
};

// ScriptStruct HotPatcherRuntime.PlatformExternAssets
// Size: 0x28 (Inherited: 0x00)
struct FPlatformExternAssets {
	enum class ETargetPlatform TargetPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> AddExternFileToPak; // 0x08(0x10)
	struct TArray<struct FExternDirectoryInfo> AddExternDirectoryToPak; // 0x18(0x10)
};

// ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
// Size: 0x20 (Inherited: 0x00)
struct FExternDirectoryInfo {
	struct FDirectoryPath DirectoryPath; // 0x00(0x10)
	struct FString MountPoint; // 0x10(0x10)
};

// ScriptStruct HotPatcherRuntime.ExternFileInfo
// Size: 0x38 (Inherited: 0x00)
struct FExternFileInfo {
	struct FFilePath FilePath; // 0x00(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString FileHash; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
// Size: 0x30 (Inherited: 0x00)
struct FPatcherSpecifyAsset {
	struct FSoftObjectPath Asset; // 0x00(0x18)
	bool bAnalysisAssetDependencies; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x20(0x10)
};

// ScriptStruct HotPatcherRuntime.PakFileProxy
// Size: 0x68 (Inherited: 0x00)
struct FPakFileProxy {
	struct FString ChunkStoreName; // 0x00(0x10)
	enum class ETargetPlatform Platform; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString StorageDirectory; // 0x18(0x10)
	struct FString PakCommandSavePath; // 0x28(0x10)
	struct FString PakSavePath; // 0x38(0x10)
	struct TArray<struct FPakCommand> PakCommands; // 0x48(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x58(0x10)
};

// ScriptStruct HotPatcherRuntime.PakCommand
// Size: 0x58 (Inherited: 0x00)
struct FPakCommand {
	struct FString ChunkName; // 0x00(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString AssetPackage; // 0x20(0x10)
	struct TArray<struct FString> PakCommands; // 0x30(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct HotPatcherRuntime.CookerConfig
// Size: 0x88 (Inherited: 0x00)
struct FCookerConfig {
	struct FString EngineBin; // 0x00(0x10)
	struct FString ProjectPath; // 0x10(0x10)
	struct FString EngineParams; // 0x20(0x10)
	struct TArray<struct FString> CookPlatforms; // 0x30(0x10)
	bool bCookAllMap; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FString> CookMaps; // 0x48(0x10)
	struct TArray<struct FString> CookFilter; // 0x58(0x10)
	struct TArray<struct FString> CookSettings; // 0x68(0x10)
	struct FString options; // 0x78(0x10)
};

// ScriptStruct HotPatcherRuntime.PatcherEntitySettingBase
// Size: 0x08 (Inherited: 0x00)
struct FPatcherEntitySettingBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
// Size: 0x38 (Inherited: 0x08)
struct FHotPatcherSettingBase : FPatcherEntitySettingBase {
	bool bStorageConfig; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FDirectoryPath SavePath; // 0x10(0x10)
	bool bStandaloneMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> AdditionalCommandletArgs; // 0x28(0x10)
};

// ScriptStruct HotPatcherRuntime.ExportPatchSettings
// Size: 0x328 (Inherited: 0x38)
struct FExportPatchSettings : FHotPatcherSettingBase {
	bool bByBaseVersion; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FFilePath BaseVersion; // 0x40(0x10)
	struct FString VersionId; // 0x50(0x10)
	bool bBinariesPatch; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FBinariesPatchConfig BinariesPatchConfig; // 0x68(0x50)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0xb8(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0xc8(0x10)
	bool bForceSkipContent; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FDirectoryPath> ForceSkipContentRules; // 0xe0(0x10)
	struct TArray<struct FSoftObjectPath> ForceSkipAssets; // 0xf0(0x10)
	bool bIncludeHasRefAssetsOnly; // 0x100(0x01)
	bool bAnalysisFilterDependencies; // 0x101(0x01)
	bool bAnalysisDiffAssetDependenciesOnly; // 0x102(0x01)
	char pad_103[0x5]; // 0x103(0x05)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x108(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x118(0x10)
	bool bRecursiveWidgetTree; // 0x128(0x01)
	bool bPackageTracker; // 0x129(0x01)
	char pad_12A[0x4]; // 0x12a(0x04)
	bool bIncludeEngineIni; // 0x12e(0x01)
	bool bIncludePluginIni; // 0x12f(0x01)
	bool bIncludeProjectIni; // 0x130(0x01)
	bool bEnableExternFilesDiff; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct TArray<struct FString> IgnoreDeletionModulesAsset; // 0x138(0x10)
	char pad_148[0x20]; // 0x148(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x168(0x10)
	char pad_178[0x18]; // 0x178(0x18)
	bool bEnableChunk; // 0x190(0x01)
	bool bCreateDefaultChunk; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)
	struct TArray<struct FChunkInfo> ChunkInfos; // 0x198(0x10)
	bool bCookPatchAssets; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FCookShaderOptions CookShaderOptions; // 0x1b0(0x28)
	struct FAssetRegistryOptions SerializeAssetRegistryOptions; // 0x1d8(0x30)
	struct FIoStoreSettings IoStoreSettings; // 0x208(0x80)
	struct FUnrealPakSettings UnrealPakSettings; // 0x288(0x28)
	struct TArray<struct FString> DefaultPakListOptions; // 0x2b0(0x10)
	struct TArray<struct FString> DefaultCommandletOptions; // 0x2c0(0x10)
	struct FPakEncryptSettings EncryptSettings; // 0x2d0(0x18)
	struct TArray<struct FReplaceText> ReplacePakListTexts; // 0x2e8(0x10)
	struct TArray<enum class ETargetPlatform> PakTargetPlatforms; // 0x2f8(0x10)
	bool bCustomPakNameRegular; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FString PakNameRegular; // 0x310(0x10)
	bool bStorageNewRelease; // 0x320(0x01)
	bool bStoragePakFileInfo; // 0x321(0x01)
	bool bIgnoreDeleatedAssetsInfo; // 0x322(0x01)
	bool bStorageDeletedAssetsToNewReleaseJson; // 0x323(0x01)
	bool bStorageDiffAnalysisResults; // 0x324(0x01)
	bool bBackupMetadata; // 0x325(0x01)
	char pad_326[0x1]; // 0x326(0x01)
	bool bEnableProfiling; // 0x327(0x01)
};

// ScriptStruct HotPatcherRuntime.ReplaceText
// Size: 0x28 (Inherited: 0x00)
struct FReplaceText {
	struct FString From; // 0x00(0x10)
	struct FString To; // 0x10(0x10)
	enum class ESearchCaseMode SearchCase; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct HotPatcherRuntime.UnrealPakSettings
// Size: 0x28 (Inherited: 0x00)
struct FUnrealPakSettings {
	struct TArray<struct FString> UnrealPakListOptions; // 0x00(0x10)
	struct TArray<struct FString> UnrealCommandletOptions; // 0x10(0x10)
	bool bStoragePakList; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct HotPatcherRuntime.IoStoreSettings
// Size: 0x80 (Inherited: 0x00)
struct FIoStoreSettings {
	bool bIoStore; // 0x00(0x01)
	bool bAllowBulkDataInIoStore; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> IoStorePakListOptions; // 0x08(0x10)
	struct TArray<struct FString> IoStoreCommandletOptions; // 0x18(0x10)
	struct TMap<enum class ETargetPlatform, struct FIoStorePlatformContainers> PlatformContainers; // 0x28(0x50)
	bool bStoragePakList; // 0x78(0x01)
	bool bStorageBulkDataInfo; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
// Size: 0x38 (Inherited: 0x00)
struct FIoStorePlatformContainers {
	struct FDirectoryPath BasePackageStagedRootDir; // 0x00(0x10)
	bool bGenerateDiffPatch; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FFilePath GlobalContainersOverride; // 0x18(0x10)
	struct FFilePath PatchSourceOverride; // 0x28(0x10)
};

// ScriptStruct HotPatcherRuntime.AssetRegistryOptions
// Size: 0x30 (Inherited: 0x00)
struct FAssetRegistryOptions {
	bool bSerializeAssetRegistry; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AssetRegistryMountPointRegular; // 0x08(0x10)
	enum class EAssetRegistryRule AssetRegistryRule; // 0x18(0x01)
	bool bCustomAssetRegistryName; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString AssetRegistryNameRegular; // 0x20(0x10)
};

// ScriptStruct HotPatcherRuntime.CookShaderOptions
// Size: 0x28 (Inherited: 0x00)
struct FCookShaderOptions {
	bool bSharedShaderLibrary; // 0x00(0x01)
	bool bNativeShader; // 0x01(0x01)
	char pad_2[0x1]; // 0x02(0x01)
	enum class EShaderLibNameRule ShaderNameRule; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CustomShaderName; // 0x08(0x10)
	struct FString ShderLibMountPointRegular; // 0x18(0x10)
};

// ScriptStruct HotPatcherRuntime.ExportReleaseSettings
// Size: 0x100 (Inherited: 0x38)
struct FExportReleaseSettings : FHotPatcherSettingBase {
	struct FString VersionId; // 0x38(0x10)
	bool ByPakList; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FPlatformPakListFiles> PlatformsPakListFiles; // 0x50(0x10)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x60(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x70(0x10)
	bool bAnalysisFilterDependencies; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x88(0x10)
	bool bIncludeHasRefAssetsOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0xa0(0x10)
	char pad_B0[0x20]; // 0xb0(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0xd0(0x10)
	bool bBackupMetadata; // 0xe0(0x01)
	bool bBackupProjectConfig; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TArray<enum class ETargetPlatform> BackupMetadataPlatforms; // 0xe8(0x10)
	bool bNoShaderCompile; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct HotPatcherRuntime.PlatformPakListFiles
// Size: 0x38 (Inherited: 0x00)
struct FPlatformPakListFiles {
	enum class ETargetPlatform TargetPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFilePath> PakResponseFiles; // 0x08(0x10)
	struct TArray<struct FFilePath> PakFiles; // 0x18(0x10)
	struct FString AESKey; // 0x28(0x10)
};

// ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
// Size: 0x38 (Inherited: 0x00)
struct FHotPatcherAssetDependency {
	struct FAssetDetail Asset; // 0x00(0x18)
	struct TArray<struct FAssetDetail> AssetReference; // 0x18(0x10)
	struct TArray<struct FAssetDetail> AssetDependency; // 0x28(0x10)
};

// ScriptStruct HotPatcherRuntime.HotPatcherVersion
// Size: 0x118 (Inherited: 0x00)
struct FHotPatcherVersion {
	struct FString VersionId; // 0x00(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	char pad_30[0x48]; // 0x30(0x48)
	struct FAssetDependenciesInfo AssetInfo; // 0x78(0x50)
	struct TMap<enum class ETargetPlatform, struct FPlatformExternAssets> PlatformAssets; // 0xc8(0x50)
};

// ScriptStruct HotPatcherRuntime.PackageInfo
// Size: 0x20 (Inherited: 0x00)
struct FPackageInfo {
	struct FString AssetName; // 0x00(0x10)
	struct FString AssetGuid; // 0x10(0x10)
};

// ScriptStruct HotPatcherRuntime.PakEncryptionKeys
// Size: 0x88 (Inherited: 0x00)
struct FPakEncryptionKeys {
	struct FEncryptionKeyEntry EncryptionKey; // 0x00(0x30)
	struct TArray<struct FEncryptionKeyEntry> SecondaryEncryptionKeys; // 0x30(0x10)
	bool bEnablePakIndexEncryption; // 0x40(0x01)
	bool bEnablePakIniEncryption; // 0x41(0x01)
	bool bEnablePakUAssetEncryption; // 0x42(0x01)
	bool bEnablePakFullAssetEncryption; // 0x43(0x01)
	bool bDataCryptoRequired; // 0x44(0x01)
	bool PakEncryptionRequired; // 0x45(0x01)
	bool PakSigningRequired; // 0x46(0x01)
	bool bEnablePakSigning; // 0x47(0x01)
	struct FSignKeyEntry SigningKey; // 0x48(0x40)
};

// ScriptStruct HotPatcherRuntime.SignKeyEntry
// Size: 0x40 (Inherited: 0x00)
struct FSignKeyEntry {
	struct FSignKeyItem PublicKey; // 0x00(0x20)
	struct FSignKeyItem PrivateKey; // 0x20(0x20)
};

// ScriptStruct HotPatcherRuntime.SignKeyItem
// Size: 0x20 (Inherited: 0x00)
struct FSignKeyItem {
	struct FString Exponent; // 0x00(0x10)
	struct FString Modulus; // 0x10(0x10)
};

// ScriptStruct HotPatcherRuntime.EncryptionKeyEntry
// Size: 0x30 (Inherited: 0x00)
struct FEncryptionKeyEntry {
	struct FString Name; // 0x00(0x10)
	struct FString Guid; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
};

// ScriptStruct HotPatcherRuntime.PakFilesMap
// Size: 0x50 (Inherited: 0x00)
struct FPakFilesMap {
	struct TMap<struct FString, struct FPakFileArray> PakFilesMap; // 0x00(0x50)
};

// ScriptStruct HotPatcherRuntime.PakFileArray
// Size: 0x10 (Inherited: 0x00)
struct FPakFileArray {
	struct TArray<struct FPakFileInfo> PakFileInfos; // 0x00(0x10)
};

// ScriptStruct HotPatcherRuntime.PakFileInfo
// Size: 0x28 (Inherited: 0x00)
struct FPakFileInfo {
	struct FString Filename; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t FileSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct HotPatcherRuntime.PakVersion
// Size: 0x40 (Inherited: 0x00)
struct FPakVersion {
	struct FString VersionId; // 0x00(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	struct FString CheckCode; // 0x30(0x10)
};

// ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
// Size: 0xf0 (Inherited: 0x00)
struct FPatchVersionAssetDiff {
	struct FAssetDependenciesInfo AddAssetDependInfo; // 0x00(0x50)
	struct FAssetDependenciesInfo ModifyAssetDependInfo; // 0x50(0x50)
	struct FAssetDependenciesInfo DeleteAssetDependInfo; // 0xa0(0x50)
};

// ScriptStruct HotPatcherRuntime.PatchVersionDiff
// Size: 0x140 (Inherited: 0x00)
struct FPatchVersionDiff {
	struct FPatchVersionAssetDiff AssetDiffInfo; // 0x00(0xf0)
	struct TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff> PlatformExternDiffInfo; // 0xf0(0x50)
};

// ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
// Size: 0x38 (Inherited: 0x00)
struct FPatchVersionExternDiff {
	enum class ETargetPlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> AddExternalFiles; // 0x08(0x10)
	struct TArray<struct FExternFileInfo> ModifyExternalFiles; // 0x18(0x10)
	struct TArray<struct FExternFileInfo> DeleteExternalFiles; // 0x28(0x10)
};

// ScriptStruct HotPatcherRuntime.PlatformExternFiles
// Size: 0x18 (Inherited: 0x00)
struct FPlatformExternFiles {
	enum class ETargetPlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x08(0x10)
};

// ScriptStruct HotPatcherRuntime.HotPatcherContext
// Size: 0x58 (Inherited: 0x00)
struct FHotPatcherContext {
	char pad_0[0x40]; // 0x00(0x40)
	struct UScopedSlowTaskContext* UnrealPakSlowTask; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
// Size: 0x170 (Inherited: 0x58)
struct FHotPatcherReleaseContext : FHotPatcherContext {
	struct FHotPatcherVersion NewReleaseVersion; // 0x58(0x118)
};

// ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
// Size: 0x5e0 (Inherited: 0x58)
struct FHotPatcherPatchContext : FHotPatcherContext {
	char pad_58[0x8]; // 0x58(0x08)
	struct FHotPatcherVersion BaseVersion; // 0x60(0x118)
	struct FHotPatcherVersion CurrentVersion; // 0x178(0x118)
	struct FPatchVersionDiff VersionDiff; // 0x290(0x140)
	struct FHotPatcherVersion NewReleaseVersion; // 0x3d0(0x118)
	struct FChunkInfo NewVersionChunk; // 0x4e8(0x88)
	struct TArray<struct FChunkInfo> PakChunks; // 0x570(0x10)
	struct TArray<struct FPakCommand> AdditionalFileToPak; // 0x580(0x10)
	char pad_590[0x50]; // 0x590(0x50)
};

