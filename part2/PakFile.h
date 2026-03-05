
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Struct /Script/PakFile.PakFaultSentinelContent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPakFaultSentinelContent
{ 
	FString                                            BuildVersion;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    FaultedPakFiles;                                            // 0x0010   (0x0010)  
	int64_t                                            Time;                                                       // 0x0020   (0x0008)  
	bool                                               FullScanExecuted;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FPakFaultSentinelContent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FPakFaultSentinelContent, BuildVersion) == 0x0000);
static_assert(offsetof(FPakFaultSentinelContent, FaultedPakFiles) == 0x0010);
