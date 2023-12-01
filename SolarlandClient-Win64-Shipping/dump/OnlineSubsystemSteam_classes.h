// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28 (Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1bb8 (Inherited: 0x1bb0)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1bb0(0x01)
	char pad_1BB1[0x7]; // 0x1bb1(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7d0 (Inherited: 0x7c8)
struct USteamNetDriver : UIpNetDriver {
	char pad_7C8[0x8]; // 0x7c8(0x08)
};

