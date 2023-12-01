// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// Size: 0x60 (Inherited: 0x30)
struct UKawaiiPhysicsLimitsDataAsset : UDataAsset {
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x30(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x40(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x50(0x10)
};

