
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

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x01 (1 bytes)
enum class EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None                                                    = 0,
	EGLTFTextureImageFormat__PNG                                                     = 1,
	EGLTFTextureImageFormat__JPEG                                                    = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None                                                   = 0,
	EGLTFMaterialVariantMode__Simple                                                 = 1,
	EGLTFMaterialVariantMode__UseMeshData                                            = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled                                                  = 0,
	EGLTFMaterialBakeMode__Simple                                                    = 1,
	EGLTFMaterialBakeMode__UseMeshData                                               = 2
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeSizePOT
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialBakeSizePOT : uint8_t
{
	EGLTFMaterialBakeSizePOT__POT                                                    = 0,
	EGLTFMaterialBakeSizePOT__POT2                                                   = 1,
	EGLTFMaterialBakeSizePOT__POT3                                                   = 2,
	EGLTFMaterialBakeSizePOT__POT4                                                   = 3,
	EGLTFMaterialBakeSizePOT__POT5                                                   = 4,
	EGLTFMaterialBakeSizePOT__POT6                                                   = 5,
	EGLTFMaterialBakeSizePOT__POT7                                                   = 6,
	EGLTFMaterialBakeSizePOT__POT8                                                   = 7,
	EGLTFMaterialBakeSizePOT__POT9                                                   = 8,
	EGLTFMaterialBakeSizePOT__POT10                                                  = 9,
	EGLTFMaterialBakeSizePOT__POT11                                                  = 10,
	EGLTFMaterialBakeSizePOT__POT12                                                  = 11,
	EGLTFMaterialBakeSizePOT__POT13                                                  = 12,
	EGLTFMaterialBakeSizePOT__POT14                                                  = 13
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x01 (1 bytes)
enum class EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None                                                 = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity                                     = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness                                    = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor                                        = 3,
	EGLTFMaterialPropertyGroup__Normal                                               = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion                                     = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness                                   = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal                                = 7
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	EGLTFMaterialBakeSizePOT                           Size;                                                       // 0x0001   (0x0001)  
	bool                                               bOverrideFilter;                                            // 0x0002   (0x0001)  
	TEnumAsByte<TextureFilter>                         Filter;                                                     // 0x0003   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0004   (0x0001)  
	TEnumAsByte<TextureAddress>                        Tiling;                                                     // 0x0005   (0x0001)  
};

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGLTFExportOptions : public UObject
{ 
public:
	float                                              ExportUniformScale;                                         // 0x0030   (0x0004)  
	bool                                               bExportPreviewMesh;                                         // 0x0034   (0x0001)  
	bool                                               bSkipNearDefaultValues;                                     // 0x0035   (0x0001)  
	bool                                               bIncludeCopyrightNotice;                                    // 0x0036   (0x0001)  
	bool                                               bExportProxyMaterials;                                      // 0x0037   (0x0001)  
	bool                                               bExportUnlitMaterials;                                      // 0x0038   (0x0001)  
	bool                                               bExportClearCoatMaterials;                                  // 0x0039   (0x0001)  
	bool                                               bExportEmissiveStrength;                                    // 0x003A   (0x0001)  
	EGLTFMaterialBakeMode                              BakeMaterialInputs;                                         // 0x003B   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x003C   (0x0001)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x003D   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003F   (0x0001)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0040   (0x0050)  
	int32_t                                            DefaultLevelOfDetail;                                       // 0x0090   (0x0004)  
	bool                                               bExportVertexColors;                                        // 0x0094   (0x0001)  
	bool                                               bExportVertexSkinWeights;                                   // 0x0095   (0x0001)  
	bool                                               bUseMeshQuantization;                                       // 0x0096   (0x0001)  
	bool                                               bExportLevelSequences;                                      // 0x0097   (0x0001)  
	bool                                               bExportAnimationSequences;                                  // 0x0098   (0x0001)  
	EGLTFTextureImageFormat                            TextureImageFormat;                                         // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	int32_t                                            TextureImageQuality;                                        // 0x009C   (0x0004)  
	bool                                               bExportTextureTransforms;                                   // 0x00A0   (0x0001)  
	bool                                               bAdjustNormalmaps;                                          // 0x00A1   (0x0001)  
	bool                                               bExportHiddenInGame;                                        // 0x00A2   (0x0001)  
	bool                                               bExportLights;                                              // 0x00A3   (0x0001)  
	bool                                               bExportCameras;                                             // 0x00A4   (0x0001)  
	EGLTFMaterialVariantMode                           ExportMaterialVariants;                                     // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x00A6   (0x0002)  MISSED


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x763dea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFExporter : public UExporter
{ 
public:


	/// Functions
	// Function /Script/GLTFExporter.GLTFExporter.ExportToGLTF
	// bool ExportToGLTF(class UObject* Object, FString FilePath, class UGLTFExportOptions* OPTIONS, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // [0x7650070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFLevelExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFMaterialExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UGLTFProxyOptions : public UObject
{ 
public:
	bool                                               bBakeMaterialInputs;                                        // 0x0030   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x0031   (0x0001)  
	TEnumAsByte<TextureFilter>                         DefaultMaterialBakeFilter;                                  // 0x0032   (0x0001)  
	TEnumAsByte<TextureAddress>                        DefaultMaterialBakeTiling;                                  // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                  // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x765d180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
public:
	class UMaterialInterface*                          Proxy;                                                      // 0x0030   (0x0008)  
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0038   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs;                                    // 0x0040   (0x0050)  
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGLTFExportMessages
{ 
	TArray<FString>                                    Suggestions;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    Warnings;                                                   // 0x0010   (0x0010)  
	TArray<FString>                                    Errors;                                                     // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FGLTFOverrideMaterialBakeSettings) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(UGLTFExportOptions) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UGLTFExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFAnimSequenceExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFLevelExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFLevelSequenceExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFLevelVariantSetsExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFMaterialExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFSkeletalMeshExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFStaticMeshExporter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UGLTFProxyOptions) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UGLTFMaterialExportOptions) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FGLTFExportMessages) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Size) == 0x0001);
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Filter) == 0x0003);
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Tiling) == 0x0005);
static_assert(offsetof(UGLTFExportOptions, BakeMaterialInputs) == 0x003B);
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeSize) == 0x003C);
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeFilter) == 0x003D);
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeTiling) == 0x003E);
static_assert(offsetof(UGLTFExportOptions, DefaultInputBakeSettings) == 0x0040);
static_assert(offsetof(UGLTFExportOptions, TextureImageFormat) == 0x0099);
static_assert(offsetof(UGLTFExportOptions, ExportMaterialVariants) == 0x00A5);
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeSize) == 0x0031);
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeFilter) == 0x0032);
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeTiling) == 0x0033);
static_assert(offsetof(UGLTFProxyOptions, DefaultInputBakeSettings) == 0x0038);
static_assert(offsetof(UGLTFMaterialExportOptions, Proxy) == 0x0030);
static_assert(offsetof(UGLTFMaterialExportOptions, Default) == 0x0038);
static_assert(offsetof(UGLTFMaterialExportOptions, Inputs) == 0x0040);
static_assert(offsetof(FGLTFExportMessages, Suggestions) == 0x0000);
static_assert(offsetof(FGLTFExportMessages, Warnings) == 0x0010);
static_assert(offsetof(FGLTFExportMessages, Errors) == 0x0020);
