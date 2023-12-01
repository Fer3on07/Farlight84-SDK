// Class AiPal.AiPalComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UAiPalComponent : UActorComponent {

	void SetUserID(struct FString UserId); // Function AiPal.AiPalComponent.SetUserID // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8e70
	void SetThreshold(float ThresholdPer); // Function AiPal.AiPalComponent.SetThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8df0
	void SetMaxDetectTimes(int32_t DetectGap_ms); // Function AiPal.AiPalComponent.SetMaxDetectTimes // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8d60
	void SetDetectGap_ms(int32_t DetectGap_ms); // Function AiPal.AiPalComponent.SetDetectGap_ms // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8cd0
	void EndDetect(); // Function AiPal.AiPalComponent.EndDetect // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8cb0
	void Capture(); // Function AiPal.AiPalComponent.Capture // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8c90
	void BeginDetect(); // Function AiPal.AiPalComponent.BeginDetect // (Final|Native|Public|BlueprintCallable) // @ game+0xcb8c70
};

