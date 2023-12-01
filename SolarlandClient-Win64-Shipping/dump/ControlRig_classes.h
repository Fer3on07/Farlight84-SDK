// Class ControlRig.ControlRig
// Size: 0x360 (Inherited: 0x28)
struct UControlRig : UObject {
	char pad_28[0x4c]; // 0x28(0x4c)
	enum class ERigExecutionType ExecutionType; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct URigVM* VM; // 0x78(0x08)
	struct FRigHierarchyContainer Hierarchy; // 0x80(0x1b0)
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x230(0x28)
	char pad_258[0x10]; // 0x258(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x268(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x2b8(0x50)
	struct FControlRigDrawContainer DrawContainer; // 0x308(0x10)
	char pad_318[0x8]; // 0x318(0x08)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x320(0x08)
	char pad_328[0x38]; // 0x328(0x38)
};

// Class ControlRig.AdditiveControlRig
// Size: 0x370 (Inherited: 0x360)
struct UAdditiveControlRig : UControlRig {
	char pad_360[0x10]; // 0x360(0x10)
};

// Class ControlRig.ControlRigBindingTrack
// Size: 0x78 (Inherited: 0x78)
struct UControlRigBindingTrack : UMovieSceneSpawnTrack {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x328)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UControlRigComponent : UActorComponent {
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnPreEvaluateDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPostEvaluateDelegate; // 0xe0(0x10)
	struct UControlRig* ControlRig; // 0xf0(0x08)

	void OnPreInitialize(); // Function ControlRig.ControlRigComponent.OnPreInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x7e1650
	void OnPreEvaluate(); // Function ControlRig.ControlRigComponent.OnPreEvaluate // (Native|Event|Public|BlueprintEvent) // @ game+0xc69820
	void OnPostInitialize(); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0xc69800
	void OnPostEvaluate(); // Function ControlRig.ControlRigComponent.OnPostEvaluate // (Native|Event|Public|BlueprintEvent) // @ game+0xc697e0
	struct UControlRig* BP_GetControlRig(); // Function ControlRig.ControlRigComponent.BP_GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc697b0
};

// Class ControlRig.ControlRigGizmoLibrary
// Size: 0xe0 (Inherited: 0x28)
struct UControlRigGizmoLibrary : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigGizmoDefinition DefaultGizmo; // 0x30(0x60)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x90(0x28)
	struct FName MaterialColorParameter; // 0xb8(0x08)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x270 (Inherited: 0x270)
struct UControlRigLayerInstance : UAnimInstance {
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Class ControlRig.ControlRigSequence
// Size: 0x4f0 (Inherited: 0x498)
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x498(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x4c0(0x28)
	float LastExportedFrameRate; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
};

// Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance {
	char pad_270[0x10]; // 0x270(0x10)
};

// Class ControlRig.ControlRigSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigManipulatable
// Size: 0x28 (Inherited: 0x28)
struct UControlRigManipulatable : UInterface {
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x278 (Inherited: 0x140)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	struct UControlRig* ControlRig; // 0x140(0x08)
	struct TArray<bool> ControlsMask; // 0x148(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x158(0x04)
	bool bAdditive; // 0x15c(0x01)
	bool bApplyBoneFilter; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	struct FInputBlendPose BoneFilter; // 0x160(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x170(0xa0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x210(0x50)
	char pad_260[0x18]; // 0x260(0x18)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x80 (Inherited: 0x58)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	struct UControlRig* ControlRig; // 0x58(0x08)
	struct UMovieSceneSection* SectionToKey; // 0x60(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x08)
};

// Class ControlRig.MovieSceneControlRigSection
// Size: 0x210 (Inherited: 0x158)
struct UMovieSceneControlRigSection : UMovieSceneSubSection {
	bool bAdditive; // 0x158(0x01)
	bool bApplyBoneFilter; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FInputBlendPose BoneFilter; // 0x160(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x170(0xa0)
};

// Class ControlRig.MovieSceneControlRigTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneControlRigTrack : UMovieSceneSubTrack {
};

