
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: InterchangeCore
/// dependency: InterchangeFactoryNodes
/// dependency: InterchangeNodes

#pragma pack(push, 0x1)

/// Enum /Script/InterchangePipelines.EInterchangeForceMeshType
/// Size: 0x01 (1 bytes)
enum class EInterchangeForceMeshType : uint8_t
{
	EInterchangeForceMeshType__IFMT_None                                             = 0,
	EInterchangeForceMeshType__IFMT_StaticMesh                                       = 1,
	EInterchangeForceMeshType__IFMT_SkeletalMesh                                     = 2
};

/// Enum /Script/InterchangePipelines.EInterchangeVertexColorImportOption
/// Size: 0x01 (1 bytes)
enum class EInterchangeVertexColorImportOption : uint8_t
{
	EInterchangeVertexColorImportOption__IVCIO_Replace                               = 0,
	EInterchangeVertexColorImportOption__IVCIO_Ignore                                = 1,
	EInterchangeVertexColorImportOption__IVCIO_Override                              = 2
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialXShaders
/// Size: 0x01 (1 bytes)
enum class EInterchangeMaterialXShaders : uint8_t
{
	EInterchangeMaterialXShaders__StandardSurface                                    = 0,
	EInterchangeMaterialXShaders__StandardSurfaceTransmission                        = 1,
	EInterchangeMaterialXShaders__SurfaceUnlit                                       = 2,
	EInterchangeMaterialXShaders__UsdPreviewSurface                                  = 3,
	EInterchangeMaterialXShaders__MaxShaderCount                                     = 4
};

/// Enum /Script/InterchangePipelines.EInterchangeAnimationRange
/// Size: 0x01 (1 bytes)
enum class EInterchangeAnimationRange : uint8_t
{
	EInterchangeAnimationRange__Timeline                                             = 0,
	EInterchangeAnimationRange__Animated                                             = 1,
	EInterchangeAnimationRange__SetRange                                             = 2
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialImportOption
/// Size: 0x01 (1 bytes)
enum class EInterchangeMaterialImportOption : uint8_t
{
	EInterchangeMaterialImportOption__ImportAsMaterials                              = 0,
	EInterchangeMaterialImportOption__ImportAsMaterialInstances                      = 1
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{ 
public:
	EInterchangeForceMeshType                          ForceAllMeshAsType;                                         // 0x00F0   (0x0001)  
	bool                                               bImportLods;                                                // 0x00F1   (0x0001)  
	bool                                               bBakeMeshes;                                                // 0x00F2   (0x0001)  
	EInterchangeVertexColorImportOption                VertexColorImportOption;                                    // 0x00F3   (0x0001)  
	FColor                                             VertexOverrideColor;                                        // 0x00F4   (0x0004)  
	bool                                               bRecomputeNormals;                                          // 0x00F8   (0x0001)  
	bool                                               bRecomputeTangents;                                         // 0x00F9   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x00FA   (0x0001)  
	bool                                               bComputeWeightedNormals;                                    // 0x00FB   (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis;                              // 0x00FC   (0x0001)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x00FD   (0x0001)  
	bool                                               bUseBackwardsCompatibleF16TruncUVs;                         // 0x00FE   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x00FF   (0x0001)  
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{ 
public:
	bool                                               bImportOnlyAnimations;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	TWeakObjectPtr<class USkeleton*>                   Skeleton;                                                   // 0x00F4   (0x0008)  
	bool                                               bImportMeshesInBoneHierarchy;                               // 0x00FC   (0x0001)  
	bool                                               bUseT0AsRefPose;                                            // 0x00FD   (0x0001)  
	bool                                               bConvertStaticsWithMorphTargetsToSkeletals;                 // 0x00FE   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x00FF   (0x0001)  MISSED
};

/// Class /Script/InterchangePipelines.GLTFPipelineSettings
/// Size: 0x00A0 (160 bytes) (0x000048 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGLTFPipelineSettings : public UDeveloperSettings
{ 
public:
	TMap<FString, FSoftObjectPath>                     MaterialParents;                                            // 0x0048   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGLTFPipeline
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00F0   (0x0008)  MISSED
	bool                                               bUseGLTFMaterialInstanceLibrary;                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/InterchangePipelines.MaterialXPipelineSettings
/// Size: 0x0098 (152 bytes) (0x000048 - 0x000098) align 8 MaxSize: 0x0098
class UMaterialXPipelineSettings : public UDeveloperSettings
{ 
public:
	TMap<EInterchangeMaterialXShaders, FSoftObjectPath> PredefinedSurfaceShaders;                                  // 0x0048   (0x0050)  
};

/// Class /Script/InterchangePipelines.InterchangeMaterialXPipeline
/// Size: 0x00F8 (248 bytes) (0x0000F0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
/// Size: 0x0160 (352 bytes) (0x0000F0 - 0x000160) align 8 MaxSize: 0x0160
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{ 
public:
	TWeakObjectPtr<class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> CommonSkeletalMeshesAndAnimationsProperties; // 0x00F0   (0x0008)  
	TWeakObjectPtr<class UInterchangeGenericCommonMeshesProperties*> CommonMeshesProperties;                       // 0x00F8   (0x0008)  
	bool                                               bImportAnimations;                                          // 0x0100   (0x0001)  
	bool                                               bImportBoneTracks;                                          // 0x0101   (0x0001)  
	EInterchangeAnimationRange                         AnimationRange;                                             // 0x0102   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0103   (0x0001)  MISSED
	FInt32Interval                                     FrameImportRange;                                           // 0x0104   (0x0008)  
	bool                                               bUse30HzToBakeBoneAnimation;                                // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	int32_t                                            CustomBoneAnimationSampleRate;                              // 0x0110   (0x0004)  
	bool                                               bSnapToClosestFrameBoundary;                                // 0x0114   (0x0001)  
	bool                                               bImportCustomAttribute;                                     // 0x0115   (0x0001)  
	bool                                               bAddCurveMetadataToSkeleton;                                // 0x0116   (0x0001)  
	bool                                               bSetMaterialDriveParameterOnCustomAttribute;                // 0x0117   (0x0001)  
	TArray<FString>                                    MaterialCurveSuffixes;                                      // 0x0118   (0x0010)  
	bool                                               bRemoveCurveRedundantKeys;                                  // 0x0128   (0x0001)  
	bool                                               bDoNotImportCurveWithZero;                                  // 0x0129   (0x0001)  
	bool                                               bDeleteExistingNonCurveCustomAttributes;                    // 0x012A   (0x0001)  
	bool                                               bDeleteExistingCustomAttributeCurves;                       // 0x012B   (0x0001)  
	bool                                               bDeleteExistingMorphTargetCurves;                           // 0x012C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	FString                                            SourceAnimationName;                                        // 0x0130   (0x0010)  
	bool                                               bSceneImport;                                               // 0x0140   (0x0001)  
	unsigned char                                      UnknownData03_7[0x1F];                                      // 0x0141   (0x001F)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
/// Size: 0x0180 (384 bytes) (0x0000F0 - 0x000180) align 8 MaxSize: 0x0180
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{ 
public:
	EReimportStrategyFlags                             ReimportStrategy;                                           // 0x00F0   (0x0001)  
	bool                                               bUseSourceNameForAsset;                                     // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00F2   (0x0006)  MISSED
	FString                                            AssetName;                                                  // 0x00F8   (0x0010)  
	FVector                                            ImportOffsetTranslation;                                    // 0x0108   (0x0018)  
	FRotator                                           ImportOffsetRotation;                                       // 0x0120   (0x0018)  
	float                                              ImportOffsetUniformScale;                                   // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	class UInterchangeGenericCommonMeshesProperties*   CommonMeshesProperties;                                     // 0x0140   (0x0008)  
	class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties; // 0x0148   (0x0008)  
	class UInterchangeGenericMeshPipeline*             MeshPipeline;                                               // 0x0150   (0x0008)  
	class UInterchangeGenericAnimationPipeline*        AnimationPipeline;                                          // 0x0158   (0x0008)  
	class UInterchangeGenericMaterialPipeline*         MaterialPipeline;                                           // 0x0160   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0168   (0x0018)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
/// Size: 0x0190 (400 bytes) (0x0000F0 - 0x000190) align 8 MaxSize: 0x0190
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{ 
public:
	bool                                               bImportMaterials;                                           // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FString                                            AssetName;                                                  // 0x00F8   (0x0010)  
	EInterchangeMaterialImportOption                   MaterialImport;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FSoftObjectPath                                    ParentMaterial;                                             // 0x0110   (0x0028)  
	class UInterchangeGenericTexturePipeline*          TexturePipeline;                                            // 0x0138   (0x0008)  
	class UInterchangeBaseNodeContainer*               BaseNodeContainer;                                          // 0x0140   (0x0008)  
	unsigned char                                      UnknownData02_7[0x48];                                      // 0x0148   (0x0048)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericMeshPipeline
/// Size: 0x01C8 (456 bytes) (0x0000F0 - 0x0001C8) align 8 MaxSize: 0x01C8
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{ 
public:
	TWeakObjectPtr<class UInterchangeGenericCommonMeshesProperties*> CommonMeshesProperties;                       // 0x00F0   (0x0008)  
	TWeakObjectPtr<class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> CommonSkeletalMeshesAndAnimationsProperties; // 0x00F8   (0x0008)  
	bool                                               bImportStaticMeshes;                                        // 0x0100   (0x0001)  
	bool                                               bCombineStaticMeshes;                                       // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0102   (0x0002)  MISSED
	FName                                              LODGroup;                                                   // 0x0104   (0x000C)  
	bool                                               bImportCollision;                                           // 0x0110   (0x0001)  
	bool                                               bImportCollisionAccordingToMeshName;                        // 0x0111   (0x0001)  
	bool                                               bOneConvexHullPerUCX;                                       // 0x0112   (0x0001)  
	bool                                               bBuildNanite;                                               // 0x0113   (0x0001)  
	bool                                               bBuildReversedIndexBuffer;                                  // 0x0114   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0115   (0x0001)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                         // 0x0116   (0x0001)  
	bool                                               bSupportFaceRemap;                                          // 0x0117   (0x0001)  
	int32_t                                            MinLightmapResolution;                                      // 0x0118   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x011C   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	FVector                                            BuildScale3D;                                               // 0x0128   (0x0018)  
	float                                              DistanceFieldResolutionScale;                               // 0x0140   (0x0004)  
	TWeakObjectPtr<class UStaticMesh*>                 DistanceFieldReplacementMesh;                               // 0x0144   (0x0008)  
	int32_t                                            MaxLumenMeshCards;                                          // 0x014C   (0x0004)  
	bool                                               bImportSkeletalMeshes;                                      // 0x0150   (0x0001)  
	EInterchangeSkeletalMeshContentType                SkeletalMeshImportContentType;                              // 0x0151   (0x0001)  
	EInterchangeSkeletalMeshContentType                LastSkeletalMeshImportContentType;                          // 0x0152   (0x0001)  
	bool                                               bCombineSkeletalMeshes;                                     // 0x0153   (0x0001)  
	bool                                               bImportMorphTargets;                                        // 0x0154   (0x0001)  
	bool                                               bUpdateSkeletonReferencePose;                               // 0x0155   (0x0001)  
	bool                                               bCreatePhysicsAsset;                                        // 0x0156   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0157   (0x0001)  MISSED
	TWeakObjectPtr<class UPhysicsAsset*>               PhysicsAsset;                                               // 0x0158   (0x0008)  
	bool                                               bUseHighPrecisionSkinWeights;                               // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	float                                              ThresholdPosition;                                          // 0x0164   (0x0004)  
	float                                              ThresholdTangentNormal;                                     // 0x0168   (0x0004)  
	float                                              ThresholdUV;                                                // 0x016C   (0x0004)  
	float                                              MorphThresholdPosition;                                     // 0x0170   (0x0004)  
	int32_t                                            BoneInfluenceLimit;                                         // 0x0174   (0x0004)  
	unsigned char                                      UnknownData04_7[0x50];                                      // 0x0178   (0x0050)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericLevelPipeline
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{ 
public:
	EReimportStrategyFlags                             ReimportPropertyStrategy;                                   // 0x00F0   (0x0001)  
	bool                                               bDeleteMissingActors;                                       // 0x00F1   (0x0001)  
	bool                                               bForceReimportDeletedActors;                                // 0x00F2   (0x0001)  
	bool                                               bForceReimportDeletedAssets;                                // 0x00F3   (0x0001)  
	bool                                               bDeleteMissingAssets;                                       // 0x00F4   (0x0001)  
	bool                                               bUsePhysicalInsteadOfStandardPerspectiveCamera;             // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData00_7[0xA];                                       // 0x00F6   (0x000A)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericTexturePipeline
/// Size: 0x0148 (328 bytes) (0x0000F0 - 0x000148) align 8 MaxSize: 0x0148
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{ 
public:
	bool                                               bImportTextures;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FString                                            AssetName;                                                  // 0x00F8   (0x0010)  
	bool                                               bAllowNonPowerOfTwo;                                        // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UInterchangeBaseNodeContainer*               BaseNodeContainer;                                          // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0118   (0x0030)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangePipelineMeshesUtilities
/// Size: 0x0130 (304 bytes) (0x000030 - 0x000130) align 8 MaxSize: 0x0130
class UInterchangePipelineMeshesUtilities : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x100];                                     // 0x0030   (0x0100)  MISSED


	/// Functions
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
	// void SetContext(FInterchangePipelineMeshesUtilitiesContext& Context);                                                    // [0x79c0510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
	// bool IsValidMeshInstanceUid(FString MeshInstanceUid);                                                                    // [0x79c1280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
	// bool IsValidMeshGeometryUid(FString MeshGeometryUid);                                                                    // [0x79c0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
	// FString GetMeshInstanceSkeletonRootUid(FString MeshInstanceUid);                                                         // [0x79c07b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
	// FInterchangeMeshInstance GetMeshInstanceByUid(FString MeshInstanceUid);                                                  // [0x79c1020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
	// FString GetMeshGeometrySkeletonRootUid(FString MeshGeometryUid);                                                         // [0x79c0610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
	// FInterchangeMeshGeometry GetMeshGeometryByUid(FString MeshGeometryUid);                                                  // [0x79c0d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
	// void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids);                                                        // [0x79c18b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
	// void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids);                                                        // [0x79c1520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
	// void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids);                                                       // [0x79c19e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
	// void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids);                                                       // [0x79c1650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
	// void GetAllMeshInstanceUidsUsingMeshGeometryUid(FString MeshGeometryUid, TArray<FString>& MeshInstanceUids);             // [0x79c0a60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
	// void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids);                                                          // [0x79c1b10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
	// void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids);                                                  // [0x79c13f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
	// void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids);                                                              // [0x79c1780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
	// class UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0x79c1c40] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/InterchangePipelines.InterchangeLodSceneNodeContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInterchangeLodSceneNodeContainer
{ 
	TArray<class UInterchangeSceneNode*>               SceneNodes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangeMeshInstance
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FInterchangeMeshInstance
{ 
	FString                                            MeshInstanceUid;                                            // 0x0000   (0x0010)  
	class UInterchangeSceneNode*                       LodGroupNode;                                               // 0x0010   (0x0008)  
	bool                                               bReferenceSkinnedMesh;                                      // 0x0018   (0x0001)  
	bool                                               bReferenceMorphTarget;                                      // 0x0019   (0x0001)  
	bool                                               bHasMorphTargets;                                           // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
	TMap<int32_t, FInterchangeLodSceneNodeContainer>   SceneNodePerLodIndex;                                       // 0x0020   (0x0050)  
	TArray<FString>                                    ReferencingMeshGeometryUids;                                // 0x0070   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangeMeshGeometry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FInterchangeMeshGeometry
{ 
	FString                                            MeshUid;                                                    // 0x0000   (0x0010)  
	class UInterchangeMeshNode*                        MeshNode;                                                   // 0x0010   (0x0008)  
	TArray<FString>                                    ReferencingMeshInstanceUids;                                // 0x0018   (0x0010)  
	TArray<FString>                                    AttachedSocketUids;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FInterchangePipelineMeshesUtilitiesContext
{ 
	bool                                               bConvertStaticMeshToSkeletalMesh;                           // 0x0000   (0x0001)  
	bool                                               bConvertSkeletalMeshToStaticMesh;                           // 0x0001   (0x0001)  
	bool                                               bConvertStaticsWithMorphTargetsToSkeletals;                 // 0x0002   (0x0001)  
	bool                                               bImportMeshesInBoneHierarchy;                               // 0x0003   (0x0001)  
	bool                                               bQueryGeometryOnlyIfNoInstance;                             // 0x0004   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UInterchangeGenericCommonMeshesProperties) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(UGLTFPipelineSettings) == 0x00A0); // 160 bytes (0x000048 - 0x0000A0)
static_assert(sizeof(UInterchangeGLTFPipeline) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(UMaterialXPipelineSettings) == 0x0098); // 152 bytes (0x000048 - 0x000098)
static_assert(sizeof(UInterchangeMaterialXPipeline) == 0x00F8); // 248 bytes (0x0000F0 - 0x0000F8)
static_assert(sizeof(UInterchangeGenericAnimationPipeline) == 0x0160); // 352 bytes (0x0000F0 - 0x000160)
static_assert(sizeof(UInterchangeGenericAssetsPipeline) == 0x0180); // 384 bytes (0x0000F0 - 0x000180)
static_assert(sizeof(UInterchangeGenericMaterialPipeline) == 0x0190); // 400 bytes (0x0000F0 - 0x000190)
static_assert(sizeof(UInterchangeGenericMeshPipeline) == 0x01C8); // 456 bytes (0x0000F0 - 0x0001C8)
static_assert(sizeof(UInterchangeGenericLevelPipeline) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(UInterchangeGenericTexturePipeline) == 0x0148); // 328 bytes (0x0000F0 - 0x000148)
static_assert(sizeof(UInterchangePipelineMeshesUtilities) == 0x0130); // 304 bytes (0x000030 - 0x000130)
static_assert(sizeof(FInterchangeLodSceneNodeContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInterchangeMeshInstance) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FInterchangeMeshGeometry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FInterchangePipelineMeshesUtilitiesContext) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, ForceAllMeshAsType) == 0x00F0);
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, VertexColorImportOption) == 0x00F3);
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, VertexOverrideColor) == 0x00F4);
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, Skeleton) == 0x00F4);
static_assert(offsetof(UGLTFPipelineSettings, MaterialParents) == 0x0048);
static_assert(offsetof(UMaterialXPipelineSettings, PredefinedSurfaceShaders) == 0x0048);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 0x00F0);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, CommonMeshesProperties) == 0x00F8);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, AnimationRange) == 0x0102);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, FrameImportRange) == 0x0104);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, MaterialCurveSuffixes) == 0x0118);
static_assert(offsetof(UInterchangeGenericAnimationPipeline, SourceAnimationName) == 0x0130);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ReimportStrategy) == 0x00F0);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, AssetName) == 0x00F8);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ImportOffsetTranslation) == 0x0108);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ImportOffsetRotation) == 0x0120);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, CommonMeshesProperties) == 0x0140);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 0x0148);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, MeshPipeline) == 0x0150);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, AnimationPipeline) == 0x0158);
static_assert(offsetof(UInterchangeGenericAssetsPipeline, MaterialPipeline) == 0x0160);
static_assert(offsetof(UInterchangeGenericMaterialPipeline, AssetName) == 0x00F8);
static_assert(offsetof(UInterchangeGenericMaterialPipeline, MaterialImport) == 0x0108);
static_assert(offsetof(UInterchangeGenericMaterialPipeline, ParentMaterial) == 0x0110);
static_assert(offsetof(UInterchangeGenericMaterialPipeline, TexturePipeline) == 0x0138);
static_assert(offsetof(UInterchangeGenericMaterialPipeline, BaseNodeContainer) == 0x0140);
static_assert(offsetof(UInterchangeGenericMeshPipeline, CommonMeshesProperties) == 0x00F0);
static_assert(offsetof(UInterchangeGenericMeshPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 0x00F8);
static_assert(offsetof(UInterchangeGenericMeshPipeline, LODGroup) == 0x0104);
static_assert(offsetof(UInterchangeGenericMeshPipeline, BuildScale3D) == 0x0128);
static_assert(offsetof(UInterchangeGenericMeshPipeline, DistanceFieldReplacementMesh) == 0x0144);
static_assert(offsetof(UInterchangeGenericMeshPipeline, SkeletalMeshImportContentType) == 0x0151);
static_assert(offsetof(UInterchangeGenericMeshPipeline, LastSkeletalMeshImportContentType) == 0x0152);
static_assert(offsetof(UInterchangeGenericMeshPipeline, PhysicsAsset) == 0x0158);
static_assert(offsetof(UInterchangeGenericLevelPipeline, ReimportPropertyStrategy) == 0x00F0);
static_assert(offsetof(UInterchangeGenericTexturePipeline, AssetName) == 0x00F8);
static_assert(offsetof(UInterchangeGenericTexturePipeline, BaseNodeContainer) == 0x0110);
static_assert(offsetof(FInterchangeLodSceneNodeContainer, SceneNodes) == 0x0000);
static_assert(offsetof(FInterchangeMeshInstance, MeshInstanceUid) == 0x0000);
static_assert(offsetof(FInterchangeMeshInstance, LodGroupNode) == 0x0010);
static_assert(offsetof(FInterchangeMeshInstance, SceneNodePerLodIndex) == 0x0020);
static_assert(offsetof(FInterchangeMeshInstance, ReferencingMeshGeometryUids) == 0x0070);
static_assert(offsetof(FInterchangeMeshGeometry, MeshUid) == 0x0000);
static_assert(offsetof(FInterchangeMeshGeometry, MeshNode) == 0x0010);
static_assert(offsetof(FInterchangeMeshGeometry, ReferencingMeshInstanceUids) == 0x0018);
static_assert(offsetof(FInterchangeMeshGeometry, AttachedSocketUids) == 0x0028);
