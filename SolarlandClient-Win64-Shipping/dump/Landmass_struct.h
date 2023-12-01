// Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8 {
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2
};

// Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8 {
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// ScriptStruct Landmass.LandmassBrushEffectsList
// Size: 0x60 (Inherited: 0x00)
struct FLandmassBrushEffectsList {
	struct FBrushEffectBlurring Blurring; // 0x00(0x08)
	struct FBrushEffectCurlNoise CurlNoise; // 0x08(0x10)
	struct FBrushEffectDisplacement Displacement; // 0x18(0x28)
	struct FBrushEffectSmoothBlending SmoothBlending; // 0x40(0x08)
	struct FBrushEffectTerracing Terracing; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Landmass.BrushEffectTerracing
// Size: 0x14 (Inherited: 0x00)
struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x00(0x04)
	float TerraceSpacing; // 0x04(0x04)
	float TerraceSmoothness; // 0x08(0x04)
	float MaskLength; // 0x0c(0x04)
	float MaskStartOffset; // 0x10(0x04)
};

// ScriptStruct Landmass.BrushEffectSmoothBlending
// Size: 0x08 (Inherited: 0x00)
struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x00(0x04)
	float OuterSmoothDistance; // 0x04(0x04)
};

// ScriptStruct Landmass.BrushEffectDisplacement
// Size: 0x28 (Inherited: 0x00)
struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x00(0x04)
	float DisplacementTiling; // 0x04(0x04)
	struct UTexture2D* Texture; // 0x08(0x08)
	float Midpoint; // 0x10(0x04)
	struct FLinearColor Channel; // 0x14(0x10)
	float WeightmapInfluence; // 0x24(0x04)
};

// ScriptStruct Landmass.BrushEffectCurlNoise
// Size: 0x10 (Inherited: 0x00)
struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x00(0x04)
	float Curl2Amount; // 0x04(0x04)
	float Curl1Tiling; // 0x08(0x04)
	float Curl2Tiling; // 0x0c(0x04)
};

// ScriptStruct Landmass.BrushEffectBlurring
// Size: 0x08 (Inherited: 0x00)
struct FBrushEffectBlurring {
	bool bBlurShape; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Radius; // 0x04(0x04)
};

// ScriptStruct Landmass.BrushEffectCurves
// Size: 0x20 (Inherited: 0x00)
struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* ElevationCurveAsset; // 0x08(0x08)
	float ChannelEdgeOffset; // 0x10(0x04)
	float ChannelDepth; // 0x14(0x04)
	float CurveRampWidth; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Landmass.LandmassFalloffSettings
// Size: 0x14 (Inherited: 0x00)
struct FLandmassFalloffSettings {
	enum class EBrushFalloffMode FalloffMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FalloffAngle; // 0x04(0x04)
	float FalloffWidth; // 0x08(0x04)
	float EdgeOffset; // 0x0c(0x04)
	float ZOffset; // 0x10(0x04)
};

// ScriptStruct Landmass.LandmassTerrainCarvingSettings
// Size: 0x80 (Inherited: 0x00)
struct FLandmassTerrainCarvingSettings {
	enum class EBrushBlendType BlendMode; // 0x00(0x01)
	bool bInvertShape; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FLandmassFalloffSettings FalloffSettings; // 0x04(0x14)
	struct FLandmassBrushEffectsList Effects; // 0x18(0x60)
	int32_t Priority; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

