
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

/// Enum /Script/InputTooling.EAimToolingFeature
/// Size: 0x01 (1 bytes)
enum class EAimToolingFeature : uint8_t
{
	EAimToolingFeature__TargetManagement                                             = 0,
	EAimToolingFeature__PullToCenter                                                 = 1,
	EAimToolingFeature__Bending                                                      = 2,
	EAimToolingFeature__Deceleration                                                 = 3,
	EAimToolingFeature__FrameOfReference                                             = 4,
	EAimToolingFeature__StrafeAssist                                                 = 5,
	EAimToolingFeature__TargetFriction                                               = 6,
	EAimToolingFeature__Guardrails                                                   = 7,
	EAimToolingFeature__Count                                                        = 8,
	EAimToolingFeature__Invalid                                                      = 254
};

/// Enum /Script/InputTooling.EAimToolingCurve
/// Size: 0x01 (1 bytes)
enum class EAimToolingCurve : uint8_t
{
	EAimToolingCurve__REPLACE_WITH_NEW_ENTRY                                         = 0,
	EAimToolingCurve__Count                                                          = 1,
	EAimToolingCurve__Invalid                                                        = 254
};

/// Enum /Script/InputTooling.EAimToolingTargetType
/// Size: 0x01 (1 bytes)
enum class EAimToolingTargetType : uint8_t
{
	EAimToolingTargetType__Player                                                    = 0,
	EAimToolingTargetType__GenericShootable                                          = 1,
	EAimToolingTargetType__LightStatic                                               = 2,
	EAimToolingTargetType__HeavyStatic                                               = 3,
	EAimToolingTargetType__LightMoving                                               = 4,
	EAimToolingTargetType__HeavyMoving                                               = 5,
	EAimToolingTargetType__Count                                                     = 6,
	EAimToolingTargetType__Invalid                                                   = 254
};

/// Enum /Script/InputTooling.EAimToolingBendingMode
/// Size: 0x01 (1 bytes)
enum class EAimToolingBendingMode : uint8_t
{
	EAimToolingBendingMode__SpatialBending                                           = 0,
	EAimToolingBendingMode__TemporalBending                                          = 1
};

/// Enum /Script/InputTooling.EAimToolingTargetFrictionAimingScalarMode
/// Size: 0x01 (1 bytes)
enum class EAimToolingTargetFrictionAimingScalarMode : uint8_t
{
	EAimToolingTargetFrictionAimingScalarMode__ApplyBothScalars                      = 0,
	EAimToolingTargetFrictionAimingScalarMode__PreferTargetFriction                  = 1,
	EAimToolingTargetFrictionAimingScalarMode__PreferAimingScalar                    = 2,
	EAimToolingTargetFrictionAimingScalarMode__PreferHighestScalar                   = 3,
	EAimToolingTargetFrictionAimingScalarMode__Count                                 = 4,
	EAimToolingTargetFrictionAimingScalarMode__Invalid                               = 254
};

/// Enum /Script/InputTooling.EAimToolingStrafeAssistMode
/// Size: 0x01 (1 bytes)
enum class EAimToolingStrafeAssistMode : uint8_t
{
	EAimToolingStrafeAssistMode__AlwaysTowardsTarget                                 = 0,
	EAimToolingStrafeAssistMode__ConditionalCounterStrafe                            = 1,
	EAimToolingStrafeAssistMode__AlwaysCounterStrafe                                 = 2,
	EAimToolingStrafeAssistMode__Count                                               = 3,
	EAimToolingStrafeAssistMode__Invalid                                             = 254
};

/// Enum /Script/InputTooling.EAimToolingStrafeAssistCounterStrafeMode
/// Size: 0x01 (1 bytes)
enum class EAimToolingStrafeAssistCounterStrafeMode : uint8_t
{
	EAimToolingStrafeAssistCounterStrafeMode__CounterMovementDirection               = 0,
	EAimToolingStrafeAssistCounterStrafeMode__CounterInputDirection                  = 1,
	EAimToolingStrafeAssistCounterStrafeMode__CounterMatchingMovementInputDirection  = 2,
	EAimToolingStrafeAssistCounterStrafeMode__Count                                  = 3,
	EAimToolingStrafeAssistCounterStrafeMode__Invalid                                = 254
};

/// Enum /Script/InputTooling.EAimToolingShotTrajectoryFlags
/// Size: 0x01 (1 bytes)
enum class EAimToolingShotTrajectoryFlags : uint8_t
{
	EAimToolingShotTrajectoryFlags__None                                             = 0,
	EAimToolingShotTrajectoryFlags__IgnoreWeight                                     = 1
};

/// Enum /Script/InputTooling.EMovementToolingFeature
/// Size: 0x01 (1 bytes)
enum class EMovementToolingFeature : uint8_t
{
	EMovementToolingFeature__ShotRooting                                             = 0,
	EMovementToolingFeature__FastStrafing                                            = 1,
	EMovementToolingFeature__FastRelease                                             = 2,
	EMovementToolingFeature__Count                                                   = 3,
	EMovementToolingFeature__Invalid                                                 = 254
};

/// Class /Script/InputTooling.BaseInputToolingComponent
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBaseInputToolingComponent : public UActorComponent
{ 
public:
	class APlayerController*                           OwningPC;                                                   // 0x00D8   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingCachedProjectionData
/// Size: 0x01F0 (496 bytes) (0x000000 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FAimToolingCachedProjectionData
{ 
	class APlayerController*                           OwningPC;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x1E8];                                     // 0x0008   (0x01E8)  MISSED
};

