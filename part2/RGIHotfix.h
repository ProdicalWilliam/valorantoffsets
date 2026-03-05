
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Hotfix

#pragma pack(push, 0x1)

/// Class /Script/RGIHotfix.RGIOnlineHotfixManager
/// Size: 0x0278 (632 bytes) (0x000270 - 0x000278) align 8 MaxSize: 0x0278
class URGIOnlineHotfixManager : public UOnlineHotfixManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0270   (0x0008)  MISSED
};

/// Struct /Script/RGIHotfix.ReleaseDetailsDTO
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FReleaseDetailsDTO
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
};

/// Struct /Script/RGIHotfix.DownloadDetailsDTO
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FDownloadDetailsDTO
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	bool                                               SCD_Required;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RGIHotfix.ReleaseDTO
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FReleaseDTO
{ 
	FReleaseDetailsDTO                                 Release;                                                    // 0x0000   (0x0010)  
	FDownloadDetailsDTO                                Download;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/RGIHotfix.PatchsieveVersionSetDTO
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPatchsieveVersionSetDTO
{ 
	TArray<FReleaseDTO>                                Releases;                                                   // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URGIOnlineHotfixManager) == 0x0278); // 632 bytes (0x000270 - 0x000278)
static_assert(sizeof(FReleaseDetailsDTO) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDownloadDetailsDTO) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReleaseDTO) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPatchsieveVersionSetDTO) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FReleaseDetailsDTO, ID) == 0x0000);
static_assert(offsetof(FDownloadDetailsDTO, URL) == 0x0000);
static_assert(offsetof(FReleaseDTO, Release) == 0x0000);
static_assert(offsetof(FReleaseDTO, Download) == 0x0010);
static_assert(offsetof(FPatchsieveVersionSetDTO, Releases) == 0x0000);
