
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Enum /Script/TextureUtilitiesCommon.ETextureImportFloatingPointFormat
/// Size: 0x01 (1 bytes)
enum class ETextureImportFloatingPointFormat : uint8_t
{
	ETextureImportFloatingPointFormat__HDR_F16                                       = 0,
	ETextureImportFloatingPointFormat__HDRCompressed_BC6                             = 1,
	ETextureImportFloatingPointFormat__HDR_F32_or_F16                                = 2,
	ETextureImportFloatingPointFormat__PreviousDefault                               = 0
};

/// Enum /Script/TextureUtilitiesCommon.ETextureImportPNGInfill
/// Size: 0x01 (1 bytes)
enum class ETextureImportPNGInfill : uint8_t
{
	ETextureImportPNGInfill__Default                                                 = 0,
	ETextureImportPNGInfill__Never                                                   = 1,
	ETextureImportPNGInfill__OnlyOnBinaryTransparency                                = 2,
	ETextureImportPNGInfill__Always                                                  = 3
};

/// Class /Script/TextureUtilitiesCommon.TextureImportSettings
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UTextureImportSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            AutoVTSize;                                                 // 0x0048   (0x0004)  
	bool                                               bEnableNormalizeNormals;                                    // 0x004C   (0x0001)  
	bool                                               bEnableFastMipFilter;                                       // 0x004D   (0x0001)  
	ETextureImportFloatingPointFormat                  CompressedFormatForFloatTextures;                           // 0x004E   (0x0001)  
	ETextureImportPNGInfill                            PNGInfill;                                                  // 0x004F   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UTextureImportSettings) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(offsetof(UTextureImportSettings, CompressedFormatForFloatTextures) == 0x004E);
static_assert(offsetof(UTextureImportSettings, PNGInfill) == 0x004F);
