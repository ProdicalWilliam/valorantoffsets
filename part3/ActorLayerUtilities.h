
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	// void RemoveActorFromLayer(class AActor* InActor, FActorLayer& Layer);                                                    // [0x7a48e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// TArray<AActor*> GetActors(class UObject* WorldContextObject, FActorLayer& ActorLayer);                                   // [0x7a491b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	// void AddActorToLayer(class AActor* InActor, FActorLayer& Layer);                                                         // [0x7a48fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FActorLayer
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(ULayersBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FActorLayer) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(FActorLayer, Name) == 0x0000);
