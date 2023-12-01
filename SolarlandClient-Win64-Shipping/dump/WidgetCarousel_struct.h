// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xc90 (Inherited: 0x08)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HighlightBrush; // 0x10(0xe0)
	struct FButtonStyle LeftButtonStyle; // 0xf0(0x3e0)
	struct FButtonStyle CenterButtonStyle; // 0x4d0(0x3e0)
	struct FButtonStyle RightButtonStyle; // 0x8b0(0x3e0)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x5b0 (Inherited: 0x08)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle InnerButtonStyle; // 0x10(0x3e0)
	struct FSlateBrush NavigationButtonLeftImage; // 0x3f0(0xe0)
	struct FSlateBrush NavigationButtonRightImage; // 0x4d0(0xe0)
};

