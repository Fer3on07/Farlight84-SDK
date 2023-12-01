// Class LunarMariaArea.LM_AreaTileData
// Size: 0x80 (Inherited: 0x30)
struct ULM_AreaTileData : UDataAsset {
	struct TMap<struct FName, struct FAreaTileLayerData> LayerTileData; // 0x30(0x50)
};

// Class LunarMariaArea.LM_AreaData_Base
// Size: 0x50 (Inherited: 0x30)
struct ULM_AreaData_Base : UDataAsset {
	int32_t ComponentSizeQuads; // 0x30(0x04)
	int32_t SubsectionSizeQuads; // 0x34(0x04)
	int32_t ComponentNumSubsections; // 0x38(0x04)
	bool bIsBitArea; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString AreaDataID; // 0x40(0x10)
};

// Class LunarMariaArea.LM_AreaData
// Size: 0x210 (Inherited: 0x50)
struct ULM_AreaData : ULM_AreaData_Base {
	bool bDataTableDirty; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct ULandscapeInfo* LandscapeInfo; // 0x58(0x08)
	bool IsProcessArea; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TMap<struct FIntPoint, struct ULM_AreaTileData*> AreaTileData; // 0x68(0x50)
	struct TMap<struct FName, struct FAreaLayerData> LayerTextures; // 0xb8(0x50)
	struct TMap<struct FName, struct FAreaGroupSet> GroupSettings; // 0x108(0x50)
	struct TMap<struct FName, struct FLinearColor> DecalDisplayColorSettings; // 0x158(0x50)
	struct UScriptStruct* AreaAttributeStruct; // 0x1a8(0x08)
	struct UDataTable* FinalAreaAttributeDataTable; // 0x1b0(0x08)
	char pad_1B8[0x58]; // 0x1b8(0x58)
};

