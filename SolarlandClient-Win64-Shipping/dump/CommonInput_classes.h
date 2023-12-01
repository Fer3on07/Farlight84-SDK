// Class CommonInput.CommonUIInputData
// Size: 0x48 (Inherited: 0x28)
struct UCommonUIInputData : UObject {
	struct FDataTableRowHandle DefaultClickAction; // 0x28(0x10)
	struct FDataTableRowHandle DefaultBackAction; // 0x38(0x10)
};

// Class CommonInput.CommonInputBaseControllerData
// Size: 0x100 (Inherited: 0x28)
struct UCommonInputBaseControllerData : UObject {
	enum class ECommonInputType InputType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName GamepadName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText GamepadDisplayName; // 0x38(0x18)
	struct FText GamepadCategory; // 0x50(0x18)
	struct FText GamepadPlatformName; // 0x68(0x18)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x80(0x10)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture; // 0x90(0x28)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture; // 0xb8(0x28)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xe0(0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0xf0(0x10)

	struct TArray<struct FName> GetRegisteredGamepads(); // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads // (Final|Native|Static|Public) // @ game+0xbed150
};

// Class CommonInput.CommonInputSettings
// Size: 0x110 (Inherited: 0x28)
struct UCommonInputSettings : UObject {
	struct TSoftClassPtr<UObject> InputData; // 0x28(0x28)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x50(0x50)
	bool bEnableInputMethodThrashingProtection; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t InputMethodThrashingLimit; // 0xa4(0x04)
	double InputMethodThrashingWindowInSeconds; // 0xa8(0x08)
	double InputMethodThrashingCooldownInSeconds; // 0xb0(0x08)
	bool bAllowOutOfFocusDeviceInput; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UCommonUIInputData* InputDataClass; // 0xc0(0x08)
	struct FCommonInputPlatformBaseData CurrentPlatform; // 0xc8(0x48)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonInput.CommonInputSettings.GetRegisteredPlatforms // (Final|Native|Static|Private) // @ game+0xbed190
};

// Class CommonInput.CommonInputSubsystem
// Size: 0xf8 (Inherited: 0x30)
struct UCommonInputSubsystem : ULocalPlayerSubsystem {
	char pad_30[0x20]; // 0x30(0x20)
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x50(0x10)
	int32_t NumberOfInputMethodChangesRecently; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	double LastInputMethodChangeTime; // 0x68(0x08)
	double LastTimeInputMethodThrashingBegan; // 0x70(0x08)
	enum class ECommonInputType LastInputType; // 0x78(0x01)
	enum class ECommonInputType CurrentInputType; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FName GamepadInputType; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct TMap<struct FName, enum class ECommonInputType> CurrentInputLocks; // 0x88(0x50)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bIsGamepadSimulatedClick; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	bool ShouldShowInputKeys(); // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed440
	void SetGamepadInputType(struct FName InGamepadInputType); // Function CommonInput.CommonInputSubsystem.SetGamepadInputType // (Final|Native|Public|BlueprintCallable) // @ game+0xbed3b0
	bool SetCurrentInputType(enum class ECommonInputType NewInputType); // Function CommonInput.CommonInputSubsystem.SetCurrentInputType // (Final|Native|Public|BlueprintCallable) // @ game+0xbed320
	void SetCanChangeInputMethod(bool bCanChange); // Function CommonInput.CommonInputSubsystem.SetCanChangeInputMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xbed290
	bool IsUsingPointerInput(); // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed260
	bool IsInputMethodActive(enum class ECommonInputType InputMethod); // Function CommonInput.CommonInputSubsystem.IsInputMethodActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed1d0
	enum class ECommonInputType GetDefaultInputType(); // Function CommonInput.CommonInputSubsystem.GetDefaultInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed120
	enum class ECommonInputType GetCurrentInputType(); // Function CommonInput.CommonInputSubsystem.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed0f0
	struct FName GetCurrentGamepadName(); // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbed0b0
};

