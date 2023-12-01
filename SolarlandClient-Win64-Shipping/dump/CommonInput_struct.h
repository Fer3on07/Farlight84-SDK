// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8 {
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	ECommonInputType_MAX = 4
};

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// Size: 0x48 (Inherited: 0x00)
struct FCommonInputPlatformBaseData {
	char pad_0[0x8]; // 0x00(0x08)
	bool bSupported; // 0x08(0x01)
	enum class ECommonInputType DefaultInputType; // 0x09(0x01)
	bool bSupportsMouseAndKeyboard; // 0x0a(0x01)
	bool bSupportsGamepad; // 0x0b(0x01)
	struct FName DefaultGamepadName; // 0x0c(0x08)
	bool bCanChangeGamepadType; // 0x14(0x01)
	bool bSupportsTouch; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData; // 0x18(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x28(0x10)
	struct TArray<struct FCommonInputControllerSimpleData> ControllerSimpleData; // 0x38(0x10)
};

// ScriptStruct CommonInput.CommonInputControllerSimpleData
// Size: 0x18 (Inherited: 0x00)
struct FCommonInputControllerSimpleData {
	struct FName GamepadName; // 0x00(0x08)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x08(0x10)
};

// ScriptStruct CommonInput.InputDeviceIdentifierPair
// Size: 0x18 (Inherited: 0x00)
struct FInputDeviceIdentifierPair {
	struct FName InputDeviceName; // 0x00(0x08)
	struct FString HardwareDeviceIdentifier; // 0x08(0x10)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// Size: 0xf0 (Inherited: 0x00)
struct FCommonInputKeySetBrushConfiguration {
	struct TArray<struct FKey> Keys; // 0x00(0x10)
	struct FSlateBrush KeyBrush; // 0x10(0xe0)
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// Size: 0x100 (Inherited: 0x00)
struct FCommonInputKeyBrushConfiguration {
	struct FKey Key; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSlateBrush KeyBrush; // 0x20(0xe0)
};

