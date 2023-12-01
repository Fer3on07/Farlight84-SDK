// Enum SolarFramework.EScope
enum class EScope : uint8 {
	None = 0,
	Login = 1,
	Lobby = 2,
	Battle = 4,
	Settlement = 8,
	Game = 14,
	Global = 15,
	EScope_MAX = 16
};

// ScriptStruct SolarFramework.SolarConfigEntry
// Size: 0x30 (Inherited: 0x00)
struct FSolarConfigEntry {
	struct TSoftClassPtr<UObject> ContainerPath; // 0x00(0x28)
	enum class EScope Scope; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

