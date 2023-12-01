// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x230 (Inherited: 0x228)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x228(0x08)
};

// Class HoudiniEngineRuntime.HiddenHoudiniAssetActor
// Size: 0x230 (Inherited: 0x230)
struct AHiddenHoudiniAssetActor : AHoudiniAssetActor {
};

// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString AssetFileName; // 0x28(0x10)
	struct TArray<char> AssetBytes; // 0x38(0x10)
	uint32_t AssetBytesCount; // 0x48(0x04)
	bool bAssetLimitedCommercial; // 0x4c(0x01)
	bool bAssetNonCommercial; // 0x4d(0x01)
	bool bAssetExpanded; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0xae0 (Inherited: 0x540)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char pad_540[0x8]; // 0x540(0x08)
	struct FHoudiniInputLandscapeTransferParams LandscapeTransferParams; // 0x548(0xc8)
	struct TArray<struct FDirectoryPath> Directories; // 0x610(0x10)
	struct UHoudiniAsset* HoudiniAsset; // 0x620(0x08)
	bool bCookOnParameterChange; // 0x628(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x629(0x01)
	bool bCookOnTransformChange; // 0x62a(0x01)
	bool bCookOnAssetInputCook; // 0x62b(0x01)
	bool bOutputless; // 0x62c(0x01)
	bool bOutputTemplateGeos; // 0x62d(0x01)
	bool bUseOutputNodes; // 0x62e(0x01)
	char pad_62F[0x1]; // 0x62f(0x01)
	struct FDirectoryPath TemporaryCookFolder; // 0x630(0x10)
	struct FDirectoryPath BakeFolder; // 0x640(0x10)
	enum class EHoudiniStaticMeshMethod StaticMeshMethod; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties; // 0x658(0x180)
	struct FMeshBuildSettings StaticMeshBuildSettings; // 0x7d8(0x30)
	bool bOverrideGlobalProxyStaticMeshSettings; // 0x808(0x01)
	bool bEnableProxyStaticMeshOverride; // 0x809(0x01)
	bool bEnableProxyStaticMeshRefinementByTimerOverride; // 0x80a(0x01)
	char pad_80B[0x1]; // 0x80b(0x01)
	float ProxyMeshAutoRefineTimeoutSecondsOverride; // 0x80c(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x810(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x811(0x01)
	char pad_812[0x2]; // 0x812(0x02)
	int32_t AssetId; // 0x814(0x04)
	struct TArray<int32_t> NodeIdsToCook; // 0x818(0x10)
	struct TMap<int32_t, int32_t> OutputNodeCookCounts; // 0x828(0x50)
	struct TSet<struct UHoudiniAssetComponent*> DownstreamHoudiniAssets; // 0x878(0x50)
	struct FGuid ComponentGUID; // 0x8c8(0x10)
	struct FGuid HapiGUID; // 0x8d8(0x10)
	struct FString HapiAssetName; // 0x8e8(0x10)
	enum class EHoudiniAssetState AssetState; // 0x8f8(0x01)
	enum class EHoudiniAssetState DebugLastAssetState; // 0x8f9(0x01)
	enum class EHoudiniAssetStateResult AssetStateResult; // 0x8fa(0x01)
	char pad_8FB[0x5]; // 0x8fb(0x05)
	struct FTransform LastComponentTransform; // 0x900(0x30)
	uint32_t SubAssetIndex; // 0x930(0x04)
	int32_t AssetCookCount; // 0x934(0x04)
	bool bHasBeenLoaded; // 0x938(0x01)
	bool bHasBeenDuplicated; // 0x939(0x01)
	bool bPendingDelete; // 0x93a(0x01)
	bool bRecookRequested; // 0x93b(0x01)
	bool bRebuildRequested; // 0x93c(0x01)
	bool bEnableCooking; // 0x93d(0x01)
	bool bForceNeedUpdate; // 0x93e(0x01)
	bool bLastCookSuccess; // 0x93f(0x01)
	bool bParameterDefinitionUpdateNeeded; // 0x940(0x01)
	bool bBlueprintStructureModified; // 0x941(0x01)
	bool bBlueprintModified; // 0x942(0x01)
	char pad_943[0x5]; // 0x943(0x05)
	struct TArray<struct UHoudiniParameter*> Parameters; // 0x948(0x10)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x958(0x10)
	struct TArray<struct UHoudiniOutput*> Outputs; // 0x968(0x10)
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x978(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> UntrackedOutputs; // 0x988(0x10)
	struct TArray<struct UHoudiniHandleComponent*> HandleComponents; // 0x998(0x10)
	bool bHasComponentTransformChanged; // 0x9a8(0x01)
	bool bFullyLoaded; // 0x9a9(0x01)
	char pad_9AA[0x6]; // 0x9aa(0x06)
	struct UHoudiniPDGAssetLink* PDGAssetLink; // 0x9b0(0x08)
	struct FTimerHandle RefineMeshesTimer; // 0x9b8(0x08)
	char pad_9C0[0x18]; // 0x9c0(0x18)
	bool bNoProxyMeshNextCookRequested; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	struct TMap<struct UObject*, int32_t> InputPresets; // 0x9e0(0x50)
	bool bBakeAfterNextCook; // 0xa30(0x01)
	char pad_A31[0x7f]; // 0xa31(0x7f)
	bool bCachedIsPreview; // 0xab0(0x01)
	char pad_AB1[0xf]; // 0xab1(0x0f)
	double LastTickTime; // 0xac0(0x08)
	char pad_AC8[0x18]; // 0xac8(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// Size: 0xbe0 (Inherited: 0xae0)
struct UHoudiniAssetBlueprintComponent : UHoudiniAssetComponent {
	char pad_AE0[0x48]; // 0xae0(0x48)
	bool FauxBPProperty; // 0xb28(0x01)
	bool bHoudiniAssetChanged; // 0xb29(0x01)
	bool bUpdatedFromTemplate; // 0xb2a(0x01)
	bool bIsInBlueprintEditor; // 0xb2b(0x01)
	bool bCanDeleteHoudiniNodes; // 0xb2c(0x01)
	bool bHasRegisteredComponentTemplate; // 0xb2d(0x01)
	char pad_B2E[0xa]; // 0xb2e(0x0a)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes; // 0xb38(0x50)
	struct TMap<struct FGuid, struct FGuid> CachedInputNodes; // 0xb88(0x50)
	char pad_BD8[0x8]; // 0xbd8(0x08)

	void SetToggleValueAt(struct FString Name, bool Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt // (Final|Native|Public|BlueprintCallable) // @ game+0x882ce0
	void SetFloatParameter(struct FString Name, float Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x882b50
	bool HasParameter(struct FString Name); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x882a50
};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0x80 (Inherited: 0x28)
struct UHoudiniAssetParameter : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xb8 (Inherited: 0x80)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter {
	char pad_80[0x38]; // 0x80(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xa8 (Inherited: 0x80)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter {
	char pad_80[0x28]; // 0x80(0x28)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xb8 (Inherited: 0x80)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter {
	char pad_80[0x38]; // 0x80(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xb0 (Inherited: 0x80)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter {
	char pad_80[0x30]; // 0x80(0x30)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0x88 (Inherited: 0x80)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0x98 (Inherited: 0x80)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameter {
	char pad_80[0x18]; // 0x80(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// Size: 0xc8 (Inherited: 0x28)
struct UHoudiniAssetComponentMaterials_V1 : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// Size: 0x3b0 (Inherited: 0x320)
struct UHoudiniHandleComponent_V1 : USceneComponent {
	char pad_320[0x90]; // 0x320(0x90)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// Size: 0x410 (Inherited: 0x320)
struct UHoudiniSplineComponent_V1 : USceneComponent {
	char pad_320[0xf0]; // 0x320(0xf0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x1a0 (Inherited: 0x80)
struct UHoudiniAssetInput : UHoudiniAssetParameter {
	char pad_80[0x120]; // 0x80(0x120)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x160 (Inherited: 0x80)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter {
	char pad_80[0xe0]; // 0x80(0xe0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x190 (Inherited: 0x28)
struct UHoudiniAssetInstanceInputField : UObject {
	char pad_28[0x168]; // 0x28(0x168)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// Size: 0xa30 (Inherited: 0x540)
struct UHoudiniAssetComponent_V1 : UPrimitiveComponent {
	char bGeneratedDoubleSidedGeometry : 1; // 0x540(0x01)
	char pad_540_1 : 7; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x548(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x550(0x130)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x680(0x01)
	char pad_681[0x3]; // 0x681(0x03)
	int32_t GeneratedLightMapResolution; // 0x684(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x688(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x68c(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x69c(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x6a0(0x01)
	char pad_6A0_1 : 7; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x6a4(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x6a8(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x6b0(0x10)
	struct FText BakeFolder; // 0x6c0(0x18)
	struct FText TempCookFolder; // 0x6d8(0x18)
	char pad_6F0[0x340]; // 0x6f0(0x340)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// Size: 0x330 (Inherited: 0x320)
struct UHoudiniInstancedActorComponent_V1 : USceneComponent {
	char pad_320[0x10]; // 0x320(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// Size: 0x340 (Inherited: 0x320)
struct UHoudiniMeshSplitInstancerComponent_V1 : USceneComponent {
	char pad_320[0x20]; // 0x320(0x20)
};

// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// Size: 0x28 (Inherited: 0x28)
struct UHoudiniEngineCopyPropertiesInterface : UInterface {
};

// Class HoudiniEngineRuntime.HoudiniHandleParameter
// Size: 0x38 (Inherited: 0x28)
struct UHoudiniHandleParameter : UObject {
	struct UHoudiniParameter* AssetParameter; // 0x28(0x08)
	int32_t TupleIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x350 (Inherited: 0x320)
struct UHoudiniHandleComponent : USceneComponent {
	struct TArray<struct UHoudiniHandleParameter*> XformParms; // 0x318(0x10)
	struct UHoudiniHandleParameter* RSTParm; // 0x328(0x08)
	struct UHoudiniHandleParameter* RotOrderParm; // 0x330(0x08)
	enum class EHoudiniHandleType HandleType; // 0x338(0x01)
	struct FString HandleName; // 0x340(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInput
// Size: 0x278 (Inherited: 0x28)
struct UHoudiniInput : UObject {
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniInputType Type; // 0x48(0x01)
	enum class EHoudiniInputType PreviousType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t AssetNodeId; // 0x4c(0x04)
	int32_t InputNodeId; // 0x50(0x04)
	int32_t InputIndex; // 0x54(0x04)
	int32_t ParmId; // 0x58(0x04)
	bool bIsObjectPathParameter; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<int32_t> CreatedDataNodeIds; // 0x60(0x10)
	bool bHasChanged; // 0x70(0x01)
	bool bNeedsToTriggerUpdate; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FBox CachedBounds; // 0x74(0x1c)
	struct FString help; // 0x90(0x10)
	enum class EHoudiniXformType KeepWorldTransform; // 0xa0(0x01)
	bool bPackBeforeMerge; // 0xa1(0x01)
	bool bImportAsReference; // 0xa2(0x01)
	bool bImportAsReferenceRotScaleEnabled; // 0xa3(0x01)
	bool bImportAsReferenceBboxEnabled; // 0xa4(0x01)
	bool bImportAsReferenceMaterialEnabled; // 0xa5(0x01)
	bool bExportLODs; // 0xa6(0x01)
	bool bExportSockets; // 0xa7(0x01)
	bool bExportColliders; // 0xa8(0x01)
	bool bExportMaterialParameters; // 0xa9(0x01)
	bool bCookOnCurveChanged; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct TArray<struct UHoudiniInputObject*> GeometryInputObjects; // 0xb0(0x10)
	bool bStaticMeshChanged; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UHoudiniInputObject*> AssetInputObjects; // 0xc8(0x10)
	bool bInputAssetConnectedInHoudini; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct UHoudiniInputObject*> CurveInputObjects; // 0xe0(0x10)
	float DefaultCurveOffset; // 0xf0(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0xf4(0x01)
	bool bUseLegacyInputCurves; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	struct TArray<struct UHoudiniInputObject*> LandscapeInputObjects; // 0xf8(0x10)
	bool bLandscapeHasExportTypeChanged; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct UHoudiniInputObject*> LandscapeSplinesInputObjects; // 0x110(0x10)
	struct TArray<struct UHoudiniInputObject*> FoliageInputObjects; // 0x120(0x10)
	struct TArray<struct UHoudiniInputObject*> WorldSMCInputObjects; // 0x130(0x10)
	struct TArray<struct UHoudiniInputObject*> PointCloudInputObjects; // 0x140(0x10)
	struct TArray<struct UHoudiniInputObject*> WorldInputObjects; // 0x150(0x10)
	struct TArray<struct UHoudiniInputObject*> TextureInputObjects; // 0x160(0x10)
	struct TArray<struct AActor*> WorldInputBoundSelectorObjects; // 0x170(0x10)
	bool bIsWorldInputBoundSelector; // 0x180(0x01)
	bool bWorldInputBoundSelectorAutoUpdate; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float UnrealSplineResolution; // 0x184(0x04)
	struct TArray<struct UHoudiniInputObject*> SkeletalInputObjects; // 0x188(0x10)
	struct TArray<struct UHoudiniInputObject*> GeometryCollectionInputObjects; // 0x198(0x10)
	struct TSet<struct ULandscapeComponent*> LandscapeSelectedComponents; // 0x1a8(0x50)
	struct TSet<int32_t> InputNodesPendingDelete; // 0x1f8(0x50)
	struct TArray<struct UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs; // 0x248(0x10)
	struct TArray<struct UHoudiniInputObject*> LastUndoDeletedInputs; // 0x258(0x10)
	bool bUpdateInputLandscape; // 0x268(0x01)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x269(0x01)
	bool bLandscapeExportSelectionOnly; // 0x26a(0x01)
	bool bLandscapeAutoSelectComponent; // 0x26b(0x01)
	bool bLandscapeExportMaterials; // 0x26c(0x01)
	bool bLandscapeExportLighting; // 0x26d(0x01)
	bool bLandscapeExportNormalizedUVs; // 0x26e(0x01)
	bool bLandscapeExportTileUVs; // 0x26f(0x01)
	bool bCanDeleteHoudiniNodes; // 0x270(0x01)
	bool bAutoSelectInputType; // 0x271(0x01)
	bool bEnableSMCWorldFilter; // 0x272(0x01)
	bool bIsIncludeStaticMesh; // 0x273(0x01)
	bool bNeedSendModelMaterial; // 0x274(0x01)
	bool bNeedSendDataTableModel; // 0x275(0x01)
	bool bNeedSendFoliageInstanceCustomData; // 0x276(0x01)
	char pad_277[0x1]; // 0x277(0x01)
};

// Class HoudiniEngineRuntime.HoudiniInputObject
// Size: 0xf0 (Inherited: 0x28)
struct UHoudiniInputObject : UObject {
	struct TSoftObjectPtr<UObject> InputObject; // 0x28(0x28)
	struct FTransform Transform; // 0x50(0x30)
	enum class EHoudiniInputObjectType Type; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t InputNodeId; // 0x84(0x04)
	int32_t InputObjectNodeId; // 0x88(0x04)
	struct FGuid Guid; // 0x8c(0x10)
	char pad_9C[0x2c]; // 0x9c(0x2c)
	bool bHasChanged; // 0xc8(0x01)
	bool bNeedsToTriggerUpdate; // 0xc9(0x01)
	bool bTransformChanged; // 0xca(0x01)
	bool bImportAsReference; // 0xcb(0x01)
	bool bImportAsReferenceRotScaleEnabled; // 0xcc(0x01)
	bool bImportAsReferenceBboxEnabled; // 0xcd(0x01)
	bool bImportAsReferenceMaterialEnabled; // 0xce(0x01)
	char pad_CF[0x1]; // 0xcf(0x01)
	struct TArray<struct FString> MaterialReferences; // 0xd0(0x10)
	bool bCanDeleteHoudiniNodes; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputStaticMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputTexture
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputTexture : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputSkeletalMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputGeometryCollection : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// Size: 0x120 (Inherited: 0xf0)
struct UHoudiniInputSceneComponent : UHoudiniInputObject {
	struct FTransform ActorTransform; // 0xf0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// Size: 0x150 (Inherited: 0x120)
struct UHoudiniInputMeshComponent : UHoudiniInputSceneComponent {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x120(0x28)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// Size: 0x160 (Inherited: 0x150)
struct UHoudiniInputInstancedMeshComponent : UHoudiniInputMeshComponent {
	struct TArray<struct FTransform> InstanceTransforms; // 0x148(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputLandscapeSplineComponent : UHoudiniInputSceneComponent {
	int32_t NumberOfSplineControlPoints; // 0x120(0x04)
	float SplineLength; // 0x124(0x04)
	float SplineResolution; // 0x128(0x04)
	bool SplineClosed; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct TArray<struct FTransform> SplineControlPoints; // 0x130(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputSplineComponent : UHoudiniInputSceneComponent {
	int32_t NumberOfSplineControlPoints; // 0x120(0x04)
	float SplineLength; // 0x124(0x04)
	float SplineResolution; // 0x128(0x04)
	bool SplineClosed; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct TArray<struct FTransform> SplineControlPoints; // 0x130(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// Size: 0x120 (Inherited: 0x120)
struct UHoudiniInputGeometryCollectionComponent : UHoudiniInputSceneComponent {
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// Size: 0x120 (Inherited: 0x120)
struct UHoudiniInputSkeletalMeshComponent : UHoudiniInputSceneComponent {
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// Size: 0x100 (Inherited: 0xf0)
struct UHoudiniInputHoudiniSplineComponent : UHoudiniInputObject {
	enum class EHoudiniCurveType CurveType; // 0xe8(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0xe9(0x01)
	bool Reversed; // 0xea(0x01)
	struct UHoudiniSplineComponent* CachedComponent; // 0xf0(0x08)
	char pad_FB[0x5]; // 0xfb(0x05)
};

// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputCameraComponent : UHoudiniInputSceneComponent {
	float FOV; // 0x120(0x04)
	float AspectRatio; // 0x124(0x04)
	bool bIsOrthographic; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float OrthoWidth; // 0x12c(0x04)
	float OrthoNearClipPlane; // 0x130(0x04)
	float OrthoFarClipPlane; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputHoudiniAsset : UHoudiniInputObject {
	int32_t AssetOutputIndex; // 0xe8(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputActor
// Size: 0x150 (Inherited: 0xf0)
struct UHoudiniInputActor : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputSceneComponent*> ActorComponents; // 0xe8(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> ActorSceneComponents; // 0xf8(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x148(0x04)
	int32_t LastUpdateNumComponentsRemoved; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputLandscape
// Size: 0x250 (Inherited: 0x150)
struct UHoudiniInputLandscape : UHoudiniInputActor {
	struct FTransform CachedInputLandscapeTraqnsform; // 0x150(0x30)
	int32_t CachedNumLandscapeComponents; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FHoudiniInputLandscapeTransferParams TransferParams; // 0x188(0xc8)
};

// Class HoudiniEngineRuntime.HoudiniInputInstancedFoliage
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputInstancedFoliage : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputBrush
// Size: 0x170 (Inherited: 0x150)
struct UHoudiniInputBrush : UHoudiniInputActor {
	struct TArray<struct FHoudiniBrushInfo> BrushesInfo; // 0x150(0x10)
	struct UModel* CombinedModel; // 0x160(0x08)
	bool bIgnoreInputObject; // 0x168(0x01)
	enum class EBrushType CachedInputBrushType; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
};

// Class HoudiniEngineRuntime.HoudiniInputDataTable
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputDataTable : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// Size: 0xf0 (Inherited: 0xf0)
struct UHoudiniInputFoliageType_InstancedStaticMesh : UHoudiniInputStaticMesh {
};

// Class HoudiniEngineRuntime.HoudiniInputBlueprint
// Size: 0x150 (Inherited: 0xf0)
struct UHoudiniInputBlueprint : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputSceneComponent*> BPComponents; // 0xe8(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> BPSceneComponents; // 0xf8(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x148(0x04)
	int32_t LastUpdateNumComponentsRemoved; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x330 (Inherited: 0x320)
struct UHoudiniInstancedActorComponent : USceneComponent {
	struct UObject* InstancedObject; // 0x318(0x08)
	struct TArray<struct AActor*> InstancedActors; // 0x320(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x340 (Inherited: 0x320)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x318(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x328(0x10)
	struct UStaticMesh* InstancedMesh; // 0x338(0x08)
};

// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniLandscapePtr : UObject {
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x28(0x28)
	enum class EHoudiniLandscapeOutputBakeType BakeType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName EditLayerName; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniLandscapeEditLayer : UObject {
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x28(0x28)
	struct FString LayerName; // 0x50(0x10)
};

// Class HoudiniEngineRuntime.HoudiniOutput
// Size: 0x1b0 (Inherited: 0x28)
struct UHoudiniOutput : UObject {
	enum class EHoudiniOutputType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FHoudiniGeoPartObject> HoudiniGeoPartObjects; // 0x30(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects; // 0x40(0x50)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs; // 0x90(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> AssignementMaterials; // 0xe0(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> ReplacementMaterials; // 0x130(0x50)
	char pad_180[0x4]; // 0x180(0x04)
	bool bLandscapeWorldComposition; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct TArray<struct AActor*> HoudiniCreatedSocketActors; // 0x188(0x10)
	struct TArray<struct AActor*> HoudiniAttachedSocketActors; // 0x198(0x10)
	bool bIsEditableNode; // 0x1a8(0x01)
	bool bHasEditableNodeBuilt; // 0x1a9(0x01)
	bool bIsUpdating; // 0x1aa(0x01)
	bool bCanDeleteHoudiniNodes; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameter
// Size: 0x108 (Inherited: 0x28)
struct UHoudiniParameter : UObject {
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniParameterType ParmType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t TupleSize; // 0x4c(0x04)
	int32_t NodeId; // 0x50(0x04)
	int32_t ParmId; // 0x54(0x04)
	int32_t ParentParmId; // 0x58(0x04)
	int32_t ChildIndex; // 0x5c(0x04)
	bool bIsVisible; // 0x60(0x01)
	bool bIsParentFolderVisible; // 0x61(0x01)
	bool bIsDisabled; // 0x62(0x01)
	bool bHasChanged; // 0x63(0x01)
	bool bNeedsToTriggerUpdate; // 0x64(0x01)
	bool bIsDefault; // 0x65(0x01)
	bool bIsSpare; // 0x66(0x01)
	bool bJoinNext; // 0x67(0x01)
	bool bIsChildOfMultiParm; // 0x68(0x01)
	bool bIsDirectChildOfMultiParm; // 0x69(0x01)
	bool bPendingRevertToDefault; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct TArray<int32_t> TuplePendingRevertToDefault; // 0x70(0x10)
	struct FString help; // 0x80(0x10)
	uint32_t TagCount; // 0x90(0x04)
	int32_t ValueIndex; // 0x94(0x04)
	bool bHasExpression; // 0x98(0x01)
	bool bShowExpression; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString ParamExpression; // 0xa0(0x10)
	struct TMap<struct FString, struct FString> Tags; // 0xb0(0x50)
	bool bAutoUpdate; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterButton
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterButton : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// Size: 0x130 (Inherited: 0x108)
struct UHoudiniParameterButtonStrip : UHoudiniParameter {
	int32_t count; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FString> Labels; // 0x110(0x10)
	struct TArray<int32_t> Values; // 0x120(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterChoice
// Size: 0x178 (Inherited: 0x108)
struct UHoudiniParameterChoice : UHoudiniParameter {
	int32_t IntValue; // 0x108(0x04)
	int32_t DefaultIntValue; // 0x10c(0x04)
	struct FString StringValue; // 0x110(0x10)
	struct FString DefaultStringValue; // 0x120(0x10)
	struct TArray<struct FString> StringChoiceValues; // 0x130(0x10)
	struct TArray<struct FString> StringChoiceLabels; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
	bool bIsChildOfRamp; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TArray<int32_t> IntValuesArray; // 0x168(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterColor
// Size: 0x130 (Inherited: 0x108)
struct UHoudiniParameterColor : UHoudiniParameter {
	struct FLinearColor Color; // 0x108(0x10)
	struct FLinearColor DefaultColor; // 0x118(0x10)
	bool bIsChildOfRamp; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFile
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterFile : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct FString Filters; // 0x128(0x10)
	bool bIsReadOnly; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFloat
// Size: 0x158 (Inherited: 0x108)
struct UHoudiniParameterFloat : UHoudiniParameter {
	struct TArray<float> Values; // 0x108(0x10)
	struct TArray<float> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bNoSwap; // 0x138(0x01)
	bool bHasMin; // 0x139(0x01)
	bool bHasMax; // 0x13a(0x01)
	bool bHasUIMin; // 0x13b(0x01)
	bool bHasUIMax; // 0x13c(0x01)
	bool bIsLogarithmic; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	float Min; // 0x140(0x04)
	float Max; // 0x144(0x04)
	float UIMin; // 0x148(0x04)
	float UIMax; // 0x14c(0x04)
	bool bIsChildOfRamp; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolder
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterFolder : UHoudiniParameter {
	enum class EHoudiniFolderParameterType FolderType; // 0x108(0x01)
	bool bExpanded; // 0x109(0x01)
	bool bChosen; // 0x10a(0x01)
	char pad_10B[0x1]; // 0x10b(0x01)
	int32_t ChildCounter; // 0x10c(0x04)
	bool bIsContentShown; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// Size: 0x120 (Inherited: 0x108)
struct UHoudiniParameterFolderList : UHoudiniParameter {
	bool bIsTabMenu; // 0x108(0x01)
	bool bIsTabsShown; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<struct UHoudiniParameterFolder*> TabFolders; // 0x110(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterInt
// Size: 0x150 (Inherited: 0x108)
struct UHoudiniParameterInt : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bHasMin; // 0x138(0x01)
	bool bHasMax; // 0x139(0x01)
	bool bHasUIMin; // 0x13a(0x01)
	bool bHasUIMax; // 0x13b(0x01)
	bool bIsLogarithmic; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	int32_t Min; // 0x140(0x04)
	int32_t Max; // 0x144(0x04)
	int32_t UIMin; // 0x148(0x04)
	int32_t UIMax; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterLabel
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterLabel : UHoudiniParameter {
	struct TArray<struct FString> LabelStrings; // 0x108(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// Size: 0x150 (Inherited: 0x108)
struct UHoudiniParameterMultiParm : UHoudiniParameter {
	bool bIsShown; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32_t Value; // 0x10c(0x04)
	struct FString TemplateName; // 0x110(0x10)
	int32_t MultiparmValue; // 0x120(0x04)
	uint32_t MultiParmInstanceNum; // 0x124(0x04)
	uint32_t MultiParmInstanceLength; // 0x128(0x04)
	uint32_t MultiParmInstanceCount; // 0x12c(0x04)
	uint32_t InstanceStartOffset; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray; // 0x138(0x10)
	int32_t DefaultInstanceCount; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// Size: 0x110 (Inherited: 0x108)
struct UHoudiniParameterOperatorPath : UHoudiniParameter {
	struct TWeakObjectPtr<struct UHoudiniInput> HoudiniInput; // 0x108(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampModificationEvent : UObject {
	bool bIsInsertEvent; // 0x28(0x01)
	bool bIsFloatRamp; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t DeleteInstanceIndex; // 0x2c(0x04)
	float InsertPosition; // 0x30(0x04)
	float InsertFloat; // 0x34(0x04)
	struct FLinearColor InsertColor; // 0x38(0x10)
	enum class EHoudiniRampInterpolationType InsertInterpolation; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampFloatPoint : UObject {
	float Position; // 0x28(0x04)
	float Value; // 0x2c(0x04)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t InstanceIndex; // 0x34(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x38(0x08)
	struct UHoudiniParameterFloat* ValueParentParm; // 0x40(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x48(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniParameterRampColorPoint : UObject {
	float Position; // 0x28(0x04)
	struct FLinearColor Value; // 0x2c(0x10)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t InstanceIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x48(0x08)
	struct UHoudiniParameterColor* ValueParentParm; // 0x50(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x58(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// Size: 0x1b8 (Inherited: 0x150)
struct UHoudiniParameterRampFloat : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampFloatPoint*> Points; // 0x150(0x10)
	struct TArray<struct UHoudiniParameterRampFloatPoint*> CachedPoints; // 0x160(0x10)
	struct TArray<float> DefaultPositions; // 0x170(0x10)
	struct TArray<float> DefaultValues; // 0x180(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x190(0x10)
	int32_t NumDefaultPoints; // 0x1a0(0x04)
	bool bCaching; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1a8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// Size: 0x1c0 (Inherited: 0x150)
struct UHoudiniParameterRampColor : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampColorPoint*> Points; // 0x150(0x10)
	bool bCaching; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TArray<struct UHoudiniParameterRampColorPoint*> CachedPoints; // 0x168(0x10)
	struct TArray<float> DefaultPositions; // 0x178(0x10)
	struct TArray<struct FLinearColor> DefaultValues; // 0x188(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x198(0x10)
	int32_t NumDefaultPoints; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterSeparator : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterString
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterString : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct TArray<struct UObject*> ChosenAssets; // 0x128(0x10)
	bool bIsAssetRef; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterToggle
// Size: 0x128 (Inherited: 0x108)
struct UHoudiniParameterToggle : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
};

// Class HoudiniEngineRuntime.TOPNode
// Size: 0x420 (Inherited: 0x28)
struct UTOPNode : UObject {
	int32_t NodeId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct FString ParentName; // 0x50(0x10)
	struct UObject* WorkResultParent; // 0x60(0x08)
	struct TArray<struct FTOPWorkResult> WorkResult; // 0x68(0x10)
	bool bHidden; // 0x78(0x01)
	bool bAutoLoad; // 0x79(0x01)
	enum class EPDGNodeState NodeState; // 0x7a(0x01)
	bool bCachedHaveNotLoadedWorkResults; // 0x7b(0x01)
	bool bCachedHaveLoadedWorkResults; // 0x7c(0x01)
	bool bHasChildNodes; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct TSet<struct FString> ClearedLandscapeLayers; // 0x80(0x50)
	char pad_D0[0x80]; // 0xd0(0x80)
	bool bShow; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x158(0x50)
	struct FWorkItemTally WorkItemTally; // 0x1a8(0x238)
	struct FAggregatedWorkItemTally AggregatedWorkItemTally; // 0x3e0(0x28)
	bool bHasReceivedCookCompleteEvent; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FOutputActorOwner OutputActorOwner; // 0x410(0x10)
};

// Class HoudiniEngineRuntime.TOPNetwork
// Size: 0x98 (Inherited: 0x28)
struct UTOPNetwork : UObject {
	int32_t NodeId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct TArray<struct UTOPNode*> AllTOPNodes; // 0x50(0x10)
	int32_t SelectedTOPIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString ParentName; // 0x68(0x10)
	bool bShowResults; // 0x78(0x01)
	bool bAutoLoadResults; // 0x79(0x01)
	char pad_7A[0x1e]; // 0x7a(0x1e)
};

// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// Size: 0x130 (Inherited: 0x28)
struct UHoudiniPDGAssetLink : UObject {
	struct FString AssetName; // 0x28(0x10)
	struct FString AssetNodePath; // 0x38(0x10)
	int32_t AssetId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UTOPNetwork*> AllTOPNetworks; // 0x50(0x10)
	int32_t SelectedTOPNetworkIndex; // 0x60(0x04)
	enum class EPDGLinkState LinkState; // 0x64(0x01)
	bool bAutoCook; // 0x65(0x01)
	bool bUseTOPNodeFilter; // 0x66(0x01)
	bool bUseTOPOutputFilter; // 0x67(0x01)
	struct FString TOPNodeFilter; // 0x68(0x10)
	struct FString TOPOutputFilter; // 0x78(0x10)
	int32_t NumWorkItems; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FAggregatedWorkItemTally WorkItemTally; // 0x90(0x28)
	struct FString OutputCachePath; // 0xb8(0x10)
	bool bNeedsUIRefresh; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct AActor* OutputParentActor; // 0xd0(0x08)
	struct FDirectoryPath BakeFolder; // 0xd8(0x10)
	char pad_E8[0x48]; // 0xe8(0x48)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x2d8 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ServerHost; // 0x30(0x10)
	int32_t ServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AutomaticServerTimeout; // 0x5c(0x04)
	bool bSyncWithHoudiniCook; // 0x60(0x01)
	bool bCookUsingHoudiniTime; // 0x61(0x01)
	bool bSyncViewport; // 0x62(0x01)
	bool bSyncHoudiniViewport; // 0x63(0x01)
	bool bSyncUnrealViewport; // 0x64(0x01)
	bool bShowMultiAssetDialog; // 0x65(0x01)
	bool bPreferHdaMemoryCopyOverHdaSourceFile; // 0x66(0x01)
	bool bPauseCookingOnStart; // 0x67(0x01)
	bool bDisplaySlateCookingNotifications; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString DefaultTemporaryCookFolder; // 0x70(0x10)
	struct FString DefaultBakeFolder; // 0x80(0x10)
	bool bEnableTheReferenceCountedInputSystem; // 0x90(0x01)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x91(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x92(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x93(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x94(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x98(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0x9c(0x01)
	bool bUseLegacyInputCurves; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float MarshallingSplineResolution; // 0xa0(0x04)
	bool bEnableProxyStaticMesh; // 0xa4(0x01)
	bool bShowDefaultMesh; // 0xa5(0x01)
	bool bEnableProxyStaticMeshRefinementByTimer; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	float ProxyMeshAutoRefineTimeoutSeconds; // 0xa8(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld; // 0xac(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	char bDoubleSidedGeometry : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UPhysicalMaterial* PhysMaterial; // 0xb8(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0xc0(0x130)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	int32_t LightMapResolution; // 0x1f4(0x04)
	float LpvBiasMultiplier; // 0x1f8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x1fc(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x200(0x10)
	int32_t LightMapCoordinateIndex; // 0x210(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x214(0x01)
	char pad_214_1 : 7; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	float StreamingDistanceMultiplier; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x220(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x228(0x10)
	bool bUseFullPrecisionUVs; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	int32_t SrcLightmapIndex; // 0x23c(0x04)
	int32_t DstLightmapIndex; // 0x240(0x04)
	int32_t MinLightmapResolution; // 0x244(0x04)
	bool bRemoveDegenerates; // 0x248(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x249(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x24a(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x24b(0x01)
	bool bUseMikkTSpace; // 0x24c(0x01)
	bool bBuildAdjacencyBuffer; // 0x24d(0x01)
	char bComputeWeightedNormals : 1; // 0x24e(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x24e(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x24e(0x01)
	char pad_24E_3 : 5; // 0x24e(0x01)
	char pad_24F[0x1]; // 0x24f(0x01)
	float DistanceFieldResolutionScale; // 0x250(0x04)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x254(0x01)
	char bSupportFaceRemap : 1; // 0x254(0x01)
	char pad_254_2 : 6; // 0x254(0x01)
	bool bPDGAsyncCommandletImportEnabled; // 0x255(0x01)
	bool bEnableBackwardCompatibility; // 0x256(0x01)
	bool bAutomaticLegacyHDARebuild; // 0x257(0x01)
	bool bUseCustomHoudiniLocation; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FDirectoryPath CustomHoudiniLocation; // 0x260(0x10)
	enum class EHoudiniExecutableType HoudiniExecutable; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t CookingThreadStackSize; // 0x274(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x278(0x10)
	struct FString SyncNetDiscPath; // 0x288(0x10)
	struct FString OtlSearchPath; // 0x298(0x10)
	struct FString DsoSearchPath; // 0x2a8(0x10)
	struct FString ImageDsoSearchPath; // 0x2b8(0x10)
	struct FString AudioDsoSearchPath; // 0x2c8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x5c0 (Inherited: 0x320)
struct UHoudiniSplineComponent : USceneComponent {
	struct TArray<struct FTransform> CurvePoints; // 0x320(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x330(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x340(0x10)
	struct FString HoudiniSplineName; // 0x350(0x10)
	bool bClosed; // 0x360(0x01)
	bool bReversed; // 0x361(0x01)
	char pad_362[0x2]; // 0x362(0x02)
	int32_t CurveOrder; // 0x364(0x04)
	bool bIsHoudiniSplineVisible; // 0x368(0x01)
	enum class EHoudiniCurveType CurveType; // 0x369(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x36a(0x01)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization; // 0x36b(0x01)
	bool bIsOutputCurve; // 0x36c(0x01)
	bool bCookOnCurveChanged; // 0x36d(0x01)
	bool bIsLegacyInputCurve; // 0x36e(0x01)
	char pad_36F[0x231]; // 0x36f(0x231)
	bool bHasChanged; // 0x5a0(0x01)
	bool bNeedsToTriggerUpdate; // 0x5a1(0x01)
	bool bIsInputCurve; // 0x5a2(0x01)
	bool bIsEditableOutputCurve; // 0x5a3(0x01)
	int32_t NodeId; // 0x5a4(0x04)
	struct FString PartName; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniStaticMesh
// Size: 0xc8 (Inherited: 0x28)
struct UHoudiniStaticMesh : UObject {
	bool bHasNormals; // 0x28(0x01)
	bool bHasTangents; // 0x29(0x01)
	bool bHasColors; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	uint32_t NumUVLayers; // 0x2c(0x04)
	bool bHasPerFaceMaterials; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FVector> VertexPositions; // 0x38(0x10)
	struct TArray<struct FIntVector> TriangleIndices; // 0x48(0x10)
	struct TArray<struct FColor> VertexInstanceColors; // 0x58(0x10)
	struct TArray<struct FVector> VertexInstanceNormals; // 0x68(0x10)
	struct TArray<struct FVector> VertexInstanceUTangents; // 0x78(0x10)
	struct TArray<struct FVector> VertexInstanceVTangents; // 0x88(0x10)
	struct TArray<struct FVector2D> VertexInstanceUVs; // 0x98(0x10)
	struct TArray<int32_t> MaterialIDsPerTriangle; // 0xa8(0x10)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0xb8(0x10)

	void SetVertexPosition(uint32_t InVertexIndex, struct FVector& InPosition); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x891a90
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InVTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x891970
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, struct FVector2D& InUV); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x891810
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InUTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x8916f0
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InNormal); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x8915d0
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, struct FIntVector& InTriangleVertexIndices); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x891500
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FColor& InColor); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x8913e0
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID // (Final|Native|Public) // @ game+0x891310
	void SetStaticMaterial(uint32_t InMaterialIndex, struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x891200
	void SetNumUVLayers(uint32_t InNumUVLayers); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers // (Final|Native|Public) // @ game+0x891170
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials // (Final|Native|Public) // @ game+0x8910e0
	void SetHasTangents(bool bInHasTangents); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents // (Final|Native|Public) // @ game+0x891050
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials // (Final|Native|Public) // @ game+0x890fc0
	void SetHasNormals(bool bInHasNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals // (Final|Native|Public) // @ game+0x890f30
	void SetHasColors(bool bInHasColors); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors // (Final|Native|Public) // @ game+0x890ea0
	void Optimize(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize // (Final|Native|Public) // @ game+0x890e80
	bool IsValid(bool bInSkipVertexIndicesCheck); // Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid // (Final|Native|Public|Const) // @ game+0x890de0
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize // (Final|Native|Public) // @ game+0x890b70
	bool HasTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents // (Final|Native|Public|Const) // @ game+0x890b50
	bool HasPerFaceMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials // (Final|Native|Public|Const) // @ game+0x890b30
	bool HasNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals // (Final|Native|Public|Const) // @ game+0x890b10
	bool HasColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors // (Final|Native|Public|Const) // @ game+0x890af0
	struct TArray<struct FVector> GetVertexPositions(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions // (Final|Native|Public|Const) // @ game+0x890ac0
	struct TArray<struct FVector> GetVertexInstanceVTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents // (Final|Native|Public|Const) // @ game+0x890a90
	struct TArray<struct FVector2D> GetVertexInstanceUVs(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs // (Final|Native|Public|Const) // @ game+0x890a00
	struct TArray<struct FVector> GetVertexInstanceUTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents // (Final|Native|Public|Const) // @ game+0x8909d0
	struct TArray<struct FVector> GetVertexInstanceNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals // (Final|Native|Public|Const) // @ game+0x8909a0
	struct TArray<struct FColor> GetVertexInstanceColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors // (Final|Native|Public|Const) // @ game+0x890910
	struct TArray<struct FIntVector> GetTriangleIndices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices // (Final|Native|Public|Const) // @ game+0x890880
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials // (Final|Native|Public|Const) // @ game+0x8907f0
	uint32_t GetNumVertices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices // (Final|Native|Public|Const) // @ game+0x8907d0
	uint32_t GetNumVertexInstances(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances // (Final|Native|Public|Const) // @ game+0x8907b0
	uint32_t GetNumUVLayers(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers // (Final|Native|Public|Const) // @ game+0x890790
	uint32_t GetNumTriangles(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles // (Final|Native|Public|Const) // @ game+0x890770
	uint32_t GetNumStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials // (Final|Native|Public|Const) // @ game+0x890750
	int32_t GetMaterialIndex(struct FName InMaterialSlotName); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex // (Final|Native|Public|Const) // @ game+0x8906b0
	struct TArray<int32_t> GetMaterialIDsPerTriangle(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle // (Final|Native|Public|Const) // @ game+0x890620
	struct UMaterialInterface* GetMaterial(int32_t InMaterialIndex); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial // (Final|Native|Public) // @ game+0x890580
	void CalculateTangents(bool bInComputeWeightedNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents // (Final|Native|Public) // @ game+0x8904f0
	void CalculateNormals(bool bInComputeWeightedNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals // (Final|Native|Public) // @ game+0x890460
	struct FBox CalcBounds(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds // (Final|Native|Public|HasDefaults|Const) // @ game+0x890410
	uint32_t AddStaticMaterial(struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x890300
};

// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// Size: 0x5a0 (Inherited: 0x580)
struct UHoudiniStaticMeshComponent : UMeshComponent {
	struct UHoudiniStaticMesh* Mesh; // 0x578(0x08)
	struct FBox LocalBounds; // 0x580(0x1c)
	bool bHoudiniIconVisible; // 0x59c(0x01)

	void SetMesh(struct UHoudiniStaticMesh* InMesh); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh // (Final|Native|Public) // @ game+0x891ee0
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible // (Final|Native|Public) // @ game+0x891e50
	void NotifyMeshUpdated(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated // (Final|Native|Public) // @ game+0x891e30
	bool IsHoudiniIconVisible(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible // (Final|Native|Public|Const) // @ game+0x891e10
	struct UHoudiniStaticMesh* GetMesh(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh // (Final|Native|Public) // @ game+0x891df0
};

// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// Size: 0x28 (Inherited: 0x28)
struct UHoudiniAssetStateEvents : UInterface {
};

