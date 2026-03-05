
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PBIK

#pragma pack(push, 0x1)

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x01 (1 bytes)
enum class ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source                                                  = 0,
	ERetargetSourceOrTarget__Target                                                  = 1
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x01 (1 bytes)
enum class ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None                                                   = 0,
	ERetargetTranslationMode__GloballyScaled                                         = 1,
	ERetargetTranslationMode__Absolute                                               = 2
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x01 (1 bytes)
enum class ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated                                              = 0,
	ERetargetRotationMode__OneToOne                                                  = 1,
	ERetargetRotationMode__OneToOneReversed                                          = 2,
	ERetargetRotationMode__None                                                      = 3
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x04 (4 bytes)
enum class EBasicAxis : uint32_t
{
	EBasicAxis__X                                                                    = 0,
	EBasicAxis__Y                                                                    = 1,
	EBasicAxis__Z                                                                    = 2,
	EBasicAxis__NegX                                                                 = 3,
	EBasicAxis__NegY                                                                 = 4,
	EBasicAxis__NegZ                                                                 = 5
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x04 (4 bytes)
enum class EWarpingDirectionSource : uint32_t
{
	EWarpingDirectionSource__Goals                                                   = 0,
	EWarpingDirectionSource__Chain                                                   = 1
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x01 (1 bytes)
enum class EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component                                                       = 0,
	EIKRigGoalSpace__Additive                                                        = 1,
	EIKRigGoalSpace__World                                                           = 2
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x01 (1 bytes)
enum class EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual                                                = 0,
	EIKRigGoalTransformSource__Bone                                                  = 1,
	EIKRigGoalTransformSource__ActorComponent                                        = 2
};

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UIKGoalCreatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/IKRig.IKGoalCreatorInterface.AddIKGoals
	// void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals);                                                                      // [0x75cc440] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x00F0 (240 bytes) (0x0000D8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UIKRigComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalTransform
	// void SetIKRigGoalTransform(FName GoalName, FTransform Transform, float PositionAlpha, float RotationAlpha);              // [0x75ccad0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	// void SetIKRigGoalPositionAndRotation(FName GoalName, FVector Position, FQuat Rotation, float PositionAlpha, float RotationAlpha); // [0x75cceb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoal
	// void SetIKRigGoal(FIKRigGoal& Goal);                                                                                     // [0x75cc950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.ClearAllGoals
	// void ClearAllGoals();                                                                                                    // [0x75cc920] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FTargetChainFKSettings
{ 
	bool                                               EnableFK;                                                   // 0x0000   (0x0001)  
	ERetargetRotationMode                              RotationMode;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RotationAlpha;                                              // 0x0004   (0x0004)  
	ERetargetTranslationMode                           TranslationMode;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TranslationAlpha;                                           // 0x000C   (0x0004)  
	float                                              PoleVectorMatching;                                         // 0x0010   (0x0004)  
	float                                              PoleVectorOffset;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FTargetChainIKSettings
{ 
	bool                                               EnableIK;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BlendToSource;                                              // 0x0004   (0x0004)  
	FVector                                            BlendToSourceWeights;                                       // 0x0008   (0x0018)  
	FVector                                            StaticOffset;                                               // 0x0020   (0x0018)  
	FVector                                            StaticLocalOffset;                                          // 0x0038   (0x0018)  
	FRotator                                           StaticRotationOffset;                                       // 0x0050   (0x0018)  
	float                                              ScaleVertical;                                              // 0x0068   (0x0004)  
	float                                              Extension;                                                  // 0x006C   (0x0004)  
	bool                                               bAffectedByIKWarping;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FTargetChainSpeedPlantSettings
{ 
	bool                                               EnableSpeedPlanting;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              SpeedCurveName;                                             // 0x0004   (0x000C)  
	float                                              SpeedThreshold;                                             // 0x0010   (0x0004)  
	float                                              UnplantStiffness;                                           // 0x0014   (0x0004)  
	float                                              UnplantCriticalDamping;                                     // 0x0018   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FTargetChainSettings
{ 
	FTargetChainFKSettings                             FK;                                                         // 0x0000   (0x0018)  
	FTargetChainIKSettings                             IK;                                                         // 0x0018   (0x0078)  
	FTargetChainSpeedPlantSettings                     SpeedPlanting;                                              // 0x0090   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class URetargetChainSettings : public UObject
{ 
public:
	FName                                              SourceChain;                                                // 0x0030   (0x000C)  
	FName                                              TargetChain;                                                // 0x003C   (0x000C)  
	FTargetChainSettings                               Settings;                                                   // 0x0048   (0x00B0)  
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FTargetRootSettings
{ 
	float                                              RotationAlpha;                                              // 0x0000   (0x0004)  
	float                                              TranslationAlpha;                                           // 0x0004   (0x0004)  
	float                                              BlendToSource;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            BlendToSourceWeights;                                       // 0x0010   (0x0018)  
	float                                              ScaleHorizontal;                                            // 0x0028   (0x0004)  
	float                                              ScaleVertical;                                              // 0x002C   (0x0004)  
	FVector                                            TranslationOffset;                                          // 0x0030   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0048   (0x0018)  
	float                                              AffectIKHorizontal;                                         // 0x0060   (0x0004)  
	float                                              AffectIKVertical;                                           // 0x0064   (0x0004)  
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class URetargetRootSettings : public UObject
{ 
public:
	FTargetRootSettings                                Settings;                                                   // 0x0030   (0x0068)  
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRetargetGlobalSettings
{ 
	bool                                               bEnableRoot;                                                // 0x0000   (0x0001)  
	bool                                               bEnableFK;                                                  // 0x0001   (0x0001)  
	bool                                               bEnableIK;                                                  // 0x0002   (0x0001)  
	bool                                               bWarping;                                                   // 0x0003   (0x0001)  
	EWarpingDirectionSource                            DirectionSource;                                            // 0x0004   (0x0004)  
	EBasicAxis                                         ForwardDirection;                                           // 0x0008   (0x0004)  
	FName                                              DirectionChain;                                             // 0x000C   (0x000C)  
	float                                              WarpForwards;                                               // 0x0018   (0x0004)  
	float                                              SidewaysOffset;                                             // 0x001C   (0x0004)  
	float                                              WarpSplay;                                                  // 0x0020   (0x0004)  
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UIKRetargetGlobalSettings : public UObject
{ 
public:
	FRetargetGlobalSettings                            Settings;                                                   // 0x0030   (0x0024)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRetargetChainMap
{ 
	FName                                              SourceChain;                                                // 0x0000   (0x000C)  
	FName                                              TargetChain;                                                // 0x000C   (0x000C)  
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FRetargetProfile
{ 
	bool                                               bApplyTargetRetargetPose;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              TargetRetargetPoseName;                                     // 0x0004   (0x000C)  
	bool                                               bApplySourceRetargetPose;                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              SourceRetargetPoseName;                                     // 0x0014   (0x000C)  
	bool                                               bApplyChainSettings;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	TMap<FName, FTargetChainSettings>                  ChainSettings;                                              // 0x0028   (0x0050)  
	bool                                               bApplyRootSettings;                                         // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FTargetRootSettings                                RootSettings;                                               // 0x0080   (0x0068)  
	bool                                               bApplyGlobalSettings;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FRetargetGlobalSettings                            GlobalSettings;                                             // 0x00EC   (0x0024)  
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FIKRetargetPose
{ 
	FVector                                            RootTranslationOffset;                                      // 0x0000   (0x0018)  
	TMap<FName, FQuat>                                 BoneRotationOffsets;                                        // 0x0018   (0x0050)  
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x0238 (568 bytes) (0x000030 - 0x000238) align 8 MaxSize: 0x0238
class UIKRetargeter : public UObject
{ 
public:
	TWeakObjectPtr<class UIKRigDefinition*>            SourceIKRigAsset;                                           // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	TWeakObjectPtr<class UIKRigDefinition*>            TargetIKRigAsset;                                           // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0068   (0x0028)  MISSED
	TArray<FRetargetChainMap>                          ChainMapping;                                               // 0x0090   (0x0010)  
	TArray<class URetargetChainSettings*>              ChainSettings;                                              // 0x00A0   (0x0010)  
	class URetargetRootSettings*                       RootSettings;                                               // 0x00B0   (0x0008)  
	class UIKRetargetGlobalSettings*                   GlobalSettings;                                             // 0x00B8   (0x0008)  
	TMap<FName, FRetargetProfile>                      Profiles;                                                   // 0x00C0   (0x0050)  
	FName                                              CurrentProfile;                                             // 0x0110   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TMap<FName, FIKRetargetPose>                       SourceRetargetPoses;                                        // 0x0120   (0x0050)  
	TMap<FName, FIKRetargetPose>                       TargetRetargetPoses;                                        // 0x0170   (0x0050)  
	FName                                              CurrentSourceRetargetPose;                                  // 0x01C0   (0x000C)  
	FName                                              CurrentTargetRetargetPose;                                  // 0x01CC   (0x000C)  
	TMap<FName, FIKRetargetPose>                       RetargetPoses;                                              // 0x01D8   (0x0050)  
	FName                                              CurrentRetargetPose;                                        // 0x0228   (0x000C)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0234   (0x0004)  MISSED


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	// void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);             // [0x75d3410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	// void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);     // [0x75d36d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	// void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x75d2460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	// void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x75d30a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	// void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x75d2920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	// void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x75d2d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	// FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                               // [0x75d3de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	// void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x75d3f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	// FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                         // [0x75d3900] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	// void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x75d3a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	// FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName IKGoalName);           // [0x75d4e60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	// FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);      // [0x75d4440] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	// FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x75d47d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x03A0 (928 bytes) (0x000030 - 0x0003A0) align 16 MaxSize: 0x03A0
class UIKRetargetProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x160];                                     // 0x0030   (0x0160)  MISSED
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0190   (0x0008)  
	unsigned char                                      UnknownData01_7[0x208];                                     // 0x0198   (0x0208)  MISSED
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 16 MaxSize: 0x0110
class UIKRigEffectorGoal : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0030   (0x000C)  
	FName                                              BoneName;                                                   // 0x003C   (0x000C)  
	float                                              PositionAlpha;                                              // 0x0048   (0x0004)  
	float                                              RotationAlpha;                                              // 0x004C   (0x0004)  
	FTransform                                         CurrentTransform;                                           // 0x0050   (0x0060)  
	FTransform                                         InitialTransform;                                           // 0x00B0   (0x0060)  
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FIKRigSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0010   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0020   (0x0010)  
	TArray<FTransform>                                 CurrentPoseGlobal;                                          // 0x0030   (0x0010)  
	TArray<FTransform>                                 CurrentPoseLocal;                                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 RefPoseGlobal;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FBoneChain
{ 
	FName                                              ChainName;                                                  // 0x0000   (0x000C)  
	FBoneReference                                     StartBone;                                                  // 0x000C   (0x0014)  
	FBoneReference                                     EndBone;                                                    // 0x0020   (0x0014)  
	FName                                              IKGoalName;                                                 // 0x0034   (0x000C)  
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRetargetDefinition
{ 
	FName                                              RootBone;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBoneChain>                                 BoneChains;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UIKRigDefinition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               PreviewSkeletalMesh;                                        // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0040   (0x0028)  MISSED
	FIKRigSkeleton                                     Skeleton;                                                   // 0x0068   (0x0070)  
	TArray<class UIKRigEffectorGoal*>                  Goals;                                                      // 0x00D8   (0x0010)  
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x00E8   (0x0010)  
	FRetargetDefinition                                RetargetDefinition;                                         // 0x00F8   (0x0020)  
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0158 (344 bytes) (0x000030 - 0x000158) align 8 MaxSize: 0x0158
class UIKRigProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0030   (0x0040)  MISSED
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_7[0xD8];                                      // 0x0080   (0x00D8)  MISSED
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UIKRigSolver : public UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UIKRig_BodyMoverEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0030   (0x000C)  
	FName                                              BoneName;                                                   // 0x003C   (0x000C)  
	float                                              InfluenceMultiplier;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UIKRig_BodyMover : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0038   (0x000C)  
	float                                              PositionAlpha;                                              // 0x0044   (0x0004)  
	float                                              PositionPositiveX;                                          // 0x0048   (0x0004)  
	float                                              PositionNegativeX;                                          // 0x004C   (0x0004)  
	float                                              PositionPositiveY;                                          // 0x0050   (0x0004)  
	float                                              PositionNegativeY;                                          // 0x0054   (0x0004)  
	float                                              PositionPositiveZ;                                          // 0x0058   (0x0004)  
	float                                              PositionNegativeZ;                                          // 0x005C   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0060   (0x0004)  
	float                                              RotateXAlpha;                                               // 0x0064   (0x0004)  
	float                                              RotateYAlpha;                                               // 0x0068   (0x0004)  
	float                                              RotateZAlpha;                                               // 0x006C   (0x0004)  
	TArray<class UIKRig_BodyMoverEffector*>            Effectors;                                                  // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UIKRig_LimbEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0030   (0x000C)  
	FName                                              BoneName;                                                   // 0x003C   (0x000C)  
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UIKRig_LimbSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0038   (0x000C)  
	float                                              ReachPrecision;                                             // 0x0044   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x004C   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0054   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x005C   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x0060   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0064   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0065   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	class UIKRig_LimbEffector*                         Effector;                                                   // 0x0068   (0x0008)  
	unsigned char                                      UnknownData04_7[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UIKRig_FBIKEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0030   (0x000C)  
	FName                                              BoneName;                                                   // 0x003C   (0x000C)  
	float                                              StrengthAlpha;                                              // 0x0048   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x004C   (0x0004)  
	float                                              PinRotation;                                                // 0x0050   (0x0004)  
	int32_t                                            IndexInSolver;                                              // 0x0054   (0x0004)  
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UIKRig_FBIKBoneSettings : public UObject
{ 
public:
	FName                                              bone;                                                       // 0x0030   (0x000C)  
	float                                              RotationStiffness;                                          // 0x003C   (0x0004)  
	float                                              PositionStiffness;                                          // 0x0040   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MinX;                                                       // 0x0048   (0x0004)  
	float                                              MaxX;                                                       // 0x004C   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              MinY;                                                       // 0x0054   (0x0004)  
	float                                              MaxY;                                                       // 0x0058   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x0060   (0x0004)  
	float                                              MaxZ;                                                       // 0x0064   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0070   (0x0018)  
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000108) align 8 MaxSize: 0x0108
class UIKRigFBIKSolver : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0038   (0x000C)  
	int32_t                                            Iterations;                                                 // 0x0044   (0x0004)  
	float                                              MassMultiplier;                                             // 0x0048   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x004C   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	FRootPrePullSettings                               PrePullRootSettings;                                        // 0x0050   (0x0020)  
	float                                              PullChainAlpha;                                             // 0x0070   (0x0004)  
	float                                              MaxAngle;                                                   // 0x0074   (0x0004)  
	float                                              OverRelaxation;                                             // 0x0078   (0x0004)  
	bool                                               bStartSolveFromInputPose;                                   // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	TArray<class UIKRig_FBIKEffector*>                 Effectors;                                                  // 0x0080   (0x0010)  
	TArray<class UIKRig_FBIKBoneSettings*>             BoneSettings;                                               // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_7[0x68];                                      // 0x00A0   (0x0068)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UIKRig_PoleSolverEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0030   (0x000C)  
	FName                                              BoneName;                                                   // 0x003C   (0x000C)  
	float                                              Alpha;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UIKRig_PoleSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0038   (0x000C)  
	FName                                              EndName;                                                    // 0x0044   (0x000C)  
	class UIKRig_PoleSolverEffector*                   Effector;                                                   // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0058   (0x0020)  MISSED
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UIKRig_SetTransformEffector : public UObject
{ 
public:
	bool                                               bEnablePosition;                                            // 0x0030   (0x0001)  
	bool                                               bEnableRotation;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x0034   (0x0004)  
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UIKRig_SetTransform : public UIKRigSolver
{ 
public:
	FName                                              Goal;                                                       // 0x0038   (0x000C)  
	FName                                              RootBone;                                                   // 0x0044   (0x000C)  
	class UIKRig_SetTransformEffector*                 Effector;                                                   // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FIKRigGoal
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	EIKRigGoalTransformSource                          TransformSource;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FBoneReference                                     SourceBone;                                                 // 0x0010   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0028   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0040   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0058   (0x0004)  
	float                                              RotationAlpha;                                              // 0x005C   (0x0004)  
	EIKRigGoalSpace                                    PositionSpace;                                              // 0x0060   (0x0001)  
	EIKRigGoalSpace                                    RotationSpace;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	FVector                                            FinalBlendedPosition;                                       // 0x0068   (0x0018)  
	FQuat                                              FinalBlendedRotation;                                       // 0x0080   (0x0020)  
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x01E8 (488 bytes) (0x000058 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	class UIKRigDefinition*                            RigDefinitionAsset;                                         // 0x0068   (0x0008)  
	TArray<FIKRigGoal>                                 Goals;                                                      // 0x0070   (0x0010)  
	bool                                               bStartFromRefPose;                                          // 0x0080   (0x0001)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0081   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0082   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0083   (0x0001)  MISSED
	float                                              Alpha;                                                      // 0x0084   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0088   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0090   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D8   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00E4   (0x0030)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0120   (0x00C0)  MISSED
	float                                              ActualAlpha;                                                // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x01E4   (0x0004)  MISSED
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01E0 (480 bytes) (0x000010 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{ 
	TWeakObjectPtr<class USkeletalMeshComponent*>      SourceMeshComponent;                                        // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UIKRetargeter*                               IKRetargeterAsset;                                          // 0x0020   (0x0008)  
	FRetargetProfile                                   CustomRetargetProfile;                                      // 0x0028   (0x0110)  
	bool                                               bSuppressWarnings;                                          // 0x0138   (0x0001)  
	bool                                               bCopyCurves;                                                // 0x0139   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x013A   (0x0006)  MISSED
	class UIKRetargetProcessor*                        Processor;                                                  // 0x0140   (0x0008)  
	unsigned char                                      UnknownData02_7[0x98];                                      // 0x0148   (0x0098)  MISSED
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FIKRigGoalContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGoalBone
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FIKRigInputSkeleton
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FLimbSolverSettings
{ 
	float                                              ReachPrecision;                                             // 0x0000   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0008   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0010   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0018   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x001C   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0020   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FLimbLink
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLimbSolver
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UIKGoalCreatorInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UIKRigComponent) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(FTargetChainFKSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTargetChainIKSettings) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FTargetChainSpeedPlantSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FTargetChainSettings) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(URetargetChainSettings) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(FTargetRootSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(URetargetRootSettings) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FRetargetGlobalSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UIKRetargetGlobalSettings) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FRetargetChainMap) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRetargetProfile) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FIKRetargetPose) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UIKRetargeter) == 0x0238); // 568 bytes (0x000030 - 0x000238)
static_assert(sizeof(UIKRetargetProcessor) == 0x03A0); // 928 bytes (0x000030 - 0x0003A0)
static_assert(sizeof(UIKRigEffectorGoal) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(FIKRigSkeleton) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FBoneChain) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRetargetDefinition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UIKRigDefinition) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UIKRigProcessor) == 0x0158); // 344 bytes (0x000030 - 0x000158)
static_assert(sizeof(UIKRigSolver) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UIKRig_BodyMoverEffector) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UIKRig_BodyMover) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UIKRig_LimbEffector) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UIKRig_LimbSolver) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UIKRig_FBIKEffector) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UIKRig_FBIKBoneSettings) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UIKRigFBIKSolver) == 0x0108); // 264 bytes (0x000038 - 0x000108)
static_assert(sizeof(UIKRig_PoleSolverEffector) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UIKRig_PoleSolver) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UIKRig_SetTransformEffector) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UIKRig_SetTransform) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FIKRigGoal) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FAnimNode_IKRig) == 0x01E8); // 488 bytes (0x000058 - 0x0001E8)
static_assert(sizeof(FAnimNode_RetargetPoseFromMesh) == 0x01E0); // 480 bytes (0x000010 - 0x0001E0)
static_assert(sizeof(FIKRigGoalContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGoalBone) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FIKRigInputSkeleton) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLimbSolverSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FLimbLink) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FLimbSolver) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FTargetChainFKSettings, RotationMode) == 0x0001);
static_assert(offsetof(FTargetChainFKSettings, TranslationMode) == 0x0008);
static_assert(offsetof(FTargetChainIKSettings, BlendToSourceWeights) == 0x0008);
static_assert(offsetof(FTargetChainIKSettings, StaticOffset) == 0x0020);
static_assert(offsetof(FTargetChainIKSettings, StaticLocalOffset) == 0x0038);
static_assert(offsetof(FTargetChainIKSettings, StaticRotationOffset) == 0x0050);
static_assert(offsetof(FTargetChainSpeedPlantSettings, SpeedCurveName) == 0x0004);
static_assert(offsetof(FTargetChainSettings, FK) == 0x0000);
static_assert(offsetof(FTargetChainSettings, IK) == 0x0018);
static_assert(offsetof(FTargetChainSettings, SpeedPlanting) == 0x0090);
static_assert(offsetof(URetargetChainSettings, SourceChain) == 0x0030);
static_assert(offsetof(URetargetChainSettings, TargetChain) == 0x003C);
static_assert(offsetof(URetargetChainSettings, Settings) == 0x0048);
static_assert(offsetof(FTargetRootSettings, BlendToSourceWeights) == 0x0010);
static_assert(offsetof(FTargetRootSettings, TranslationOffset) == 0x0030);
static_assert(offsetof(FTargetRootSettings, RotationOffset) == 0x0048);
static_assert(offsetof(URetargetRootSettings, Settings) == 0x0030);
static_assert(offsetof(FRetargetGlobalSettings, DirectionSource) == 0x0004);
static_assert(offsetof(FRetargetGlobalSettings, ForwardDirection) == 0x0008);
static_assert(offsetof(FRetargetGlobalSettings, DirectionChain) == 0x000C);
static_assert(offsetof(UIKRetargetGlobalSettings, Settings) == 0x0030);
static_assert(offsetof(FRetargetChainMap, SourceChain) == 0x0000);
static_assert(offsetof(FRetargetChainMap, TargetChain) == 0x000C);
static_assert(offsetof(FRetargetProfile, TargetRetargetPoseName) == 0x0004);
static_assert(offsetof(FRetargetProfile, SourceRetargetPoseName) == 0x0014);
static_assert(offsetof(FRetargetProfile, ChainSettings) == 0x0028);
static_assert(offsetof(FRetargetProfile, RootSettings) == 0x0080);
static_assert(offsetof(FRetargetProfile, GlobalSettings) == 0x00EC);
static_assert(offsetof(FIKRetargetPose, RootTranslationOffset) == 0x0000);
static_assert(offsetof(FIKRetargetPose, BoneRotationOffsets) == 0x0018);
static_assert(offsetof(UIKRetargeter, SourceIKRigAsset) == 0x0030);
static_assert(offsetof(UIKRetargeter, TargetIKRigAsset) == 0x0060);
static_assert(offsetof(UIKRetargeter, ChainMapping) == 0x0090);
static_assert(offsetof(UIKRetargeter, ChainSettings) == 0x00A0);
static_assert(offsetof(UIKRetargeter, RootSettings) == 0x00B0);
static_assert(offsetof(UIKRetargeter, GlobalSettings) == 0x00B8);
static_assert(offsetof(UIKRetargeter, Profiles) == 0x00C0);
static_assert(offsetof(UIKRetargeter, CurrentProfile) == 0x0110);
static_assert(offsetof(UIKRetargeter, SourceRetargetPoses) == 0x0120);
static_assert(offsetof(UIKRetargeter, TargetRetargetPoses) == 0x0170);
static_assert(offsetof(UIKRetargeter, CurrentSourceRetargetPose) == 0x01C0);
static_assert(offsetof(UIKRetargeter, CurrentTargetRetargetPose) == 0x01CC);
static_assert(offsetof(UIKRetargeter, RetargetPoses) == 0x01D8);
static_assert(offsetof(UIKRetargeter, CurrentRetargetPose) == 0x0228);
static_assert(offsetof(UIKRetargetProcessor, IKRigProcessor) == 0x0190);
static_assert(offsetof(UIKRigEffectorGoal, GoalName) == 0x0030);
static_assert(offsetof(UIKRigEffectorGoal, BoneName) == 0x003C);
static_assert(offsetof(UIKRigEffectorGoal, CurrentTransform) == 0x0050);
static_assert(offsetof(UIKRigEffectorGoal, InitialTransform) == 0x00B0);
static_assert(offsetof(FIKRigSkeleton, BoneNames) == 0x0000);
static_assert(offsetof(FIKRigSkeleton, ParentIndices) == 0x0010);
static_assert(offsetof(FIKRigSkeleton, ExcludedBones) == 0x0020);
static_assert(offsetof(FIKRigSkeleton, CurrentPoseGlobal) == 0x0030);
static_assert(offsetof(FIKRigSkeleton, CurrentPoseLocal) == 0x0040);
static_assert(offsetof(FIKRigSkeleton, RefPoseGlobal) == 0x0050);
static_assert(offsetof(FBoneChain, ChainName) == 0x0000);
static_assert(offsetof(FBoneChain, StartBone) == 0x000C);
static_assert(offsetof(FBoneChain, EndBone) == 0x0020);
static_assert(offsetof(FBoneChain, IKGoalName) == 0x0034);
static_assert(offsetof(FRetargetDefinition, RootBone) == 0x0000);
static_assert(offsetof(FRetargetDefinition, BoneChains) == 0x0010);
static_assert(offsetof(UIKRigDefinition, PreviewSkeletalMesh) == 0x0038);
static_assert(offsetof(UIKRigDefinition, Skeleton) == 0x0068);
static_assert(offsetof(UIKRigDefinition, Goals) == 0x00D8);
static_assert(offsetof(UIKRigDefinition, Solvers) == 0x00E8);
static_assert(offsetof(UIKRigDefinition, RetargetDefinition) == 0x00F8);
static_assert(offsetof(UIKRigProcessor, Solvers) == 0x0070);
static_assert(offsetof(UIKRig_BodyMoverEffector, GoalName) == 0x0030);
static_assert(offsetof(UIKRig_BodyMoverEffector, BoneName) == 0x003C);
static_assert(offsetof(UIKRig_BodyMover, RootBone) == 0x0038);
static_assert(offsetof(UIKRig_BodyMover, Effectors) == 0x0070);
static_assert(offsetof(UIKRig_LimbEffector, GoalName) == 0x0030);
static_assert(offsetof(UIKRig_LimbEffector, BoneName) == 0x003C);
static_assert(offsetof(UIKRig_LimbSolver, RootName) == 0x0038);
static_assert(offsetof(UIKRig_LimbSolver, HingeRotationAxis) == 0x0048);
static_assert(offsetof(UIKRig_LimbSolver, EndBoneForwardAxis) == 0x0065);
static_assert(offsetof(UIKRig_LimbSolver, Effector) == 0x0068);
static_assert(offsetof(UIKRig_FBIKEffector, GoalName) == 0x0030);
static_assert(offsetof(UIKRig_FBIKEffector, BoneName) == 0x003C);
static_assert(offsetof(UIKRig_FBIKBoneSettings, bone) == 0x0030);
static_assert(offsetof(UIKRig_FBIKBoneSettings, X) == 0x0044);
static_assert(offsetof(UIKRig_FBIKBoneSettings, Y) == 0x0050);
static_assert(offsetof(UIKRig_FBIKBoneSettings, Z) == 0x005C);
static_assert(offsetof(UIKRig_FBIKBoneSettings, PreferredAngles) == 0x0070);
static_assert(offsetof(UIKRigFBIKSolver, RootBone) == 0x0038);
static_assert(offsetof(UIKRigFBIKSolver, RootBehavior) == 0x004D);
static_assert(offsetof(UIKRigFBIKSolver, PrePullRootSettings) == 0x0050);
static_assert(offsetof(UIKRigFBIKSolver, Effectors) == 0x0080);
static_assert(offsetof(UIKRigFBIKSolver, BoneSettings) == 0x0090);
static_assert(offsetof(UIKRig_PoleSolverEffector, GoalName) == 0x0030);
static_assert(offsetof(UIKRig_PoleSolverEffector, BoneName) == 0x003C);
static_assert(offsetof(UIKRig_PoleSolver, RootName) == 0x0038);
static_assert(offsetof(UIKRig_PoleSolver, EndName) == 0x0044);
static_assert(offsetof(UIKRig_PoleSolver, Effector) == 0x0050);
static_assert(offsetof(UIKRig_SetTransform, Goal) == 0x0038);
static_assert(offsetof(UIKRig_SetTransform, RootBone) == 0x0044);
static_assert(offsetof(UIKRig_SetTransform, Effector) == 0x0050);
static_assert(offsetof(FIKRigGoal, Name) == 0x0000);
static_assert(offsetof(FIKRigGoal, TransformSource) == 0x000C);
static_assert(offsetof(FIKRigGoal, SourceBone) == 0x0010);
static_assert(offsetof(FIKRigGoal, Position) == 0x0028);
static_assert(offsetof(FIKRigGoal, Rotation) == 0x0040);
static_assert(offsetof(FIKRigGoal, PositionSpace) == 0x0060);
static_assert(offsetof(FIKRigGoal, RotationSpace) == 0x0061);
static_assert(offsetof(FIKRigGoal, FinalBlendedPosition) == 0x0068);
static_assert(offsetof(FIKRigGoal, FinalBlendedRotation) == 0x0080);
static_assert(offsetof(FAnimNode_IKRig, Source) == 0x0058);
static_assert(offsetof(FAnimNode_IKRig, RigDefinitionAsset) == 0x0068);
static_assert(offsetof(FAnimNode_IKRig, Goals) == 0x0070);
static_assert(offsetof(FAnimNode_IKRig, AlphaInputType) == 0x0081);
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBias) == 0x0088);
static_assert(offsetof(FAnimNode_IKRig, AlphaBoolBlend) == 0x0090);
static_assert(offsetof(FAnimNode_IKRig, AlphaCurveName) == 0x00D8);
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBiasClamp) == 0x00E4);
static_assert(offsetof(FAnimNode_IKRig, IKRigProcessor) == 0x0118);
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, SourceMeshComponent) == 0x0010);
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, IKRetargeterAsset) == 0x0020);
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, CustomRetargetProfile) == 0x0028);
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, Processor) == 0x0140);
static_assert(offsetof(FLimbSolverSettings, HingeRotationAxis) == 0x0004);
static_assert(offsetof(FLimbSolverSettings, EndBoneForwardAxis) == 0x0021);
