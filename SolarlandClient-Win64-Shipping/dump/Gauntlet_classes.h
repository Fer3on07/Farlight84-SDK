// Class Gauntlet.GauntletTestController
// Size: 0x30 (Inherited: 0x28)
struct UGauntletTestController : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Gauntlet.GauntletTestControllerBootTest
// Size: 0x30 (Inherited: 0x30)
struct UGauntletTestControllerBootTest : UGauntletTestController {
};

// Class Gauntlet.GauntletTestControllerErrorTest
// Size: 0x50 (Inherited: 0x30)
struct UGauntletTestControllerErrorTest : UGauntletTestController {
	char pad_30[0x20]; // 0x30(0x20)
};

