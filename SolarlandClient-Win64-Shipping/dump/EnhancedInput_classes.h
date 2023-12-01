// Class EnhancedInput.EnhancedInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class EnhancedInput.EnhancedInputActionValueBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionValueBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings; // 0x28(0x10)
};

// Class EnhancedInput.EnhancedInputComponent
// Size: 0x168 (Inherited: 0x138)
struct UEnhancedInputComponent : UInputComponent {
	char pad_138[0x30]; // 0x138(0x30)

	struct FInputActionValue GetBoundActionValue(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcb4c80
};

// Class EnhancedInput.EnhancedInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEnhancedInputLibrary : UBlueprintFunctionLibrary {

	void RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately); // Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xcb5c60
	struct FInputActionValue MakeInputActionValue(float X, float Y, float Z, struct FInputActionValue& MatchValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xcb50c0
	struct FInputActionValue GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action); // Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xcb4d20
	bool Conv_InputActionValueToBool(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xcb4be0
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xcb4b30
	struct FVector2D Conv_InputActionValueToAxis2D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xcb4a80
	float Conv_InputActionValueToAxis1D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xcb49d0
	void BreakInputActionValue(struct FInputActionValue InActionValue, float& X, float& Y, float& Z); // Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xcb4810
};

// Class EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UEnhancedInputSubsystemInterface : UInterface {

	void RequestRebuildControlMappings(bool bForceImmediately); // Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xcb5bd0
	void RemoveMappingContext(struct UInputMappingContext* MappingContext); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xcb5b40
	enum class EMappingQueryResult QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcb58c0
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcb56b0
	struct TArray<struct FKey> QueryKeysMappedToAction(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcb5540
	bool HasMappingContext(struct UInputMappingContext* MappingContext); // Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcb4f60
	void ClearAllMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xcb49b0
	void AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xcb4740
};

// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Size: 0xe0 (Inherited: 0x30)
struct UEnhancedInputLocalPlayerSubsystem : ULocalPlayerSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)
};

// Class EnhancedInput.EnhancedInputEngineSubsystem
// Size: 0xe8 (Inherited: 0x30)
struct UEnhancedInputEngineSubsystem : UEngineSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)
	struct UEnhancedPlayerInput* PlayerInput; // 0xe0(0x08)
};

// Class EnhancedInput.EnhancedPlayerInput
// Size: 0x600 (Inherited: 0x3a8)
struct UEnhancedPlayerInput : UPlayerInput {
	struct TMap<struct UInputMappingContext*, int32_t> AppliedInputContexts; // 0x3a8(0x50)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x3f8(0x10)
	char pad_408[0x50]; // 0x408(0x50)
	struct TMap<struct UInputAction*, struct FInputActionInstance> ActionInstanceData; // 0x458(0x50)
	char pad_4A8[0x158]; // 0x4a8(0x158)
};

// Class EnhancedInput.InputAction
// Size: 0x58 (Inherited: 0x30)
struct UInputAction : UDataAsset {
	bool bConsumeInput; // 0x30(0x01)
	bool bTriggerWhenPaused; // 0x31(0x01)
	bool bReserveAllMappings; // 0x32(0x01)
	enum class EInputActionValueType ValueType; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UInputTrigger*> Triggers; // 0x38(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x48(0x10)
};

// Class EnhancedInput.InputDebugKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputDebugKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings; // 0x28(0x10)
};

// Class EnhancedInput.InputMappingContext
// Size: 0x58 (Inherited: 0x30)
struct UInputMappingContext : UDataAsset {
	struct TArray<struct FEnhancedActionKeyMapping> Mappings; // 0x30(0x10)
	struct FText ContextDescription; // 0x40(0x18)

	void UnmapKey(struct UInputAction* Action, struct FKey Key); // Function EnhancedInput.InputMappingContext.UnmapKey // (Final|Native|Public|BlueprintCallable) // @ game+0xcb5dd0
	void UnmapAll(); // Function EnhancedInput.InputMappingContext.UnmapAll // (Final|Native|Public|BlueprintCallable) // @ game+0xcb5db0
	void UnmapAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAction // (Final|Native|Public|BlueprintCallable) // @ game+0xcb5d20
	struct FEnhancedActionKeyMapping MapKey(struct UInputAction* Action, struct FKey ToKey); // Function EnhancedInput.InputMappingContext.MapKey // (Final|Native|Public|BlueprintCallable) // @ game+0xcb5260
};

// Class EnhancedInput.InputModifier
// Size: 0x28 (Inherited: 0x28)
struct UInputModifier : UObject {

	struct FInputActionValue ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime); // Function EnhancedInput.InputModifier.ModifyRaw // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xcb53d0
	struct FLinearColor GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue); // Function EnhancedInput.InputModifier.GetVisualizationColor // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0xcb4e30
	enum class EModifierExecutionPhase GetExecutionPhase(); // Function EnhancedInput.InputModifier.GetExecutionPhase // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xcb4e00
};

