// WidgetBlueprintGeneratedClass CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C
// Size: 0x520 (Inherited: 0x400)
struct UCommonTwiceConfirmWindow_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x408(0x08)
	struct UBackgroundBlur* BlurMask; // 0x410(0x08)
	struct UUI_Component_Btn_C* CancleBtn; // 0x418(0x08)
	struct USolarTextBlock* CancleBtnText; // 0x420(0x08)
	struct UTextBlock* CancleText; // 0x428(0x08)
	struct UImage* CancleTextBG; // 0x430(0x08)
	struct UUI_Component_Close_C* CloseBtn; // 0x438(0x08)
	struct UUI_Component_Btn_C* ConfirmBtn; // 0x440(0x08)
	struct USolarTextBlock* ConfirmBtnText; // 0x448(0x08)
	struct UTextBlock* ConfirmText; // 0x450(0x08)
	struct UImage* ConfirmTextBG; // 0x458(0x08)
	struct URichTextBlock* Context; // 0x460(0x08)
	struct UEditableText* EditableText; // 0x468(0x08)
	struct UImage* Img_Bg; // 0x470(0x08)
	struct UImage* Img_Frame; // 0x478(0x08)
	struct UImage* Mask; // 0x480(0x08)
	struct UCanvasPanel* Panel_Enter; // 0x488(0x08)
	struct UScaleBox* ScaleBox; // 0x490(0x08)
	struct USolarTextBlock* Title; // 0x498(0x08)
	struct UUI_Component_Option_C* UI_Option; // 0x4a0(0x08)
	struct UUI_Option_C* UI_Option1; // 0x4a8(0x08)
	struct FSlateColor HiddenColor; // 0x4b0(0x28)
	struct FSlateColor VisibleColor; // 0x4d8(0x28)
	struct FMulticastInlineDelegate ConfirmClicked; // 0x500(0x10)
	struct FMulticastInlineDelegate CancelClicked; // 0x510(0x10)

	void OnClicked_E4FB612846B561B3E09DBDB70FDE25AD(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnClicked_E4FB612846B561B3E09DBDB70FDE25AD // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb585d0
	void OnClicked_49E9870B4100048E37A2B3AABD3580AE(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnClicked_49E9870B4100048E37A2B3AABD3580AE // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb585d0
	struct FEventReply OnMouseButtonDownEvent_438D6A7A4A3F02E04AADFFB1E8CE531B(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnMouseButtonDownEvent_438D6A7A4A3F02E04AADFFB1E8CE531B // (Public|Delegate|HasOutParms) // @ game+0xb585d0
	void OnClicked_B20B7E774349BE3CE8F03E8096C82980(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnClicked_B20B7E774349BE3CE8F03E8096C82980 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb585d0
	void OnSolarUIClosed(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb66830
	void OnBackKey(enum class EWidgetBackKeyType BackKeyType); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnBackKey // (Native|Event|Protected|BlueprintEvent) // @ game+0xb66830
	void OnSolarUIOpened(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb66830
	struct FString GetModuleName(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d0d160
	void PreConstruct(bool IsDesignTime); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void Construct(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_CommonTwiceConfirmWindow(int32_t EntryPoint); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ExecuteUbergraph_CommonTwiceConfirmWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0d160
	void CancelClicked__DelegateSignature(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.CancelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void ConfirmClicked__DelegateSignature(); // Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ConfirmClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
};

