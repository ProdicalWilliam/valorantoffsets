
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents                                    = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated                                = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided                            = 2,
	EDynamicMeshComponentTangentsMode__Default                                       = 255
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None                                     = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors                             = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups                               = 2,
	EDynamicMeshComponentColorOverrideMode__Constant                                 = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshVertexColorTransformMode : uint8_t
{
	EDynamicMeshVertexColorTransformMode__NoTransform                                = 0,
	EDynamicMeshVertexColorTransformMode__LinearToSRGB                               = 1,
	EDynamicMeshVertexColorTransformMode__SRGBToLinear                               = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate                                  = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate                                = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate                                = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit                                              = 0,
	EDynamicMeshChangeType__MeshChange                                               = 1,
	EDynamicMeshChangeType__MeshReplacementChange                                    = 2,
	EDynamicMeshChangeType__MeshVertexChange                                         = 3,
	EDynamicMeshChangeType__DeformationEdit                                          = 4,
	EDynamicMeshChangeType__AttributeEdit                                            = 5
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown                                        = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology                                   = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions                                = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents                                = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors                                   = 8,
	EDynamicMeshAttributeChangeFlags__UVs                                            = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups                                 = 32
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0740 (1856 bytes) (0x0006D0 - 0x000740) align 16 MaxSize: 0x0740
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x06D0   (0x0020)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x06F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x06F1   (0x0003)  MISSED
	FLinearColor                                       WireframeColor;                                             // 0x06F4   (0x0010)  
	EDynamicMeshComponentColorOverrideMode             ColorMode;                                                  // 0x0704   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0705   (0x0003)  MISSED
	FColor                                             ConstantColor;                                              // 0x0708   (0x0004)  
	EDynamicMeshVertexColorTransformMode               ColorSpaceMode;                                             // 0x070C   (0x0001)  
	bool                                               bEnableFlatShading;                                         // 0x070D   (0x0001)  
	bool                                               bEnableViewModeOverrides;                                   // 0x070E   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x070F   (0x0001)  MISSED
	class UMaterialInterface*                          OverrideRenderMaterial;                                     // 0x0710   (0x0008)  
	class UMaterialInterface*                          SecondaryRenderMaterial;                                    // 0x0718   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0720   (0x0001)  MISSED
	bool                                               bEnableRayTracing;                                          // 0x0721   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x0722   (0x0006)  MISSED
	TArray<class UMaterialInterface*>                  BaseMaterials;                                              // 0x0728   (0x0010)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0738   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0x55087f0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                     // [0x5508ab0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                   // [0x5508930] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                     // [0x5508390] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0x5508220] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                      // [0x55086b0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0x5508e60] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0x55080e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                                 // [0x46cb250] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                          // [0x5508bf0] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0x5508d20] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0x55085a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                      // [0x55087b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                                 // [0x5508a70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                                // [0x55088f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                                  // [0x5508320] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                    // [0x55081e0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                              // [0x5508490] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                            // [0x5508a30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                     // [0x5508e20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                              // [0x55080a0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                    // [0x5508f60] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                       // [0x5508bb0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x5508ce0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                     // [0x5508360] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                      // [0x46cb880] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x09A0 (2464 bytes) (0x000740 - 0x0009A0) align 16 MaxSize: 0x09A0
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	class UDynamicMesh*                                MeshObject;                                                 // 0x0740   (0x0008)  
	unsigned char                                      UnknownData00_6[0x138];                                     // 0x0748   (0x0138)  MISSED
	EDynamicMeshComponentTangentsMode                  TangentsType;                                               // 0x0880   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3F];                                      // 0x0881   (0x003F)  MISSED
	TEnumAsByte<ECollisionTraceFlag>                   CollisionType;                                              // 0x08C0   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x08C1   (0x0001)  
	bool                                               bEnableComplexCollision;                                    // 0x08C2   (0x0001)  
	bool                                               bDeferCollisionUpdates;                                     // 0x08C3   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x08C4   (0x0004)  MISSED
	class UBodySetup*                                  MeshBodySetup;                                              // 0x08C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x08D0   (0x0038)  MISSED
	FKAggregateGeom                                    AggGeom;                                                    // 0x0908   (0x0078)  
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x0980   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0990   (0x0010)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0x550ef00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                               // [0x550e8e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0x550edf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0x550f620] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x550e9e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x550ebb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                        // [0x550f2e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                               // [0x550f5f0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                                 // [0x550edc0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0x550edc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                   // [0x550ed40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0x550f160] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0478 (1144 bytes) (0x000460 - 0x000478) align 8 MaxSize: 0x0478
class ADynamicMeshActor : public AActor
{ 
public:
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0460   (0x0008)  
	bool                                               bEnableComputeMeshPool;                                     // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0469   (0x0007)  MISSED
	class UDynamicMeshPool*                            DynamicMeshPool;                                            // 0x0470   (0x0008)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                       // [0x55147b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                          // [0x5514750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                                  // [0x4277ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                            // [0x55149e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                             // [0x55146c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                               // [0x5514960] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDynamicMeshGenerator : public UObject
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDynamicMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0030   (0x0048)  MISSED
	SDK_UNDEFINED(16,5122) /* FMulticastInlineDelegate */ __um(MeshModifiedBPEvent);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0088   (0x0020)  MISSED
	class UDynamicMeshGenerator*                       MeshGenerator;                                              // 0x00A8   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                       // [0x5515da0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                             // [0x5515dd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x5515d70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0x5515d40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UDynamicMeshPool : public UObject
{ 
public:
	TArray<class UDynamicMesh*>                        CachedMeshes;                                               // 0x0030   (0x0010)  
	TArray<class UDynamicMesh*>                        AllCreatedMeshes;                                           // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                               // [0x5516180] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                                  // [0x5516160] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                       // [0x55162f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                    // [0x5516100] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDynamicMeshChangeInfo
{ 
	EDynamicMeshChangeType                             Type;                                                       // 0x0000   (0x0001)  
	EDynamicMeshAttributeChangeFlags                   Flags;                                                      // 0x0001   (0x0001)  
	bool                                               bIsRevertChange;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1D];                                      // 0x0003   (0x001D)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshCommandChangeTarget) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMeshReplacementCommandChangeTarget) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMeshVertexCommandChangeTarget) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBaseDynamicMeshComponent) == 0x0740); // 1856 bytes (0x0006D0 - 0x000740)
static_assert(sizeof(UDynamicMeshComponent) == 0x09A0); // 2464 bytes (0x000740 - 0x0009A0)
static_assert(sizeof(ADynamicMeshActor) == 0x0478); // 1144 bytes (0x000460 - 0x000478)
static_assert(sizeof(UDynamicMeshGenerator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDynamicMesh) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UDynamicMeshPool) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FDynamicMeshChangeInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UBaseDynamicMeshComponent, WireframeColor) == 0x06F4);
static_assert(offsetof(UBaseDynamicMeshComponent, ColorMode) == 0x0704);
static_assert(offsetof(UBaseDynamicMeshComponent, ConstantColor) == 0x0708);
static_assert(offsetof(UBaseDynamicMeshComponent, ColorSpaceMode) == 0x070C);
static_assert(offsetof(UBaseDynamicMeshComponent, OverrideRenderMaterial) == 0x0710);
static_assert(offsetof(UBaseDynamicMeshComponent, SecondaryRenderMaterial) == 0x0718);
static_assert(offsetof(UBaseDynamicMeshComponent, BaseMaterials) == 0x0728);
static_assert(offsetof(UDynamicMeshComponent, MeshObject) == 0x0740);
static_assert(offsetof(UDynamicMeshComponent, TangentsType) == 0x0880);
static_assert(offsetof(UDynamicMeshComponent, CollisionType) == 0x08C0);
static_assert(offsetof(UDynamicMeshComponent, MeshBodySetup) == 0x08C8);
static_assert(offsetof(UDynamicMeshComponent, AggGeom) == 0x0908);
static_assert(offsetof(UDynamicMeshComponent, AsyncBodySetupQueue) == 0x0980);
static_assert(offsetof(ADynamicMeshActor, DynamicMeshComponent) == 0x0460);
static_assert(offsetof(ADynamicMeshActor, DynamicMeshPool) == 0x0470);
static_assert(offsetof(UDynamicMesh, MeshGenerator) == 0x00A8);
static_assert(offsetof(UDynamicMeshPool, CachedMeshes) == 0x0030);
static_assert(offsetof(UDynamicMeshPool, AllCreatedMeshes) == 0x0040);
static_assert(offsetof(FDynamicMeshChangeInfo, Type) == 0x0000);
static_assert(offsetof(FDynamicMeshChangeInfo, Flags) == 0x0001);
