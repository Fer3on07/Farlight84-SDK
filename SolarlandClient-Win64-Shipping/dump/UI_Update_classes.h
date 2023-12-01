// WidgetBlueprintGeneratedClass UI_Update.UI_Update_C
// Size: 0x560 (Inherited: 0x400)
struct UUI_Update_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x408(0x08)
	struct UButton* Btn_AgeLimit; // 0x410(0x08)
	struct UButton* Btn_Fix; // 0x418(0x08)
	struct USolarButton* btn_link; // 0x420(0x08)
	struct USolarButton* btn_new; // 0x428(0x08)
	struct UButton* Btn_Notice; // 0x430(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x438(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x440(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x448(0x08)
	struct UImage* icon_link; // 0x450(0x08)
	struct UImage* Image_173; // 0x458(0x08)
	struct UImage* Img_Bg_Update; // 0x460(0x08)
	struct UImage* img_light_link; // 0x468(0x08)
	struct UImage* Img_Logo; // 0x470(0x08)
	struct UImage* img_Mask; // 0x478(0x08)
	struct UCanvasPanel* Panel_Load; // 0x480(0x08)
	struct USizeBox* Panel_ServerList; // 0x488(0x08)
	struct UProgressBar* ProgressBar_Download; // 0x490(0x08)
	struct UButton* StartGame; // 0x498(0x08)
	struct USolarTextBlock* StartGameText; // 0x4a0(0x08)
	struct USolarTextBlock* text_link; // 0x4a8(0x08)
	struct USolarTextBlock* text_new; // 0x4b0(0x08)
	struct USolarTextBlock* text_or; // 0x4b8(0x08)
	struct UTileView* TileView_ServerList; // 0x4c0(0x08)
	struct USolarTextBlock* Txt_GameInfo_CN; // 0x4c8(0x08)
	struct UTextBlock* Txt_LatestBuildNumber; // 0x4d0(0x08)
	struct USolarTextBlock* Txt_Loading_2; // 0x4d8(0x08)
	struct UTextBlock* Txt_SourceBuildNumber; // 0x4e0(0x08)
	struct USolarTextBlock* Txt_Speed; // 0x4e8(0x08)
	struct USolarTextBlock* Txt_Tips_2; // 0x4f0(0x08)
	struct UUI_UpdateLoadingBase_C* UpdateLoadingBase; // 0x4f8(0x08)
	struct UWidgetSwitcher* wgs_start; // 0x500(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x508(0x08)
	struct FSlateColor Color_hoverd; // 0x510(0x28)
	struct FSlateColor Color_default; // 0x538(0x28)

	void OnCDNDownloadFailed_1651D91B4EFEA67C47AB99B0734DF365(int32_t ErrorStep, struct FString ErrorReason, int32_t ReturnCode, struct FString URL); // DelegateFunction UI_Update.UI_Update_C.OnCDNDownloadFailed_1651D91B4EFEA67C47AB99B0734DF365 // (Public|Delegate) // @ game+0xb585d0
	void OnPatchFailed_F17A9C42438AA2182F5C8FBC4E150213(int32_t ErrorReason, int32_t ReturnCode, struct FString URL); // DelegateFunction UI_Update.UI_Update_C.OnPatchFailed_F17A9C42438AA2182F5C8FBC4E150213 // (Public|Delegate) // @ game+0xb585d0
	void OnPatchComplete_6642C0F54C88D6012F5EBAA65A3F1B30(); // DelegateFunction UI_Update.UI_Update_C.OnPatchComplete_6642C0F54C88D6012F5EBAA65A3F1B30 // (Public|Delegate) // @ game+0xb585d0
	void OnPatchPrompt_887C895E47E92C42FEA545BC795030AF(uint32_t DownloadSize, int32_t FileNum); // DelegateFunction UI_Update.UI_Update_C.OnPatchPrompt_887C895E47E92C42FEA545BC795030AF // (Public|Delegate) // @ game+0xb585d0
	void OnLoginFailed_DB5DCC4D4F0760ABCF67FD801144F91B(enum class ELLHSDKLoginType LoginType, int32_t ErrorCode); // DelegateFunction UI_Update.UI_Update_C.OnLoginFailed_DB5DCC4D4F0760ABCF67FD801144F91B // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnClicked_74D87F3044FD816DE4E33386B2F8F7A7(); // DelegateFunction UI_Update.UI_Update_C.OnClicked_74D87F3044FD816DE4E33386B2F8F7A7 // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnClicked_23D35A0F43EF6B09469380821410A971(); // DelegateFunction UI_Update.UI_Update_C.OnClicked_23D35A0F43EF6B09469380821410A971 // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnReleased_C63480024819DA35CB5B0898B20984F4(); // DelegateFunction UI_Update.UI_Update_C.OnReleased_C63480024819DA35CB5B0898B20984F4 // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnAssetManagerPreloadCompleted_DE07D0194B6595AD8B4DE3BB0F800697(); // DelegateFunction UI_Update.UI_Update_C.OnAssetManagerPreloadCompleted_DE07D0194B6595AD8B4DE3BB0F800697 // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnHandleLuaException_0C47A72A47855E2AAF3664B1F6A4A340(struct FString ErrorMsg, struct FString StaceTrace); // DelegateFunction UI_Update.UI_Update_C.OnHandleLuaException_0C47A72A47855E2AAF3664B1F6A4A340 // (MulticastDelegate|Public|Delegate) // @ game+0xb585d0
	void OnSolarUIClosed(); // Function UI_Update.UI_Update_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb66830
	void ConnectGateExecCopy(); // Function UI_Update.UI_Update_C.ConnectGateExecCopy // (BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void Destruct(); // Function UI_Update.UI_Update_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb66830
	void ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime); // Function UI_Update.UI_Update_C.ReceiveTick // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb66830
	void OnSolarUIOpened(); // Function UI_Update.UI_Update_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb66830
	struct FString GetModuleName(); // Function UI_Update.UI_Update_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d0d160
	void OnVideoReady(); // Function UI_Update.UI_Update_C.OnVideoReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void InitMedia(bool& Result); // Function UI_Update.UI_Update_C.InitMedia // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void FinishLoadLobby(int32_t Type); // Function UI_Update.UI_Update_C.FinishLoadLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void PreConstruct(bool IsDesignTime); // Function UI_Update.UI_Update_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Update.UI_Update_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void ReceiveShow(); // Function UI_Update.UI_Update_C.ReceiveShow // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void ConnectGateExec(); // Function UI_Update.UI_Update_C.ConnectGateExec // (BlueprintCallable|BlueprintEvent) // @ game+0xb66830
	void ReceiveHide(); // Function UI_Update.UI_Update_C.ReceiveHide // (Event|Protected|BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_UI_Update(int32_t EntryPoint); // Function UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0d160
};

