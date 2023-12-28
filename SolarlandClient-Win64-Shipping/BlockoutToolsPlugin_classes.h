// Class BlockoutToolsPlugin.BlockoutToolsParent
// Size: 0x2b0 (Inherited: 0x228)
struct ABlockoutToolsParent : AActor {
	struct USceneComponent* Root; // 0x228(0x08)
	struct UBillboardComponent* Billboard; // 0x230(0x08)
	struct UMaterialInterface* BlockoutGridParent; // 0x238(0x08)
	struct UMaterialInstanceDynamic* BlockoutGridMID; // 0x240(0x08)
	struct UMaterialInterface* BlockoutCurrentMaterial; // 0x248(0x08)
	struct TArray<struct UStaticMeshComponent*> BlockoutMeshComponents; // 0x250(0x10)
	enum class EBlockoutMaterialType BlockoutMaterialType; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FLinearColor BlockoutMaterialColor; // 0x264(0x10)
	bool bBlockoutMaterialUseGrid; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float BlockoutMaterialGridSize; // 0x278(0x04)
	float BlockoutMaterialCheckerLuminance; // 0x27c(0x04)
	bool bBlockoutMaterialUseTopColor; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	struct FLinearColor BlockoutMaterialTopColor; // 0x284(0x10)
	bool bUseCustomMaterial; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UMaterialInterface* CustomMaterial; // 0x298(0x08)
	struct UMaterialInterface* BlockoutCustomMaterial; // 0x2a0(0x08)
	bool bBlockoutEnableCollisions; // 0x2a8(0x01)
	bool bBlockoutCastShadows; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)

	void RerunConstructionScript(); // Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript // (Final|Native|Private|BlueprintCallable) // @ game+0x827e80
	void BlockoutSetMaterial(); // Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial // (Final|Native|Private|BlueprintCallable) // @ game+0x827e60
};

