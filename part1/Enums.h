
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Enum /Game/Enums/VOLanguage.VOLanguage
/// Size: 0x01 (1 bytes)
enum class VOLanguage : uint8_t
{
	VOLanguage__NewEnumerator0                                                       = 0,
	VOLanguage__NewEnumerator1                                                       = 1,
	VOLanguage__NewEnumerator2                                                       = 2
};

/// Enum /Game/Enums/BombSiteEnum.BombSiteEnum
/// Size: 0x01 (1 bytes)
enum class BombSiteEnum : uint8_t
{
	BombSiteEnum__NewEnumerator0                                                     = 0,
	BombSiteEnum__NewEnumerator1                                                     = 1,
	BombSiteEnum__NewEnumerator2                                                     = 2
};

/// Struct /Game/Enums/VOLanguageContainer.VOLanguageContainer
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FVOLanguageContainer
{ 
	TEnumAsByte<VOLanguage>                            VOLanguage_4_EA52DAD94CCF897BA04CC9823D518F11;              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              DisplayName_7_63ECF89E43D76EC2001C88BCF05F9D67;             // 0x0008   (0x0018)  
	FString                                            Directory_8_6EF64B534F67F770164623A4CA0C980B;               // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FVOLanguageContainer) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FVOLanguageContainer, VOLanguage_4_EA52DAD94CCF897BA04CC9823D518F11) == 0x0000);
static_assert(offsetof(FVOLanguageContainer, DisplayName_7_63ECF89E43D76EC2001C88BCF05F9D67) == 0x0008);
static_assert(offsetof(FVOLanguageContainer, Directory_8_6EF64B534F67F770164623A4CA0C980B) == 0x0020);
