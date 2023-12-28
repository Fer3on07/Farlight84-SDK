// BlueprintGeneratedClass Ability_VehicleExplosion.Ability_VehicleExplosion_C
// Size: 0x319 (Inherited: 0x310)
struct AAbility_VehicleExplosion_C : ASolarAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	bool HasExploded; // 0x318(0x01)

	void ReceiveBeginPlay(); // Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d0f120
	void ReceiveTick(float DeltaSeconds); // Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d0f120
	void ExecuteUbergraph_Ability_VehicleExplosion(int32_t EntryPoint); // Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ExecuteUbergraph_Ability_VehicleExplosion // (Final|UbergraphFunction) // @ game+0x2d0f120
};

