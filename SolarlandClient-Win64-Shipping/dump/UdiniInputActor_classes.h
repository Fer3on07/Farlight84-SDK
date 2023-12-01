// Class UdiniInputActor.UdiniInputActorBase
// Size: 0x230 (Inherited: 0x228)
struct AUdiniInputActorBase : AActor {
	char pad_228[0x8]; // 0x228(0x08)
};

// Class UdiniInputActor.AInputStaticmeshActorRuntime
// Size: 0x250 (Inherited: 0x230)
struct AAInputStaticmeshActorRuntime : AUdiniInputActorBase {
	struct TArray<struct UStaticMeshComponent*> InstanceComponent; // 0x230(0x10)
	struct TArray<struct UStaticMesh*> Meshs; // 0x240(0x10)
};

// Class UdiniInputActor.CurveModel_Base
// Size: 0x28 (Inherited: 0x28)
struct UCurveModel_Base : UObject {
};

// Class UdiniInputActor.EditorMeshComponet
// Size: 0x5e0 (Inherited: 0x5e0)
struct UEditorMeshComponet : UProceduralMeshComponent {
};

// Class UdiniInputActor.InputDataListAsset
// Size: 0x28 (Inherited: 0x28)
struct UInputDataListAsset : UObject {
};

// Class UdiniInputActor.IUdiniInputCoreInterface
// Size: 0x28 (Inherited: 0x28)
struct UIUdiniInputCoreInterface : UInterface {
};

// Class UdiniInputActor.UdiniDataPart
// Size: 0x110 (Inherited: 0x28)
struct UUdiniDataPart : UObject {
	enum class EUdiniDataPartType PartType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FVector> VertexPosition; // 0x30(0x10)
	struct TArray<struct FVector> VertexNormal; // 0x40(0x10)
	struct TArray<struct FLinearColor> VertexColors; // 0x50(0x10)
	struct TArray<struct FLinearColor> VertexColorsCatche; // 0x60(0x10)
	struct TArray<struct FVector2D> VertexUV; // 0x70(0x10)
	struct TArray<int32_t> PointEnableDraw; // 0x80(0x10)
	struct TArray<float> PointDrawSize; // 0x90(0x10)
	struct TArray<float> PrimDrawLineThinkness; // 0xa0(0x10)
	struct TMap<struct FString, struct UUdiniAttribute*> UdiniAttributesMap; // 0xb0(0x50)
	char pad_100[0x10]; // 0x100(0x10)
};

// Class UdiniInputActor.UdiniAreaDataPart
// Size: 0x130 (Inherited: 0x110)
struct UUdiniAreaDataPart : UUdiniDataPart {
	struct UMaterialInstanceDynamic* ViewTextureInstanceDynamic; // 0x110(0x08)
	struct UTexture2D* ViewTexture; // 0x118(0x08)
	struct TArray<struct FHeightFieldData> HeightFieldData; // 0x120(0x10)
};

// Class UdiniInputActor.UdiniAttribute
// Size: 0x108 (Inherited: 0x28)
struct UUdiniAttribute : UObject {
	struct FString AttributeName; // 0x28(0x10)
	struct FString help; // 0x38(0x10)
	enum class EUdiniAttributeType AttributeType; // 0x48(0x01)
	enum class EUdiniAttributeClass AttributeOwner; // 0x49(0x01)
	bool bIsHide; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	int32_t AttributeCount; // 0x4c(0x04)
	int32_t AttributeTupleSize; // 0x50(0x04)
	float MaxValue; // 0x54(0x04)
	float MinValue; // 0x58(0x04)
	bool hasMin; // 0x5c(0x01)
	bool hasMax; // 0x5d(0x01)
	bool hasUIMin; // 0x5e(0x01)
	bool hasUIMax; // 0x5f(0x01)
	float UIMax; // 0x60(0x04)
	float UIMin; // 0x64(0x04)
	float ShowValueSize; // 0x68(0x04)
	bool ShowAttributeValueAsDir; // 0x6c(0x01)
	bool ShowAttributeValueAsText; // 0x6d(0x01)
	bool EnableShowBackGroundValue; // 0x6e(0x01)
	char pad_6F[0x99]; // 0x6f(0x99)
};

