// Class AkAudio.AkPortalComponent
// Size: 0x3e0 (Inherited: 0x320)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x318(0x01)
	enum class AkAcousticPortalState InitialState; // 0x319(0x01)
	float ObstructionRefreshInterval; // 0x31c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x320(0x01)
	char pad_327[0xb9]; // 0x327(0xb9)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed8a0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1bed880
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed740
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed650
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1bed4f0
};

// Class AkAudio.AkAcousticPortal
// Size: 0x270 (Inherited: 0x260)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x260(0x08)
	enum class AkAcousticPortalState InitialState; // 0x268(0x01)
	bool bRequiresStateMigration; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1bed860
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed620
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1bed4d0
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x330 (Inherited: 0x320)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_320[0x10]; // 0x320(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x268 (Inherited: 0x228)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x228(0x08)
	struct UAkComponent* AkComponent; // 0x230(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x238(0x01)
	bool AutoPost; // 0x239(0x01)
	char pad_23A[0x2e]; // 0x23a(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1beea30
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1beea10
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x60 (Inherited: 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x04)
	char pad_2C[0x34]; // 0x2c(0x34)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x70 (Inherited: 0x60)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x60(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x50 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AkAudio.AkAudioBank
// Size: 0x128 (Inherited: 0x50)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xa8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8(0x08)
	char pad_100[0x28]; // 0x100(0x28)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0x88 (Inherited: 0x70)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x70(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x80(0x08)
};

// Class AkAudio.AkAudioEventData
// Size: 0x250 (Inherited: 0x88)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0x88(0x04)
	bool IsInfinite; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float MinimumDuration; // 0x90(0x04)
	float MaximumDuration; // 0x94(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x98(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0xe8(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x138(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x188(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x1d8(0x50)
	char pad_228[0x28]; // 0x228(0x28)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe0 (Inherited: 0x50)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0(0x08)
	float MaxAttenuationRadius; // 0xb8(0x04)
	bool IsInfinite; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float MinimumDuration; // 0xc0(0x04)
	float MaximumDuration; // 0xc4(0x04)
	char pad_C8[0x18]; // 0xc8(0x18)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed710
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed6e0
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed6b0
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed680
};

// Class AkAudio.AkGameObject
// Size: 0x340 (Inherited: 0x320)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x318(0x08)
	struct FString EventName; // 0x320(0x10)
	char pad_338[0x8]; // 0x338(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bf68c0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x1bf5010
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf34e0
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf3340
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf2b70
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf2940
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bf13f0
};

// Class AkAudio.AkComponent
// Size: 0x520 (Inherited: 0x340)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x338(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x340(0x01)
	char pad_342[0x2]; // 0x342(0x02)
	char EnableSpotReflectors : 1; // 0x344(0x01)
	char pad_344_1 : 7; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float OuterRadius; // 0x348(0x04)
	float InnerRadius; // 0x34c(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x350(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x358(0x10)
	int32_t EarlyReflectionOrder; // 0x368(0x04)
	float EarlyReflectionBusSendGain; // 0x36c(0x04)
	float EarlyReflectionMaxPathLength; // 0x370(0x04)
	float roomReverbAuxBusGain; // 0x374(0x04)
	int32_t diffractionMaxEdges; // 0x378(0x04)
	int32_t diffractionMaxPaths; // 0x37c(0x04)
	float diffractionMaxPathLength; // 0x380(0x04)
	char DrawFirstOrderReflections : 1; // 0x384(0x01)
	char DrawSecondOrderReflections : 1; // 0x384(0x01)
	char DrawHigherOrderReflections : 1; // 0x384(0x01)
	char DrawDiffraction : 1; // 0x384(0x01)
	char pad_384_4 : 4; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	bool StopWhenOwnerDestroyed; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float AttenuationScalingFactor; // 0x38c(0x04)
	float OcclusionRefreshInterval; // 0x390(0x04)
	bool bUseReverbVolumes; // 0x394(0x01)
	char pad_395[0x16b]; // 0x395(0x16b)
	bool bIsInDoor; // 0x500(0x01)
	bool AutoUpdatePosition; // 0x501(0x01)
	bool EnableOccObsRTPC; // 0x502(0x01)
	bool AutoPostEvent; // 0x503(0x01)
	float DistanceToListener; // 0x504(0x04)
	bool IsListeningToSelf; // 0x508(0x01)
	char pad_509[0x17]; // 0x509(0x17)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1beec40
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x1beea50
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee860
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee7d0
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee750
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bee6a0
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1bee540
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee4c0
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee420
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee320
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee0b0
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bedee0
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bedd70
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bedcc0
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bedaf0
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bed900
	struct UAkRoomComponent* GetCurrentRoom(); // Function AkAudio.AkComponent.GetCurrentRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed600
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed5a0
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x550 (Inherited: 0x520)
struct UAkAudioInputComponent : UAkComponent {
	char pad_520[0x30]; // 0x520(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1bee080
};

