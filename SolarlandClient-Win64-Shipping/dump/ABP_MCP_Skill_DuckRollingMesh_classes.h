// DynamicClass ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C
// Size: 0x2f0 (Inherited: 0x270)
struct UABP_MCP_Skill_DuckRollingMesh_C : UAnimInstance {
	struct FAnimNode_Root AnimGraphNode_Root; // 0x268(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x298(0x48)
	int32_t PoseIndex; // 0x2e0(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh(int32_t bpp__EntryPoint__pf); // Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh // (Final|Native|Public) // @ game+0x1ae69a0
	void AnimGraph(struct FPoseLink& bpp__AnimGraph__pf); // Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.AnimGraph // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ae4420
};

