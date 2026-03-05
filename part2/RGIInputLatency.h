
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIInputLatencyBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary.SetTargetFrametimeOverheadPercentage
	// void SetTargetFrametimeOverheadPercentage(int32_t InTargetFrametimeOverheadPercentage);                                  // [0x5263bd0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary.SetRGIInputLatencyEnabled
	// void SetRGIInputLatencyEnabled(bool bEnabled);                                                                           // [0x5263cf0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary.IsRGIInputLatencyPluginSupported
	// bool IsRGIInputLatencyPluginSupported();                                                                                 // [0x3b9c6d0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary.GetTargetFrametimeOverheadPercentage
	// int32_t GetTargetFrametimeOverheadPercentage();                                                                          // [0x5263ba0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIInputLatency.RGIInputLatencyBlueprintLibrary.GetRGIInputLatencyEnabled
	// bool GetRGIInputLatencyEnabled();                                                                                        // [0x5263cc0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RGIInputLatency.RGIMaxTickRateHandler
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URGIMaxTickRateHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	uint32_t                                           TargetFrametimeOverheadPercentage;                          // 0x0048   (0x0004)  
	float                                              WorkEstimateSmoothingFactor;                                // 0x004C   (0x0004)  
	uint32_t                                           FrameHistoryLength;                                         // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URGIInputLatencyBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGIMaxTickRateHandler) == 0x0058); // 88 bytes (0x000030 - 0x000058)
