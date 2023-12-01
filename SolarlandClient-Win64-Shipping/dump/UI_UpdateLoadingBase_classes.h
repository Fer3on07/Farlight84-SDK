// WidgetBlueprintGeneratedClass UI_UpdateLoadingBase.UI_UpdateLoadingBase_C
// Size: 0x4c8 (Inherited: 0x4b0)
struct UUI_UpdateLoadingBase_C : UUI_LoadingBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UHorizontalBox* HorizontalBox_4; // 0x4b8(0x08)
	struct UCanvasPanel* Panel_Load; // 0x4c0(0x08)

	void SetPercentText(struct FText NewParam); // Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetPercentText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void SetImgBgHidden(); // Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetImgBgHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void PreConstruct(bool IsDesignTime); // Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_UI_UpdateLoadingBase(int32_t EntryPoint); // Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.ExecuteUbergraph_UI_UpdateLoadingBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0d160
};

