// BlueprintGeneratedClass BP_SI_JumpPad.BP_SI_JumpPad_C
// Size: 0x2d1 (Inherited: 0x238)
struct ABP_SI_JumpPad_C : ASolarInteractableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* FX_Center_Logo; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct UParticleSystemComponent* FX_P_JumpPad_002; // 0x250(0x08)
	struct UStaticMeshComponent* VFX_Dark; // 0x258(0x08)
	struct USceneComponent* VFX; // 0x260(0x08)
	struct USceneComponent* point001; // 0x268(0x08)
	struct UStaticMeshComponent* Progress; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct FVector Timeline_0_Scale_EDFE8BE84808C1122C8F3CA456F9CAC3; // 0x288(0x0c)
	float Timeline_0_alpha_EDFE8BE84808C1122C8F3CA456F9CAC3; // 0x294(0x04)
	enum class ETimelineDirection Timeline_0__Direction_EDFE8BE84808C1122C8F3CA456F9CAC3; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UTimelineComponent* Timeline_1; // 0x2a0(0x08)
	float Zvelority; // 0x2a8(0x04)
	float OriginalZ; // 0x2ac(0x04)
	float CD; // 0x2b0(0x04)
	float CoolDownTime; // 0x2b4(0x04)
	bool IsInCD; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct TArray<struct ASolarCharacter*> Characters; // 0x2c0(0x10)
	bool TransientLaunch; // 0x2d0(0x01)

	void ServerCheckLaunch(bool& Launch); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ServerCheckLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void UpdateProgress(float Percent); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void ShowInCD(bool InCD); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ShowInCD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void Timeline_0__FinishedFunc(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x2d0f120
	void Timeline_0__UpdateFunc(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x2d0f120
	void ReceiveBeginPlay(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d0f120
	void ReceiveTick(float DeltaSeconds); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d0f120
	void BreakLoop(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.BreakLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2d0f120
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x2d0f120
	void Launch(struct TArray<struct ASolarCharacter*>& Characters); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.Launch // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void ClientFinishLaunch(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ClientFinishLaunch // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void LaunchEffect(); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.LaunchEffect // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void Set_CD(float CD); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.Set_CD // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void Set_State(bool InCD, float CD); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.Set_State // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2d0f120
	void ExecuteUbergraph_BP_SI_JumpPad(int32_t EntryPoint); // Function BP_SI_JumpPad.BP_SI_JumpPad_C.ExecuteUbergraph_BP_SI_JumpPad // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0f120
};

