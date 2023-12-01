// Class RawInput.RawInputFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URawInputFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FRegisteredDeviceInfo> GetRegisteredDevices(); // Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbfa7a0
};

// Class RawInput.RawInputSettings
// Size: 0x98 (Inherited: 0x38)
struct URawInputSettings : UDeveloperSettings {
	struct TArray<struct FRawInputDeviceConfiguration> DeviceConfigurations; // 0x38(0x10)
	bool bRegisterDefaultDevice; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FRawInputDeadzoneConfiguration LeftStickDeadzone; // 0x50(0x18)
	struct FRawInputDeadzoneConfiguration RightStickDeadzone; // 0x68(0x18)
	struct FRawInputDeadzoneConfiguration TriggerDeadzone; // 0x80(0x18)
};

