
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x01 (1 bytes)
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ERTDrawingType
/// Size: 0x01 (1 bytes)
enum class ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas                                                          = 0,
	ERTDrawingType__RTAtlasToNonAtlas                                                = 1,
	ERTDrawingType__RTNonAtlasToAtlas                                                = 2,
	ERTDrawingType__RTNonAtlas                                                       = 3,
	ERTDrawingType__RTMips                                                           = 4
};

/// Enum /Script/Landscape.EHeightmapRTType
/// Size: 0x01 (1 bytes)
enum class EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas                                      = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas                                   = 1,
	EHeightmapRTType__HeightmapRT_Scratch1                                           = 2,
	EHeightmapRTType__HeightmapRT_Scratch2                                           = 3,
	EHeightmapRTType__HeightmapRT_Scratch3                                           = 4,
	EHeightmapRTType__HeightmapRT_Mip1                                               = 5,
	EHeightmapRTType__HeightmapRT_Mip2                                               = 6,
	EHeightmapRTType__HeightmapRT_Mip3                                               = 7,
	EHeightmapRTType__HeightmapRT_Mip4                                               = 8,
	EHeightmapRTType__HeightmapRT_Mip5                                               = 9,
	EHeightmapRTType__HeightmapRT_Mip6                                               = 10,
	EHeightmapRTType__HeightmapRT_Mip7                                               = 11,
	EHeightmapRTType__HeightmapRT_Count                                              = 12
};