// Class UdiniInputActor.UdiniAttaibutFloat
// Size: 0x120 (Inherited: 0x108)
struct UUdiniAttaibutFloat : UUdiniAttribute {
	struct TArray<float> Value; // 0x108(0x10)
	float DefaultValue; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class UdiniInputActor.UdiniAttaibutVector3
// Size: 0x128 (Inherited: 0x108)
struct UUdiniAttaibutVector3 : UUdiniAttribute {
	struct TArray<struct FVector> Value; // 0x108(0x10)
	struct FVector DefaultValue; // 0x118(0x0c)
	bool bShowOnlyDir; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
};

// Class UdiniInputActor.UdiniAttaibutVector2
// Size: 0x120 (Inherited: 0x108)
struct UUdiniAttaibutVector2 : UUdiniAttribute {
	struct TArray<struct FVector2D> Value; // 0x108(0x10)
	struct FVector2D DefaultValue; // 0x118(0x08)
};

// Class UdiniInputActor.UdiniAttaibutVector4
// Size: 0x130 (Inherited: 0x108)
struct UUdiniAttaibutVector4 : UUdiniAttribute {
	struct TArray<struct FVector4> Value; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
	struct FVector4 DefaultValue; // 0x120(0x10)
};

// Class UdiniInputActor.UdiniAttaibutIntBase
// Size: 0x120 (Inherited: 0x108)
struct UUdiniAttaibutIntBase : UUdiniAttribute {
	struct TArray<int32_t> Value; // 0x108(0x10)
	int32_t DefaultValue; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class UdiniInputActor.UdiniAttaibutInt
// Size: 0x120 (Inherited: 0x120)
struct UUdiniAttaibutInt : UUdiniAttaibutIntBase {
};

// Class UdiniInputActor.UdiniAttaibutTog
// Size: 0x120 (Inherited: 0x120)
struct UUdiniAttaibutTog : UUdiniAttaibutIntBase {
};

// Class UdiniInputActor.UdiniAttaibutButton
// Size: 0x120 (Inherited: 0x120)
struct UUdiniAttaibutButton : UUdiniAttaibutIntBase {
};

// Class UdiniInputActor.UdiniAttaibutString
// Size: 0x128 (Inherited: 0x108)
struct UUdiniAttaibutString : UUdiniAttribute {
	struct TArray<struct FString> Value; // 0x108(0x10)
	struct FString DefaultValue; // 0x118(0x10)
};

// Class UdiniInputActor.UdiniAttaibutStringChoiseList
// Size: 0x160 (Inherited: 0x128)
struct UUdiniAttaibutStringChoiseList : UUdiniAttaibutString {
	struct TArray<struct FString> ChoseListStringLable; // 0x128(0x10)
	struct TArray<struct FString> ChoseListStringValue; // 0x138(0x10)
	struct TArray<struct FLinearColor> ChoseListStringColors; // 0x148(0x10)
	bool bIsHeightFieldAtt; // 0x158(0x01)
	bool bIsBitMask; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
};

// Class UdiniInputActor.UdiniAttaibutIntChoiselist
// Size: 0x140 (Inherited: 0x120)
struct UUdiniAttaibutIntChoiselist : UUdiniAttaibutIntBase {
	struct TArray<struct FString> ChoseListStringLable; // 0x120(0x10)
	struct TArray<int32_t> ChoseListIntValue; // 0x130(0x10)
};

// Class UdiniInputActor.UdiniInputVolum
// Size: 0x260 (Inherited: 0x260)
struct AUdiniInputVolum : AVolume {
};

// Class UdiniInputActor.UdiniCollisionInputVolum
// Size: 0x260 (Inherited: 0x260)
struct AUdiniCollisionInputVolum : AUdiniInputVolum {
};

// Class UdiniInputActor.UdiniDecalComponent
// Size: 0x360 (Inherited: 0x360)
struct UUdiniDecalComponent : UDecalComponent {
};

// Class UdiniInputActor.UdiniInputPin
// Size: 0xb0 (Inherited: 0xb0)
struct UUdiniInputPin : UActorComponent {
};

// Class UdiniInputActor.UdiniInputVolumActor
// Size: 0x230 (Inherited: 0x228)
struct AUdiniInputVolumActor : AActor {
	char pad_228[0x8]; // 0x228(0x08)
};

// Class UdiniInputActor.UdiniOutputObjectBase
// Size: 0x28 (Inherited: 0x28)
struct UUdiniOutputObjectBase : UObject {
};

// Class UdiniInputActor.UdiniInstanceOutput
// Size: 0x28 (Inherited: 0x28)
struct UUdiniInstanceOutput : UUdiniOutputObjectBase {
};

// Class UdiniInputActor.UdiniInstanceToFoliageOutput
// Size: 0x28 (Inherited: 0x28)
struct UUdiniInstanceToFoliageOutput : UUdiniOutputObjectBase {
};

// Class UdiniInputActor.UdiniInstanceToHierarchicalOutput
// Size: 0x28 (Inherited: 0x28)
struct UUdiniInstanceToHierarchicalOutput : UUdiniOutputObjectBase {
};

// Class UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput
// Size: 0x28 (Inherited: 0x28)
struct UUdiniInstanceToStaticmeshComponentOutput : UUdiniOutputObjectBase {
};

// Class UdiniInputActor.UdiniLandmassOutput
// Size: 0x28 (Inherited: 0x28)
struct UUdiniLandmassOutput : UUdiniOutputObjectBase {
};

// Class UdiniInputActor.UdiniMeshDataPart
// Size: 0x1a8 (Inherited: 0x110)
struct UUdiniMeshDataPart : UUdiniDataPart {
	struct TArray<struct FOnePoly> PolyArray; // 0x110(0x10)
	struct TArray<int32_t> PrimIndex; // 0x120(0x10)
	struct TArray<int32_t> PrimID; // 0x130(0x10)
	struct TArray<int32_t> PrimEnableDraw; // 0x140(0x10)
	struct TArray<int32_t> bIsPrimHide; // 0x150(0x10)
	struct TArray<int32_t> bIsPointHide; // 0x160(0x10)
	struct TArray<float> PrimDrawSize; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)
	bool GeneraProcaduralMesh; // 0x190(0x01)
	bool bIsMask; // 0x191(0x01)
	char pad_192[0x16]; // 0x192(0x16)
};

// Class UdiniInputActor.UdiniPointDataPart
// Size: 0x110 (Inherited: 0x110)
struct UUdiniPointDataPart : UUdiniDataPart {
};

// Class UdiniInputActor.UdiniSnapGridComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UUdiniSnapGridComponent : UActorComponent {
};

