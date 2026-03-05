
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

/// Class /Script/UmbraCulling.UmbraPrecomputedData
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UUmbraPrecomputedData : public UAssetUserData
{ 
public:
	TArray<uint32_t>                                   Data;                                                       // 0x0030   (0x0010)  
	TArray<int32_t>                                    TomeIndexLookup;                                            // 0x0040   (0x0010)  
	TArray<int32_t>                                    TomeVisibilityIdLookup;                                     // 0x0050   (0x0010)  
};

/// Class /Script/UmbraCulling.MapOcclusionDataProxy
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMapOcclusionDataProxy : public UAssetUserData
{ 
public:
	class UUmbraPrecomputedData*                       UmbraPrecomputedData;                                       // 0x0030   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UUmbraPrecomputedData) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMapOcclusionDataProxy) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(offsetof(UUmbraPrecomputedData, Data) == 0x0030);
static_assert(offsetof(UUmbraPrecomputedData, TomeIndexLookup) == 0x0040);
static_assert(offsetof(UUmbraPrecomputedData, TomeVisibilityIdLookup) == 0x0050);
static_assert(offsetof(UMapOcclusionDataProxy, UmbraPrecomputedData) == 0x0030);
