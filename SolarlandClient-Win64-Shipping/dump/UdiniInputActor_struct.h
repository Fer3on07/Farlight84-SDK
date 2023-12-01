// Enum UdiniInputActor.EUdiniTableType
enum class EUdiniTableType : uint8 {
	TYPE_Mat = 0,
	TYPE_Staticmesh = 1,
	TYPE_FoliageType = 2,
	TYPE_Pic = 3,
	TYPE_Heigfield = 4,
	TYPE_OtherUobject = 5,
	TYPE_Other = 6,
	TYPE_MAX = 7
};

// Enum UdiniInputActor.EUdiniPart
enum class EUdiniPart : uint8 {
	Part_Mesh = 0,
	Part_Curve = 1,
	Part_Point = 2,
	Part_Curve_ReadOnly = 3,
	Part_Point_ReadOnly = 4,
	Part_MAX = 5
};

// Enum UdiniInputActor.EUdiniAttributeClass
enum class EUdiniAttributeClass : uint8 {
	Class_None = 0,
	Class_Core = 1,
	Class_CurvePrimAtt = 2,
	Class_MeshPrimAtt = 3,
	Class_MeshPointAtt = 4,
	Class_MeshDetailAtt = 5,
	Class_MeshControlAtt = 6,
	Class_PolyLinePrimAtt = 7,
	Class_PolyLinePointAtt = 8,
	Class_HeightfieldPrimAtt = 9,
	Class_MAX = 10
};

// Enum UdiniInputActor.EUdiniAttributeType
enum class EUdiniAttributeType : uint8 {
	TYPE_STRING = 0,
	TYPE_INT = 1,
	TYPE_FLOAT = 2,
	TYPE_VECTOR3 = 3,
	TYPE_VECTOR4 = 4,
	TYPE_VECTOR2 = 5,
	TYPE_StringList = 6,
	TYPE_IntList = 7,
	TYPE_Tog = 8,
	TYPE_Button = 9,
	TYPE_CheckBox = 10,
	TYPE_UOBJECT = 11,
	TYPE_MAX = 12
};

// Enum UdiniInputActor.EUdiniDataPartType
enum class EUdiniDataPartType : uint8 {
	Part_Point = 0,
	Part_Mesh = 1,
	Part_Polyline = 2,
	Part_Splineline = 3,
	Part_Volum = 4,
	Part_Max = 5
};

// Enum UdiniInputActor.EUdiniPartType
enum class EUdiniPartType : uint8 {
	Part_StaticmeshMesh = 0,
	Part_ProceduareMesh = 1,
	Part_Instance = 2,
	Part_InstanceForlage = 3,
	Part_HRISInstance = 4,
	Part_DecalActor = 5,
	Part_UobjectInstance = 6,
	Part_Image = 7,
	Part_Landscape = 8,
	Part_HLOD = 9,
	Part_MAX = 10
};

