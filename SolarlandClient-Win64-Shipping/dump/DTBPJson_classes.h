// Class DTBPJson.DTBPJsonBPLib
// Size: 0x28 (Inherited: 0x28)
struct UDTBPJsonBPLib : UBlueprintFunctionLibrary {

	void StructToJson(struct FDTStruct& Struct, struct FString& Json, bool PrettyPrint); // Function DTBPJson.DTBPJsonBPLib.StructToJson // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c4aee0
	void JsonToStruct(struct FDTStruct& Struct, struct FString Json); // Function DTBPJson.DTBPJsonBPLib.JsonToStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c4ade0
};

