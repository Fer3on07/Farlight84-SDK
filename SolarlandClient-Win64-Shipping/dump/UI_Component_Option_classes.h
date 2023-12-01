// WidgetBlueprintGeneratedClass UI_Component_Option.UI_Component_Option_C
// Size: 0x4a0 (Inherited: 0x420)
struct UUI_Component_Option_C : USolarCheckButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UCanvasPanel* Panel_Disabled; // 0x428(0x08)
	struct USolarCheckBox* SolarCheckBox_Option; // 0x430(0x08)
	struct USolarTextBlock* Txt_Option; // 0x438(0x08)
	bool UseText; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FText Text; // 0x448(0x18)
	int32_t TextID; // 0x460(0x04)
	enum class ESolarSupportLanguages TextPreviewLang; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FSlateFontSizeForLang SpecialLangFont; // 0x468(0x18)
	bool Disabled; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FMulticastInlineDelegate OnOptionCheckStateChanged; // 0x488(0x10)
	bool bCustomClicked; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	int32_t OptionType; // 0x49c(0x04)

	void OnOptionCheckStateChanged_F35B62124E9A438D8D456691E19E5E25(bool bIsChecked); // Function UI_Component_Option.UI_Component_Option_C.OnOptionCheckStateChanged_F35B62124E9A438D8D456691E19E5E25 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb585d0
	void OnListItemObjectSetCopy(struct UObject* ListItemObject); // Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSetCopy // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void OnInitialized(); // Function UI_Component_Option.UI_Component_Option_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb66830
	struct FString GetModuleName(); // Function UI_Component_Option.UI_Component_Option_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d0d160
	void SetTextID(int32_t LocTextID); // Function UI_Component_Option.UI_Component_Option_C.SetTextID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void SetText(struct FString NewParam); // Function UI_Component_Option.UI_Component_Option_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void SetEnabled(bool Enabled); // Function UI_Component_Option.UI_Component_Option_C.SetEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void SetOptionType(int32_t OptionType); // Function UI_Component_Option.UI_Component_Option_C.SetOptionType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void ManualOptionSetIsChecked(bool bIsChecked); // Function UI_Component_Option.UI_Component_Option_C.ManualOptionSetIsChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void BP_OnEntryReleased(); // Function UI_Component_Option.UI_Component_Option_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Option.UI_Component_Option_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Option.UI_Component_Option_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xb66830
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Option.UI_Component_Option_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UI_Component_Option.UI_Component_Option_C.BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void OnSelected(bool bSelected); // Function UI_Component_Option.UI_Component_Option_C.OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void SetDisbaled(bool Disabled); // Function UI_Component_Option.UI_Component_Option_C.SetDisbaled // (BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void RefreshOptionTxtUI(); // Function UI_Component_Option.UI_Component_Option_C.RefreshOptionTxtUI // (BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_UI_Component_Option(int32_t EntryPoint); // Function UI_Component_Option.UI_Component_Option_C.ExecuteUbergraph_UI_Component_Option // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0d160
	void OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked); // Function UI_Component_Option.UI_Component_Option_C.OnOptionCheckStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
};