// Class EnhancedInput.InputModifierDeadZone
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierDeadZone : UInputModifier {
	float LowerThreshold; // 0x28(0x04)
	float UpperThreshold; // 0x2c(0x04)
	enum class EDeadZoneType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class EnhancedInput.InputModifierScalar
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierScalar : UInputModifier {
	struct FVector Scalar; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class EnhancedInput.InputModifierNegate
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierNegate : UInputModifier {
	bool bX; // 0x28(0x01)
	bool bY; // 0x29(0x01)
	bool bZ; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class EnhancedInput.InputModifierSmooth
// Size: 0x48 (Inherited: 0x28)
struct UInputModifierSmooth : UInputModifier {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class EnhancedInput.InputModifierResponseCurveExponential
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierResponseCurveExponential : UInputModifier {
	struct FVector CurveExponent; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class EnhancedInput.InputModifierResponseCurveUser
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierResponseCurveUser : UInputModifier {
	struct UCurveFloat* ResponseX; // 0x28(0x08)
	struct UCurveFloat* ResponseY; // 0x30(0x08)
	struct UCurveFloat* ResponseZ; // 0x38(0x08)
};

// Class EnhancedInput.InputModifierFOVScaling
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierFOVScaling : UInputModifier {
	float FOVScale; // 0x28(0x04)
	enum class EFOVScalingType FOVScalingType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class EnhancedInput.InputModifierToWorldSpace
// Size: 0x28 (Inherited: 0x28)
struct UInputModifierToWorldSpace : UInputModifier {
};

// Class EnhancedInput.InputModifierSwizzleAxis
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierSwizzleAxis : UInputModifier {
	enum class EInputAxisSwizzle Order; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class EnhancedInput.InputModifierCollection
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierCollection : UInputModifier {
	struct TArray<struct UInputModifier*> Modifiers; // 0x28(0x10)
	bool bPermitValueTypeModification; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class EnhancedInput.InputTrigger
// Size: 0x40 (Inherited: 0x28)
struct UInputTrigger : UObject {
	float ActuationThreshold; // 0x28(0x04)
	struct FInputActionValue LastValue; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)

	enum class ETriggerState UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime); // Function EnhancedInput.InputTrigger.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xcb5f00
	bool IsActuated(struct FInputActionValue& ForValue); // Function EnhancedInput.InputTrigger.IsActuated // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xcb5000
	enum class ETriggerTypeEx GetTriggerType(); // Function EnhancedInput.InputTrigger.GetTriggerType // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x903e90
};

// Class EnhancedInput.InputTriggerTimedBase
// Size: 0x48 (Inherited: 0x40)
struct UInputTriggerTimedBase : UInputTrigger {
	float HeldDuration; // 0x40(0x04)
	bool bAffectedByTimeDilation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class EnhancedInput.InputTriggerDown
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerDown : UInputTrigger {
};

// Class EnhancedInput.InputTriggerPressed
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerPressed : UInputTrigger {
};

// Class EnhancedInput.InputTriggerReleased
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerReleased : UInputTrigger {
};

// Class EnhancedInput.InputTriggerHold
// Size: 0x58 (Inherited: 0x48)
struct UInputTriggerHold : UInputTriggerTimedBase {
	char pad_48[0x4]; // 0x48(0x04)
	float HoldTimeThreshold; // 0x4c(0x04)
	bool bIsOneShot; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class EnhancedInput.InputTriggerHoldAndRelease
// Size: 0x50 (Inherited: 0x48)
struct UInputTriggerHoldAndRelease : UInputTriggerTimedBase {
	float HoldTimeThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class EnhancedInput.InputTriggerTap
// Size: 0x50 (Inherited: 0x48)
struct UInputTriggerTap : UInputTriggerTimedBase {
	float TapReleaseTimeThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class EnhancedInput.InputTriggerPulse
// Size: 0x58 (Inherited: 0x48)
struct UInputTriggerPulse : UInputTriggerTimedBase {
	char pad_48[0x4]; // 0x48(0x04)
	bool bTriggerOnStart; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float Interval; // 0x50(0x04)
	int32_t TriggerLimit; // 0x54(0x04)
};

// Class EnhancedInput.InputTriggerChordAction
// Size: 0x48 (Inherited: 0x40)
struct UInputTriggerChordAction : UInputTrigger {
	struct UInputAction* ChordAction; // 0x40(0x08)
};

// Class EnhancedInput.InputTriggerChordBlocker
// Size: 0x48 (Inherited: 0x48)
struct UInputTriggerChordBlocker : UInputTriggerChordAction {
};

