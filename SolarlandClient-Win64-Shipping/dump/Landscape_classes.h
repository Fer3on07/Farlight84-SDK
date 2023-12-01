// Class Landscape.ControlPointMeshActor
// Size: 0x230 (Inherited: 0x228)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x228(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x610 (Inherited: 0x600)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x600(0x04)
	char pad_604[0xc]; // 0x604(0x0c)
};

// Class Landscape.LandscapeProxy
// Size: 0x568 (Inherited: 0x228)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x228(0x08)
	struct FGuid LandscapeGuid; // 0x230(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x240(0x08)
	int32_t MaxLODLevel; // 0x248(0x04)
	float LODDistanceFactor; // 0x24c(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x254(0x04)
	float LOD0ScreenSize; // 0x258(0x04)
	float LOD0DistributionSetting; // 0x25c(0x04)
	float LODDistributionSetting; // 0x260(0x04)
	float TessellationComponentScreenSize; // 0x264(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x26c(0x04)
	int32_t OccluderGeometryLOD; // 0x270(0x04)
	int32_t StaticLightingLOD; // 0x274(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x278(0x08)
	float StreamingDistanceMultiplier; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x288(0x08)
	char pad_290[0x20]; // 0x290(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2b0(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b8(0x10)
	bool bMeshHoles; // 0x2c8(0x01)
	char MeshHolesMaxLod; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2d0(0x10)
	int32_t VirtualTextureNumLods; // 0x2e0(0x04)
	int32_t VirtualTextureLodBias; // 0x2e4(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float NegativeZBoundsExtension; // 0x2ec(0x04)
	float PositiveZBoundsExtension; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x2f8(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x308(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x318(0x10)
	char pad_328[0x64]; // 0x328(0x64)
	bool bHasLandscapeGrass; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float StaticLightingResolution; // 0x390(0x04)
	char bCastStaticShadow : 1; // 0x394(0x01)
	char bCastShadowAsTwoSided : 1; // 0x394(0x01)
	char bCastFarShadow : 1; // 0x394(0x01)
	char pad_394_3 : 5; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x398(0x01)
	char pad_398_1 : 7; // 0x398(0x01)
	struct FLightingChannels LightingChannels; // 0x399(0x01)
	char pad_39A[0x2]; // 0x39a(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x39c(0x01)
	char bRenderCustomDepth : 1; // 0x39c(0x01)
	char pad_39C_2 : 6; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	int32_t CustomDepthStencilValue; // 0x3a0(0x04)
	float LDMaxDrawDistance; // 0x3a4(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3a8(0x18)
	int32_t CollisionMipLevel; // 0x3c0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3c4(0x04)
	float CollisionThickness; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FBodyInstance BodyInstance; // 0x3d0(0x130)
	char bGenerateOverlapEvents : 1; // 0x500(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x500(0x01)
	char pad_500_2 : 6; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	int32_t ComponentSizeQuads; // 0x504(0x04)
	int32_t SubsectionSizeQuads; // 0x508(0x04)
	int32_t NumSubsections; // 0x50c(0x04)
	char bUsedForNavigation : 1; // 0x510(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x510(0x01)
	char pad_510_2 : 6; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	bool bUseDynamicMaterialInstance; // 0x514(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x515(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x516(0x01)
	bool bHasLayersContent; // 0x517(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x518(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3a35840
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a35770
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a356a0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x92e240
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x3a35360
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x2892790
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x2842790
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x27f3ee0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x27bf1f0
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x1b0c670
};

// Class Landscape.Landscape
// Size: 0x568 (Inherited: 0x568)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x228 (Inherited: 0x228)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x9043b0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d0d160
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x2d0d160
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d0d160
};

// Class Landscape.LandscapeComponent
// Size: 0x730 (Inherited: 0x540)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x540(0x04)
	int32_t SectionBaseY; // 0x544(0x04)
	int32_t ComponentSizeQuads; // 0x548(0x04)
	int32_t SubsectionSizeQuads; // 0x54c(0x04)
	int32_t NumSubsections; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x558(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x560(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x568(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x578(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x588(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x598(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x5a8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x5b8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x5c0(0x10)
	float WeightmapSubsectionOffset; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x5e0(0x10)
	struct FBox CachedLocalBox; // 0x5f0(0x1c)
	LazyObjectProperty CollisionComponent; // 0x60c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x628(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x630(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x640(0x10)
	struct FGuid MapBuildDataId; // 0x650(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x660(0x10)
	int32_t CollisionMipLevel; // 0x670(0x04)
	int32_t SimpleCollisionMipLevel; // 0x674(0x04)
	float NegativeZBoundsExtension; // 0x678(0x04)
	float PositiveZBoundsExtension; // 0x67c(0x04)
	float StaticLightingResolution; // 0x680(0x04)
	int32_t ForcedLOD; // 0x684(0x04)
	int32_t LODBias; // 0x688(0x04)
	struct FGuid StateId; // 0x68c(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x69c(0x10)
	char pad_6AC[0x4]; // 0x6ac(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x6b0(0x08)
	char MobileBlendableLayerMask; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x6c0(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x6c8(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x6d8(0x10)
	char pad_6E8[0x48]; // 0x6e8(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33b60
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a33a80
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a339a0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x228 (Inherited: 0x228)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x278 (Inherited: 0x228)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_228[0x50]; // 0x228(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x540 (Inherited: 0x540)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x620 (Inherited: 0x540)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x540(0x10)
	int32_t SectionBaseX; // 0x550(0x04)
	int32_t SectionBaseY; // 0x554(0x04)
	int32_t CollisionSizeQuads; // 0x558(0x04)
	float CollisionScale; // 0x55c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x568(0x10)
	struct FGuid HeightfieldGuid; // 0x578(0x10)
	struct FBox CachedLocalBox; // 0x588(0x1c)
	LazyObjectProperty RenderComponent; // 0x5a4(0x1c)
	char pad_5C0[0x10]; // 0x5c0(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5d0(0x10)
	char pad_5E0[0x40]; // 0x5e0(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33c00
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char pad_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x428 (Inherited: 0x410)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	char bIsLayerThumbnail : 1; // 0x420(0x01)
	char bDisableTessellation : 1; // 0x420(0x01)
	char bMobile : 1; // 0x420(0x01)
	char bEditorToolUsage : 1; // 0x420(0x01)
	char pad_420_4 : 4; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x640 (Inherited: 0x620)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x620(0x10)
	char pad_630[0x10]; // 0x630(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x230 (Inherited: 0x228)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x228(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x630 (Inherited: 0x600)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x600(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x610(0x10)
	int8_t ProxyLOD; // 0x620(0x01)
	char pad_621[0xf]; // 0x621(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x50 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	bool bForceFourLayers; // 0x3c(0x01)
	bool bPrintLayerInfos; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct TArray<struct FLandscapeSplineSegmentSurfaceName> LandscapeSplineSegmentSurfaces; // 0x40(0x10)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x570 (Inherited: 0x540)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x540(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x550(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x560(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x27c2c30
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	enum class ELandscapeSplineSegmentSurface SurfaceType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char bBranchTrunk : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x588 (Inherited: 0x568)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x568(0x1c)
	char pad_584[0x4]; // 0x584(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

