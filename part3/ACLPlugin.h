
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

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x01 (1 bytes)
enum class ACLRotationFormat : uint8_t
{
	ACLRF_Quat                                                                       = 0,
	ACLRF_QuatDropW                                                                  = 1,
	ACLRF_QuatDropW_Variable                                                         = 2
};

/// Enum /Script/ACLPlugin.ACLVectorFormat
/// Size: 0x01 (1 bytes)
enum class ACLVectorFormat : uint8_t
{
	ACLVF_Vector3                                                                    = 0,
	ACLVF_Vector3_Variable                                                           = 1
};

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x01 (1 bytes)
enum class ACLCompressionLevel : uint8_t
{
	ACLCL_Lowest                                                                     = 0,
	ACLCL_Low                                                                        = 1,
	ACLCL_Medium                                                                     = 2,
	ACLCL_High                                                                       = 3,
	ACLCL_Highest                                                                    = 4
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelity : uint8_t
{
	ACLVisualFidelity__Highest                                                       = 0,
	ACLVisualFidelity__Medium                                                        = 1,
	ACLVisualFidelity__Lowest                                                        = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelityChangeResult : uint8_t
{
	ACLVisualFidelityChangeResult__Dispatched                                        = 0,
	ACLVisualFidelityChangeResult__Completed                                         = 1,
	ACLVisualFidelityChangeResult__Failed                                            = 2
};

/// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
/// Size: 0x0170 (368 bytes) (0x000030 - 0x000170) align 8 MaxSize: 0x0170
class UAnimationCompressionLibraryDatabase : public UObject
{ 
public:
	TArray<char>                                       CookedCompressedBytes;                                      // 0x0030   (0x0010)  
	TArray<uint64_t>                                   CookedAnimSequenceMappings;                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x118];                                     // 0x0050   (0x0118)  MISSED
	uint32_t                                           MaxStreamRequestSizeKB;                                     // 0x0168   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x016C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// void SetVisualFidelity(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity); // [0x759dbd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// ACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);                          // [0x759dad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
	class UAnimationCompressionLibraryDatabase*        DatabaseAsset;                                              // 0x0040   (0x0008)  
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UAnimationCompressionLibraryDatabase) == 0x0170); // 368 bytes (0x000030 - 0x000170)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLBase) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACL) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLCustom) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLDatabase) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLSafe) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimCurveCompressionCodec_ACL) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedCompressedBytes) == 0x0030);
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings) == 0x0040);
static_assert(offsetof(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset) == 0x0040);
