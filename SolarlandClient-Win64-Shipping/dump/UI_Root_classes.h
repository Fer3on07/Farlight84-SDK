// WidgetBlueprintGeneratedClass UI_Root.UI_Root_C
// Size: 0x494 (Inherited: 0x400)
struct UUI_Root_C : USolarUIRoot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UCanvasPanel* BattleNoticeRoot; // 0x408(0x08)
	struct UCanvasPanel* BattleRoot; // 0x410(0x08)
	struct UCanvasPanel* BattleRootGuide; // 0x418(0x08)
	struct UCanvasPanel* BattleRootOverlay; // 0x420(0x08)
	struct UCanvasPanel* CommonRoot; // 0x428(0x08)
	struct UCanvasPanel* ExternalToolsRoot; // 0x430(0x08)
	struct UCanvasPanel* Guide; // 0x438(0x08)
	struct UCanvasPanel* Loading; // 0x440(0x08)
	struct UCanvasPanel* Map; // 0x448(0x08)
	struct UCanvasPanel* MiddleRoot; // 0x450(0x08)
	struct UCanvasPanel* NoticeRoot; // 0x458(0x08)
	struct UCanvasPanel* PopRoot; // 0x460(0x08)
	struct UCanvasPanel* Reconnecting; // 0x468(0x08)
	struct UCanvasPanel* TipsRoot; // 0x470(0x08)
	struct UCanvasPanel* UnderBattleRoot; // 0x478(0x08)
	float AdapterOffsetLeft; // 0x480(0x04)
	float AdapterOffsetRight; // 0x484(0x04)
	bool EnableAutoAdaptation; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float AdapterOffsetLeftDesktop; // 0x48c(0x04)
	float AdapterOffsetRightDesktop; // 0x490(0x04)

	void Construct(); // Function UI_Root.UI_Root_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb66830
	void OnInitialized(); // Function UI_Root.UI_Root_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb66830
	struct FString GetModuleName(); // Function UI_Root.UI_Root_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d0d160
	void PreConstruct(bool IsDesignTime); // Function UI_Root.UI_Root_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d0d160
	void CustomEvent_1(struct UObject* Publisher, struct UObject* Payload, struct TArray<struct FString>& MetaData); // Function UI_Root.UI_Root_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d0d160
	void ExecuteUbergraph_UI_Root(int32_t EntryPoint); // Function UI_Root.UI_Root_C.ExecuteUbergraph_UI_Root // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d0d160
};

