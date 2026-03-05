
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x01 (1 bytes)
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x01 (1 bytes)
enum class EBoneForwardAxis : uint8_t
{
	EBoneForwardAxis__X_Positive                                                     = 0,
	EBoneForwardAxis__X_Negative                                                     = 1,
	EBoneForwardAxis__Y_Positive                                                     = 2,
	EBoneForwardAxis__Y_Negative                                                     = 3,
	EBoneForwardAxis__Z_Positive                                                     = 4,
	EBoneForwardAxis__Z_Negative                                                     = 5
};

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x01 (1 bytes)
enum class ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Box                                                         = 3,
	ECollisionLimitType__Planar                                                      = 4
};

/// Enum /Script/KawaiiPhysics.ECollisionSourceType
/// Size: 0x01 (1 bytes)
enum class ECollisionSourceType : uint8_t
{
	ECollisionSourceType__AnimNode                                                   = 0,
	ECollisionSourceType__DataAsset                                                  = 1,
	ECollisionSourceType__PhysicsAsset                                               = 2
};

/// Enum /Script/KawaiiPhysics.EXPBDComplianceType
/// Size: 0x01 (1 bytes)
enum class EXPBDComplianceType : uint8_t
{
	EXPBDComplianceType__Concrete                                                    = 0,
	EXPBDComplianceType__Wood                                                        = 1,
	EXPBDComplianceType__Leather                                                     = 2,
	EXPBDComplianceType__Tendon                                                      = 3,
	EXPBDComplianceType__Rubber                                                      = 4,
	EXPBDComplianceType__Muscle                                                      = 5,
	EXPBDComplianceType__Fat                                                         = 6
};

/// Enum /Script/KawaiiPhysics.EExternalForceSpace
/// Size: 0x01 (1 bytes)
enum class EExternalForceSpace : uint8_t
{
	EExternalForceSpace__ComponentSpace                                              = 0,
	EExternalForceSpace__WorldSpace                                                  = 1,
	EExternalForceSpace__BoneSpace                                                   = 2
};

/// Enum /Script/KawaiiPhysics.EExternalForceCurveEvaluateType
/// Size: 0x01 (1 bytes)
enum class EExternalForceCurveEvaluateType : uint8_t
{
	EExternalForceCurveEvaluateType__Single                                          = 0,
	EExternalForceCurveEvaluateType__Average                                         = 1,
	EExternalForceCurveEvaluateType__Max                                             = 2,
	EExternalForceCurveEvaluateType__Min                                             = 3
};

/// Enum /Script/KawaiiPhysics.EKawaiiPhysicsAccessExternalForceResult
/// Size: 0x01 (1 bytes)
enum class EKawaiiPhysicsAccessExternalForceResult : uint8_t
{
	EKawaiiPhysicsAccessExternalForceResult__Valid                                   = 0,
	EKawaiiPhysicsAccessExternalForceResult__NotValid                                = 1
};

