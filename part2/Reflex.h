
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/Reflex.EReflexMode
/// Size: 0x01 (1 bytes)
enum class EReflexMode : uint8_t
{
	EReflexMode__Disabled                                                            = 0,
	EReflexMode__Enabled                                                             = 1,
	EReflexMode__EnabledPlusBoost                                                    = 3
};

/// Class /Script/Reflex.ReflexBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetReflexMode
	// void SetReflexMode(EReflexMode Mode);                                                                                    // [0x7038c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	// void SetFlashIndicatorEnabled(bool bEnabled);                                                                            // [0x70389f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0x7038550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode
	// EReflexMode GetReflexMode();                                                                                             // [0x7038b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	// bool GetReflexAvailable();                                                                                               // [0x7038d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0x70387b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0x7038680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	// bool GetFlashIndicatorEnabled();                                                                                         // [0x70388e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UReflexBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