// ScriptStruct UdiniInputActor.UdiniAssetData
// Size: 0x10 (Inherited: 0x08)
struct FUdiniAssetData : FTableRowBase {
	bool bIsDebug; // 0x08(0x01)
	enum class EUdiniTableType TableType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct UdiniInputActor.UdiniTableDatas
// Size: 0xe0 (Inherited: 0x00)
struct FUdiniTableDatas {
	char pad_0[0xe0]; // 0x00(0xe0)
};

// ScriptStruct UdiniInputActor.UdiniFoliageTypeDataTable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniFoliageTypeDataTable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UFoliageType_InstancedStaticMesh*> FoliageTypes; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.UdiniHeightFieldDatable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniHeightFieldDatable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UHeightFieldTexture*> TextureList; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.InputDataList
// Size: 0x50 (Inherited: 0x00)
struct FInputDataList {
	struct TMap<struct FString, struct FManOpData> ManOpDatasList; // 0x00(0x50)
};

// ScriptStruct UdiniInputActor.ManOpData
// Size: 0x70 (Inherited: 0x00)
struct FManOpData {
	struct FString MainOpName; // 0x00(0x10)
	struct FString Icon; // 0x10(0x10)
	struct TMap<struct FString, struct FSubOpData> SubOpDatas; // 0x20(0x50)
};

// ScriptStruct UdiniInputActor.SubOpData
// Size: 0x2f0 (Inherited: 0x00)
struct FSubOpData {
	struct FString Icon; // 0x00(0x10)
	struct FString SubOpName; // 0x10(0x10)
	struct FString MainOpName; // 0x20(0x10)
	struct FString Parent; // 0x30(0x10)
	struct FString SubOpToolTip; // 0x40(0x10)
	struct FString HdaTypeName; // 0x50(0x10)
	struct FString CurveType; // 0x60(0x10)
	int32_t CoodOnPaintEnd; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString SecondHdaTypeName; // 0x78(0x10)
	bool IsClosedCurve; // 0x88(0x01)
	bool IsPoint; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float SnapGridSize; // 0x8c(0x04)
	float SnapGridNum; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString OperationModeType; // 0x98(0x10)
	struct FString OutputTypeClassName; // 0xa8(0x10)
	struct FString ActorOwnerClassName; // 0xb8(0x10)
	struct FString ImportClassName; // 0xc8(0x10)
	struct FString HelpURL; // 0xd8(0x10)
	struct FString LevelName; // 0xe8(0x10)
	struct FString LevelFolderName; // 0xf8(0x10)
	int32_t EnableResetMeshPart; // 0x108(0x04)
	int32_t EnableResetPolyLinePart; // 0x10c(0x04)
	int32_t EnableResetHeightFieldPart; // 0x110(0x04)
	int32_t EnableResetPointPart; // 0x114(0x04)
	struct FString AutoUpdateHdaName; // 0x118(0x10)
	struct FString ModifyLandscapeLayer; // 0x128(0x10)
	struct FString CurveEditMode; // 0x138(0x10)
	float CurveSnapDistance; // 0x148(0x04)
	float DefaultCurveWith; // 0x14c(0x04)
	float PerDrawPointAddHeight; // 0x150(0x04)
	int32_t EnableCookForActorMove; // 0x154(0x04)
	float SplineResolution; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TMap<struct FString, struct FHoudiniParmData> SubCurveAttribute; // 0x160(0x50)
	struct TMap<struct FString, struct FHoudiniParmData> SubCoutrlAttribute; // 0x1b0(0x50)
	struct TMap<struct FString, struct FHoudiniParmData> SubPointAttribute; // 0x200(0x50)
	struct TMap<struct FString, struct FHoudiniParmData> SubPrimAttribute; // 0x250(0x50)
	struct TMap<struct FString, struct FHoudiniParmData> SubDetailAttribute; // 0x2a0(0x50)
};

// ScriptStruct UdiniInputActor.HoudiniParmData
// Size: 0xe8 (Inherited: 0x00)
struct FHoudiniParmData {
	struct FString Name; // 0x00(0x10)
	struct FString help; // 0x10(0x10)
	enum class EUdiniAttributeType AttributeType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t TupleSize; // 0x24(0x04)
	struct TArray<float> FloatValue; // 0x28(0x10)
	struct TArray<int32_t> IntValue; // 0x38(0x10)
	struct TArray<struct FString> StringValue; // 0x48(0x10)
	struct TArray<float> DefaultFloatValue; // 0x58(0x10)
	struct TArray<int32_t> DefaultFIntValue; // 0x68(0x10)
	struct TArray<struct FString> DefaultFStringValue; // 0x78(0x10)
	struct TArray<struct FString> ChoseListStringLable; // 0x88(0x10)
	struct TArray<struct FString> ChoseListStringValue; // 0x98(0x10)
	struct TArray<int32_t> ChoseListIntValue; // 0xa8(0x10)
	float MaxValue; // 0xb8(0x04)
	float MinValue; // 0xbc(0x04)
	bool bIsHide; // 0xc0(0x01)
	bool hasMin; // 0xc1(0x01)
	bool hasMax; // 0xc2(0x01)
	bool hasUIMin; // 0xc3(0x01)
	bool hasUIMax; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float UIMax; // 0xc8(0x04)
	float UIMin; // 0xcc(0x04)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString VisibilityCondition; // 0xd8(0x10)
};

// ScriptStruct UdiniInputActor.InputDynamicData
// Size: 0x320 (Inherited: 0x00)
struct FInputDynamicData {
	float PaintScale; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSubOpData StaticSubOpData; // 0x08(0x2f0)
	struct FString PaintAttValue; // 0x2f8(0x10)
	struct FString PaintAttName; // 0x308(0x10)
	bool bIsUsePaintDir; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
};

// ScriptStruct UdiniInputActor.UdiniTextureDatable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniTextureDatable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UTexture2D*> TextureList; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.HeightFieldData
// Size: 0x70 (Inherited: 0x00)
struct FHeightFieldData {
	struct FString Name; // 0x00(0x10)
	int32_t XLength; // 0x10(0x04)
	int32_t YLength; // 0x14(0x04)
	struct TArray<float> HeightData; // 0x18(0x10)
	struct TArray<struct FString> MaskNames; // 0x28(0x10)
	struct FVector CenterPos; // 0x38(0x0c)
	struct FVector BoundSize; // 0x44(0x0c)
	float PixSize; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FLinearColor> MaskColors; // 0x58(0x10)
	bool bIsBitMast; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct UdiniInputActor.UdiniDataTable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniDataTable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UStaticMesh*> StaticMesh; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.UdiniMatDatable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniMatDatable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UMaterialInstance*> MatInstance; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.OnePoly
// Size: 0x38 (Inherited: 0x00)
struct FOnePoly {
	struct TArray<int32_t> polyPosIndex; // 0x00(0x10)
	struct TArray<int32_t> polyNonSharedEdgeArray; // 0x10(0x10)
	struct TArray<int32_t> polyTrianglePrimIndex; // 0x20(0x10)
	int32_t __Primitive_Id_; // 0x30(0x04)
	bool bIsHid; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct UdiniInputActor.UdiniOtherUobjectDataTable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniOtherUobjectDataTable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UObject*> ActorInstance; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.SnapPoint
// Size: 0x10 (Inherited: 0x00)
struct FSnapPoint {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct UdiniInputActor.UdiniOpParmSelf
// Size: 0x05 (Inherited: 0x00)
struct FUdiniOpParmSelf {
	bool EnableShowBackGround; // 0x00(0x01)
	bool ShowAttributeValueAsText; // 0x01(0x01)
	bool ShowAttributeValueAsDir; // 0x02(0x01)
	bool EnableShowBackGroundText; // 0x03(0x01)
	bool EnableShowColor; // 0x04(0x01)
};

// ScriptStruct UdiniInputActor.OneLine
// Size: 0x18 (Inherited: 0x00)
struct FOneLine {
	struct TArray<int32_t> polyPosIndex; // 0x00(0x10)
	bool bIsHid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct UdiniInputActor.IndexCluster
// Size: 0x10 (Inherited: 0x00)
struct FIndexCluster {
	struct TArray<int32_t> Indexs; // 0x00(0x10)
};

// ScriptStruct UdiniInputActor.UdiniStaticMeshDataTable
// Size: 0x80 (Inherited: 0x10)
struct FUdiniStaticMeshDataTable : FUdiniAssetData {
	struct FString RowName; // 0x10(0x10)
	struct TArray<struct UStaticMesh*> StaticMesh; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Attributes; // 0x30(0x50)
};

// ScriptStruct UdiniInputActor.UdiniInstanceData
// Size: 0x68 (Inherited: 0x00)
struct FUdiniInstanceData {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct UdiniInputActor.OutPutContext
// Size: 0x18 (Inherited: 0x00)
struct FOutPutContext {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct UdiniInputActor.HoudiniPartData
// Size: 0x20 (Inherited: 0x00)
struct FHoudiniPartData {
	char pad_0[0x20]; // 0x00(0x20)
};

