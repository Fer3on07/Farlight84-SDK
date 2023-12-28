// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x730ae0
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x730a20
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xc80 (Inherited: 0xc50)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	enum class ESkeletalMeshAnimDetailMode AnimDetailMode; // 0xc48(0x01)
	char pad_C51[0x1f]; // 0xc51(0x1f)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xc70(0x01)
	char bAutoCalculateSignificance : 1; // 0xc70(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xc70(0x01)
	char pad_C70_3 : 5; // 0xc70(0x01)
	char pad_C71[0xf]; // 0xc71(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x730c80
};

