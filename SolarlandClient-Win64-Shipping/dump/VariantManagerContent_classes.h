// Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; // 0x28(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x938530
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x938490
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x938110
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x240 (Inherited: 0x228)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x228(0x18)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // @ game+0x938970
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x9388a0
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x9387f0
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x938040
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1b8 (Inherited: 0x28)
struct UPropertyValue : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xa8(0x10)
	struct FString FullDisplayString; // 0xb8(0x10)
	struct FName PropertySetterName; // 0xc8(0x08)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd0(0x50)
	bool bHasRecordedData; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UObject* LeafPropertyClass; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<char> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x01)
	char pad_149[0x6f]; // 0x149(0x6f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x938630
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9381f0
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x938000
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x250 (Inherited: 0x228)
struct ASwitchActor : AActor {
	char pad_228[0x18]; // 0x228(0x18)
	struct USceneComponent* SceneComponent; // 0x240(0x08)
	int32_t LastSelectedOption; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // @ game+0x938690
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x938290
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x938170
};

// Class VariantManagerContent.Variant
// Size: 0x70 (Inherited: 0x28)
struct UVariant : UObject {
	struct FText DisplayText; // 0x28(0x18)
	char pad_40[0x18]; // 0x40(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
	struct UTexture2D* Thumbnail; // 0x68(0x08)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // @ game+0x938880
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x938720
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x938660
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x9382c0
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x9380e0
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x937f60
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x937ec0
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x70 (Inherited: 0x28)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x28(0x18)
	char pad_40[0x18]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x938720
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x938390
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x9382f0
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x938140
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x937f60
};

