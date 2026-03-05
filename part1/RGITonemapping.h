
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Enum /Script/RGITonemapping.ERGITonemapperType
/// Size: 0x01 (1 bytes)
enum class ERGITonemapperType : uint8_t
{
	DefaultUE                                                                        = 0,
	ExtendedReinhard                                                                 = 1,
	ACESLuminanceOnlyFit                                                             = 2,
	GranTurismo                                                                      = 3,
	LegacyUE                                                                         = 4,
	AgX                                                                              = 5
};

/// Enum /Script/RGITonemapping.EAgXLookType
/// Size: 0x01 (1 bytes)
enum class EAgXLookType : uint8_t
{
	Default                                                                          = 0,
	Golden                                                                           = 1,
	Punchy                                                                           = 2
};

/// Struct /Script/RGITonemapping.UELegacyTonemapperSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 4 MaxSize: 0x0070
struct FUELegacyTonemapperSettings
{ 
	bool                                               bOverrideContentTonemappingSettings;                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       FilmWhitePoint;                                             // 0x0004   (0x0010)  
	FLinearColor                                       FilmShadowTint;                                             // 0x0014   (0x0010)  
	float                                              FilmShadowTintBlend;                                        // 0x0024   (0x0004)  
	float                                              FilmShadowTintAmount;                                       // 0x0028   (0x0004)  
	float                                              FilmSaturation;                                             // 0x002C   (0x0004)  
	FLinearColor                                       FilmChannelMixerRed;                                        // 0x0030   (0x0010)  
	FLinearColor                                       FilmChannelMixerGreen;                                      // 0x0040   (0x0010)  
	FLinearColor                                       FilmChannelMixerBlue;                                       // 0x0050   (0x0010)  
	float                                              FilmContrast;                                               // 0x0060   (0x0004)  
	float                                              FilmToeAmount;                                              // 0x0064   (0x0004)  
	float                                              FilmHealAmount;                                             // 0x0068   (0x0004)  
	float                                              FilmDynamicRange;                                           // 0x006C   (0x0004)  
};

/// Class /Script/RGITonemapping.RGITonemappingSettings
/// Size: 0x00D0 (208 bytes) (0x000048 - 0x0000D0) align 8 MaxSize: 0x00D0
class URGITonemappingSettings : public UDeveloperSettings
{ 
public:
	TEnumAsByte<ERGITonemapperType>                    RGITonemapperType;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              HueCorrection;                                              // 0x004C   (0x0004)  
	float                                              MaxWhite;                                                   // 0x0050   (0x0004)  
	TEnumAsByte<EAgXLookType>                          AgXLookType;                                                // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FUELegacyTonemapperSettings                        UELegacyTonemapperSettings;                                 // 0x0058   (0x0070)  
	bool                                               bOverrideContentToneCurveAmount;                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              DefaultToneCurveAmount;                                     // 0x00CC   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FUELegacyTonemapperSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(URGITonemappingSettings) == 0x00D0); // 208 bytes (0x000048 - 0x0000D0)
static_assert(offsetof(FUELegacyTonemapperSettings, FilmWhitePoint) == 0x0004);
static_assert(offsetof(FUELegacyTonemapperSettings, FilmShadowTint) == 0x0014);
static_assert(offsetof(FUELegacyTonemapperSettings, FilmChannelMixerRed) == 0x0030);
static_assert(offsetof(FUELegacyTonemapperSettings, FilmChannelMixerGreen) == 0x0040);
static_assert(offsetof(FUELegacyTonemapperSettings, FilmChannelMixerBlue) == 0x0050);
static_assert(offsetof(URGITonemappingSettings, RGITonemapperType) == 0x0048);
static_assert(offsetof(URGITonemappingSettings, AgXLookType) == 0x0054);
static_assert(offsetof(URGITonemappingSettings, UELegacyTonemapperSettings) == 0x0058);
