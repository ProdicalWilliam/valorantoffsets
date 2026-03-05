
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/Gauntlet.GauntletTestController
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UGauntletTestController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/Gauntlet.GauntletTestControllerBootTest
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UGauntletTestControllerBootTest : public UGauntletTestController
{ 
public:
};

/// Class /Script/Gauntlet.GauntletTestControllerErrorTest
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UGauntletTestControllerErrorTest : public UGauntletTestController
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0038   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGauntletTestController) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UGauntletTestControllerBootTest) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UGauntletTestControllerErrorTest) == 0x0058); // 88 bytes (0x000038 - 0x000058)
