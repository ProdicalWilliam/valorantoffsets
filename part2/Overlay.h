
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/Overlay.Overlays
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UOverlays : public UObject
{ 
public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOverlayItem
{ 
	FTimespan                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)  
	FString                                            Text;                                                       // 0x0010   (0x0010)  
	FVector2D                                          Position;                                                   // 0x0020   (0x0010)  
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UBasicOverlays : public UOverlays
{ 
public:
	TArray<FOverlayItem>                               Overlays;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class ULocalizedOverlays : public UOverlays
{ 
public:
	class UBasicOverlays*                              DefaultOverlays;                                            // 0x0030   (0x0008)  
	TMap<FString, class UBasicOverlays*>               LocaleToOverlaysMap;                                        // 0x0038   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UOverlays) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FOverlayItem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBasicOverlays) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(ULocalizedOverlays) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(offsetof(FOverlayItem, StartTime) == 0x0000);
static_assert(offsetof(FOverlayItem, EndTime) == 0x0008);
static_assert(offsetof(FOverlayItem, Text) == 0x0010);
static_assert(offsetof(FOverlayItem, Position) == 0x0020);
static_assert(offsetof(UBasicOverlays, Overlays) == 0x0030);
static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 0x0030);
static_assert(offsetof(ULocalizedOverlays, LocaleToOverlaysMap) == 0x0038);
