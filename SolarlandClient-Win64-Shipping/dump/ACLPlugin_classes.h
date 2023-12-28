// Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x158 (Inherited: 0x28)
struct UAnimationCompressionLibraryDatabase : UObject {
	struct TArray<char> CookedCompressedBytes; // 0x28(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x38(0x10)
	char pad_48[0x108]; // 0x48(0x108)
	uint32_t MaxStreamRequestSizeKB; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)

	void SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class ACLVisualFidelityChangeResult& Result, enum class ACLVisualFidelity VisualFidelity); // Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c46a70
	enum class ACLVisualFidelity GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset); // Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c469e0
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase {
	struct UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x38(0x08)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x40 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase {
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x38(0x08)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x38 (Inherited: 0x38)
struct UAnimBoneCompressionCodec_ACLSafe : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec {
};

