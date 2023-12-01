// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4697020
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2b0 (Inherited: 0x228)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x228(0x04)
	int32_t CollisionIterations; // 0x22c(0x04)
	int32_t PushOutIterations; // 0x230(0x04)
	int32_t PushOutPairIterations; // 0x234(0x04)
	float ClusterConnectionFactor; // 0x238(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x23c(0x01)
	bool DoGenerateCollisionData; // 0x23d(0x01)
	char pad_23E[0x2]; // 0x23e(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x240(0x10)
	bool DoGenerateBreakingData; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x254(0x10)
	bool DoGenerateTrailingData; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x268(0x10)
	bool bHasFloor; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float FloorHeight; // 0x27c(0x04)
	float MassScale; // 0x280(0x04)
	bool bGenerateContactGraph; // 0x284(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x285(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x288(0x08)
	char pad_290[0x18]; // 0x290(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2a8(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x4697130
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x4697110
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

