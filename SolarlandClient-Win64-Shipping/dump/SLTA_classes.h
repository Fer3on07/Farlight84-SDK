// Class SLTA.SLTA_BPL
// Size: 0x28 (Inherited: 0x28)
struct USLTA_BPL : UObject {

	bool WriteTxt(struct FString saveString, struct FString Path); // Function SLTA.SLTA_BPL.WriteTxt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96980
	void SLTA_SetDetailMode(struct USceneComponent* _sceneComponent); // Function SLTA.SLTA_BPL.SLTA_SetDetailMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96900
	int32_t SLTA_GetPrimitivesRHI(); // Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c968d0
	int32_t SLTA_GetLightMapIndex(struct UStaticMeshComponent* _ustaticMeshComponent); // Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c96840
	struct FVector4 SLTA_GetLightMapCoordinateBias(struct UStaticMeshComponent* _ustaticMeshComponent); // Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c967b0
	int32_t SLTA_GetDrawcalls(); // Function SLTA.SLTA_BPL.SLTA_GetDrawcalls // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96780
	struct TArray<float> SLTA_GetCustomPrimitiveData(struct UPrimitiveComponent* _primitive); // Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c966a0
	bool SLTA_ArrayToCSV(struct FString SaveDirectory, struct FString Filename, struct FString TitleName, struct TArray<struct FString> SaveText, int32_t ArrayIndex, bool AllowOverwriting); // Function SLTA.SLTA_BPL.SLTA_ArrayToCSV // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c96320
	struct FString ReadTxt(struct FString Path); // Function SLTA.SLTA_BPL.ReadTxt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c961f0
};

