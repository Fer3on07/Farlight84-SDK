// Class RichtapTools.RichtapController
// Size: 0xc0 (Inherited: 0x28)
struct URichtapController : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct TMap<struct FString, struct URichtapClip*> HeDataMap; // 0x70(0x50)

	void SetRichtapEnable(bool On); // Function RichtapTools.RichtapController.SetRichtapEnable // (Final|Native|Public) // @ game+0xb70340
	void SetEnableWinRichtap(bool bIsEnableWinRichtap); // Function RichtapTools.RichtapController.SetEnableWinRichtap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb702c0
	void SetEnableRichtap(bool bIsEnableRichtap); // Function RichtapTools.RichtapController.SetEnableRichtap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb70240
};

