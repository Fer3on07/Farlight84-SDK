// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x10 (Inherited: 0x00)
struct FConnectionAlwaysRelevantNodePair {
	struct UNetConnection* NetConnection; // 0x00(0x08)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x08(0x08)
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x20 (Inherited: 0x00)
struct FLastLocationGatherInfo {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct FVector LastLocation; // 0x08(0x0c)
	struct FVector LastOutOfRangeLocationCheck; // 0x14(0x0c)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FTearOffActorInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ReplicationGraph.ClassExtraReplicatedInfo
// Size: 0x50 (Inherited: 0x00)
struct FClassExtraReplicatedInfo {
	struct TMap<struct UObject*, int32_t> ClassActorsMaxReplicatedNum; // 0x00(0x50)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FAlwaysRelevantActorInfo {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* LastViewer; // 0x08(0x08)
	struct AActor* LastViewTarget; // 0x10(0x08)
};

// ScriptStruct ReplicationGraph.ClassReplicationInfo
// Size: 0x70 (Inherited: 0x00)
struct FClassReplicationInfo {
	float DistancePriorityScale; // 0x00(0x04)
	float StarvationPriorityScale; // 0x04(0x04)
	float AccumulatedNetPriorityBias; // 0x08(0x04)
	uint16_t ReplicationPeriodFrame; // 0x0c(0x02)
	uint16_t FastPath_ReplicationPeriodFrame; // 0x0e(0x02)
	uint16_t ActorChannelFrameTimeout; // 0x10(0x02)
	char pad_12[0x56]; // 0x12(0x56)
	float CullDistance; // 0x68(0x04)
	float CullDistanceSquared; // 0x6c(0x04)
};

