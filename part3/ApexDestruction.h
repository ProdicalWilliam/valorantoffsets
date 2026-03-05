
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

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x01 (1 bytes)
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                                                                         = 0,
	IDO_On                                                                           = 1,
	IDO_Off                                                                          = 2
};

/// Class /Script/ApexDestruction.DestructibleActor
/// Size: 0x0478 (1144 bytes) (0x000460 - 0x000478) align 8 MaxSize: 0x0478
class ADestructibleActor : public AActor
{ 
public:
	class UDestructibleComponent*                      DestructibleComponent;                                      // 0x0460   (0x0008)  
	SDK_UNDEFINED(16,5061) /* FMulticastInlineDelegate */ __um(OnActorFracture);                                   // 0x0468   (0x0010)  
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x0AD0 (2768 bytes) (0x000A20 - 0x000AD0) align 16 MaxSize: 0x0AD0
class UDestructibleComponent : public USkinnedMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0A20   (0x0008)  MISSED
	bool                                               bFractureEffectOverride : 1;                                // 0x0A28:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0A29   (0x0007)  MISSED
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0A30   (0x0010)  
	bool                                               bEnableHardSleeping;                                        // 0x0A40   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0A41   (0x0003)  MISSED
	float                                              LargeChunkThreshold;                                        // 0x0A44   (0x0004)  
	SDK_UNDEFINED(16,5062) /* FMulticastInlineDelegate */ __um(OnComponentFracture);                               // 0x0A48   (0x0010)  
	unsigned char                                      UnknownData03_7[0x78];                                      // 0x0A58   (0x0078)  MISSED


