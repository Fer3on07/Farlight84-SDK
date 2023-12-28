// BlueprintGeneratedClass BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C
// Size: 0x142d (Inherited: 0x13f0)
struct ABP_SolarVH_Tire_WL05_C : ABP_WheeledVehicleBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13f0(0x08)
	struct UBoxComponent* Platform; // 0x13f8(0x08)
	struct UStaticMeshComponent* VehicleHitbox2; // 0x1400(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x1408(0x08)
	struct UTextRenderComponent* TextRender; // 0x1410(0x08)
	struct USceneComponent* VFX_BloodVolume; // 0x1418(0x08)
	struct FVector MoveableHitBoxLocation; // 0x1420(0x0c)
	bool IsDestroying; // 0x142c(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d0f120
	void ExecuteUbergraph_BP_SolarVH_Tire_WL05(int32_t EntryPoint); // Function BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C.ExecuteUbergraph_BP_SolarVH_Tire_WL05 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0f120
};

