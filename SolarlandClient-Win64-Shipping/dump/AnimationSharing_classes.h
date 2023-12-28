// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x290 (Inherited: 0x270)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x268(0x08)
	float PermutationTimeOffset; // 0x270(0x04)
	float PlayRate; // 0x274(0x04)
	bool bStateBool; // 0x278(0x01)
	struct UAnimSharingInstance* Instance; // 0x280(0x08)
	char pad_289[0x7]; // 0x289(0x07)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x1ca7a50
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x268(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x270(0x08)
	float BlendTime; // 0x278(0x04)
	bool bBlendBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x268(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x270(0x08)
	float Alpha; // 0x278(0x04)
	bool bStateBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x138 (Inherited: 0x28)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	char pad_38[0x70]; // 0x38(0x70)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xa8(0x08)
	char pad_B0[0x38]; // 0xb0(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct UEnum* StateEnum; // 0x108(0x08)
	struct AActor* SharingActor; // 0x110(0x08)
	char pad_118[0x20]; // 0x118(0x20)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x88 (Inherited: 0x28)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1ca7cc0
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ca7990
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ca78c0
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ca7890
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ca7b00
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0x1ca7a20
};

