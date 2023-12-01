// Enum EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8 {
	Boolean = 0,
	Axis1D = 1,
	Axis2D = 2,
	Axis3D = 3,
	EInputActionValueType_MAX = 4
};

// Enum EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8 {
	NoIssue = 0,
	ReservedByAction = 1,
	HidesExistingMapping = 2,
	HiddenByExistingMapping = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion = 16,
	ForcesTypeDemotion = 32,
	EMappingQueryIssue_MAX = 33
};

// Enum EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8 {
	Error_EnhancedInputNotEnabled = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction = 2,
	NotMappable = 3,
	MappingAvailable = 4,
	EMappingQueryResult_MAX = 5
};

// Enum EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8 {
	YXZ = 0,
	ZYX = 1,
	XZY = 2,
	YZX = 3,
	ZXY = 4,
	EInputAxisSwizzle_MAX = 5
};

// Enum EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8 {
	Standard = 0,
	UE4_BackCompat = 1,
	EFOVScalingType_MAX = 2
};

// Enum EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8 {
	Axial = 0,
	Radial = 1,
	EDeadZoneType_MAX = 2
};

// Enum EnhancedInput.EModifierExecutionPhase
enum class EModifierExecutionPhase : uint8 {
	PerInput = 0,
	FinalValue = 1,
	NumPhases = 2,
	EModifierExecutionPhase_MAX = 3
};

// Enum EnhancedInput.ETriggerTypeEx
enum class ETriggerTypeEx : uint8 {
	Explicit = 0,
	Implicit = 1,
	Blocker = 2,
	ETriggerTypeEx_MAX = 3
};

// Enum EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8 {
	None = 0,
	Started = 1,
	Ongoing = 2,
	Canceled = 3,
	Triggered = 4,
	Completed = 5,
	ETriggerEvent_MAX = 6
};

// Enum EnhancedInput.ETriggerState
enum class ETriggerState : uint8 {
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	ETriggerState_MAX = 3
};

// ScriptStruct EnhancedInput.InputActionValue
// Size: 0x10 (Inherited: 0x00)
struct FInputActionValue {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// Size: 0x48 (Inherited: 0x00)
struct FEnhancedActionKeyMapping {
	struct UInputAction* Action; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bShouldBeIgnored : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct UInputTrigger*> Triggers; // 0x28(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x38(0x10)
};

// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintEnhancedInputActionBinding {
	struct UInputAction* InputAction; // 0x00(0x08)
	enum class ETriggerEvent TriggerEvent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName FunctionNameToBind; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct EnhancedInput.InputActionInstance
// Size: 0x70 (Inherited: 0x00)
struct FInputActionInstance {
	struct UInputAction* SourceAction; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct TArray<struct UInputTrigger*> Triggers; // 0x10(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x20(0x10)
	struct TArray<struct UInputModifier*> PerInputModifiers; // 0x30(0x10)
	struct TArray<struct UInputModifier*> FinalValueModifiers; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	float ElapsedProcessedTime; // 0x60(0x04)
	float ElapsedTriggeredTime; // 0x64(0x04)
	enum class ETriggerEvent TriggerEvent; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintInputDebugKeyDelegateBinding {
	struct FInputChord InputChord; // 0x00(0x20)
	enum class EInputEvent InputKeyEvent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName FunctionNameToBind; // 0x24(0x08)
	bool bExecuteWhenPaused; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct EnhancedInput.MappingQueryIssue
// Size: 0x18 (Inherited: 0x00)
struct FMappingQueryIssue {
	enum class EMappingQueryIssue Issue; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UInputMappingContext* BlockingContext; // 0x08(0x08)
	struct UInputAction* BlockingAction; // 0x10(0x08)
};