/// Enum /Script/Landscape.EWeightmapRTType
/// Size: 0x01 (1 bytes)
enum class EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA                                       = 0,
	EWeightmapRTType__WeightmapRT_Scratch1                                           = 1,
	EWeightmapRTType__WeightmapRT_Scratch2                                           = 2,
	EWeightmapRTType__WeightmapRT_Scratch3                                           = 3,
	EWeightmapRTType__WeightmapRT_Mip0                                               = 4,
	EWeightmapRTType__WeightmapRT_Mip1                                               = 5,
	EWeightmapRTType__WeightmapRT_Mip2                                               = 6,
	EWeightmapRTType__WeightmapRT_Mip3                                               = 7,
	EWeightmapRTType__WeightmapRT_Mip4                                               = 8,
	EWeightmapRTType__WeightmapRT_Mip5                                               = 9,
	EWeightmapRTType__WeightmapRT_Mip6                                               = 10,
	EWeightmapRTType__WeightmapRT_Mip7                                               = 11,
	EWeightmapRTType__WeightmapRT_Count                                              = 12
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeToolTargetType
/// Size: 0x01 (1 bytes)
enum class ELandscapeToolTargetType : uint8_t
{
	ELandscapeToolTargetType__Heightmap                                              = 0,
	ELandscapeToolTargetType__Weightmap                                              = 1,
	ELandscapeToolTargetType__Visibility                                             = 2,
	ELandscapeToolTargetType__Invalid                                                = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x01 (1 bytes)
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.ELandscapeGizmoSnapType
/// Size: 0x01 (1 bytes)
enum class ELandscapeGizmoSnapType : uint8_t
{
	ELandscapeGizmoSnapType__None                                                    = 0,
	ELandscapeGizmoSnapType__Component                                               = 1,
	ELandscapeGizmoSnapType__Texel                                                   = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x01 (1 bytes)
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x01 (1 bytes)
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeDirtyingMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeDirtyingMode : uint8_t
{
	ELandscapeDirtyingMode__Auto                                                     = 0,
	ELandscapeDirtyingMode__InLandscapeModeOnly                                      = 1,
	ELandscapeDirtyingMode__InLandscapeModeAndUserTriggeredChanges                   = 2
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x01 (1 bytes)
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x01 (1 bytes)
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x01 (1 bytes)
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ELandscapeResizeMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeResizeMode : uint8_t
{
	ELandscapeResizeMode__Resample                                                   = 0,
	ELandscapeResizeMode__Clip                                                       = 1,
	ELandscapeResizeMode__Expand                                                     = 2
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x01 (1 bytes)
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList                        = 3
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x01 (1 bytes)
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0770 (1904 bytes) (0x000760 - 0x000770) align 16 MaxSize: 0x0770
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x0760   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0764   (0x000C)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULandscapeSplineInterface : public UInterface
{ 
public:
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapePerLODMaterialOverride
{ 
	int32_t                                            LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x07F0 (2032 bytes) (0x000460 - 0x0007F0) align 8 MaxSize: 0x07F0
class ALandscapeProxy : public APartitionActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x0468   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0470   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0480   (0x0010)  MISSED
	bool                                               bEnableNanite;                                              // 0x0490   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0491   (0x0007)  MISSED
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x0498   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x04A8   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x04B0   (0x0004)  
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x04B4   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x04B8   (0x0004)  
	uint32_t                                           LODGroupKey;                                                // 0x04BC   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x04C0   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x04C4   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x04CC   (0x0004)  MISSED
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x04D0   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x04D8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x04DC   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x04E0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x04E8   (0x0020)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x0508   (0x0008)  
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0510   (0x0010)  
	bool                                               bSetCreateRuntimeVirtualTextureVolumes;                     // 0x0520   (0x0001)  
	bool                                               bVirtualTextureRenderWithQuad;                              // 0x0521   (0x0001)  
	bool                                               bVirtualTextureRenderWithQuadHQ;                            // 0x0522   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x0523   (0x0001)  MISSED
	int32_t                                            VirtualTextureNumLods;                                      // 0x0524   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x0528   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x052C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x052D   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x0530   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0534   (0x0004)  
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x0538   (0x0010)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x0548   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x0558   (0x0010)  
	class ULandscapeNaniteComponent*                   NaniteComponent;                                            // 0x0568   (0x0008)  
	TArray<class ULandscapeNaniteComponent*>           NaniteComponents;                                           // 0x0570   (0x0010)  
	unsigned char                                      UnknownData08_6[0x64];                                      // 0x0580   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x05E4   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x05E5   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x05E8   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x05EC:0 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x05EC:1 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x05EC:2 (0x0001)  
	EShadowCacheInvalidationBehavior                   ShadowCacheInvalidationBehavior;                            // 0x05ED   (0x0001)  
	bool                                               bCastContactShadow : 1;                                     // 0x05EE:0 (0x0001)  
	unsigned char                                      UnknownData10_3[0x1];                                       // 0x05EF   (0x0001)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x05F0:0 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x05F1   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x05F4:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x05F5   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x05F8:0 (0x0001)  
	unsigned char                                      UnknownData13_3[0x3];                                       // 0x05F9   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x05FC:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x05FD   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x05FE   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x0600:0 (0x0001)  
	unsigned char                                      UnknownData15_3[0x3];                                       // 0x0601   (0x0003)  MISSED
	bool                                               bReceivesDecals : 1;                                        // 0x0604:0 (0x0001)  
	bool                                               bReceivesFloorOnlyDecals : 1;                               // 0x0604:1 (0x0001)  
	unsigned char                                      UnknownData16_3[0x3];                                       // 0x0605   (0x0003)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x0608:0 (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x0609   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x060C   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x060D   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0610   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x0614   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x0618   (0x001C)  
	int32_t                                            CollisionMipLevel;                                          // 0x0634   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x0638   (0x0004)  
	unsigned char                                      UnknownData19_6[0x4];                                       // 0x063C   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0640   (0x0190)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x07D0:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x07D0:1 (0x0001)  
	unsigned char                                      UnknownData20_5[0x3];                                       // 0x07D1   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x07D4   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x07D8   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x07DC   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x07E0:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x07E0:1 (0x0001)  
	unsigned char                                      UnknownData21_5[0x3];                                       // 0x07E1   (0x0003)  MISSED
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x07E4   (0x0001)  
	bool                                               bUseDynamicMaterialInstance;                                // 0x07E5   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x07E6   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x07E7   (0x0001)  
	bool                                               bUseCompressedHeightmapStorage;                             // 0x07E8   (0x0001)  
	unsigned char                                      UnknownData22_7[0x7];                                       // 0x07E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	// void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);                                         // [0x34776a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x3476680] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                              // [0x34768e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x3476410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2d* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x34761c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
	// class ALandscape* GetLandscapeActor();                                                                                   // [0x34763d0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                         // [0x34773d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x3476cb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x34775a0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x34774a0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x07F0 (2032 bytes) (0x0007F0 - 0x0007F0) align 8 MaxSize: 0x07F0
class ALandscape : public ALandscapeProxy
{ 
public:


	/// Functions
	// Function /Script/Landscape.Landscape.RenderHeightmap
	// void RenderHeightmap(FTransform& InWorldTransform, FBox2D& InExtents, class UTextureRenderTarget2d* OutRenderTarget);    // [0x3437270] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{ 
public:
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0880 (2176 bytes) (0x000688 - 0x000880) align 16 MaxSize: 0x0880
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0688   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x068C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0690   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0694   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0698   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x069C   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x06A0   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x06A8   (0x0008)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x06B0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x06C0   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x06D0   (0x0010)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06E8   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x06F0   (0x0020)  
	float                                              WeightmapSubsectionOffset;                                  // 0x0710   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0714   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x0720   (0x0020)  
	FBox                                               CachedLocalBox;                                             // 0x0740   (0x0038)  
	class ULandscapeHeightfieldCollisionComponent*     CollisionComponentRef;                                      // 0x0778   (0x0008)  
	bool                                               bUserTriggeredChangeRequested;                              // 0x0780   (0x0001)  
	bool                                               bNaniteActive;                                              // 0x0781   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0782   (0x0006)  MISSED
	class UTexture2D*                                  HeightmapTexture;                                           // 0x0788   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0790   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x07A0   (0x0010)  
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x07B0   (0x0010)  
	FGuid                                              MapBuildDataId;                                             // 0x07C0   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x07D0   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x07D4   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x07D8   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x07DC   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x07E0   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x07E4   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x07E8   (0x0004)  
	FGuid                                              StateId;                                                    // 0x07EC   (0x0010)  
	unsigned char                                      UnknownData04_6[0x24];                                      // 0x07FC   (0x0024)  MISSED
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x0820   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x0828   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x0838   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              MobileWeightmapLayerAllocations;                            // 0x0848   (0x0010)  
	unsigned char                                      UnknownData05_7[0x28];                                      // 0x0858   (0x0028)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.SetLODBias
	// void SetLODBias(int32_t InLODBias);                                                                                      // [0x34383b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD
	// void SetForcedLOD(int32_t InForcedLOD);                                                                                  // [0x34384f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                             // [0x3438950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x3438640] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);             // [0x34387d0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x04B0 (1200 bytes) (0x000460 - 0x0004B0) align 8 MaxSize: 0x04B0
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0460   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0690 (1680 bytes) (0x000688 - 0x000690) align 16 MaxSize: 0x0690
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0688   (0x0008)  MISSED
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x01A8 (424 bytes) (0x000000 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FPerQualityLevelFloat                              GrassDensityQuality;                                        // 0x0020   (0x0068)  
	bool                                               bUseGrid;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x008C   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FPerQualityLevelInt                                StartCullDistanceQuality;                                   // 0x0098   (0x0068)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0100   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FPerQualityLevelInt                                EndCullDistanceQuality;                                     // 0x0108   (0x0068)  
	int32_t                                            MinLOD;                                                     // 0x0170   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0174   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0175   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0178   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0180   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0188   (0x0008)  
	bool                                               RandomRotation;                                             // 0x0190   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0191   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x0192   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0193   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0194   (0x0001)  
	bool                                               bAffectDistanceFieldLighting;                               // 0x0195   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0196   (0x0001)  
	bool                                               bCastContactShadow;                                         // 0x0197   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0198   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0199   (0x0003)  MISSED
	uint32_t                                           InstanceWorldPositionOffsetDisableDistance;                 // 0x019C   (0x0004)  
	EShadowCacheInvalidationBehavior                   ShadowCacheInvalidationBehavior;                            // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData06_7[0x7];                                       // 0x01A1   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0030   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0048   (0x0008)  
	float                                              GrassDensity;                                               // 0x0050   (0x0004)  
	float                                              PlacementJitter;                                            // 0x0054   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0058   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x005C   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0060   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x0770 (1904 bytes) (0x000688 - 0x000770) align 16 MaxSize: 0x0770
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x0688   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0698   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x069C   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x06A0   (0x0004)  
	float                                              CollisionScale;                                             // 0x06A4   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x06AC   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x06B0   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x06C0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x06D0   (0x0038)  
	class ULandscapeComponent*                         RenderComponentRef;                                         // 0x0708   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0710   (0x0010)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x0720   (0x0010)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0730   (0x0040)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                         // [0x3439e00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0040   (0x0008)  
	float                                              Hardness;                                                   // 0x0048   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x004C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x000C)  
	float                                              TexelFactor;                                                // 0x000C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align 8 MaxSize: 0x02E0
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x02C8   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x02D8:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x02D8:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x02D8:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x02D8:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02D9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0790 (1936 bytes) (0x000770 - 0x000790) align 16 MaxSize: 0x0790
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x0770   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0780   (0x0010)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x0460   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0790 (1936 bytes) (0x000760 - 0x000790) align 16 MaxSize: 0x0790
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x0760   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x0770   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x0780   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0781   (0x0003)  MISSED
	uint32_t                                           LODGroupKey;                                                // 0x0784   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0788   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x0000C8) align 8 MaxSize: 0x00C8
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0048   (0x0004)  
	int32_t                                            MaxComponents;                                              // 0x004C   (0x0004)  
	uint32_t                                           MaxImageImportCacheSizeMegaBytes;                           // 0x0050   (0x0004)  
	float                                              PaintStrengthGamma;                                         // 0x0054   (0x0004)  
	bool                                               bDisablePaintingStartupSlowdown;                            // 0x0058   (0x0001)  
	ELandscapeDirtyingMode                             LandscapeDirtyingMode;                                      // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	int32_t                                            SideResolutionLimit;                                        // 0x005C   (0x0004)  
	TWeakObjectPtr<class UMaterialInterface*>          DefaultLandscapeMaterial;                                   // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0068   (0x0028)  MISSED
	TWeakObjectPtr<class ULandscapeLayerInfoObject*>   DefaultLayerInfoObject;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0098   (0x0028)  MISSED
	bool                                               bRestrictiveMode;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x06C0 (1728 bytes) (0x000688 - 0x0006C0) align 16 MaxSize: 0x06C0
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x0688   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0698   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x06A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x06B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x343cc20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            Left;                                                       // 0x0018   (0x0018)  
	FVector                                            Right;                                                      // 0x0030   (0x0018)  
	FVector                                            FalloffLeft;                                                // 0x0048   (0x0018)  
	FVector                                            FalloffRight;                                               // 0x0060   (0x0018)  
	FVector                                            LayerLeft;                                                  // 0x0078   (0x0018)  
	FVector                                            LayerRight;                                                 // 0x0090   (0x0018)  
	FVector                                            LayerFalloffLeft;                                           // 0x00A8   (0x0018)  
	FVector                                            LayerFalloffRight;                                          // 0x00C0   (0x0018)  
	float                                              StartEndFalloff;                                            // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0030   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0048   (0x0018)  
	float                                              Width;                                                      // 0x0060   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0064   (0x0004)  
	float                                              SideFalloff;                                                // 0x0068   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x006C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0070   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0074   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0078   (0x0004)  
	float                                              EndFalloff;                                                 // 0x007C   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0080   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0090   (0x0010)  
	FBox                                               Bounds;                                                     // 0x00A0   (0x0038)  
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00D8   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x000C)  
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections[2];                                             // 0x0030   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0060   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0078   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0088   (0x0038)  
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00C0   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0870 (2160 bytes) (0x0007F0 - 0x000870) align 8 MaxSize: 0x0870
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	TWeakObjectPtr<class ALandscape*>                  LandscapeActorRef;                                          // 0x07F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x07F8   (0x0028)  MISSED
	SDK_UNDEFINED(80,5124) /* TSet<FString> */         __um(OverriddenSharedProperties);                           // 0x0820   (0x0050)  
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	class ULandscapeComponent*                         ChannelUsage[4];                                            // 0x0030   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0010   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0018   (0x0030)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x00B8   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x000C)  
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x0010   (0x0030)  
	FExpressionInput                                   HeightInput;                                                // 0x0040   (0x0030)  
	float                                              PreviewWeight;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVector                                            ConstLayerInput;                                            // 0x0078   (0x0018)  
	float                                              ConstHeightInput;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x00B8   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                                // 0x00B8   (0x0001)  
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                               // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00BA   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x00BC   (0x0004)  
	float                                              MappingRotation;                                            // 0x00C0   (0x0004)  
	float                                              MappingPanU;                                                // 0x00C4   (0x0004)  
	float                                              MappingPanV;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x0460   (0x0008)  
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate(bool bInUserTriggered);                                                                      // [0x3449ba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RenderLayer
	// class UTextureRenderTarget2d* RenderLayer(FLandscapeBrushParameters& InParameters);                                      // [0x3449f40] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2d* Render(bool InIsHeightmap, class UTextureRenderTarget2d* InCombinedResult, FName& InWeightmapLayerName); // [0x344a060] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);   // [0x3449c70] RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                              // [0x1a821d0] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeHLODBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULandscapeHLODBuilder : public UHLODBuilder
{ 
public:
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0230 (560 bytes) (0x000030 - 0x000230) align 8 MaxSize: 0x0230
class ULandscapeInfo : public UObject
{ 
public:
	TWeakObjectPtr<class ALandscape*>                  LandscapeActor;                                             // 0x0030   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0038   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0048   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x004C   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            DrawScale;                                                  // 0x0058   (0x0018)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x0070   (0x00B0)  MISSED
	SDK_UNDEFINED(16,5125) /* TArray<TWeakObjectPtr<ALandscapeStreamingProxy*>> */ __um(StreamingProxies);         // 0x0120   (0x0010)  
	unsigned char                                      UnknownData02_7[0x100];                                     // 0x0130   (0x0100)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeNaniteComponent
/// Size: 0x0780 (1920 bytes) (0x000760 - 0x000780) align 16 MaxSize: 0x0780
class ULandscapeNaniteComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              ProxyContentId;                                             // 0x0760   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0770   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0771   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0478 (1144 bytes) (0x000460 - 0x000478) align 8 MaxSize: 0x0478
class ALandscapeSplineActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	FGuid                                              LandscapeGuid;                                              // 0x0468   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0470 (1136 bytes) (0x000460 - 0x000470) align 8 MaxSize: 0x0470
class ALandscapeSplineMeshesActor : public APartitionActor
{ 
public:
	TArray<class UStaticMeshComponent*>                StaticMeshComponents;                                       // 0x0460   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0078 (120 bytes) (0x000058 - 0x000078) align 8 MaxSize: 0x0078
class ULandscapeSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0058   (0x0020)  MISSED
};

/// Class /Script/Landscape.LandscapeTextureStorageProviderFactory
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULandscapeTextureStorageProviderFactory : public UTextureAllMipDataProviderFactory
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x00B8   (0x000C)  
	float                                              PreviewWeight;                                              // 0x00C4   (0x0004)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0128 (296 bytes) (0x0000B8 - 0x000128) align 8 MaxSize: 0x0128
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x00B8   (0x0030)  
	FExpressionInput                                   LayerNotUsed;                                               // 0x00E8   (0x0030)  
	FName                                              ParameterName;                                              // 0x0118   (0x000C)  
	bool                                               PreviewUsed : 1;                                            // 0x0124:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0140 (320 bytes) (0x0000B8 - 0x000140) align 8 MaxSize: 0x0140
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   base;                                                       // 0x00B8   (0x0030)  
	FExpressionInput                                   Layer;                                                      // 0x00E8   (0x0030)  
	FName                                              ParameterName;                                              // 0x0118   (0x000C)  
	float                                              PreviewWeight;                                              // 0x0124   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0128   (0x0018)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPhysicalMaterialInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x0030)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x00B8   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x000C)  
	bool                                               bVisible;                                                   // 0x001C   (0x0001)  
	bool                                               bLocked;                                                    // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x0020   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0024   (0x0004)  
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0030   (0x0010)  
	TMap<class ULandscapeLayerInfoObject*, bool>       WeightmapLayerAllocationBlend;                              // 0x0040   (0x0050)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x0020   (0x0010)  
	bool                                               bScaleToWidth : 1;                                          // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0038   (0x0018)  
	TEnumAsByte<LandscapeSplineMeshOrientation>        Orientation;                                                // 0x0050   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                                // 0x0051   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                     // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_7[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Struct /Script/Landscape.LandscapeBrushParameters
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLandscapeBrushParameters
{ 
	ELandscapeToolTargetType                           LayerType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UTextureRenderTarget2d*                      CombinedResult;                                             // 0x0008   (0x0008)  
	FName                                              WeightmapLayerName;                                         // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeTexture2DMipMap
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeTexture2DMipMap
{ 
	int32_t                                            SizeX;                                                      // 0x0000   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0004   (0x0004)  
	bool                                               bCompressed;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2F];                                      // 0x0009   (0x002F)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UControlPointMeshComponent) == 0x0770); // 1904 bytes (0x000760 - 0x000770)
static_assert(sizeof(ULandscapeSplineInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FLandscapePerLODMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ALandscapeProxy) == 0x07F0); // 2032 bytes (0x000460 - 0x0007F0)
static_assert(sizeof(ALandscape) == 0x07F0); // 2032 bytes (0x0007F0 - 0x0007F0)
static_assert(sizeof(ULandscapeLODStreamingProxy_DEPRECATED) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULandscapeComponent) == 0x0880); // 2176 bytes (0x000688 - 0x000880)
static_assert(sizeof(ALandscapeGizmoActor) == 0x0460); // 1120 bytes (0x000460 - 0x000460)
static_assert(sizeof(ALandscapeGizmoActiveActor) == 0x04B0); // 1200 bytes (0x000460 - 0x0004B0)
static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x0690); // 1680 bytes (0x000688 - 0x000690)
static_assert(sizeof(FGrassVariety) == 0x01A8); // 424 bytes (0x000000 - 0x0001A8)
static_assert(sizeof(ULandscapeGrassType) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x0770); // 1904 bytes (0x000688 - 0x000770)
static_assert(sizeof(ULandscapeLayerInfoObject) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FLandscapeMaterialTextureStreamingInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x0790); // 1936 bytes (0x000770 - 0x000790)
static_assert(sizeof(ALandscapeMeshProxyActor) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(ULandscapeMeshProxyComponent) == 0x0790); // 1936 bytes (0x000760 - 0x000790)
static_assert(sizeof(ULandscapeSettings) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(ULandscapeSplinesComponent) == 0x06C0); // 1728 bytes (0x000688 - 0x0006C0)
static_assert(sizeof(FLandscapeSplineConnection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(ULandscapeSplineControlPoint) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ULandscapeSplineSegment) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(ALandscapeStreamingProxy) == 0x0870); // 2160 bytes (0x0007F0 - 0x000870)
static_assert(sizeof(ULandscapeWeightmapUsage) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FGrassInput) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(FLayerBlendInput) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x00D0); // 208 bytes (0x0000B8 - 0x0000D0)
static_assert(sizeof(AControlPointMeshActor) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(ALandscapeBlueprintBrushBase) == 0x0460); // 1120 bytes (0x000460 - 0x000460)
static_assert(sizeof(ULandscapeHLODBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULandscapeInfo) == 0x0230); // 560 bytes (0x000030 - 0x000230)
static_assert(sizeof(ULandscapeInfoMap) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(ULandscapeNaniteComponent) == 0x0780); // 1920 bytes (0x000760 - 0x000780)
static_assert(sizeof(ALandscapeSplineActor) == 0x0478); // 1144 bytes (0x000460 - 0x000478)
static_assert(sizeof(ALandscapeSplineMeshesActor) == 0x0470); // 1136 bytes (0x000460 - 0x000470)
static_assert(sizeof(ULandscapeSubsystem) == 0x0078); // 120 bytes (0x000058 - 0x000078)
static_assert(sizeof(ULandscapeTextureStorageProviderFactory) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0x0128); // 296 bytes (0x0000B8 - 0x000128)
static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x0140); // 320 bytes (0x0000B8 - 0x000140)
static_assert(sizeof(FPhysicalMaterialInput) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(FLandscapeLayerBrush) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayer) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLandscapeEditToolRenderData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLandscapeComponentMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeightmapData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHeightmapData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLandscapeLayerComponentData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGizmoSelectData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FForeignControlPointData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignSplineSegmentData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignWorldSplineData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FLandscapeBrushParameters) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayerStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeProxyMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeTexture2DMipMap) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FLandscapePerLODMaterialOverride, Material) == 0x0008);
static_assert(offsetof(ALandscapeProxy, SplineComponent) == 0x0468);
static_assert(offsetof(ALandscapeProxy, LandscapeGuid) == 0x0470);
static_assert(offsetof(ALandscapeProxy, PerLODOverrideMaterials) == 0x0498);
static_assert(offsetof(ALandscapeProxy, LandscapeSectionOffset) == 0x04A8);
static_assert(offsetof(ALandscapeProxy, DefaultPhysMaterial) == 0x04D0);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterial) == 0x04E0);
static_assert(offsetof(ALandscapeProxy, LandscapeHoleMaterial) == 0x0508);
static_assert(offsetof(ALandscapeProxy, RuntimeVirtualTextures) == 0x0510);
static_assert(offsetof(ALandscapeProxy, VirtualTextureRenderPassType) == 0x052C);
static_assert(offsetof(ALandscapeProxy, LandscapeComponents) == 0x0538);
static_assert(offsetof(ALandscapeProxy, CollisionComponents) == 0x0548);
static_assert(offsetof(ALandscapeProxy, FoliageComponents) == 0x0558);
static_assert(offsetof(ALandscapeProxy, NaniteComponent) == 0x0568);
static_assert(offsetof(ALandscapeProxy, NaniteComponents) == 0x0570);
static_assert(offsetof(ALandscapeProxy, ShadowCacheInvalidationBehavior) == 0x05ED);
static_assert(offsetof(ALandscapeProxy, LightingChannels) == 0x05FD);
static_assert(offsetof(ALandscapeProxy, CustomDepthStencilWriteMask) == 0x060C);
static_assert(offsetof(ALandscapeProxy, LightmassSettings) == 0x0618);
static_assert(offsetof(ALandscapeProxy, BodyInstance) == 0x0640);
static_assert(offsetof(ALandscapeProxy, NavigationGeometryGatheringMode) == 0x07E4);
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x0000);
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 0x06A0);
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 0x06A8);
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 0x06B0);
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 0x06C0);
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 0x06D0);
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 0x06E0);
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 0x06F0);
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 0x0720);
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 0x0740);
static_assert(offsetof(ULandscapeComponent, CollisionComponentRef) == 0x0778);
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 0x0788);
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 0x0790);
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 0x07A0);
static_assert(offsetof(ULandscapeComponent, PerLODOverrideMaterials) == 0x07B0);
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 0x07C0);
static_assert(offsetof(ULandscapeComponent, StateId) == 0x07EC);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterface) == 0x0820);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 0x0828);
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 0x0838);
static_assert(offsetof(ULandscapeComponent, MobileWeightmapLayerAllocations) == 0x0848);
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x0000);
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 0x0008);
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x0018);
static_assert(offsetof(FGrassVariety, GrassDensityQuality) == 0x0020);
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x0090);
static_assert(offsetof(FGrassVariety, StartCullDistanceQuality) == 0x0098);
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x0100);
static_assert(offsetof(FGrassVariety, EndCullDistanceQuality) == 0x0108);
static_assert(offsetof(FGrassVariety, Scaling) == 0x0174);
static_assert(offsetof(FGrassVariety, ScaleX) == 0x0178);
static_assert(offsetof(FGrassVariety, ScaleY) == 0x0180);
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x0188);
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x0193);
static_assert(offsetof(FGrassVariety, ShadowCacheInvalidationBehavior) == 0x01A0);
static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 0x0030);
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 0x0048);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 0x0688);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 0x06B0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 0x06C0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 0x06D0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponentRef) == 0x0708);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 0x0720);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 0x0030);
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 0x0040);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 0x004C);
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0x0000);
static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 0x02C8);
static_assert(offsetof(ULandscapeMeshCollisionComponent, MeshGuid) == 0x0770);
static_assert(offsetof(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 0x0460);
static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 0x0760);
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 0x0770);
static_assert(offsetof(ULandscapeSettings, LandscapeDirtyingMode) == 0x0059);
static_assert(offsetof(ULandscapeSettings, DefaultLandscapeMaterial) == 0x0060);
static_assert(offsetof(ULandscapeSettings, DefaultLayerInfoObject) == 0x0090);
static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 0x0688);
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 0x0698);
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 0x06A8);
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x0018);
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x0030);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x0048);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x0060);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 0x0078);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 0x0090);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 0x00A8);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 0x00C0);
static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 0x0030);
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 0x0048);
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 0x0080);
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 0x0090);
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 0x00A0);
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 0x00D8);
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x0000);
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x000C);
static_assert(offsetof(ULandscapeSplineSegment, Connections) == 0x0030);
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 0x0060);
static_assert(offsetof(ULandscapeSplineSegment, Points) == 0x0078);
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 0x0088);
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 0x00C0);
static_assert(offsetof(ALandscapeStreamingProxy, LandscapeActorRef) == 0x07F0);
static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 0x0030);
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 0x0050);
static_assert(offsetof(FGrassInput, Name) == 0x0000);
static_assert(offsetof(FGrassInput, GrassType) == 0x0010);
static_assert(offsetof(FGrassInput, Input) == 0x0018);
static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 0x00B8);
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x0000);
static_assert(offsetof(FLayerBlendInput, BlendType) == 0x000C);
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x0010);
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x0040);
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x0078);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType) == 0x00B9);
static_assert(offsetof(AControlPointMeshActor, ControlPointMeshComponent) == 0x0460);
static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 0x0030);
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 0x0038);
static_assert(offsetof(ULandscapeInfo, DrawScale) == 0x0058);
static_assert(offsetof(ULandscapeNaniteComponent, ProxyContentId) == 0x0760);
static_assert(offsetof(ALandscapeSplineActor, LandscapeGuid) == 0x0468);
static_assert(offsetof(ALandscapeSplineMeshesActor, StaticMeshComponents) == 0x0460);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 0x00E8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 0x0118);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, base) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 0x00E8);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 0x0118);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 0x0128);
static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0x0000);
static_assert(offsetof(FPhysicalMaterialInput, Input) == 0x0008);
static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 0x00B8);
static_assert(offsetof(FLandscapeLayer, Guid) == 0x0000);
static_assert(offsetof(FLandscapeLayer, Name) == 0x0010);
static_assert(offsetof(FLandscapeLayer, BlendMode) == 0x0028);
static_assert(offsetof(FLandscapeLayer, Brushes) == 0x0030);
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 0x0040);
static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0x0000);
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 0x0020);
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 0x0028);
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 0x0030);
static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 0x0008);
static_assert(offsetof(FWeightmapData, Textures) == 0x0000);
static_assert(offsetof(FWeightmapData, LayerAllocations) == 0x0010);
static_assert(offsetof(FWeightmapData, TextureUsages) == 0x0020);
static_assert(offsetof(FHeightmapData, Texture) == 0x0000);
static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0x0000);
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 0x0008);
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x0008);
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x0020);
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x0038);
static_assert(offsetof(FLandscapeSplineMeshEntry, Orientation) == 0x0050);
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 0x0051);
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 0x0052);
static_assert(offsetof(FLandscapeBrushParameters, LayerType) == 0x0000);
static_assert(offsetof(FLandscapeBrushParameters, CombinedResult) == 0x0008);
static_assert(offsetof(FLandscapeBrushParameters, WeightmapLayerName) == 0x0010);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x0008);
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 0x0008);
