// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x540 (Inherited: 0x320)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x318(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x318(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x318(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x31c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x334(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x34c(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x368(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x3b8(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x408(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x418(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x428(0x10)
	char pad_438_3 : 5; // 0x438(0x01)
	char pad_439[0x107]; // 0x439(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb5e0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb4e0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb3e0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb340
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x46bb2b0
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb180
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x46bb0f0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x46bb050
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x46bafc0
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x46baf30
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x92e240
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46bad80
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x46baa90
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x92e240
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x238 (Inherited: 0x228)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x228(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x230(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x46badb0
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x9c0 (Inherited: 0x580)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x580(0x08)
	char pad_588[0xe0]; // 0x588(0xe0)
	struct UGeometryCollection* RestCollection; // 0x668(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x670(0x10)
	bool Simulating; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x688(0x01)
	bool EnableClustering; // 0x689(0x01)
	char pad_68A[0x2]; // 0x68a(0x02)
	int32_t ClusterGroupIndex; // 0x68c(0x04)
	int32_t MaxClusterLevel; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct TArray<float> DamageThreshold; // 0x698(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	int32_t CollisionGroup; // 0x6ac(0x04)
	float CollisionSampleFraction; // 0x6b0(0x04)
	float LinearEtherDrag; // 0x6b4(0x04)
	float AngularEtherDrag; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x6c0(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x6c8(0x01)
	char pad_6C9[0x3]; // 0x6c9(0x03)
	struct FVector InitialLinearVelocity; // 0x6cc(0x0c)
	struct FVector InitialAngularVelocity; // 0x6d8(0x0c)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x6e8(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x738(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x748(0x10)
	char pad_758[0x18]; // 0x758(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x770(0x10)
	float DesiredCacheTime; // 0x780(0x04)
	bool CachePlayback; // 0x784(0x01)
	char pad_785[0x3]; // 0x785(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x788(0x10)
	bool bNotifyBreaks; // 0x798(0x01)
	bool bNotifyCollisions; // 0x799(0x01)
	char pad_79A[0x1fe]; // 0x79a(0x1fe)
	struct UBodySetup* DummyBodySetup; // 0x998(0x08)
	char pad_9A0[0x20]; // 0x9a0(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x46bb220
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d0d160
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d0d160
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x46bac00
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46bab20
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x310 (Inherited: 0x228)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x230(0x18)
	bool bDebugDrawWholeCollection; // 0x248(0x01)
	bool bDebugDrawHierarchy; // 0x249(0x01)
	bool bDebugDrawClustering; // 0x24a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x24b(0x01)
	bool bShowRigidBodyId; // 0x24c(0x01)
	bool bShowRigidBodyCollision; // 0x24d(0x01)
	bool bCollisionAtOrigin; // 0x24e(0x01)
	bool bShowRigidBodyTransform; // 0x24f(0x01)
	bool bShowRigidBodyInertia; // 0x250(0x01)
	bool bShowRigidBodyVelocity; // 0x251(0x01)
	bool bShowRigidBodyForce; // 0x252(0x01)
	bool bShowRigidBodyInfos; // 0x253(0x01)
	bool bShowTransformIndex; // 0x254(0x01)
	bool bShowTransform; // 0x255(0x01)
	bool bShowParent; // 0x256(0x01)
	bool bShowLevel; // 0x257(0x01)
	bool bShowConnectivityEdges; // 0x258(0x01)
	bool bShowGeometryIndex; // 0x259(0x01)
	bool bShowGeometryTransform; // 0x25a(0x01)
	bool bShowBoundingBox; // 0x25b(0x01)
	bool bShowFaces; // 0x25c(0x01)
	bool bShowFaceIndices; // 0x25d(0x01)
	bool bShowFaceNormals; // 0x25e(0x01)
	bool bShowSingleFace; // 0x25f(0x01)
	int32_t SingleFaceIndex; // 0x260(0x04)
	bool bShowVertices; // 0x264(0x01)
	bool bShowVertexIndices; // 0x265(0x01)
	bool bShowVertexNormals; // 0x266(0x01)
	bool bUseActiveVisualization; // 0x267(0x01)
	float PointThickness; // 0x268(0x04)
	float LineThickness; // 0x26c(0x04)
	bool bTextShadow; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float TextScale; // 0x274(0x04)
	float NormalScale; // 0x278(0x04)
	float AxisScale; // 0x27c(0x04)
	float ArrowScale; // 0x280(0x04)
	struct FColor RigidBodyIdColor; // 0x284(0x04)
	float RigidBodyTransformScale; // 0x288(0x04)
	struct FColor RigidBodyCollisionColor; // 0x28c(0x04)
	struct FColor RigidBodyInertiaColor; // 0x290(0x04)
	struct FColor RigidBodyVelocityColor; // 0x294(0x04)
	struct FColor RigidBodyForceColor; // 0x298(0x04)
	struct FColor RigidBodyInfoColor; // 0x29c(0x04)
	struct FColor TransformIndexColor; // 0x2a0(0x04)
	float TransformScale; // 0x2a4(0x04)
	struct FColor LevelColor; // 0x2a8(0x04)
	struct FColor ParentColor; // 0x2ac(0x04)
	float ConnectivityEdgeThickness; // 0x2b0(0x04)
	struct FColor GeometryIndexColor; // 0x2b4(0x04)
	float GeometryTransformScale; // 0x2b8(0x04)
	struct FColor BoundingBoxColor; // 0x2bc(0x04)
	struct FColor FaceColor; // 0x2c0(0x04)
	struct FColor FaceIndexColor; // 0x2c4(0x04)
	struct FColor FaceNormalColor; // 0x2c8(0x04)
	struct FColor SingleFaceColor; // 0x2cc(0x04)
	struct FColor VertexColor; // 0x2d0(0x04)
	struct FColor VertexIndexColor; // 0x2d4(0x04)
	struct FColor VertexNormalColor; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x2e0(0x08)
	char pad_2E8[0x28]; // 0x2e8(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t MinLevelSetResolution; // 0x44(0x04)
	int32_t MaxLevelSetResolution; // 0x48(0x04)
	int32_t MinClusterLevelSetResolution; // 0x4c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x04)
	float CollisionObjectReductionPercentage; // 0x54(0x04)
	bool bMassAsDensity; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Mass; // 0x5c(0x04)
	float MinimumMassClamp; // 0x60(0x04)
	float CollisionParticlesFraction; // 0x64(0x04)
	int32_t MaximumCollisionParticles; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xa8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2c0 (Inherited: 0x228)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x228(0x08)
	struct UMaterial* RayMarchMaterial; // 0x230(0x08)
	float SurfaceTolerance; // 0x238(0x04)
	float Isovalue; // 0x23c(0x04)
	bool Enabled; // 0x240(0x01)
	bool RenderVolumeBoundingBox; // 0x241(0x01)
	char pad_242[0x7e]; // 0x242(0x7e)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xb8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xc0(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	bool bSimulating; // 0xd0(0x01)
	bool bNotifyCollisions; // 0xd1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float Density; // 0xd4(0x04)
	float MinMass; // 0xd8(0x04)
	float MaxMass; // 0xdc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xe4(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xe8(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xec(0x04)
	int32_t MinLevelSetResolution; // 0xf0(0x04)
	int32_t MaxLevelSetResolution; // 0xf4(0x04)
	int32_t CollisionGroup; // 0xf8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FVector InitialLinearVelocity; // 0x100(0x0c)
	struct FVector InitialAngularVelocity; // 0x10c(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d0d160
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool Simulating; // 0xb8(0x01)
	bool bNotifyCollisions; // 0xb9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	float Mass; // 0xbc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xc0(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t MinLevelSetResolution; // 0xc4(0x04)
	int32_t MaxLevelSetResolution; // 0xc8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FVector InitialLinearVelocity; // 0xd0(0x0c)
	struct FVector InitialAngularVelocity; // 0xdc(0x0c)
	float DamageThreshold; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d0d160
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x46bad60
};

