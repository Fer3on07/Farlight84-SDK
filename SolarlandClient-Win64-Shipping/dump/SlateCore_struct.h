// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	Vector = 3,
	ESlateBrushImageType_MAX = 4
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	RoundedBox = 4,
	ESlateBrushDrawType_MAX = 5
};

// Enum SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8 {
	FixedRadius = 0,
	HalfHeightRadius = 1,
	ESlateBrushRoundingType_MAX = 2
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.ESlateDetailMode
enum class ESlateDetailMode : uint8 {
	Stale_Low = 0,
	Stale_Medium = 1,
	Stale_High = 2,
	Stale_MAX = 3
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x00)
struct FGeometry {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0xe0 (Inherited: 0x00)
struct FSlateBrush {
	char pad_0[0x10]; // 0x00(0x10)
	struct FVector2D ImageSize; // 0x10(0x08)
	bool bLockRatio; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D LockedSize; // 0x1c(0x08)
	bool bUsePixelMargin; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FMargin Margin; // 0x28(0x10)
	struct FSlateColor TintColor; // 0x38(0x28)
	struct FSlateBrushOutlineSettings OutlineSettings; // 0x60(0x40)
	struct UObject* ResourceObject; // 0xa0(0x08)
	struct FName ResourceName; // 0xa8(0x08)
	struct FBox2D UVRegion; // 0xb0(0x14)
	enum class ESlateBrushDrawType DrawAs; // 0xc4(0x01)
	enum class ESlateBrushTileType Tiling; // 0xc5(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0xc6(0x01)
	enum class ESlateBrushImageType ImageType; // 0xc7(0x01)
	char pad_C8[0x10]; // 0xc8(0x10)
	char bIsDynamicallyLoaded : 1; // 0xd8(0x01)
	char bHasUObject : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct SlateCore.SlateBrushOutlineSettings
// Size: 0x40 (Inherited: 0x00)
struct FSlateBrushOutlineSettings {
	struct FVector4 CornerRadii; // 0x00(0x10)
	struct FSlateColor Color; // 0x10(0x28)
	float Width; // 0x38(0x04)
	enum class ESlateBrushRoundingType RoundingType; // 0x3c(0x01)
	bool bUseBrushTransparency; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x00)
struct FInputEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : FInputEvent {
	char pad_18[0x58]; // 0x18(0x58)
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent {
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent {
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x60 (Inherited: 0x00)
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x28)
	char pad_38[0x10]; // 0x38(0x10)
	struct FName TypefaceFontName; // 0x48(0x08)
	int32_t Size; // 0x50(0x04)
	int32_t LetterSpacing; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x28 (Inherited: 0x00)
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x00(0x04)
	int32_t OutlineBlur; // 0x04(0x04)
	bool bSeparateFillAlpha; // 0x08(0x01)
	bool bApplyOutlineToDropShadows; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UObject* OutlineMaterial; // 0x10(0x08)
	struct FLinearColor OutlineColor; // 0x18(0x10)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0xca0 (Inherited: 0x08)
struct FTableRowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush SelectorFocusedBrush; // 0x10(0xe0)
	struct FSlateBrush ActiveHoveredBrush; // 0xf0(0xe0)
	struct FSlateBrush ActiveBrush; // 0x1d0(0xe0)
	struct FSlateBrush InactiveHoveredBrush; // 0x2b0(0xe0)
	struct FSlateBrush InactiveBrush; // 0x390(0xe0)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x470(0xe0)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x550(0xe0)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x630(0xe0)
	struct FSlateBrush OddRowBackgroundBrush; // 0x710(0xe0)
	struct FSlateColor TextColor; // 0x7f0(0x28)
	struct FSlateColor SelectedTextColor; // 0x818(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x840(0xe0)
	struct FSlateBrush DropIndicator_Onto; // 0x920(0xe0)
	struct FSlateBrush DropIndicator_Below; // 0xa00(0xe0)
	struct FSlateBrush ActiveHighlightedBrush; // 0xae0(0xe0)
	struct FSlateBrush InactiveHighlightedBrush; // 0xbc0(0xe0)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x620 (Inherited: 0x08)
struct FComboBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FComboButtonStyle ComboButtonStyle; // 0x10(0x5e0)
	struct FSlateSound PressedSlateSound; // 0x5f0(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x608(0x18)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x5e0 (Inherited: 0x08)
struct FComboButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle ButtonStyle; // 0x10(0x3e0)
	struct FSlateBrush DownArrowImage; // 0x3f0(0xe0)
	struct FVector2D ShadowOffset; // 0x4d0(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FSlateBrush MenuBorderBrush; // 0x4f0(0xe0)
	struct FMargin MenuBorderPadding; // 0x5d0(0x10)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x3e0 (Inherited: 0x08)
struct FButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush Normal; // 0x10(0xe0)
	struct FSlateBrush Hovered; // 0xf0(0xe0)
	struct FSlateBrush Pressed; // 0x1d0(0xe0)
	struct FSlateBrush Disabled; // 0x2b0(0xe0)
	struct FMargin NormalPadding; // 0x390(0x10)
	struct FMargin PressedPadding; // 0x3a0(0x10)
	struct FSlateSound PressedSlateSound; // 0x3b0(0x18)
	struct FSlateSound HoveredSlateSound; // 0x3c8(0x18)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x330 (Inherited: 0x08)
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x90(0xe0)
	struct FSlateBrush BackgroundImageComposing; // 0x170(0xe0)
	struct FSlateBrush CaretImage; // 0x250(0xe0)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0xc90 (Inherited: 0x08)
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImageNormal; // 0x10(0xe0)
	struct FSlateBrush BackgroundImageHovered; // 0xf0(0xe0)
	struct FSlateBrush BackgroundImageFocused; // 0x1d0(0xe0)
	struct FSlateBrush BackgroundImageReadOnly; // 0x2b0(0xe0)
	struct FMargin Padding; // 0x390(0x10)
	struct FSlateFontInfo Font; // 0x3a0(0x60)
	struct FSlateColor ForegroundColor; // 0x400(0x28)
	struct FSlateColor BackgroundColor; // 0x428(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x450(0x28)
	struct FMargin HScrollBarPadding; // 0x478(0x10)
	struct FMargin VScrollBarPadding; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)
	struct FScrollBarStyle ScrollBarStyle; // 0x4a0(0x7f0)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x7f0 (Inherited: 0x08)
struct FScrollBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HorizontalBackgroundImage; // 0x10(0xe0)
	struct FSlateBrush VerticalBackgroundImage; // 0xf0(0xe0)
	struct FSlateBrush VerticalTopSlotImage; // 0x1d0(0xe0)
	struct FSlateBrush HorizontalTopSlotImage; // 0x2b0(0xe0)
	struct FSlateBrush VerticalBottomSlotImage; // 0x390(0xe0)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x470(0xe0)
	struct FSlateBrush NormalThumbImage; // 0x550(0xe0)
	struct FSlateBrush HoveredThumbImage; // 0x630(0xe0)
	struct FSlateBrush DraggedThumbImage; // 0x710(0xe0)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x460 (Inherited: 0x08)
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FVector2D ShadowOffset; // 0x90(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x98(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xa8(0x28)
	struct FLinearColor HighlightColor; // 0xd0(0x10)
	struct FSlateBrush HighlightShape; // 0xe0(0xe0)
	struct FSlateBrush StrikeBrush; // 0x1c0(0xe0)
	struct FSlateBrush UnderlineBrush; // 0x2a0(0xe0)
	struct FSlateBrush BackgroundBrush; // 0x380(0xe0)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x4b0 (Inherited: 0x08)
struct FSpinBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundBrush; // 0x10(0xe0)
	struct FSlateBrush HoveredBackgroundBrush; // 0xf0(0xe0)
	struct FSlateBrush ActiveFillBrush; // 0x1d0(0xe0)
	struct FSlateBrush InactiveFillBrush; // 0x2b0(0xe0)
	struct FSlateBrush ArrowsImage; // 0x390(0xe0)
	struct FSlateColor ForegroundColor; // 0x470(0x28)
	struct FMargin TextPadding; // 0x498(0x10)
	char pad_4A8[0x8]; // 0x4a8(0x08)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent {
	char pad_18[0x30]; // 0x18(0x30)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x860 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle UnderlineStyle; // 0x10(0x3e0)
	struct FTextBlockStyle TextStyle; // 0x3f0(0x460)
	struct FMargin Padding; // 0x850(0x10)
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeFont {
	struct FTypeface DefaultTypeface; // 0x00(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x00)
struct FCompositeFallbackFont {
	struct FTypeface Typeface; // 0x00(0x10)
	float ScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 (Inherited: 0x00)
struct FTypefaceEntry {
	struct FName Name; // 0x00(0x08)
	struct FFontData Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x00)
struct FFontData {
	struct FString FontFilename; // 0x00(0x10)
	enum class EFontHinting Hinting; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t SubFaceIndex; // 0x14(0x04)
	struct UObject* FontFaceAsset; // 0x18(0x08)
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x08 (Inherited: 0x00)
struct FCaptureLostEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1a70 (Inherited: 0x08)
struct FWindowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle MinimizeButtonStyle; // 0x10(0x3e0)
	struct FButtonStyle MaximizeButtonStyle; // 0x3f0(0x3e0)
	struct FButtonStyle RestoreButtonStyle; // 0x7d0(0x3e0)
	struct FButtonStyle CloseButtonStyle; // 0xbb0(0x3e0)
	struct FTextBlockStyle TitleTextStyle; // 0xf90(0x460)
	struct FSlateBrush ActiveTitleBrush; // 0x13f0(0xe0)
	struct FSlateBrush InactiveTitleBrush; // 0x14d0(0xe0)
	struct FSlateBrush FlashTitleBrush; // 0x15b0(0xe0)
	struct FSlateColor BackgroundColor; // 0x1690(0x28)
	char pad_16B8[0x8]; // 0x16b8(0x08)
	struct FSlateBrush OutlineBrush; // 0x16c0(0xe0)
	struct FSlateColor OutlineColor; // 0x17a0(0x28)
	char pad_17C8[0x8]; // 0x17c8(0x08)
	struct FSlateBrush BorderBrush; // 0x17d0(0xe0)
	struct FSlateBrush BackgroundBrush; // 0x18b0(0xe0)
	struct FSlateBrush ChildBackgroundBrush; // 0x1990(0xe0)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x1d0 (Inherited: 0x08)
struct FScrollBorderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush TopShadowBrush; // 0x10(0xe0)
	struct FSlateBrush BottomShadowBrush; // 0xf0(0xe0)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x390 (Inherited: 0x08)
struct FScrollBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush TopShadowBrush; // 0x10(0xe0)
	struct FSlateBrush BottomShadowBrush; // 0xf0(0xe0)
	struct FSlateBrush LeftShadowBrush; // 0x1d0(0xe0)
	struct FSlateBrush RightShadowBrush; // 0x2b0(0xe0)
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0xb30 (Inherited: 0x08)
struct FDockTabStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle CloseButtonStyle; // 0x10(0x3e0)
	struct FSlateBrush NormalBrush; // 0x3f0(0xe0)
	struct FSlateBrush ActiveBrush; // 0x4d0(0xe0)
	struct FSlateBrush ColorOverlayTabBrush; // 0x5b0(0xe0)
	struct FSlateBrush ColorOverlayIconBrush; // 0x690(0xe0)
	struct FSlateBrush ForegroundBrush; // 0x770(0xe0)
	struct FSlateBrush HoveredBrush; // 0x850(0xe0)
	struct FSlateBrush ContentAreaBrush; // 0x930(0xe0)
	struct FSlateBrush TabWellBrush; // 0xa10(0xe0)
	struct FMargin TabPadding; // 0xaf0(0x10)
	float OverlapWidth; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct FSlateColor FlashColor; // 0xb08(0x28)
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0x12d0 (Inherited: 0x08)
struct FHeaderRowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTableColumnHeaderStyle ColumnStyle; // 0x10(0x7f0)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x800(0x7f0)
	struct FSplitterStyle ColumnSplitterStyle; // 0xff0(0x1d0)
	struct FSlateBrush BackgroundBrush; // 0x11c0(0xe0)
	struct FSlateColor ForegroundColor; // 0x12a0(0x28)
	char pad_12C8[0x8]; // 0x12c8(0x08)
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x1d0 (Inherited: 0x08)
struct FSplitterStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HandleNormalBrush; // 0x10(0xe0)
	struct FSlateBrush HandleHighlightBrush; // 0xf0(0xe0)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x7f0 (Inherited: 0x08)
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush SortPrimaryAscendingImage; // 0x10(0xe0)
	struct FSlateBrush SortPrimaryDescendingImage; // 0xf0(0xe0)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x1d0(0xe0)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x2b0(0xe0)
	struct FSlateBrush NormalBrush; // 0x390(0xe0)
	struct FSlateBrush HoveredBrush; // 0x470(0xe0)
	struct FSlateBrush MenuDropdownImage; // 0x550(0xe0)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x630(0xe0)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x710(0xe0)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0x100 (Inherited: 0x08)
struct FInlineTextImageStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush Image; // 0x10(0xe0)
	int16_t Baseline; // 0xf0(0x02)
	char pad_F2[0xe]; // 0xf2(0x0e)
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x9d0 (Inherited: 0x08)
struct FVolumeControlStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSliderStyle SliderStyle; // 0x10(0x560)
	struct FSlateBrush HighVolumeImage; // 0x570(0xe0)
	struct FSlateBrush MidVolumeImage; // 0x650(0xe0)
	struct FSlateBrush LowVolumeImage; // 0x730(0xe0)
	struct FSlateBrush NoVolumeImage; // 0x810(0xe0)
	struct FSlateBrush MutedImage; // 0x8f0(0xe0)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x560 (Inherited: 0x08)
struct FSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush NormalBarImage; // 0x10(0xe0)
	struct FSlateBrush HoveredBarImage; // 0xf0(0xe0)
	struct FSlateBrush DisabledBarImage; // 0x1d0(0xe0)
	struct FSlateBrush NormalThumbImage; // 0x2b0(0xe0)
	struct FSlateBrush HoveredThumbImage; // 0x390(0xe0)
	struct FSlateBrush DisabledThumbImage; // 0x470(0xe0)
	float BarThickness; // 0x550(0x04)
	char pad_554[0xc]; // 0x554(0x0c)
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0x10a0 (Inherited: 0x08)
struct FSearchBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FEditableTextBoxStyle TextBoxStyle; // 0x10(0xc90)
	struct FSlateFontInfo ActiveFontInfo; // 0xca0(0x60)
	struct FSlateBrush UpArrowImage; // 0xd00(0xe0)
	struct FSlateBrush DownArrowImage; // 0xde0(0xe0)
	struct FSlateBrush GlassImage; // 0xec0(0xe0)
	struct FSlateBrush ClearImage; // 0xfa0(0xe0)
	struct FMargin ImagePadding; // 0x1080(0x10)
	bool bLeftAlignButtons; // 0x1090(0x01)
	char pad_1091[0xf]; // 0x1091(0x0f)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x1e0 (Inherited: 0x08)
struct FExpandableAreaStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush CollapsedImage; // 0x10(0xe0)
	struct FSlateBrush ExpandedImage; // 0xf0(0xe0)
	float RolloutAnimationSeconds; // 0x1d0(0x04)
	char pad_1D4[0xc]; // 0x1d4(0x0c)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x2b0 (Inherited: 0x08)
struct FProgressBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImage; // 0x10(0xe0)
	struct FSlateBrush FillImage; // 0xf0(0xe0)
	struct FSlateBrush MarqueeImage; // 0x1d0(0xe0)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0x1100 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x10(0xc90)
	struct FTextBlockStyle TextStyle; // 0xca0(0x460)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x8a0 (Inherited: 0x08)
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0xe0)
	struct FSlateBrush UncheckedHoveredImage; // 0xf0(0xe0)
	struct FSlateBrush UncheckedPressedImage; // 0x1d0(0xe0)
	struct FSlateBrush CheckedImage; // 0x2b0(0xe0)
	struct FSlateBrush CheckedHoveredImage; // 0x390(0xe0)
	struct FSlateBrush CheckedPressedImage; // 0x470(0xe0)
	struct FSlateBrush UndeterminedImage; // 0x550(0xe0)
	struct FSlateBrush UndeterminedHoveredImage; // 0x630(0xe0)
	struct FSlateBrush UndeterminedPressedImage; // 0x710(0xe0)
	struct FMargin Padding; // 0x7f0(0x10)
	struct FSlateColor ForegroundColor; // 0x800(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x828(0x28)
	struct FSlateSound CheckedSlateSound; // 0x850(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x868(0x18)
	struct FSlateSound HoveredSlateSound; // 0x880(0x18)
	char pad_898[0x8]; // 0x898(0x08)
};

