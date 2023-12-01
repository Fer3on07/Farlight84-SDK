// Enum WindowsDeviceProfileSelector.EWindowsDeviceLevel
enum class EWindowsDeviceLevel : uint8 {
	DeviceLevel1 = 1,
	DeviceLevel2 = 2,
	DeviceLevel3 = 3,
	DeviceLevel4 = 4,
	DeviceLevel5 = 5,
	DeviceLevel6 = 6,
	EWindowsDeviceLevel_MAX = 7
};

// ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchCPU
// Size: 0x20 (Inherited: 0x00)
struct FWIndowProfileMatchCPU {
	struct FString Profile; // 0x00(0x10)
	struct FWindowsProfileMatchItemCPU Match; // 0x10(0x10)
};

// ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemCPU
// Size: 0x10 (Inherited: 0x00)
struct FWindowsProfileMatchItemCPU {
	struct FString PrimaryCPUBrand; // 0x00(0x10)
};

// ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchGPU
// Size: 0x30 (Inherited: 0x00)
struct FWIndowProfileMatchGPU {
	struct FString Profile; // 0x00(0x10)
	struct FWindowsProfileMatchItemGPU Match; // 0x10(0x20)
};

// ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemGPU
// Size: 0x20 (Inherited: 0x00)
struct FWindowsProfileMatchItemGPU {
	struct FString PrimaryGPUBrand; // 0x00(0x10)
	struct FString GraphicsMemorySize; // 0x10(0x10)
};

