// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x7309f0
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x730930
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xc50 (Inherited: 0xc20)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	enum class ESkeletalMeshAnimDetailMode AnimDetailMode; // 0xc18(0x01)
	char pad_C21[0x1f]; // 0xc21(0x1f)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xc40(0x01)
	char bAutoCalculateSignificance : 1; // 0xc40(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xc40(0x01)
	char pad_C40_3 : 5; // 0xc40(0x01)
	char pad_C41[0xf]; // 0xc41(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x730b90
};

