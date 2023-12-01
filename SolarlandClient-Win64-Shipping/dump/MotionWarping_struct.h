// Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8 {
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8 {
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8 {
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// ScriptStruct MotionWarping.MotionWarpingWindowData
// Size: 0x10 (Inherited: 0x00)
struct FMotionWarpingWindowData {
	struct UAnimNotifyState_MotionWarping* AnimNotify; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float EndTime; // 0x0c(0x04)
};

// ScriptStruct MotionWarping.MotionWarpingTarget
// Size: 0x50 (Inherited: 0x00)
struct FMotionWarpingTarget {
	struct FTransform Transform; // 0x00(0x30)
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x30(0x08)
	struct FName BoneName; // 0x38(0x08)
	bool bFollowComponent; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct MotionWarping.MotionDeltaTrackContainer
// Size: 0x10 (Inherited: 0x00)
struct FMotionDeltaTrackContainer {
	struct TArray<struct FMotionDeltaTrack> Tracks; // 0x00(0x10)
};

// ScriptStruct MotionWarping.MotionDeltaTrack
// Size: 0x48 (Inherited: 0x00)
struct FMotionDeltaTrack {
	struct TArray<struct FTransform> BoneTransformTrack; // 0x00(0x10)
	struct TArray<struct FVector> DeltaTranslationTrack; // 0x10(0x10)
	struct TArray<struct FRotator> DeltaRotationTrack; // 0x20(0x10)
	struct FVector TotalTranslation; // 0x30(0x0c)
	struct FRotator TotalRotation; // 0x3c(0x0c)
};

