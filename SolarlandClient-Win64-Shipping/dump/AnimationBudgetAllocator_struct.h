// Enum AnimationBudgetAllocator.ESkeletalMeshAnimDetailMode
enum class ESkeletalMeshAnimDetailMode : uint8 {
	SMADM_Low = 0,
	SMADM_Medium = 1,
	SMADM_High = 2,
	SMADM_MAX = 3
};

// ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Size: 0x54 (Inherited: 0x00)
struct FAnimationBudgetAllocatorParameters {
	float BudgetInMs; // 0x00(0x04)
	float MinQuality; // 0x04(0x04)
	int32_t MaxTickRate; // 0x08(0x04)
	float WorkUnitSmoothingSpeed; // 0x0c(0x04)
	float AlwaysTickFalloffAggression; // 0x10(0x04)
	float InterpolationFalloffAggression; // 0x14(0x04)
	int32_t InterpolationMaxRate; // 0x18(0x04)
	int32_t MaxInterpolatedComponents; // 0x1c(0x04)
	float InterpolationTickMultiplier; // 0x20(0x04)
	float InitialEstimatedWorkUnitTimeMs; // 0x24(0x04)
	int32_t MaxTickedOffsreenComponents; // 0x28(0x04)
	int32_t StateChangeThrottleInFrames; // 0x2c(0x04)
	float BudgetFactorBeforeReducedWork; // 0x30(0x04)
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34(0x04)
	float BudgetPressureSmoothingSpeed; // 0x38(0x04)
	int32_t ReducedWorkThrottleMinInFrames; // 0x3c(0x04)
	int32_t ReducedWorkThrottleMaxInFrames; // 0x40(0x04)
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44(0x04)
	int32_t ReducedWorkThrottleMaxPerFrame; // 0x48(0x04)
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4c(0x04)
	float AlwaysTickSignificanceThreshold; // 0x50(0x04)
};

