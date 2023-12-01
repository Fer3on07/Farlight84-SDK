// ScriptStruct LunarMariaArea.AreaGroupSet
// Size: 0x10 (Inherited: 0x00)
struct FAreaGroupSet {
	struct TArray<struct FName> LayerNames; // 0x00(0x10)
};

// ScriptStruct LunarMariaArea.AreaLayerData
// Size: 0x68 (Inherited: 0x00)
struct FAreaLayerData {
	struct FName LayerName; // 0x00(0x08)
	int32_t CurrentBit; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FIntPoint, struct UTexture2D*> ComponentWeightMapTextures; // 0x10(0x50)
	struct FName GroupName; // 0x60(0x08)
};

// ScriptStruct LunarMariaArea.AreaTileLayerData
// Size: 0x50 (Inherited: 0x00)
struct FAreaTileLayerData {
	struct TMap<struct FIntPoint, struct UTexture2D*> ComponentWeightMapTextures; // 0x00(0x50)
};

