// Enum BlockoutToolsPlugin.EBlockoutMaterialType
enum class EBlockoutMaterialType : uint8 {
	BlockoutMaterialType_Grid = 0,
	BlockoutMaterialType_CustomMaterial = 1,
	BlockoutMaterialType_MAX = 2
};

// ScriptStruct BlockoutToolsPlugin.BlockoutMaterialPreset
// Size: 0x38 (Inherited: 0x08)
struct FBlockoutMaterialPreset : FTableRowBase {
	bool bUseGrid; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GridSize; // 0x0c(0x04)
	float CheckerLuminance; // 0x10(0x04)
	struct FLinearColor Color; // 0x14(0x10)
	bool bUseTopColor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FLinearColor TopColor; // 0x28(0x10)
};

