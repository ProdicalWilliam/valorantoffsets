
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/StructUtilsEngine.EStructUtilsResult
/// Size: 0x01 (1 bytes)
enum class EStructUtilsResult : uint8_t
{
	EStructUtilsResult__Valid                                                        = 0,
	EStructUtilsResult__NotValid                                                     = 1
};

/// Class /Script/StructUtilsEngine.StructUtilsFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// void SetInstancedStructValue(FInstancedStruct& InstancedStruct, int32_t& Value);                                         // [0x6e84920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// void Reset(FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);                                          // [0x6e840d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// bool NotEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                                 // [0x6e83a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// FInstancedStruct MakeInstancedStruct(int32_t& Value);                                                                    // [0x6e84680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// bool IsValid_InstancedStruct(FInstancedStruct& InstancedStruct);                                                         // [0x6e83930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// EStructUtilsResult IsInstancedStructValid(FInstancedStruct& InstancedStruct);                                            // [0x6e83f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// void GetInstancedStructValue(EStructUtilsResult& ExecResult, FInstancedStruct& InstancedStruct, int32_t& Value);         // [0x6e84cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// bool EqualEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                               // [0x6e83d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UStructUtilsFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