/// Class /Script/KawaiiPhysics.AnimNotifyState_KawaiiPhysicsAddExternalForce
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UAnimNotifyState_KawaiiPhysicsAddExternalForce : public UAnimNotifyState
{ 
public:
	TArray<FInstancedStruct>                           AdditionalExternalForces;                                   // 0x0038   (0x0010)  
	FGameplayTagContainer                              FilterTags;                                                 // 0x0048   (0x0020)  
	bool                                               bFilterExactMatch;                                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/KawaiiPhysics.AnimNotify_KawaiiPhysicsAddExternalForce
/// Size: 0x0078 (120 bytes) (0x000040 - 0x000078) align 8 MaxSize: 0x0078
class UAnimNotify_KawaiiPhysicsAddExternalForce : public UAnimNotify
{ 
public:
	TArray<FInstancedStruct>                           AdditionalExternalForces;                                   // 0x0040   (0x0010)  
	FGameplayTagContainer                              FilterTags;                                                 // 0x0050   (0x0020)  
	bool                                               bFilterExactMatch;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/KawaiiPhysics.ModifyBoneConstraintData
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FModifyBoneConstraintData
{ 
	FName                                              BoneName1;                                                  // 0x0000   (0x000C)  
	FName                                              BoneName2;                                                  // 0x000C   (0x000C)  
	FBoneReference                                     BoneReference1;                                             // 0x0018   (0x0014)  
	FBoneReference                                     BoneReference2;                                             // 0x002C   (0x0014)  
	bool                                               bOverrideCompliance;                                        // 0x0040   (0x0001)  
	EXPBDComplianceType                                ComplianceType;                                             // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0042   (0x0002)  MISSED
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FModifyBoneConstraintData>                  BoneConstraintsData;                                        // 0x0040   (0x0010)  
};

/// Class /Script/KawaiiPhysics.KawaiiPhysics_CustomExternalForce
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UKawaiiPhysics_CustomExternalForce : public UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0030   (0x0001)  
	bool                                               bDrawDebug;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0032   (0x0006)  MISSED


	/// Functions
	// Function /Script/KawaiiPhysics.KawaiiPhysics_CustomExternalForce.PreApply
	// void PreApply(FAnimNode_KawaiiPhysics& Node, class USkeletalMeshComponent* SkelComp);                                    // [0x7556890] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KawaiiPhysics.KawaiiPhysics_CustomExternalForce.IsDebugEnabled
	// bool IsDebugEnabled();                                                                                                   // [0x59152f0] Native|Public|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysics_CustomExternalForce.Apply
	// void Apply(FAnimNode_KawaiiPhysics& Node, int32_t ModifyBoneIndex, class USkeletalMeshComponent* SkelComp, FTransform& BoneTransform); // [0x7556160] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetWindScale
	// FKawaiiPhysicsReference SetWindScale(FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);                           // [0x755e870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportRotationThreshold
	// FKawaiiPhysicsReference SetTeleportRotationThreshold(FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold); // [0x755f190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportDistanceThreshold
	// FKawaiiPhysicsReference SetTeleportDistanceThreshold(FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold); // [0x755f490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetRootBoneName
	// FKawaiiPhysicsReference SetRootBoneName(FKawaiiPhysicsReference& KawaiiPhysics, FName& RootBoneName);                    // [0x75601a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetPhysicsSettings
	// FKawaiiPhysicsReference SetPhysicsSettings(FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings); // [0x755fab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetNeedWarmUp
	// FKawaiiPhysicsReference SetNeedWarmUp(FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp);                         // [0x755e270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetLimitsDataAsset
	// FKawaiiPhysicsReference SetLimitsDataAsset(FKawaiiPhysicsReference& KawaiiPhysics, class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset); // [0x755df70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetGravity
	// FKawaiiPhysicsReference SetGravity(FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);                             // [0x755ee80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceWildcardProperty
	// void SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, int32_t& Value); // [0x756e660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceVectorProperty
	// FKawaiiPhysicsReference SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, FVector Value); // [0x755b6b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceTransformProperty
	// FKawaiiPhysicsReference SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, FTransform Value); // [0x755a800] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceRotatorProperty
	// FKawaiiPhysicsReference SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, FRotator Value); // [0x755afa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceIntProperty
	// FKawaiiPhysicsReference SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, int32_t Value); // [0x755c4a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceFloatProperty
	// FKawaiiPhysicsReference SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, float Value); // [0x755bdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceBoolProperty
	// FKawaiiPhysicsReference SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, bool Value); // [0x755cb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetExcludeBoneNames
	// FKawaiiPhysicsReference SetExcludeBoneNames(FKawaiiPhysicsReference& KawaiiPhysics, TArray<FName>& ExcludeBoneNames);    // [0x755fe40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetEnableWind
	// FKawaiiPhysicsReference SetEnableWind(FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind);                         // [0x755eb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetDummyBoneLength
	// FKawaiiPhysicsReference SetDummyBoneLength(FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);               // [0x755f790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetAllowWorldCollision
	// FKawaiiPhysicsReference SetAllowWorldCollision(FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision);       // [0x755e570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ResetDynamics
	// FKawaiiPhysicsReference ResetDynamics(FKawaiiPhysicsReference& KawaiiPhysics);                                           // [0x7560390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.RemoveExternalForcesFromComponent
	// bool RemoveExternalForcesFromComponent(class USkeletalMeshComponent* MeshComp, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch); // [0x755cf50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetWindScale
	// float GetWindScale(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x755e740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportRotationThreshold
	// float GetTeleportRotationThreshold(FKawaiiPhysicsReference& KawaiiPhysics);                                              // [0x755f060] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportDistanceThreshold
	// float GetTeleportDistanceThreshold(FKawaiiPhysicsReference& KawaiiPhysics);                                              // [0x755f360] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetRootBoneName
	// FName GetRootBoneName(FKawaiiPhysicsReference& KawaiiPhysics);                                                           // [0x7560060] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetPhysicsSettings
	// FKawaiiPhysicsSettings GetPhysicsSettings(FKawaiiPhysicsReference& KawaiiPhysics);                                       // [0x755f960] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetNeedWarmUp
	// bool GetNeedWarmUp(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x755e140] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetLimitsDataAsset
	// class UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(FKawaiiPhysicsReference& KawaiiPhysics);                         // [0x755de40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetGravity
	// FVector GetGravity(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x755ed40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceWildcardProperty
	// void GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName, int32_t& Value); // [0x756ea90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceVectorProperty
	// FVector GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755b370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceTransformProperty
	// FTransform GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755a420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceRotatorProperty
	// FRotator GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755ac60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceIntProperty
	// int32_t GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755c170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceFloatProperty
	// float GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755ba80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceBoolProperty
	// bool GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, FName PropertyName); // [0x755c860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetExcludeBoneNames
	// TArray<FName> GetExcludeBoneNames(FKawaiiPhysicsReference& KawaiiPhysics);                                               // [0x755fcb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetEnableWind
	// bool GetEnableWind(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x755ea40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetDummyBoneLength
	// float GetDummyBoneLength(FKawaiiPhysicsReference& KawaiiPhysics);                                                        // [0x755f660] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetAllowWorldCollision
	// bool GetAllowWorldCollision(FKawaiiPhysicsReference& KawaiiPhysics);                                                     // [0x755e440] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysicsPure
	// void ConvertToKawaiiPhysicsPure(FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);         // [0x75604c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysics
	// FKawaiiPhysicsReference ConvertToKawaiiPhysics(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);    // [0x7560740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForceWithExecResult
	// FKawaiiPhysicsReference AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult& ExecResult, FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner); // [0x755dad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForcesToComponent
	// bool AddExternalForcesToComponent(class USkeletalMeshComponent* MeshComp, TArray<FInstancedStruct>& ExternalForces, class UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot); // [0x755d2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForce
	// bool AddExternalForce(FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, class UObject* Owner, bool bIsOneShot); // [0x755d780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0088
struct FCollisionLimitBase
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            OffsetLocation;                                             // 0x0018   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0030   (0x0018)  
	FVector                                            Location;                                                   // 0x0048   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x0060   (0x0020)  
	bool                                               bEnable;                                                    // 0x0080   (0x0001)  
	ECollisionSourceType                               SourceType;                                                 // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 16 MaxSize: 0x0090
struct FSphericalLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0088   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x008D   (0x0003)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 16 MaxSize: 0x0090
struct FCapsuleLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0088   (0x0004)  
	float                                              Length;                                                     // 0x008C   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.BoxLimit
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FBoxLimit : FCollisionLimitBase
{ 
	FVector                                            Extent;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FPlanarLimit : FCollisionLimitBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0088   (0x0008)  MISSED
	FPlane                                             Plane;                                                      // 0x0090   (0x0020)  
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0040   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0050   (0x0010)  
	TArray<FBoxLimit>                                  BoxLimits;                                                  // 0x0060   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0070   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsRootBoneSetting
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FKawaiiPhysicsRootBoneSetting
{ 
	FBoneReference                                     RootBone;                                                   // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FBoneReference>                             OverrideExcludeBones;                                       // 0x0018   (0x0010)  
	bool                                               bUseOverrideExcludeBones;                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FKawaiiPhysicsSettings
{ 
	float                                              Damping;                                                    // 0x0000   (0x0004)  
	float                                              Stiffness;                                                  // 0x0004   (0x0004)  
	float                                              WorldDampingLocation;                                       // 0x0008   (0x0004)  
	float                                              WorldDampingRotation;                                       // 0x000C   (0x0004)  
	float                                              Radius;                                                     // 0x0010   (0x0004)  
	float                                              LimitAngle;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 16 MaxSize: 0x0110
struct FKawaiiPhysicsModifyBone
{ 
	FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0014)  
	int32_t                                            Index;                                                      // 0x0014   (0x0004)  
	int32_t                                            ParentIndex;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int32_t>                                    ChildIndices;                                               // 0x0020   (0x0010)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0030   (0x0018)  
	FVector                                            Location;                                                   // 0x0048   (0x0018)  
	FVector                                            PrevLocation;                                               // 0x0060   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              PrevRotation;                                               // 0x0080   (0x0020)  
	FVector                                            PoseLocation;                                               // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              PoseRotation;                                               // 0x00C0   (0x0020)  
	FVector                                            PoseScale;                                                  // 0x00E0   (0x0018)  
	float                                              LengthFromRoot;                                             // 0x00F8   (0x0004)  
	float                                              LengthRateFromRoot;                                         // 0x00FC   (0x0004)  
	bool                                               bDummy;                                                     // 0x0100   (0x0001)  
	bool                                               bSkipSimulate;                                              // 0x0101   (0x0001)  
	unsigned char                                      UnknownData03_7[0xE];                                       // 0x0102   (0x000E)  MISSED
};

/// Struct /Script/KawaiiPhysics.ModifyBoneConstraint
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FModifyBoneConstraint
{ 
	FBoneReference                                     Bone1;                                                      // 0x0000   (0x0014)  
	FBoneReference                                     Bone2;                                                      // 0x0014   (0x0014)  
	bool                                               bOverrideCompliance;                                        // 0x0028   (0x0001)  
	EXPBDComplianceType                                ComplianceType;                                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            ModifyBoneIndex1;                                           // 0x002C   (0x0004)  
	int32_t                                            ModifyBoneIndex2;                                           // 0x0030   (0x0004)  
	float                                              Length;                                                     // 0x0034   (0x0004)  
	bool                                               bIsDummy;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Lambda;                                                     // 0x003C   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x0860 (2144 bytes) (0x0000D0 - 0x000860) align 16 MaxSize: 0x0860
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FBoneReference>                             ExcludeBones;                                               // 0x00E8   (0x0010)  
	TArray<FKawaiiPhysicsRootBoneSetting>              AdditionalRootBones;                                        // 0x00F8   (0x0010)  
	float                                              DummyBoneLength;                                            // 0x0108   (0x0004)  
	EBoneForwardAxis                                   BoneForwardAxis;                                            // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0110   (0x0018)  
	int32_t                                            TargetFramerate;                                            // 0x0128   (0x0004)  
	bool                                               OverrideTargetFramerate;                                    // 0x012C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	int32_t                                            WarmUpFrames;                                               // 0x0130   (0x0004)  
	bool                                               bUseWarmUpWhenResetDynamics;                                // 0x0134   (0x0001)  
	bool                                               bNeedWarmUp;                                                // 0x0135   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0136   (0x0002)  MISSED
	float                                              TeleportDistanceThreshold;                                  // 0x0138   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x013C   (0x0004)  
	EPlanarConstraint                                  PlanarConstraint;                                           // 0x0140   (0x0001)  
	bool                                               bUpdatePhysicsSettingsInGame;                               // 0x0141   (0x0001)  
	bool                                               ResetBoneTransformWhenBoneNotFound;                         // 0x0142   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x0143   (0x0005)  MISSED
	class UCurveFloat*                                 DampingCurve;                                               // 0x0148   (0x0008)  
	class UCurveFloat*                                 WorldDampingLocationCurve;                                  // 0x0150   (0x0008)  
	class UCurveFloat*                                 WorldDampingRotationCurve;                                  // 0x0158   (0x0008)  
	class UCurveFloat*                                 StiffnessCurve;                                             // 0x0160   (0x0008)  
	class UCurveFloat*                                 RadiusCurve;                                                // 0x0168   (0x0008)  
	class UCurveFloat*                                 LimitAngleCurve;                                            // 0x0170   (0x0008)  
	FRuntimeFloatCurve                                 DampingCurveData;                                           // 0x0178   (0x0088)  
	FRuntimeFloatCurve                                 StiffnessCurveData;                                         // 0x0200   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingLocationCurveData;                              // 0x0288   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingRotationCurveData;                              // 0x0310   (0x0088)  
	FRuntimeFloatCurve                                 RadiusCurveData;                                            // 0x0398   (0x0088)  
	FRuntimeFloatCurve                                 LimitAngleCurveData;                                        // 0x0420   (0x0088)  
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x04A8   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x04B8   (0x0010)  
	TArray<FBoxLimit>                                  BoxLimits;                                                  // 0x04C8   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x04D8   (0x0010)  
	class UKawaiiPhysicsLimitsDataAsset*               LimitsDataAsset;                                            // 0x04E8   (0x0008)  
	class UPhysicsAsset*                               PhysicsAssetForLimits;                                      // 0x04F0   (0x0008)  
	TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x04F8   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x0508   (0x0010)  
	TArray<FBoxLimit>                                  BoxLimitsData;                                              // 0x0518   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x0528   (0x0010)  
	EXPBDComplianceType                                BoneConstraintGlobalComplianceType;                         // 0x0538   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0539   (0x0003)  MISSED
	int32_t                                            BoneConstraintIterationCountBeforeCollision;                // 0x053C   (0x0004)  
	int32_t                                            BoneConstraintIterationCountAfterCollision;                 // 0x0540   (0x0004)  
	bool                                               bAutoAddChildDummyBoneConstraint;                           // 0x0544   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0545   (0x0003)  MISSED
	TArray<FModifyBoneConstraint>                      BoneConstraints;                                            // 0x0548   (0x0010)  
	class UKawaiiPhysicsBoneConstraintsDataAsset*      BoneConstraintsDataAsset;                                   // 0x0558   (0x0008)  
	TArray<FModifyBoneConstraint>                      BoneConstraintsData;                                        // 0x0560   (0x0010)  
	TArray<FModifyBoneConstraint>                      MergedBoneConstraints;                                      // 0x0570   (0x0010)  
	FVector                                            Gravity;                                                    // 0x0580   (0x0018)  
	bool                                               bEnableWind;                                                // 0x0598   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0599   (0x0003)  MISSED
	float                                              WindScale;                                                  // 0x059C   (0x0004)  
	TArray<FInstancedStruct>                           ExternalForces;                                             // 0x05A0   (0x0010)  
	TArray<class UKawaiiPhysics_CustomExternalForce*>  CustomExternalForces;                                       // 0x05B0   (0x0010)  
	bool                                               bAllowWorldCollision;                                       // 0x05C0   (0x0001)  
	bool                                               bOverrideCollisionParams;                                   // 0x05C1   (0x0001)  
	unsigned char                                      UnknownData08_6[0x6];                                       // 0x05C2   (0x0006)  MISSED
	FBodyInstance                                      CollisionChannelSettings;                                   // 0x05C8   (0x0190)  
	bool                                               bIgnoreSelfComponent;                                       // 0x0758   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0759   (0x0007)  MISSED
	TArray<FBoneReference>                             IgnoreBones;                                                // 0x0760   (0x0010)  
	TArray<FName>                                      IgnoreBoneNamePrefix;                                       // 0x0770   (0x0010)  
	FGameplayTag                                       KawaiiPhysicsTag;                                           // 0x0780   (0x000C)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x078C   (0x0004)  MISSED
	TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x0790   (0x0010)  
	float                                              DeltaTime;                                                  // 0x07A0   (0x0004)  
	unsigned char                                      UnknownData11_6[0xC];                                       // 0x07A4   (0x000C)  MISSED
	FTransform                                         PreSkelCompTransform;                                       // 0x07B0   (0x0060)  
	bool                                               bInitPhysicsSettings;                                       // 0x0810   (0x0001)  
	unsigned char                                      UnknownData12_7[0x4F];                                      // 0x0811   (0x004F)  MISSED
};

/// Struct /Script/KawaiiPhysics.RegexPatternBoneSet
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRegexPatternBoneSet
{ 
	FString                                            RegexPatternBone1;                                          // 0x0000   (0x0010)  
	FString                                            RegexPatternBone2;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysics_ExternalForce
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00D8
struct FKawaiiPhysics_ExternalForce
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bIsEnabled;                                                 // 0x0010   (0x0001)  
	bool                                               bDrawDebug;                                                 // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	TArray<FBoneReference>                             ApplyBoneFilter;                                            // 0x0018   (0x0010)  
	TArray<FBoneReference>                             IgnoreBoneFilter;                                           // 0x0028   (0x0010)  
	EExternalForceSpace                                ExternalForceSpace;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FFloatInterval                                     RandomForceScaleRange;                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UObject*                                     ExternalOwner;                                              // 0x0048   (0x0008)  
	bool                                               bIsOneShot;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              RandomizedForceScale;                                       // 0x0054   (0x0004)  
	FVector                                            Force;                                                      // 0x0058   (0x0018)  
	FTransform                                         ComponentTransform;                                         // 0x0070   (0x0060)  
	bool                                               bCanSelectForceSpace;                                       // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysics_ExternalForce_Basic
/// Size: 0x0190 (400 bytes) (0x0000D8 - 0x000190) align 16 MaxSize: 0x0190
struct FKawaiiPhysics_ExternalForce_Basic : FKawaiiPhysics_ExternalForce
{ 
	FVector                                            ForceDir;                                                   // 0x00D8   (0x0018)  
	FRuntimeFloatCurve                                 ForceRateByBoneLengthRate;                                  // 0x00F0   (0x0088)  
	float                                              Interval;                                                   // 0x0178   (0x0004)  
	float                                              Time;                                                       // 0x017C   (0x0004)  
	float                                              PrevTime;                                                   // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0184   (0x000C)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysics_ExternalForce_Gravity
/// Size: 0x0190 (400 bytes) (0x0000D8 - 0x000190) align 16 MaxSize: 0x0190
struct FKawaiiPhysics_ExternalForce_Gravity : FKawaiiPhysics_ExternalForce
{ 
	FRuntimeFloatCurve                                 ForceRateByBoneLengthRate;                                  // 0x00D8   (0x0088)  
	bool                                               bUseCharacterGravityDirection;                              // 0x0160   (0x0001)  
	bool                                               bUseCharacterGravityScale;                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0162   (0x0006)  MISSED
	FVector                                            OverrideGravityDirection;                                   // 0x0168   (0x0018)  
	bool                                               bUseOverrideGravityDirection;                               // 0x0180   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0181   (0x000F)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysics_ExternalForce_Curve
/// Size: 0x0310 (784 bytes) (0x0000D8 - 0x000310) align 16 MaxSize: 0x0310
struct FKawaiiPhysics_ExternalForce_Curve : FKawaiiPhysics_ExternalForce
{ 
	FRuntimeVectorCurve                                ForceCurve;                                                 // 0x00D8   (0x0188)  
	EExternalForceCurveEvaluateType                    CurveEvaluateType;                                          // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	int32_t                                            SubstepCount;                                               // 0x0264   (0x0004)  
	float                                              TimeScale;                                                  // 0x0268   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x026C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 ForceRateByBoneLengthRate;                                  // 0x0270   (0x0088)  
	float                                              Time;                                                       // 0x02F8   (0x0004)  
	float                                              PrevTime;                                                   // 0x02FC   (0x0004)  
	float                                              MaxCurveTime;                                               // 0x0300   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0304   (0x000C)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysics_ExternalForce_Wind
/// Size: 0x0170 (368 bytes) (0x0000D8 - 0x000170) align 16 MaxSize: 0x0170
struct FKawaiiPhysics_ExternalForce_Wind : FKawaiiPhysics_ExternalForce
{ 
	FRuntimeFloatCurve                                 ForceRateByBoneLengthRate;                                  // 0x00D8   (0x0088)  
	class UWorld*                                      World;                                                      // 0x0160   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsReference
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FKawaiiPhysicsReference : FAnimNodeReference
{ 
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FCollisionLimitDataBase
{ 
	FBoneReference                                     DrivingBoneReference;                                       // 0x0000   (0x0014)  
	FName                                              DrivingBoneName;                                            // 0x0014   (0x000C)  
	FVector                                            OffsetLocation;                                             // 0x0020   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0038   (0x0018)  
	FVector                                            Location;                                                   // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0070   (0x0020)  
	FGuid                                              Guid;                                                       // 0x0090   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x00A5   (0x000B)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	float                                              Length;                                                     // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.BoxLimitData
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FBoxLimitData : FCollisionLimitDataBase
{ 
	FVector                                            Extent;                                                     // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
	FPlane                                             Plane;                                                      // 0x00A0   (0x0020)  
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotifyState_KawaiiPhysicsAddExternalForce) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UAnimNotify_KawaiiPhysicsAddExternalForce) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(FModifyBoneConstraintData) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(UKawaiiPhysicsBoneConstraintsDataAsset) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UKawaiiPhysics_CustomExternalForce) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UKawaiiPhysicsLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FCollisionLimitBase) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FSphericalLimit) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(FCapsuleLimit) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(FBoxLimit) == 0x00A0); // 160 bytes (0x000088 - 0x0000A0)
static_assert(sizeof(FPlanarLimit) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UKawaiiPhysicsLimitsDataAsset) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(FKawaiiPhysicsRootBoneSetting) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FModifyBoneConstraint) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x0860); // 2144 bytes (0x0000D0 - 0x000860)
static_assert(sizeof(FRegexPatternBoneSet) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FKawaiiPhysics_ExternalForce) == 0x00D8); // 216 bytes (0x000000 - 0x0000D8)
static_assert(sizeof(FKawaiiPhysics_ExternalForce_Basic) == 0x0190); // 400 bytes (0x0000D8 - 0x000190)
static_assert(sizeof(FKawaiiPhysics_ExternalForce_Gravity) == 0x0190); // 400 bytes (0x0000D8 - 0x000190)
static_assert(sizeof(FKawaiiPhysics_ExternalForce_Curve) == 0x0310); // 784 bytes (0x0000D8 - 0x000310)
static_assert(sizeof(FKawaiiPhysics_ExternalForce_Wind) == 0x0170); // 368 bytes (0x0000D8 - 0x000170)
static_assert(sizeof(FKawaiiPhysicsReference) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FCollisionLimitDataBase) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FSphericalLimitData) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FCapsuleLimitData) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FBoxLimitData) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(FPlanarLimitData) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(offsetof(UAnimNotifyState_KawaiiPhysicsAddExternalForce, AdditionalExternalForces) == 0x0038);
static_assert(offsetof(UAnimNotifyState_KawaiiPhysicsAddExternalForce, FilterTags) == 0x0048);
static_assert(offsetof(UAnimNotify_KawaiiPhysicsAddExternalForce, AdditionalExternalForces) == 0x0040);
static_assert(offsetof(UAnimNotify_KawaiiPhysicsAddExternalForce, FilterTags) == 0x0050);
static_assert(offsetof(FModifyBoneConstraintData, BoneName1) == 0x0000);
static_assert(offsetof(FModifyBoneConstraintData, BoneName2) == 0x000C);
static_assert(offsetof(FModifyBoneConstraintData, BoneReference1) == 0x0018);
static_assert(offsetof(FModifyBoneConstraintData, BoneReference2) == 0x002C);
static_assert(offsetof(FModifyBoneConstraintData, ComplianceType) == 0x0041);
static_assert(offsetof(UKawaiiPhysicsBoneConstraintsDataAsset, BoneConstraintsData) == 0x0040);
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x0000);
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x0018);
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x0030);
static_assert(offsetof(FCollisionLimitBase, Location) == 0x0048);
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x0060);
static_assert(offsetof(FCollisionLimitBase, SourceType) == 0x0081);
static_assert(offsetof(FSphericalLimit, LimitType) == 0x008C);
static_assert(offsetof(FBoxLimit, Extent) == 0x0088);
static_assert(offsetof(FPlanarLimit, Plane) == 0x0090);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, SphericalLimits) == 0x0040);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits) == 0x0050);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, BoxLimits) == 0x0060);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, PlanarLimits) == 0x0070);
static_assert(offsetof(FKawaiiPhysicsRootBoneSetting, RootBone) == 0x0000);
static_assert(offsetof(FKawaiiPhysicsRootBoneSetting, OverrideExcludeBones) == 0x0018);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x0000);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndices) == 0x0020);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x0030);
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x0048);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x0060);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x0080);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x00A0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x00C0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x00E0);
static_assert(offsetof(FModifyBoneConstraint, Bone1) == 0x0000);
static_assert(offsetof(FModifyBoneConstraint, Bone2) == 0x0014);
static_assert(offsetof(FModifyBoneConstraint, ComplianceType) == 0x0029);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x00D0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x00E8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, AdditionalRootBones) == 0x00F8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneForwardAxis) == 0x010C);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x0110);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarConstraint) == 0x0140);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x0148);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x0150);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x0158);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x0160);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x0168);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x0170);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurveData) == 0x0178);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurveData) == 0x0200);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData) == 0x0288);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData) == 0x0310);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurveData) == 0x0398);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurveData) == 0x0420);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x04A8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x04B8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoxLimits) == 0x04C8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x04D8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitsDataAsset) == 0x04E8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsAssetForLimits) == 0x04F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimitsData) == 0x04F8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimitsData) == 0x0508);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoxLimitsData) == 0x0518);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimitsData) == 0x0528);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneConstraintGlobalComplianceType) == 0x0538);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneConstraints) == 0x0548);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneConstraintsDataAsset) == 0x0558);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneConstraintsData) == 0x0560);
static_assert(offsetof(FAnimNode_KawaiiPhysics, MergedBoneConstraints) == 0x0570);
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x0580);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExternalForces) == 0x05A0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CustomExternalForces) == 0x05B0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CollisionChannelSettings) == 0x05C8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBones) == 0x0760);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBoneNamePrefix) == 0x0770);
static_assert(offsetof(FAnimNode_KawaiiPhysics, KawaiiPhysicsTag) == 0x0780);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x0790);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x07B0);
static_assert(offsetof(FRegexPatternBoneSet, RegexPatternBone1) == 0x0000);
static_assert(offsetof(FRegexPatternBoneSet, RegexPatternBone2) == 0x0010);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, ApplyBoneFilter) == 0x0018);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, IgnoreBoneFilter) == 0x0028);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, ExternalForceSpace) == 0x0038);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, RandomForceScaleRange) == 0x003C);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, ExternalOwner) == 0x0048);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, Force) == 0x0058);
static_assert(offsetof(FKawaiiPhysics_ExternalForce, ComponentTransform) == 0x0070);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Basic, ForceDir) == 0x00D8);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Basic, ForceRateByBoneLengthRate) == 0x00F0);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Gravity, ForceRateByBoneLengthRate) == 0x00D8);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Gravity, OverrideGravityDirection) == 0x0168);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Curve, ForceCurve) == 0x00D8);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Curve, CurveEvaluateType) == 0x0260);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Curve, ForceRateByBoneLengthRate) == 0x0270);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Wind, ForceRateByBoneLengthRate) == 0x00D8);
static_assert(offsetof(FKawaiiPhysics_ExternalForce_Wind, World) == 0x0160);
static_assert(offsetof(FCollisionLimitDataBase, DrivingBoneReference) == 0x0000);
static_assert(offsetof(FCollisionLimitDataBase, DrivingBoneName) == 0x0014);
static_assert(offsetof(FCollisionLimitDataBase, OffsetLocation) == 0x0020);
static_assert(offsetof(FCollisionLimitDataBase, OffsetRotation) == 0x0038);
static_assert(offsetof(FCollisionLimitDataBase, Location) == 0x0050);
static_assert(offsetof(FCollisionLimitDataBase, Rotation) == 0x0070);
static_assert(offsetof(FCollisionLimitDataBase, Guid) == 0x0090);
static_assert(offsetof(FSphericalLimitData, LimitType) == 0x00A4);
static_assert(offsetof(FBoxLimitData, Extent) == 0x00A0);
static_assert(offsetof(FPlanarLimitData, Plane) == 0x00A0);