/// Struct /Script/InputTooling.AimToolingDecelerationEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingDecelerationEntry
{ 
	FVector2D                                          Input;                                                      // 0x0000   (0x0010)  
	float                                              Duration;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/InputTooling.AimToolingDecelerationState
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FAimToolingDecelerationState
{ 
	TArray<FAimToolingDecelerationEntry>               InputEntries;                                               // 0x0000   (0x0010)  
	FVector2D                                          AverageInputRate;                                           // 0x0010   (0x0010)  
	float                                              TimeTotal;                                                  // 0x0020   (0x0004)  
	bool                                               bIsDecelerating;                                            // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DecelerationAmount;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector2D                                          DecelerationStartDirection;                                 // 0x0030   (0x0010)  
	FVector2D                                          DecelerationLastKnownDirection;                             // 0x0040   (0x0010)  
	float                                              DecelerationStartSize;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/InputTooling.AimToolingTarget
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAimToolingTarget
{ 
	class UAimToolingTargetComponentBase*              TargetComponent;                                            // 0x0000   (0x0008)  
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	float                                              OverTargetPercent;                                          // 0x000C   (0x0004)  
	float                                              Dist;                                                       // 0x0010   (0x0004)  
	float                                              DistPercent;                                                // 0x0014   (0x0004)  
	FVector                                            AssistLocation;                                             // 0x0018   (0x0018)  
	bool                                               bInDirectVision;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/InputTooling.AimToolingComponent
/// Size: 0x0A90 (2704 bytes) (0x0000E0 - 0x000A90) align 16 MaxSize: 0x0A90
class UAimToolingComponent : public UBaseInputToolingComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x598];                                     // 0x00E0   (0x0598)  MISSED
	TArray<bool>                                       FeaturesEnabledValues;                                      // 0x0678   (0x0010)  
	TArray<float>                                      FeatureConfigValues;                                        // 0x0688   (0x0010)  
	TArray<class UCurveFloat*>                         FeatureConfigCurves;                                        // 0x0698   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06A8   (0x0008)  MISSED
	FAimToolingCachedProjectionData                    CachedProjectionData;                                       // 0x06B0   (0x01F0)  
	FAimToolingDecelerationState                       DecelerationState;                                          // 0x08A0   (0x0058)  
	bool                                               bAimToolingEnabled;                                         // 0x08F8   (0x0001)  
	bool                                               bAimToolingEnabledForCurrentWeapon;                         // 0x08F9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x08FA   (0x0006)  MISSED
	FVector2D                                          GamepadPreviousWalkStickVector;                             // 0x0900   (0x0010)  
	TArray<FAimToolingTarget>                          Targets;                                                    // 0x0910   (0x0010)  
	FAimToolingTarget                                  PreviousTarget;                                             // 0x0920   (0x0038)  
	float                                              PreviousTargetLostTime;                                     // 0x0958   (0x0004)  
	float                                              NewTargetAcquiredTime;                                      // 0x095C   (0x0004)  
	bool                                               bCurrentlyOverTarget;                                       // 0x0960   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0961   (0x0003)  MISSED
	float                                              LastOverTargetTimestamp;                                    // 0x0964   (0x0004)  
	float                                              CurrentOverTargetTimestamp;                                 // 0x0968   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x096C   (0x0004)  MISSED
	TArray<FVector>                                    CachedFiringLocations;                                      // 0x0970   (0x0010)  
	TArray<FVector>                                    CachedFiringDirections;                                     // 0x0980   (0x0010)  
	int32_t                                            FiringLocationAndDirectionCacheSize;                        // 0x0990   (0x0004)  
	unsigned char                                      UnknownData05_7[0xFC];                                      // 0x0994   (0x00FC)  MISSED


	/// Functions
	// Function /Script/InputTooling.AimToolingComponent.IsFeatureEnabled
	// bool IsFeatureEnabled(EAimToolingFeature Feature, class UAimToolingTargetComponentBase* TargetComponent);                // [0x4b84280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InputTooling.AimToolingComponent.IsAimToolingEnabledForCurrentWeapon
	// bool IsAimToolingEnabledForCurrentWeapon();                                                                              // [0x4b84470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InputTooling.AimToolingComponent.IsAimToolingEnabled
	// bool IsAimToolingEnabled();                                                                                              // [0x4b84490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InputTooling.AimToolingControllerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAimToolingControllerInterface : public UInterface
{ 
public:
};

/// Class /Script/InputTooling.AimToolingTargetComponentBase
/// Size: 0x0380 (896 bytes) (0x000330 - 0x000380) align 16 MaxSize: 0x0380
class UAimToolingTargetComponentBase : public USceneComponent
{ 
public:
	EAimToolingTargetType                              TargetType;                                                 // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0331   (0x0007)  MISSED
	TArray<EAimToolingFeature>                         DisabledFeatures;                                           // 0x0338   (0x0010)  
	FString                                            TuningOverrideTag;                                          // 0x0348   (0x0010)  
	class UCurveFloat*                                 TargetAssistRadiusOverrideXCurve;                           // 0x0358   (0x0008)  
	class UCurveFloat*                                 TargetAssistRadiusOverrideYCurve;                           // 0x0360   (0x0008)  
	FString                                            TuningOverrideTagADS;                                       // 0x0368   (0x0010)  
	char                                               TargetId;                                                   // 0x0378   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0379   (0x0007)  MISSED


	/// Functions
	// Function /Script/InputTooling.AimToolingTargetComponentBase.EnableAimToolingFeature
	// void EnableAimToolingFeature(EAimToolingFeature AimToolingFeature);                                                      // [0x4b854b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InputTooling.AimToolingTargetComponentBase.DisableAimToolingFeature
	// void DisableAimToolingFeature(EAimToolingFeature AimToolingFeature);                                                     // [0x4b85600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InputTooling.AimToolingPointsTargetComponent
/// Size: 0x03B0 (944 bytes) (0x000380 - 0x0003B0) align 16 MaxSize: 0x03B0
class UAimToolingPointsTargetComponent : public UAimToolingTargetComponentBase
{ 
public:
	FName                                              CenterTargetPointName;                                      // 0x0380   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	TArray<class UActorComponent*>                     AimToolingTargetPoints;                                     // 0x0390   (0x0010)  
	class AActor*                                      OwningActor;                                                // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x03A8   (0x0008)  MISSED
};

/// Struct /Script/InputTooling.AimToolingBoneDef
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAimToolingBoneDef
{ 
	FName                                              bone;                                                       // 0x0000   (0x000C)  
	float                                              Weight;                                                     // 0x000C   (0x0004)  
	float                                              RadiusScale;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingAxis
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAimToolingAxis
{ 
	FName                                              TopBone;                                                    // 0x0000   (0x000C)  
	FName                                              MiddleBone;                                                 // 0x000C   (0x000C)  
	FName                                              BottomBone;                                                 // 0x0018   (0x000C)  
};

/// Class /Script/InputTooling.AimToolingSkeletalTargetComponent
/// Size: 0x03C0 (960 bytes) (0x000380 - 0x0003C0) align 16 MaxSize: 0x03C0
class UAimToolingSkeletalTargetComponent : public UAimToolingTargetComponentBase
{ 
public:
	TArray<FAimToolingBoneDef>                         AimToolingBones;                                            // 0x0380   (0x0010)  
	FAimToolingAxis                                    AimToolingAxis;                                             // 0x0390   (0x0024)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x03B4   (0x000C)  MISSED
};

/// Class /Script/InputTooling.AimToolingStatics
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAimToolingStatics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/InputTooling.AimToolingTargetManager
/// Size: 0x00F0 (240 bytes) (0x0000D8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAimToolingTargetManager : public UActorComponent
{ 
public:
	char                                               LastUsedTargetID;                                           // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	TArray<class UAimToolingTargetComponentBase*>      TrackedTargets;                                             // 0x00E0   (0x0010)  
};

/// Struct /Script/InputTooling.AimToolingTargetPointDef
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAimToolingTargetPointDef
{ 
	FName                                              TargetPointName;                                            // 0x0000   (0x000C)  
	float                                              Weight;                                                     // 0x000C   (0x0004)  
	float                                              RadiusScale;                                                // 0x0010   (0x0004)  
};

/// Class /Script/InputTooling.AimToolingTargetPoint
/// Size: 0x0350 (848 bytes) (0x000330 - 0x000350) align 16 MaxSize: 0x0350
class UAimToolingTargetPoint : public USceneComponent
{ 
public:
	FAimToolingTargetPointDef                          TargetPoint;                                                // 0x0330   (0x0014)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0344   (0x000C)  MISSED
};

/// Class /Script/InputTooling.AimToolingTracker
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAimToolingTracker : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D8   (0x0010)  MISSED
};

/// Class /Script/InputTooling.BaseInputToolingControllerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UBaseInputToolingControllerInterface : public UInterface
{ 
public:
};

/// Class /Script/InputTooling.MovementToolingComponent
/// Size: 0x0168 (360 bytes) (0x0000E0 - 0x000168) align 8 MaxSize: 0x0168
class UMovementToolingComponent : public UBaseInputToolingComponent
{ 
public:
	TArray<bool>                                       FeaturesEnabledValues;                                      // 0x00E0   (0x0010)  
	TArray<float>                                      FeatureConfigValues;                                        // 0x00F0   (0x0010)  
	bool                                               bMovementToolingEnabled;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	FVector2D                                          FastStrafingPreviousInputVector;                            // 0x0108   (0x0010)  
	float                                              FastStrafeDirection;                                        // 0x0118   (0x0004)  
	bool                                               bInitialFastStrafingActive;                                 // 0x011C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x011D   (0x0003)  MISSED
	float                                              FastStrafingMaxObservedLateralSpeed;                        // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_7[0x44];                                      // 0x0124   (0x0044)  MISSED


	/// Functions
	// Function /Script/InputTooling.MovementToolingComponent.IsMovementToolingEnabled
	// bool IsMovementToolingEnabled();                                                                                         // [0x377c910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InputTooling.MovementToolingComponent.IsFeatureEnabled
	// bool IsFeatureEnabled(EMovementToolingFeature Feature);                                                                  // [0x4b8c4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InputTooling.MovementToolingControllerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMovementToolingControllerInterface : public UInterface
{ 
public:
};

/// Class /Script/InputTooling.MovementToolingStatics
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMovementToolingStatics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/InputTooling.AimToolingModifiers
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAimToolingModifiers
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/InputTooling.AimToolingPullToCenterResult
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAimToolingPullToCenterResult
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/InputTooling.AimToolingQueriedTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAimToolingQueriedTarget
{ 
	class UAimToolingTargetComponentBase*              TargetComponent;                                            // 0x0000   (0x0008)  
	bool                                               bInDirectVision;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/InputTooling.AimToolingTelemetryData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FAimToolingTelemetryData
{ 
	FVector2D                                          StrafeAssist;                                               // 0x0000   (0x0010)  
	FVector2D                                          TargetFriction;                                             // 0x0010   (0x0010)  
	FVector2D                                          PullToCenter;                                               // 0x0020   (0x0010)  
	FVector2D                                          FrameOfReference;                                           // 0x0030   (0x0010)  
	FVector2D                                          Deceleration;                                               // 0x0040   (0x0010)  
	FVector2D                                          Guardrails;                                                 // 0x0050   (0x0010)  
	FVector2D                                          LookInputVector;                                            // 0x0060   (0x0010)  
	FVector2D                                          MovementInputVector;                                        // 0x0070   (0x0010)  
	FVector2D                                          FinalLookInputDelta;                                        // 0x0080   (0x0010)  
	int32_t                                            ActiveAimToolingFeatures;                                   // 0x0090   (0x0004)  
	float                                              DistanceToTarget;                                           // 0x0094   (0x0004)  
	FString                                            WeaponTuningTag;                                            // 0x0098   (0x0010)  
	FString                                            Target;                                                     // 0x00A8   (0x0010)  
};

/// Struct /Script/InputTooling.AimToolingNoTargetFalloffSharedTuningSet
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAimToolingNoTargetFalloffSharedTuningSet
{ 
	bool                                               IsNoTargetFalloffEnabled;                                   // 0x0000   (0x0001)  
	bool                                               NoTargetFalloffDeceleration;                                // 0x0001   (0x0001)  
	bool                                               NoTargetFalloffFrameOfReference;                            // 0x0002   (0x0001)  
	bool                                               NoTargetFalloffStrafeAssist;                                // 0x0003   (0x0001)  
	bool                                               NoTargetFalloffTargetFriction;                              // 0x0004   (0x0001)  
	bool                                               NoTargetFalloffPullToCenter;                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	float                                              NoTargetFalloffTime;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingNewTargetRampUpSharedTuningSet
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAimToolingNewTargetRampUpSharedTuningSet
{ 
	bool                                               IsNewTargetRampUpEnabled;                                   // 0x0000   (0x0001)  
	bool                                               NewTargetRampUpDeceleration;                                // 0x0001   (0x0001)  
	bool                                               NewTargetRampUpFrameOfReference;                            // 0x0002   (0x0001)  
	bool                                               NewTargetRampUpStrafeAssist;                                // 0x0003   (0x0001)  
	bool                                               NewTargetRampUpTargetFriction;                              // 0x0004   (0x0001)  
	bool                                               NewTargetRampUpPullToCenter;                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	float                                              NewTargetRampUpTime;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingTargetManagementSharedTuningSet
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FAimToolingTargetManagementSharedTuningSet
{ 
	class UCurveFloat*                                 TargetManagementAssistRadiusXCurve;                         // 0x0000   (0x0008)  
	class UCurveFloat*                                 TargetManagementAssistRadiusYCurve;                         // 0x0008   (0x0008)  
	class UCurveFloat*                                 TargetManagementAssistRadiusXRecoilScaleCurve;              // 0x0010   (0x0008)  
	class UCurveFloat*                                 TargetManagementAssistRadiusYRecoilScaleCurve;              // 0x0018   (0x0008)  
	float                                              TargetManagementMinBiasDistance;                            // 0x0020   (0x0004)  
	float                                              TargetManagementMaxBiasDistance;                            // 0x0024   (0x0004)  
	float                                              TargetManagementOverTargetWeight;                           // 0x0028   (0x0004)  
	bool                                               bIsTargetManagementOverTargetNormalized;                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              TargetManagementDistanceWeight;                             // 0x0030   (0x0004)  
	bool                                               bIsTargetManagementDistanceNormalized;                      // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              TargetManagementPreviousTargetWeight;                       // 0x0038   (0x0004)  
	float                                              TargetManagementPreviousTargetDecay;                        // 0x003C   (0x0004)  
	TMap<EAimToolingTargetType, float>                 TargetManagementShootableTargetScoreModifiers;              // 0x0040   (0x0050)  
	float                                              AimToolingCloseRangeTuningDistance;                         // 0x0090   (0x0004)  
	bool                                               ENGINEERING_ONLY_CHECK_TO_MODIFY_VALUES_BELOW;              // 0x0094   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	class UCurveFloat*                                 TargetManagementQueryAngleCurve;                            // 0x0098   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingTargetManagementWeaponTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAimToolingTargetManagementWeaponTuningSet
{ 
	float                                              TargetManagementMaxQueryDist;                               // 0x0000   (0x0004)  
	float                                              TargetManagementMinQueryDist;                               // 0x0004   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingMoveErrorSharedTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAimToolingMoveErrorSharedTuningSet
{ 
	float                                              MoveErrorMax;                                               // 0x0000   (0x0004)  
	float                                              MoveErrorExponent;                                          // 0x0004   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingDecelerationSharedTuningSet
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FAimToolingDecelerationSharedTuningSet
{ 
	float                                              DecelerationTime;                                           // 0x0000   (0x0004)  
	float                                              DecelerationMaxAngleDeg;                                    // 0x0004   (0x0004)  
	float                                              DecelerationAverageWindow;                                  // 0x0008   (0x0004)  
	float                                              DecelerationHalfAngle;                                      // 0x000C   (0x0004)  
	float                                              DecelerationStartThreshold;                                 // 0x0010   (0x0004)  
	float                                              DecelerationVisionBlockedScale;                             // 0x0014   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingDecelerationWeaponTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FAimToolingDecelerationWeaponTuningSet
{ 
	class UCurveFloat*                                 DecelerationWorldDistFromTargetCurve;                       // 0x0000   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingTargetFrictionSharedTuningSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAimToolingTargetFrictionSharedTuningSet
{ 
	float                                              AimToolingTargetFrictionGlobalScale;                        // 0x0000   (0x0004)  
	float                                              AimToolingTargetFrictionVisionBlockedScale;                 // 0x0004   (0x0004)  
	float                                              AimToolingTargetFrictionInAirScale;                         // 0x0008   (0x0004)  
	EAimToolingTargetFrictionAimingScalarMode          TargetFrictionPrecisionAimingScalarMode;                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/InputTooling.AimToolingTargetFrictionFeatureTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAimToolingTargetFrictionFeatureTuningSet
{ 
	bool                                               bAimToolingTargetFrictionOverrideGlobalScale;               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AimToolingTargetFrictionGlobalScaleOverride;                // 0x0004   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingTargetFrictionWeaponTuningCurves
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingTargetFrictionWeaponTuningCurves
{ 
	class UCurveFloat*                                 TargetFrictionOverTargetPctCurve;                           // 0x0000   (0x0008)  
	class UCurveFloat*                                 TargetFrictionWorldDistFromTargetCurve;                     // 0x0008   (0x0008)  
	class UCurveFloat*                                 TargetFrictionStickDeflectionCurve;                         // 0x0010   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingTargetFrictionWeaponTuningSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAimToolingTargetFrictionWeaponTuningSet
{ 
	FAimToolingTargetFrictionWeaponTuningCurves        TowardTargetCurves;                                         // 0x0000   (0x0018)  
	FAimToolingTargetFrictionWeaponTuningCurves        AwayFromTargetCurves;                                       // 0x0018   (0x0018)  
};

/// Struct /Script/InputTooling.AimToolingStrafeAssistSharedTuningSet
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAimToolingStrafeAssistSharedTuningSet
{ 
	float                                              AimToolingStrafeAssistGlobalScale;                          // 0x0000   (0x0004)  
	float                                              AimToolingStrafeAssistVisionBlockedScale;                   // 0x0004   (0x0004)  
	float                                              AimToolingStrafeAssistInAirScale;                           // 0x0008   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingStrafeAssistFeatureTuningSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAimToolingStrafeAssistFeatureTuningSet
{ 
	float                                              AimToolingStrafeAssistMovementDeltaScale;                   // 0x0000   (0x0004)  
	float                                              AimToolingStrafeAssistMinimumMaxSpeedThreshold;             // 0x0004   (0x0004)  
	float                                              AimToolingStrafeAssistMinimumMaxSpeedOverride;              // 0x0008   (0x0004)  
	EAimToolingStrafeAssistMode                        AimToolingStrafeAssistMode;                                 // 0x000C   (0x0001)  
	EAimToolingStrafeAssistCounterStrafeMode           AimToolingStrafeAssistCounterStrafeMode;                    // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/InputTooling.AimToolingStrafeAssistWeaponTuningCurves
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingStrafeAssistWeaponTuningCurves
{ 
	class UCurveFloat*                                 StrafeAssistOverTargetPctCurve;                             // 0x0000   (0x0008)  
	class UCurveFloat*                                 StrafeAssistWorldDistFromTargetCurve;                       // 0x0008   (0x0008)  
	class UCurveFloat*                                 StrafeAssistPlayerSpeedCurve;                               // 0x0010   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingStrafeAssistWeaponTuningSet
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAimToolingStrafeAssistWeaponTuningSet
{ 
	FAimToolingStrafeAssistWeaponTuningCurves          TowardTargetCurves;                                         // 0x0000   (0x0018)  
	FAimToolingStrafeAssistWeaponTuningCurves          AwayFromTargetCurves;                                       // 0x0018   (0x0018)  
	float                                              AimToolingStrafeAssistNewTargetDelaySeconds;                // 0x0030   (0x0004)  
	float                                              AimToolingStrafeAssistNewTargetRampUpSeconds;               // 0x0034   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingFrameOfReferenceSharedTuningSet
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAimToolingFrameOfReferenceSharedTuningSet
{ 
	float                                              AimToolingFrameOfReferenceGlobalScale;                      // 0x0000   (0x0004)  
	float                                              AimToolingFrameOfReferenceVisionBlockedScale;               // 0x0004   (0x0004)  
	float                                              AimToolingFrameOfReferenceInAirScale;                       // 0x0008   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingFrameOfReferenceFeatureTuningSet
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAimToolingFrameOfReferenceFeatureTuningSet
{ 
	float                                              AimToolingFrameOfReferenceMinOverTargetPct;                 // 0x0000   (0x0004)  
	float                                              AimToolingFrameOfReferenceMovementDeltaScale;               // 0x0004   (0x0004)  
	FVector2D                                          AimToolingFrameOfReferenceScale;                            // 0x0008   (0x0010)  
	FVector2D                                          AimToolingFrameOfReferenceMaxDelta;                         // 0x0018   (0x0010)  
	float                                              AimToolingFrameOfReferenceHighVelocityStrengthMinBias;      // 0x0028   (0x0004)  
	float                                              AimToolingFrameOfReferenceHighVelocityStrengthMaxBias;      // 0x002C   (0x0004)  
	class UCurveFloat*                                 AimToolingFrameOfReferenceHighVelocityStrengthCurve;        // 0x0030   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingFrameOfReferenceWeaponTuningCurves
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingFrameOfReferenceWeaponTuningCurves
{ 
	class UCurveFloat*                                 FrameOfReferenceWorldDistFromTargetCurve;                   // 0x0000   (0x0008)  
	class UCurveFloat*                                 FrameOfReferenceStickDeflectionCurve;                       // 0x0008   (0x0008)  
	class UCurveFloat*                                 FrameOfReferenceOverTargetPctCurve;                         // 0x0010   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingFrameOfReferenceWeaponTuningSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAimToolingFrameOfReferenceWeaponTuningSet
{ 
	FAimToolingFrameOfReferenceWeaponTuningCurves      TowardTargetCurves;                                         // 0x0000   (0x0018)  
	FAimToolingFrameOfReferenceWeaponTuningCurves      AwayFromTargetCurves;                                       // 0x0018   (0x0018)  
};

/// Struct /Script/InputTooling.AimToolingPullToCenterSharedTuningSet
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAimToolingPullToCenterSharedTuningSet
{ 
	float                                              AimToolingPullToCenterInAirScale;                           // 0x0000   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingPullToCenterFeatureTuningSet
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FAimToolingPullToCenterFeatureTuningSet
{ 
	bool                                               AimToolingPullToCenterNewImplementation;                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 AimToolingPullToCenterAngleToTargetCurve;                   // 0x0008   (0x0008)  
	class UCurveFloat*                                 AimToolingPullToCenterOverTargetPctCurve;                   // 0x0010   (0x0008)  
	float                                              AimToolingPullToCenterRadialTowardExponent;                 // 0x0018   (0x0004)  
	float                                              AimToolingPullToCenterRadialTowardScale;                    // 0x001C   (0x0004)  
	float                                              AimToolingPullToCenterRadialAwayExponent;                   // 0x0020   (0x0004)  
	float                                              AimToolingPullToCenterRadialAwayScale;                      // 0x0024   (0x0004)  
	float                                              AimToolingPullToCenterTangentialTowardExponent;             // 0x0028   (0x0004)  
	float                                              AimToolingPullToCenterTangentialTowardScale;                // 0x002C   (0x0004)  
	float                                              AimToolingPullToCenterTangentialAwayExponent;               // 0x0030   (0x0004)  
	float                                              AimToolingPullToCenterTangentialAwayScale;                  // 0x0034   (0x0004)  
	float                                              AimToolingPullToCenterMovePenaltyScale;                     // 0x0038   (0x0004)  
	float                                              AimToolingPullToCenterRecoilEfficacyScale;                  // 0x003C   (0x0004)  
	float                                              AimToolingPullToCenterAdjustmentClampThreshold;             // 0x0040   (0x0004)  
	float                                              AimToolingPullToCenterAdjustmentClampScale;                 // 0x0044   (0x0004)  
	class UCurveFloat*                                 PullToCenterRadialTowardCurve;                              // 0x0048   (0x0008)  
	class UCurveFloat*                                 PullToCenterRadialAwayCurve;                                // 0x0050   (0x0008)  
	class UCurveFloat*                                 PullToCenterTangentialTowardCurve;                          // 0x0058   (0x0008)  
	class UCurveFloat*                                 PullToCenterTangentialAwayCurve;                            // 0x0060   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingPullToCenterWeaponTuningSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAimToolingPullToCenterWeaponTuningSet
{ 
	class UCurveFloat*                                 PullToCenterWorldDistFromTargetCurve;                       // 0x0000   (0x0008)  
	class UCurveFloat*                                 PullToCenterStickDeflectionCurve;                           // 0x0008   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingBendingSharedTuningSet
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FAimToolingBendingSharedTuningSet
{ 
	EAimToolingBendingMode                             BendingMode;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/InputTooling.AimToolingSpatialBendingFeatureTuningSet
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingSpatialBendingFeatureTuningSet
{ 
	float                                              SpatialBendingInnerRadiusCm;                                // 0x0000   (0x0004)  
	float                                              SpatialBendingOuterRadiusCm;                                // 0x0004   (0x0004)  
	float                                              SpatialBendingMaxAngleDegs;                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UCurveFloat*                                 SpatialBendingEfficacyScaleForErrorCurve;                   // 0x0010   (0x0008)  
};

/// Struct /Script/InputTooling.AimToolingSpatialBendingWeaponTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAimToolingSpatialBendingWeaponTuningSet
{ 
	float                                              SpatialBendingExponent;                                     // 0x0000   (0x0004)  
	float                                              SpatialBendingMovePenaltyScale;                             // 0x0004   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingTemporalBendingWeaponTuningSet
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FAimToolingTemporalBendingWeaponTuningSet
{ 
	bool                                               bTemporalBendingForWeapon;                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PrecisionFiringErrorCutoff;                                 // 0x0004   (0x0004)  
	float                                              PrecisionMovementErrorCutoff;                               // 0x0008   (0x0004)  
	float                                              PrecisionRecoilPitchCutoff;                                 // 0x000C   (0x0004)  
	float                                              PrecisionRecoilYawCutoff;                                   // 0x0010   (0x0004)  
	float                                              OffTargetTimeCutoff;                                        // 0x0014   (0x0004)  
	float                                              MaxBendingAngleDegs;                                        // 0x0018   (0x0004)  
};

/// Struct /Script/InputTooling.AimToolingGuardrailsSharedTuningSet
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAimToolingGuardrailsSharedTuningSet
{ 
	class UCurveFloat*                                 GuardrailsMaximumDeflectionAngleDegreesStickDeflectionCurve; // 0x0000   (0x0008)  
	class UCurveFloat*                                 GuardrailsMinimumLengthPercentStickDeflectionCurve;         // 0x0008   (0x0008)  
	class UCurveFloat*                                 GuardrailsMaximumLengthPercentStickDeflectionCurve;         // 0x0010   (0x0008)  
};

/// Struct /Script/InputTooling.MovementToolingShotRootingSharedTuningSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMovementToolingShotRootingSharedTuningSet
{ 
	float                                              ShotRootingDeadzone;                                        // 0x0000   (0x0004)  
	float                                              ShotRootingDuration;                                        // 0x0004   (0x0004)  
	float                                              ShotRootingFalloffSeconds;                                  // 0x0008   (0x0004)  
	float                                              ShotRootingFalloffExponent;                                 // 0x000C   (0x0004)  
};

/// Struct /Script/InputTooling.MovementToolingFastStrafingSharedTuningSet
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FMovementToolingFastStrafingSharedTuningSet
{ 
	float                                              FastStrafingStickDeltaInitialThreshold;                     // 0x0000   (0x0004)  
	float                                              FastStrafingStickDeltaReleaseThreshold;                     // 0x0004   (0x0004)  
	float                                              FastStrafingYInitialThreshold;                              // 0x0008   (0x0004)  
	float                                              FastStrafingYReleaseThreshold;                              // 0x000C   (0x0004)  
	float                                              FastStrafingHorizontalToTotalSpeedInitialThreshold;         // 0x0010   (0x0004)  
	float                                              FastStrafingCounterStrafeThreshold;                         // 0x0014   (0x0004)  
	float                                              FastStrafingCounterStrafeMaxSpeed;                          // 0x0018   (0x0004)  
	float                                              FastStrafingCounterStrafeHoldSpeed;                         // 0x001C   (0x0004)  
	float                                              InitialFastStrafingStickDeltaThreshold;                     // 0x0020   (0x0004)  
	float                                              InitialFastStrafingPlayerSpeedCutoff;                       // 0x0024   (0x0004)  
};

/// Struct /Script/InputTooling.MovementToolingFastReleaseSharedTuningSet
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMovementToolingFastReleaseSharedTuningSet
{ 
	float                                              FastReleasePower;                                           // 0x0000   (0x0004)  
	float                                              FastReleaseMinSpeed;                                        // 0x0004   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UBaseInputToolingComponent) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(FAimToolingCachedProjectionData) == 0x01F0); // 496 bytes (0x000000 - 0x0001F0)
static_assert(sizeof(FAimToolingDecelerationEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingDecelerationState) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FAimToolingTarget) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAimToolingComponent) == 0x0A90); // 2704 bytes (0x0000E0 - 0x000A90)
static_assert(sizeof(UAimToolingControllerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAimToolingTargetComponentBase) == 0x0380); // 896 bytes (0x000330 - 0x000380)
static_assert(sizeof(UAimToolingPointsTargetComponent) == 0x03B0); // 944 bytes (0x000380 - 0x0003B0)
static_assert(sizeof(FAimToolingBoneDef) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAimToolingAxis) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UAimToolingSkeletalTargetComponent) == 0x03C0); // 960 bytes (0x000380 - 0x0003C0)
static_assert(sizeof(UAimToolingStatics) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAimToolingTargetManager) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(FAimToolingTargetPointDef) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UAimToolingTargetPoint) == 0x0350); // 848 bytes (0x000330 - 0x000350)
static_assert(sizeof(UAimToolingTracker) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UBaseInputToolingControllerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMovementToolingComponent) == 0x0168); // 360 bytes (0x0000E0 - 0x000168)
static_assert(sizeof(UMovementToolingControllerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMovementToolingStatics) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAimToolingModifiers) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAimToolingPullToCenterResult) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAimToolingQueriedTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimToolingTelemetryData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FAimToolingNoTargetFalloffSharedTuningSet) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAimToolingNewTargetRampUpSharedTuningSet) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAimToolingTargetManagementSharedTuningSet) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FAimToolingTargetManagementWeaponTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAimToolingMoveErrorSharedTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAimToolingDecelerationSharedTuningSet) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingDecelerationWeaponTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAimToolingTargetFrictionSharedTuningSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimToolingTargetFrictionFeatureTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAimToolingTargetFrictionWeaponTuningCurves) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingTargetFrictionWeaponTuningSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAimToolingStrafeAssistSharedTuningSet) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAimToolingStrafeAssistFeatureTuningSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimToolingStrafeAssistWeaponTuningCurves) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingStrafeAssistWeaponTuningSet) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAimToolingFrameOfReferenceSharedTuningSet) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAimToolingFrameOfReferenceFeatureTuningSet) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAimToolingFrameOfReferenceWeaponTuningCurves) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingFrameOfReferenceWeaponTuningSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAimToolingPullToCenterSharedTuningSet) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAimToolingPullToCenterFeatureTuningSet) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAimToolingPullToCenterWeaponTuningSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimToolingBendingSharedTuningSet) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAimToolingSpatialBendingFeatureTuningSet) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAimToolingSpatialBendingWeaponTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAimToolingTemporalBendingWeaponTuningSet) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAimToolingGuardrailsSharedTuningSet) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovementToolingShotRootingSharedTuningSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovementToolingFastStrafingSharedTuningSet) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMovementToolingFastReleaseSharedTuningSet) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UBaseInputToolingComponent, OwningPC) == 0x00D8);
static_assert(offsetof(FAimToolingCachedProjectionData, OwningPC) == 0x0000);
static_assert(offsetof(FAimToolingDecelerationEntry, Input) == 0x0000);
static_assert(offsetof(FAimToolingDecelerationState, InputEntries) == 0x0000);
static_assert(offsetof(FAimToolingDecelerationState, AverageInputRate) == 0x0010);
static_assert(offsetof(FAimToolingDecelerationState, DecelerationStartDirection) == 0x0030);
static_assert(offsetof(FAimToolingDecelerationState, DecelerationLastKnownDirection) == 0x0040);
static_assert(offsetof(FAimToolingTarget, TargetComponent) == 0x0000);
static_assert(offsetof(FAimToolingTarget, AssistLocation) == 0x0018);
static_assert(offsetof(UAimToolingComponent, FeaturesEnabledValues) == 0x0678);
static_assert(offsetof(UAimToolingComponent, FeatureConfigValues) == 0x0688);
static_assert(offsetof(UAimToolingComponent, FeatureConfigCurves) == 0x0698);
static_assert(offsetof(UAimToolingComponent, CachedProjectionData) == 0x06B0);
static_assert(offsetof(UAimToolingComponent, DecelerationState) == 0x08A0);
static_assert(offsetof(UAimToolingComponent, GamepadPreviousWalkStickVector) == 0x0900);
static_assert(offsetof(UAimToolingComponent, Targets) == 0x0910);
static_assert(offsetof(UAimToolingComponent, PreviousTarget) == 0x0920);
static_assert(offsetof(UAimToolingComponent, CachedFiringLocations) == 0x0970);
static_assert(offsetof(UAimToolingComponent, CachedFiringDirections) == 0x0980);
static_assert(offsetof(UAimToolingTargetComponentBase, TargetType) == 0x0330);
static_assert(offsetof(UAimToolingTargetComponentBase, DisabledFeatures) == 0x0338);
static_assert(offsetof(UAimToolingTargetComponentBase, TuningOverrideTag) == 0x0348);
static_assert(offsetof(UAimToolingTargetComponentBase, TargetAssistRadiusOverrideXCurve) == 0x0358);
static_assert(offsetof(UAimToolingTargetComponentBase, TargetAssistRadiusOverrideYCurve) == 0x0360);
static_assert(offsetof(UAimToolingTargetComponentBase, TuningOverrideTagADS) == 0x0368);
static_assert(offsetof(UAimToolingPointsTargetComponent, CenterTargetPointName) == 0x0380);
static_assert(offsetof(UAimToolingPointsTargetComponent, AimToolingTargetPoints) == 0x0390);
static_assert(offsetof(UAimToolingPointsTargetComponent, OwningActor) == 0x03A0);
static_assert(offsetof(FAimToolingBoneDef, bone) == 0x0000);
static_assert(offsetof(FAimToolingAxis, TopBone) == 0x0000);
static_assert(offsetof(FAimToolingAxis, MiddleBone) == 0x000C);
static_assert(offsetof(FAimToolingAxis, BottomBone) == 0x0018);
static_assert(offsetof(UAimToolingSkeletalTargetComponent, AimToolingBones) == 0x0380);
static_assert(offsetof(UAimToolingSkeletalTargetComponent, AimToolingAxis) == 0x0390);
static_assert(offsetof(UAimToolingTargetManager, TrackedTargets) == 0x00E0);
static_assert(offsetof(FAimToolingTargetPointDef, TargetPointName) == 0x0000);
static_assert(offsetof(UAimToolingTargetPoint, TargetPoint) == 0x0330);
static_assert(offsetof(UMovementToolingComponent, FeaturesEnabledValues) == 0x00E0);
static_assert(offsetof(UMovementToolingComponent, FeatureConfigValues) == 0x00F0);
static_assert(offsetof(UMovementToolingComponent, FastStrafingPreviousInputVector) == 0x0108);
static_assert(offsetof(FAimToolingQueriedTarget, TargetComponent) == 0x0000);
static_assert(offsetof(FAimToolingTelemetryData, StrafeAssist) == 0x0000);
static_assert(offsetof(FAimToolingTelemetryData, TargetFriction) == 0x0010);
static_assert(offsetof(FAimToolingTelemetryData, PullToCenter) == 0x0020);
static_assert(offsetof(FAimToolingTelemetryData, FrameOfReference) == 0x0030);
static_assert(offsetof(FAimToolingTelemetryData, Deceleration) == 0x0040);
static_assert(offsetof(FAimToolingTelemetryData, Guardrails) == 0x0050);
static_assert(offsetof(FAimToolingTelemetryData, LookInputVector) == 0x0060);
static_assert(offsetof(FAimToolingTelemetryData, MovementInputVector) == 0x0070);
static_assert(offsetof(FAimToolingTelemetryData, FinalLookInputDelta) == 0x0080);
static_assert(offsetof(FAimToolingTelemetryData, WeaponTuningTag) == 0x0098);
static_assert(offsetof(FAimToolingTelemetryData, Target) == 0x00A8);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementAssistRadiusXCurve) == 0x0000);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementAssistRadiusYCurve) == 0x0008);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementAssistRadiusXRecoilScaleCurve) == 0x0010);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementAssistRadiusYRecoilScaleCurve) == 0x0018);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementShootableTargetScoreModifiers) == 0x0040);
static_assert(offsetof(FAimToolingTargetManagementSharedTuningSet, TargetManagementQueryAngleCurve) == 0x0098);
static_assert(offsetof(FAimToolingDecelerationWeaponTuningSet, DecelerationWorldDistFromTargetCurve) == 0x0000);
static_assert(offsetof(FAimToolingTargetFrictionSharedTuningSet, TargetFrictionPrecisionAimingScalarMode) == 0x000C);
static_assert(offsetof(FAimToolingTargetFrictionWeaponTuningCurves, TargetFrictionOverTargetPctCurve) == 0x0000);
static_assert(offsetof(FAimToolingTargetFrictionWeaponTuningCurves, TargetFrictionWorldDistFromTargetCurve) == 0x0008);
static_assert(offsetof(FAimToolingTargetFrictionWeaponTuningCurves, TargetFrictionStickDeflectionCurve) == 0x0010);
static_assert(offsetof(FAimToolingTargetFrictionWeaponTuningSet, TowardTargetCurves) == 0x0000);
static_assert(offsetof(FAimToolingTargetFrictionWeaponTuningSet, AwayFromTargetCurves) == 0x0018);
static_assert(offsetof(FAimToolingStrafeAssistFeatureTuningSet, AimToolingStrafeAssistMode) == 0x000C);
static_assert(offsetof(FAimToolingStrafeAssistFeatureTuningSet, AimToolingStrafeAssistCounterStrafeMode) == 0x000D);
static_assert(offsetof(FAimToolingStrafeAssistWeaponTuningCurves, StrafeAssistOverTargetPctCurve) == 0x0000);
static_assert(offsetof(FAimToolingStrafeAssistWeaponTuningCurves, StrafeAssistWorldDistFromTargetCurve) == 0x0008);
static_assert(offsetof(FAimToolingStrafeAssistWeaponTuningCurves, StrafeAssistPlayerSpeedCurve) == 0x0010);
static_assert(offsetof(FAimToolingStrafeAssistWeaponTuningSet, TowardTargetCurves) == 0x0000);
static_assert(offsetof(FAimToolingStrafeAssistWeaponTuningSet, AwayFromTargetCurves) == 0x0018);
static_assert(offsetof(FAimToolingFrameOfReferenceFeatureTuningSet, AimToolingFrameOfReferenceScale) == 0x0008);
static_assert(offsetof(FAimToolingFrameOfReferenceFeatureTuningSet, AimToolingFrameOfReferenceMaxDelta) == 0x0018);
static_assert(offsetof(FAimToolingFrameOfReferenceFeatureTuningSet, AimToolingFrameOfReferenceHighVelocityStrengthCurve) == 0x0030);
static_assert(offsetof(FAimToolingFrameOfReferenceWeaponTuningCurves, FrameOfReferenceWorldDistFromTargetCurve) == 0x0000);
static_assert(offsetof(FAimToolingFrameOfReferenceWeaponTuningCurves, FrameOfReferenceStickDeflectionCurve) == 0x0008);
static_assert(offsetof(FAimToolingFrameOfReferenceWeaponTuningCurves, FrameOfReferenceOverTargetPctCurve) == 0x0010);
static_assert(offsetof(FAimToolingFrameOfReferenceWeaponTuningSet, TowardTargetCurves) == 0x0000);
static_assert(offsetof(FAimToolingFrameOfReferenceWeaponTuningSet, AwayFromTargetCurves) == 0x0018);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, AimToolingPullToCenterAngleToTargetCurve) == 0x0008);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, AimToolingPullToCenterOverTargetPctCurve) == 0x0010);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, PullToCenterRadialTowardCurve) == 0x0048);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, PullToCenterRadialAwayCurve) == 0x0050);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, PullToCenterTangentialTowardCurve) == 0x0058);
static_assert(offsetof(FAimToolingPullToCenterFeatureTuningSet, PullToCenterTangentialAwayCurve) == 0x0060);
static_assert(offsetof(FAimToolingPullToCenterWeaponTuningSet, PullToCenterWorldDistFromTargetCurve) == 0x0000);
static_assert(offsetof(FAimToolingPullToCenterWeaponTuningSet, PullToCenterStickDeflectionCurve) == 0x0008);
static_assert(offsetof(FAimToolingBendingSharedTuningSet, BendingMode) == 0x0000);
static_assert(offsetof(FAimToolingSpatialBendingFeatureTuningSet, SpatialBendingEfficacyScaleForErrorCurve) == 0x0010);
static_assert(offsetof(FAimToolingGuardrailsSharedTuningSet, GuardrailsMaximumDeflectionAngleDegreesStickDeflectionCurve) == 0x0000);
static_assert(offsetof(FAimToolingGuardrailsSharedTuningSet, GuardrailsMinimumLengthPercentStickDeflectionCurve) == 0x0008);
static_assert(offsetof(FAimToolingGuardrailsSharedTuningSet, GuardrailsMaximumLengthPercentStickDeflectionCurve) == 0x0010);
