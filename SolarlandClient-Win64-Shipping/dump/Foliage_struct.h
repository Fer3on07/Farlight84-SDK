// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8 {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size: 0x0c (Inherited: 0x00)
struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaskThreshold; // 0x04(0x04)
	char InvertMask : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Foliage.SelectInstanceInfo
// Size: 0x50 (Inherited: 0x00)
struct FSelectInstanceInfo {
	int32_t instanceID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct TArray<float> CustomData; // 0x40(0x10)
};

// ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x00)
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x00(0x08)
	struct UFoliageType* TypeInstance; // 0x08(0x08)
	bool bIsAsset; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x18(0x08)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x60 (Inherited: 0x00)
struct FProceduralFoliageInstance {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0x0c)
	float Age; // 0x2c(0x04)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UFoliageType* Type; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

