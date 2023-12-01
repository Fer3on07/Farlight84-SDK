// Class TemplateLoadingSystem.LoadingScreenSubsystem
// Size: 0x40 (Inherited: 0x30)
struct ULoadingScreenSubsystem : UGameInstanceSubsystem {
	struct ULoadingWidgetBase* LoadingWidget; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)

	void StopLoadingScreen(); // Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x835040
	struct ULoadingWidgetBase* StartLoadingScreen(struct ULoadingWidgetBase* InWidgetClass); // Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x834fa0
	struct ULoadingScreenSubsystem* Get(struct UObject* WorldContextObject); // Function TemplateLoadingSystem.LoadingScreenSubsystem.Get // (Final|Native|Static|Private) // @ game+0x834ed0
};

// Class TemplateLoadingSystem.LoadingWidgetBase
// Size: 0x260 (Inherited: 0x260)
struct ULoadingWidgetBase : UUserWidget {

	void LoadingStarted(); // Function TemplateLoadingSystem.LoadingWidgetBase.LoadingStarted // (Native|Event|Protected|BlueprintEvent) // @ game+0x834f80
	void LoadingFinished(); // Function TemplateLoadingSystem.LoadingWidgetBase.LoadingFinished // (Native|Event|Protected|BlueprintEvent) // @ game+0x834f60
};