	/// Functions
	// Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
	// void SetDestructibleMesh(class UDestructibleMesh* NewMesh);                                                              // [0x6cc76a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
	// class UDestructibleMesh* GetDestructibleMesh();                                                                          // [0x6cc7620] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	// void ApplyRadiusDamage(float BaseDamage, FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // [0x6cc77c0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
	// void ApplyDamage(float DamageAmount, FVector& HitLocation, FVector& ImpulseDir, float ImpulseStrength);                  // [0x6cc7b50] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FFractureMaterial
{ 
	FVector2D                                          UVScale;                                                    // 0x0000   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x0010   (0x0010)  
	FVector                                            Tangent;                                                    // 0x0020   (0x0018)  
	float                                              UAngle;                                                     // 0x0038   (0x0004)  
	int32_t                                            InteriorElementIndex;                                       // 0x003C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FDestructibleChunkParameters
{ 
	bool                                               bIsSupportChunk;                                            // 0x0000   (0x0001)  
	bool                                               bDoNotFracture;                                             // 0x0001   (0x0001)  
	bool                                               bDoNotDamage;                                               // 0x0002   (0x0001)  
	bool                                               bDoNotCrumble;                                              // 0x0003   (0x0001)  
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDestructibleFractureSettings : public UObject
{ 
public:
	int32_t                                            CellSiteCount;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FFractureMaterial                                  FractureMaterialDesc;                                       // 0x0038   (0x0040)  
	int32_t                                            RandomSeed;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FVector>                                    VoronoiSites;                                               // 0x0080   (0x0010)  
	int32_t                                            OriginalSubmeshCount;                                       // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0098   (0x0010)  
	TArray<FDestructibleChunkParameters>               ChunkParameters;                                            // 0x00A8   (0x0010)  
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FDestructibleDamageParameters
{ 
	float                                              DamageThreshold;                                            // 0x0000   (0x0004)  
	float                                              DamageSpread;                                               // 0x0004   (0x0004)  
	bool                                               bEnableImpactDamage;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ImpactDamage;                                               // 0x000C   (0x0004)  
	int32_t                                            DefaultImpactDamageDepth;                                   // 0x0010   (0x0004)  
	bool                                               bCustomImpactResistance;                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              ImpactResistance;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FDestructibleDebrisParameters
{ 
	float                                              DebrisLifetimeMin;                                          // 0x0000   (0x0004)  
	float                                              DebrisLifetimeMax;                                          // 0x0004   (0x0004)  
	float                                              DebrisMaxSeparationMin;                                     // 0x0008   (0x0004)  
	float                                              DebrisMaxSeparationMax;                                     // 0x000C   (0x0004)  
	FBox                                               ValidBounds;                                                // 0x0010   (0x0038)  
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDestructibleAdvancedParameters
{ 
	float                                              DamageCap;                                                  // 0x0000   (0x0004)  
	float                                              ImpactVelocityThreshold;                                    // 0x0004   (0x0004)  
	float                                              MaxChunkSpeed;                                              // 0x0008   (0x0004)  
	float                                              FractureImpulseScale;                                       // 0x000C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDestructibleSpecialHierarchyDepths
{ 
	int32_t                                            SupportDepth;                                               // 0x0000   (0x0004)  
	int32_t                                            MinimumFractureDepth;                                       // 0x0004   (0x0004)  
	bool                                               bEnableDebris;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            DebrisDepth;                                                // 0x000C   (0x0004)  
	int32_t                                            EssentialDepth;                                             // 0x0010   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FDestructibleDepthParameters
{ 
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                       // 0x0000   (0x0001)  
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDestructibleParametersFlag
{ 
	bool                                               bAccumulateDamage : 1;                                      // 0x0000:0 (0x0001)  
	bool                                               bAssetDefinedSupport : 1;                                   // 0x0000:1 (0x0001)  
	bool                                               bWorldSupport : 1;                                          // 0x0000:2 (0x0001)  
	bool                                               bDebrisTimeout : 1;                                         // 0x0000:3 (0x0001)  
	bool                                               bDebrisMaxSeparation : 1;                                   // 0x0000:4 (0x0001)  
	bool                                               bCrumbleSmallestChunks : 1;                                 // 0x0000:5 (0x0001)  
	bool                                               bAccurateRaycasts : 1;                                      // 0x0000:6 (0x0001)  
	bool                                               bUseValidBounds : 1;                                        // 0x0000:7 (0x0001)  
	bool                                               bFormExtendedStructures : 1;                                // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FDestructibleParameters
{ 
	FDestructibleDamageParameters                      DamageParameters;                                           // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FDestructibleDebrisParameters                      DebrisParameters;                                           // 0x0020   (0x0048)  
	FDestructibleAdvancedParameters                    AdvancedParameters;                                         // 0x0068   (0x0010)  
	FDestructibleSpecialHierarchyDepths                SpecialHierarchyDepths;                                     // 0x0078   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FDestructibleDepthParameters>               DepthParameters;                                            // 0x0090   (0x0010)  
	FDestructibleParametersFlag                        Flags;                                                      // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x05A8 (1448 bytes) (0x0004F0 - 0x0005A8) align 8 MaxSize: 0x05A8
class UDestructibleMesh : public USkeletalMesh
{ 
public:
	FDestructibleParameters                            DefaultDestructibleParameters;                              // 0x04F0   (0x00A8)  
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0598   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ADestructibleActor) == 0x0478); // 1144 bytes (0x000460 - 0x000478)
static_assert(sizeof(UDestructibleComponent) == 0x0AD0); // 2768 bytes (0x000A20 - 0x000AD0)
static_assert(sizeof(FFractureMaterial) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FDestructibleChunkParameters) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UDestructibleFractureSettings) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FDestructibleDamageParameters) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FDestructibleDebrisParameters) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FDestructibleAdvancedParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDestructibleDepthParameters) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDestructibleParametersFlag) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDestructibleParameters) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(UDestructibleMesh) == 0x05A8); // 1448 bytes (0x0004F0 - 0x0005A8)
static_assert(offsetof(ADestructibleActor, DestructibleComponent) == 0x0460);
static_assert(offsetof(UDestructibleComponent, FractureEffects) == 0x0A30);
static_assert(offsetof(FFractureMaterial, UVScale) == 0x0000);
static_assert(offsetof(FFractureMaterial, UVOffset) == 0x0010);
static_assert(offsetof(FFractureMaterial, Tangent) == 0x0020);
static_assert(offsetof(UDestructibleFractureSettings, FractureMaterialDesc) == 0x0038);
static_assert(offsetof(UDestructibleFractureSettings, VoronoiSites) == 0x0080);
static_assert(offsetof(UDestructibleFractureSettings, Materials) == 0x0098);
static_assert(offsetof(UDestructibleFractureSettings, ChunkParameters) == 0x00A8);
static_assert(offsetof(FDestructibleDebrisParameters, ValidBounds) == 0x0010);
static_assert(offsetof(FDestructibleDepthParameters, ImpactDamageOverride) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DamageParameters) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DebrisParameters) == 0x0020);
static_assert(offsetof(FDestructibleParameters, AdvancedParameters) == 0x0068);
static_assert(offsetof(FDestructibleParameters, SpecialHierarchyDepths) == 0x0078);
static_assert(offsetof(FDestructibleParameters, DepthParameters) == 0x0090);
static_assert(offsetof(FDestructibleParameters, Flags) == 0x00A0);
static_assert(offsetof(UDestructibleMesh, DefaultDestructibleParameters) == 0x04F0);
static_assert(offsetof(UDestructibleMesh, FractureEffects) == 0x0598);