// Class AkAudio.AkAuxBus
// Size: 0x58 (Inherited: 0x50)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x50(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xe30 (Inherited: 0x150)
struct UAkCheckBox : UContentWidget {
	char pad_150[0x348]; // 0x150(0x348)
	enum class ECheckBoxState CheckedState; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	struct FDelegate CheckedStateDelegate; // 0x49c(0x10)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x4b0(0x8a0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xd50(0x01)
	bool IsFocusable; // 0xd51(0x01)
	char pad_D52[0x6]; // 0xd52(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xd58(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xd68(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xda8(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xdb8(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xdc8(0x10)
	char pad_DD8[0x58]; // 0xdd8(0x58)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x1bee610
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x1bee3a0
	void SetAkItemId(struct FGuid& ItemID); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1bee280
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1bee1e0
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed7a0
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed770
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed5d0
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed550
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1bed510
};

// Class AkAudio.DrawPortalComponent
// Size: 0x580 (Inherited: 0x580)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x580 (Inherited: 0x580)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkFolder
// Size: 0xb8 (Inherited: 0x40)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	char pad_60[0x58]; // 0x60(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void WakeupFromSuspend(); // Function AkAudio.AkGameplayStatics.WakeupFromSuspend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf7900
	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf7830
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf7610
	void UpdatePostedEventMultiPositions(struct UAkComponent* AkComponent, struct TArray<struct FTransform>& Positions); // Function AkAudio.AkGameplayStatics.UpdatePostedEventMultiPositions // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf7530
	void UpdateDopplerEffectDatas(struct AActor* SoundingObj, struct FVector SoundingObjPos, struct FVector ListeningObjPos); // Function AkAudio.AkGameplayStatics.UpdateDopplerEffectDatas // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf7410
	void UnloadBankByNameAsync(struct FString BankName, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankByNameAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf7320
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf7290
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf71b0
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf7040
	void Suspend(bool in_bRenderAnyway); // Function AkAudio.AkGameplayStatics.Suspend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6fc0
	int32_t StopSoundOnComponentbyname(struct FString SoundName, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.StopSoundOnComponentbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6d60
	int32_t StopSoundOnComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.StopSoundOnComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6c90
	int32_t StopSoundbyname(struct FString SoundName, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopSoundbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6e90
	int32_t StopSound2Dbyname(struct FString SoundName); // Function AkAudio.AkGameplayStatics.StopSound2Dbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6ad0
	int32_t StopSound2D(struct UAkAudioEvent* AkEvent); // Function AkAudio.AkGameplayStatics.StopSound2D // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6a40
	int32_t StopSound(struct UAkAudioEvent* AkEvent, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopSound // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6bc0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6a20
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6a00
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6980
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6960
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf68e0
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6830
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf67a0
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6720
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf64e0
	void SetSwitchToListenerbyname(struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchToListenerbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf61d0
	void SetSwitchToListener(struct UAkSwitchValue* SwitchValue); // Function AkAudio.AkGameplayStatics.SetSwitchToListener // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6150
	void SetSwitchToComponentbyname(struct UActorComponent* Component, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchToComponentbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5fb0
	void SetSwitchToComponent(struct UAkSwitchValue* SwitchValue, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetSwitchToComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5ef0
	void SetSwitchbyname(struct AActor* Actor, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitchbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf6340
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5da0
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5ca0
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf5b50
	void SetRTPCValueToListenerbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs); // Function AkAudio.AkGameplayStatics.SetRTPCValueToListenerbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5760
	void SetRTPCValueToListener(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs); // Function AkAudio.AkGameplayStatics.SetRTPCValueToListener // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5650
	void SetRTPCValueToComponentbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetRTPCValueToComponentbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf54a0
	void SetRTPCValueToComponent(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component); // Function AkAudio.AkGameplayStatics.SetRTPCValueToComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5350
	void SetRTPCValuebyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetRTPCValuebyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf58e0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf51c0
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf5a90
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4f00
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4e00
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4d90
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4cd0
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4c50
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4b90
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4a30
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4840
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4650
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4540
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf4450
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4300
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4230
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf4190
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf4090
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf3f70
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf3d80
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf3c10
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf3a50
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf3760
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf30e0
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf2e30
	int32_t PlaySoundToComponentbyname(struct FString SoundName, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundToComponentbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf2640
	int32_t PlaySoundToComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundToComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf2540
	int32_t PlaySoundbyname(struct FString SoundName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySoundbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf27c0
	int32_t PlaySoundAtLocationbyname(struct FString SoundName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PlaySoundAtLocationbyname // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf23c0
	int32_t PlaySoundAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PlaySoundAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf2240
	int32_t PlaySound2Dbyname(struct FString SoundName, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound2Dbyname // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf2010
	int32_t PlaySound2D(struct UAkAudioEvent* AkEvent, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound2D // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1f40
	int32_t PlaySound(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PlaySound // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf2140
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1f20
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf1e30
	void LoadBankByNameAsync(struct FString BankName, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankByNameAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf1d40
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1cb0
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf1bd0
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1a60
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf19d0
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x95abd0
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf1870
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf1640
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf13c0
	float GetDopplerEffectDatas(struct AActor* SoundingObj, struct FVector SoundingObjPos, struct FVector ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime); // Function AkAudio.AkGameplayStatics.GetDopplerEffectDatas // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf11d0
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1150
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf1070
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0e00
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1bf0ed0
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0e00
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0cc0
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0af0
	void ClearDopplerEffectDatas(struct AActor* SoundingObj); // Function AkAudio.AkGameplayStatics.ClearDopplerEffectDatas // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0a70
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0a50
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1bf09b0
	void ApplyDopplerEffectDatas(struct AActor* SoundingObj, struct FVector ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime); // Function AkAudio.AkGameplayStatics.ApplyDopplerEffectDatas // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1bf0800
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1bf0770
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x10]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfc0e0
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfc030
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbf80
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbed0
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbe20
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbd70
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbcc0
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbc10
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfbbe0
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1bfbb30
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x4c0 (Inherited: 0x330)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t LOD; // 0x334(0x04)
	float WeldingThreshold; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x340(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x390(0x18)
	char bEnableDiffraction : 1; // 0x3a8(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x3a8(0x01)
	char pad_3A8_2 : 6; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct AActor* AssociatedRoom; // 0x3b0(0x08)
	char pad_3B8[0x10]; // 0x3b8(0x10)
	struct FAkGeometryData GeometryData; // 0x3c8(0x50)
	struct TMap<int32_t, float> SurfaceAreas; // 0x418(0x50)
	char pad_468[0x58]; // 0x468(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfc150
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfc130
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfc110
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfbb10
};

// Class AkAudio.AkGroupValue
// Size: 0x68 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x80 (Inherited: 0x70)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x70(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x70 (Inherited: 0x50)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c000d0
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bfffe0
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x178 (Inherited: 0x138)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1c00730
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00310
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00290
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c000d0
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bfffe0
};

// Class AkAudio.AkItemProperties
// Size: 0x178 (Inherited: 0x138)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1c00730
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00390
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00290
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x3a0 (Inherited: 0x320)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x318(0x01)
	float SendLevel; // 0x31c(0x04)
	float FadeRate; // 0x320(0x04)
	float Priority; // 0x324(0x04)
	bool AutoAssignAuxBus; // 0x328(0x01)
	char pad_32D_1 : 7; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct UAkAuxBus* AuxBus; // 0x330(0x08)
	struct FString AuxBusName; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x350(0x08)
	char pad_358[0x48]; // 0x358(0x48)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfff50
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x60 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
	char pad_2A[0x36]; // 0x2a(0x36)
};

// Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x04)
	bool AutoLoad; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x58 (Inherited: 0x58)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xb8 (Inherited: 0x58)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_58[0x60]; // 0x58(0x60)
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1c00440
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x298 (Inherited: 0x260)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x260(0x01)
	char pad_260_1 : 7; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UAkAuxBus* AuxBus; // 0x268(0x08)
	struct FString AuxBusName; // 0x270(0x10)
	float SendLevel; // 0x280(0x04)
	float FadeRate; // 0x284(0x04)
	float Priority; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x290(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x370 (Inherited: 0x340)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x338(0x01)
	bool bDynamic; // 0x33c(0x01)
	float Priority; // 0x340(0x04)
	float WallOcclusion; // 0x344(0x04)
	float AuxSendLevel; // 0x348(0x04)
	bool AutoPost; // 0x34c(0x01)
	char pad_34E_1 : 7; // 0x34e(0x01)
	char pad_34F[0x9]; // 0x34f(0x09)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00260
};

// Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x2b8 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	float GlobalDecayAbsorption; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xd8(0x50)
	struct FString HFDampingName; // 0x128(0x10)
	struct FString DecayEstimateName; // 0x138(0x10)
	struct FString TimeToFirstReflectionName; // 0x148(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x158(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x180(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1a8(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1d0(0x50)
	bool SplitSwitchContainerMedia; // 0x220(0x01)
	bool SplitMediaPerFolder; // 0x221(0x01)
	bool UseEventBasedPackaging; // 0x222(0x01)
	bool EnableAutomaticAssetSynchronization; // 0x223(0x01)
	char pad_224[0x4]; // 0x224(0x04)
	struct FString CommandletCommitMessage; // 0x228(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x238(0x50)
	bool AskedToUseNewAssetManagement; // 0x288(0x01)
	bool bEnableMultiCoreRendering; // 0x289(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x28a(0x01)
	bool FixupRedirectorsDuringMigration; // 0x28b(0x01)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x290(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2a0(0x10)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool bAutoConnectToWAAPI; // 0x64(0x01)
	bool AutoSyncSelection; // 0x65(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x01)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class AkAudio.AkSlider
// Size: 0x780 (Inherited: 0x138)
struct UAkSlider : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FSliderStyle WidgetStyle; // 0x150(0x560)
	enum class EOrientation Orientation; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	struct FLinearColor SliderBarColor; // 0x6b4(0x10)
	struct FLinearColor SliderHandleColor; // 0x6c4(0x10)
	bool IndentHandle; // 0x6d4(0x01)
	bool Locked; // 0x6d5(0x01)
	char pad_6D6[0x2]; // 0x6d6(0x02)
	float StepSize; // 0x6d8(0x04)
	bool IsFocusable; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x6e0(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x6f0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x730(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x740(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x750(0x10)
	char pad_760[0x20]; // 0x760(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1c00970
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1c008f0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1c00860
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1c007d0
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1c006a0
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x1c00610
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1c00570
	void SetAkSliderItemId(struct FGuid& ItemID); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1c004d0
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00410
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00210
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c001d0
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x278 (Inherited: 0x260)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x260(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x268(0x08)
	struct UAkRoomComponent* Room; // 0x270(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x250 (Inherited: 0x228)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x228(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x230(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x240(0x08)
	float DistanceScalingFactor; // 0x248(0x04)
	float Level; // 0x24c(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x68 (Inherited: 0x68)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x360 (Inherited: 0x330)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x330(0x01)
	char pad_330_1 : 7; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x338(0x10)
	char bEnableDiffraction : 1; // 0x348(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x348(0x01)
	char pad_348_2 : 6; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct AActor* AssociatedRoom; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1c065f0
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1c055b0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1bfc110
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x68 (Inherited: 0x68)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c064d0
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c06260
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c06190
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05500
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05450
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c053c0
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c04860
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c04790
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04350
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c000d0
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bfffe0
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05fb0
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05d90
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05bc0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c059f0
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c057f0
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c055d0
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c05230
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04f90
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04e40
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04cf0
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04ba0
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c04950
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c04660
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c04550
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c000d0
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1bfffe0
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x178 (Inherited: 0x138)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1c00730
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c05110
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c00290
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x198 (Inherited: 0x138)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x148(0x10)
	char pad_158[0x40]; // 0x158(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1bed7d0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AudioManager
// Size: 0x28 (Inherited: 0x28)
struct UAudioManager : UBlueprintFunctionLibrary {

	void UnmuteWwiseAudio(); // Function AkAudio.AudioManager.UnmuteWwiseAudio // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c530
	void SetVoiceVolume(float Volume); // Function AkAudio.AudioManager.SetVoiceVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c4b0
	void SetVoiceEnabled(bool Enabled); // Function AkAudio.AudioManager.SetVoiceEnabled // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c430
	void SetSwitch(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor); // Function AkAudio.AudioManager.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c280
	void SetState(struct FString StateGroupName, struct FString StateName); // Function AkAudio.AudioManager.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c110
	void SetSoundVolume(float Volume); // Function AkAudio.AudioManager.SetSoundVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c090
	void SetSoundEnabled(bool Enabled); // Function AkAudio.AudioManager.SetSoundEnabled // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0c010
	void SetMusicVolume(float Volume); // Function AkAudio.AudioManager.SetMusicVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0bf10
	void SetMusicEnabled(bool Enabled); // Function AkAudio.AudioManager.SetMusicEnabled // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0be90
	void SetGlobalRTPC(struct FString ParameterName, float Value, float UpdateTolerance); // Function AkAudio.AudioManager.SetGlobalRTPC // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0bd00
	void SetEmitterRTPC(struct FString ParameterName, float Value, struct AActor* Emitter, float UpdateTolerance); // Function AkAudio.AudioManager.SetEmitterRTPC // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0bb40
	void ResetRTPCValue(struct FString ParameterName, struct AActor* Emitter); // Function AkAudio.AudioManager.ResetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0ba10
	int32_t PlayEvent3D(struct UAkAudioEvent* EventReference, struct AActor* Emitter, bool StopOnDestroy, struct FString Source); // Function AkAudio.AudioManager.PlayEvent3D // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0b3a0
	int32_t PlayEvent2D(struct UAkAudioEvent* EventReference); // Function AkAudio.AudioManager.PlayEvent2D // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0b310
	void MuteWwiseAudio(); // Function AkAudio.AudioManager.MuteWwiseAudio // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0b2f0
	bool IsSwitchAt(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor); // Function AkAudio.AudioManager.IsSwitchAt // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0b130
	bool IsStateAt(struct FString StateGroupName, struct FString StateName); // Function AkAudio.AudioManager.IsStateAt // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0afc0
	struct FString GetSwitch(struct FString SwitchGroupName, struct AActor* TargetActor); // Function AkAudio.AudioManager.GetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0adc0
	struct FString GetState(struct FString StateGroupName); // Function AkAudio.AudioManager.GetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0ac90
	float GetRTPCValue(struct FString ParameterName, struct AActor* Emitter); // Function AkAudio.AudioManager.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0aad0
	bool ExecuteActionOnEvent(struct FString EventName, struct AActor* Emitter, enum class AkActionOnEventType ActionType, float FadeTime, int32_t PlayingID); // Function AkAudio.AudioManager.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1c0a690
};

// Class AkAudio.BankManager
// Size: 0xa0 (Inherited: 0x30)
struct UBankManager : UGameInstanceSubsystem {
	char pad_30[0x70]; // 0x30(0x70)

	struct UBankManager* GetInstance(struct UObject* WorldContextObject); // Function AkAudio.BankManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c0a890
};

// Class AkAudio.EmitterManager
// Size: 0x100 (Inherited: 0x30)
struct UEmitterManager : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UAkComponent*> TickableEmitters; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct UAkComponent* SelfEmitter; // 0x58(0x08)
	struct TMap<struct UAkComponent*, struct FCachedGameSyncData> EmitterGameSyncDatas; // 0x60(0x50)
	struct TMap<struct AActor*, struct FEventCooldownData> EmitterCooldownDatas; // 0xb0(0x50)

	void SetSelfEmitter(struct UAkComponent* Emitter); // Function AkAudio.EmitterManager.SetSelfEmitter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c0bf90
	void RemoveSelfEmitter(struct UObject* WorldContextObject); // Function AkAudio.EmitterManager.RemoveSelfEmitter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c0b990
	bool IsSelfEmitter(struct UAkComponent* Emitter); // Function AkAudio.EmitterManager.IsSelfEmitter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c0af30
	struct UAkComponent* GetSelfEmitter(struct UObject* WorldContextObject); // Function AkAudio.EmitterManager.GetSelfEmitter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c0ac00
	struct UEmitterManager* GetInstance(struct UObject* WorldContextObject); // Function AkAudio.EmitterManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c0a920
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.ListenerManager
// Size: 0x58 (Inherited: 0x30)
struct UListenerManager : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UAkComponent*> DefaultListeners; // 0x40(0x10)
	struct UAkComponent* SpatialAudioListener; // 0x50(0x08)

	struct UListenerManager* GetInstance(struct UObject* WorldContextObject); // Function AkAudio.ListenerManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c0a9b0
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1c8 (Inherited: 0xe0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E0[0x40]; // 0xe0(0x40)
	struct UAkAudioEvent* Event; // 0x120(0x08)
	bool RetriggerEvent; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t ScrubTailLengthMs; // 0x12c(0x04)
	bool StopAtSectionEnd; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString EventName; // 0x138(0x10)
	char pad_148[0x20]; // 0x148(0x20)
	float MaxSourceDuration; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString MaxDurationSourceID; // 0x170(0x10)
	char pad_180[0x48]; // 0x180(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	char bIsAMasterTrack : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe0(0x08)
	struct FString Name; // 0xe8(0x10)
	struct FRichCurve FloatCurve; // 0xf8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1a8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x60]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1c0b580
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x1c0b540
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c0b810
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x1c0b560
};

// Class AkAudio.SpatialAudioManager
// Size: 0x30 (Inherited: 0x30)
struct USpatialAudioManager : UWorldSubsystem {

	struct USpatialAudioManager* GetInstance(struct UObject* WorldContextObject); // Function AkAudio.SpatialAudioManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1c0aa40
};

// Class AkAudio.WwiseDataQuery
// Size: 0x28 (Inherited: 0x28)
struct UWwiseDataQuery : UObject {
};

