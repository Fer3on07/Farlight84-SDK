// ScriptStruct RawInput.RegisteredDeviceInfo
// Size: 0x20 (Inherited: 0x00)
struct FRegisteredDeviceInfo {
	int32_t Handle; // 0x00(0x04)
	int32_t VendorID; // 0x04(0x04)
	int32_t ProductID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DeviceName; // 0x10(0x10)
};

// ScriptStruct RawInput.RawInputDeadzoneConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRawInputDeadzoneConfiguration {
	float Deadzone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FKey> Keys; // 0x08(0x10)
};

// ScriptStruct RawInput.RawInputDeviceConfiguration
// Size: 0x40 (Inherited: 0x00)
struct FRawInputDeviceConfiguration {
	struct FString VendorID; // 0x00(0x10)
	struct FString ProductID; // 0x10(0x10)
	struct TArray<struct FRawInputDeviceAxisProperties> AxisProperties; // 0x20(0x10)
	struct TArray<struct FRawInputDeviceButtonProperties> ButtonProperties; // 0x30(0x10)
};

// ScriptStruct RawInput.RawInputDeviceButtonProperties
// Size: 0x20 (Inherited: 0x00)
struct FRawInputDeviceButtonProperties {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
};

// ScriptStruct RawInput.RawInputDeviceAxisProperties
// Size: 0x28 (Inherited: 0x00)
struct FRawInputDeviceAxisProperties {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	char bInverted : 1; // 0x20(0x01)
	char bGamepadStick : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Offset; // 0x24(0x04)
};

