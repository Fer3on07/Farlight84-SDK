// BlueprintGeneratedClass BP_QuickSummon_Forward.BP_QuickSummon_Forward_C
// Size: 0x40 (Inherited: 0x28)
struct UBP_QuickSummon_Forward_C : USolarQuickSummonProxy {
	float CheckHeightUp; // 0x28(0x04)
	float CheckHeightDown; // 0x2c(0x04)
	struct TArray<float> CheckDistanceArray; // 0x30(0x10)

	bool TryGetSummonHitResult(struct FHitResult& OutHitResult, struct AActor* InSummoner, struct USolarSummonDetectionConfig* InSummonConfig); // Function BP_QuickSummon_Forward.BP_QuickSummon_Forward_C.TryGetSummonHitResult // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
};

