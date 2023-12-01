// Class WebBrowserWidget.WebBrowser
// Size: 0x1a0 (Inherited: 0x138)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x148(0x10)
	struct FMulticastInlineDelegate OnBeforeNavigation; // 0x158(0x10)
	struct TArray<struct FString> URLKeywordWithoutNavigation; // 0x168(0x10)
	struct FString InitialURL; // 0x178(0x10)
	bool bSupportsTransparency; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)

	void StopLoad(); // Function WebBrowserWidget.WebBrowser.StopLoad // (Final|Native|Public|BlueprintCallable) // @ game+0xbf0170
	void SetURLWithoutNavigation(struct TArray<struct FString>& URLs); // Function WebBrowserWidget.WebBrowser.SetURLWithoutNavigation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbf00a0
	void Reload(); // Function WebBrowserWidget.WebBrowser.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0xbf0080
	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d0d160
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void OnBeforeNavigation__DelegateSignature(struct FString URL); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL // (Final|Native|Public|BlueprintCallable) // @ game+0xbeff90
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (Final|Native|Public|BlueprintCallable) // @ game+0xbefe10
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbefd90
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbefcf0
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Final|Native|Public|BlueprintCallable) // @ game+0xbefc50
	void CloseSelf(); // Function WebBrowserWidget.WebBrowser.CloseSelf // (Final|Native|Public|BlueprintCallable) // @ game+0xbefc30
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function WebBrowserWidget.WebBrowser.BindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0xbefb00
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28(0x28)
	char pad_50[0x28]; // 0x50(0x28)
};