// Class UdiniInputActor.UdiniSopAsset
// Size: 0x28 (Inherited: 0x28)
struct UUdiniSopAsset : UObject {
};

// Class UdiniInputActor.UdiniSplineComponent_Base
// Size: 0x630 (Inherited: 0x630)
struct UUdiniSplineComponent_Base : USplineComponent {
};

// Class UdiniInputActor.UdiniSplineComponent
// Size: 0x650 (Inherited: 0x630)
struct UUdiniSplineComponent : UUdiniSplineComponent_Base {
	char pad_630[0x20]; // 0x630(0x20)
};

// Class UdiniInputActor.UdiniSplineDataPart
// Size: 0x190 (Inherited: 0x110)
struct UUdiniSplineDataPart : UUdiniDataPart {
	struct TArray<struct FOneLine> PolyArray; // 0x110(0x10)
	struct TArray<int32_t> PrimID; // 0x120(0x10)
	struct TArray<int32_t> Curveconts; // 0x130(0x10)
	struct TArray<int32_t> PrimEnableDraw; // 0x140(0x10)
	struct TArray<int32_t> bIsPrimHide; // 0x150(0x10)
	struct TArray<int32_t> bIsPointHide; // 0x160(0x10)
	struct TArray<float> PrimDrawSize; // 0x170(0x10)
	struct TArray<struct FIndexCluster> VertexClusterIndex; // 0x180(0x10)
};

// Class UdiniInputActor.UdiniSSCoreComponet
// Size: 0xb0 (Inherited: 0xb0)
struct UUdiniSSCoreComponet : UActorComponent {
};

// Class UdiniInputActor.HeightFieldTexture
// Size: 0x48 (Inherited: 0x28)
struct UHeightFieldTexture : UObject {
	float MinVisHeight; // 0x28(0x04)
	float MaxVisHeight; // 0x2c(0x04)
	struct TArray<float> PixData; // 0x30(0x10)
	struct FVector2D ImageSize; // 0x40(0x08)
};

// Class UdiniInputActor.VolumBoxShow
// Size: 0xb0 (Inherited: 0xb0)
struct UVolumBoxShow : UActorComponent {
};

