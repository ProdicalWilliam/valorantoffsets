
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: MovieScene
/// dependency: NetCore
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x01 (1 bytes)
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x01 (1 bytes)
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x01 (1 bytes)
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x01 (1 bytes)
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x01 (1 bytes)
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x01 (1 bytes)
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6
};

/// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
/// Size: 0x01 (1 bytes)
enum class EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue                                  = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse                                 = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x01 (1 bytes)
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x01 (1 bytes)
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace                                   = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor                      = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor                          = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	EGameplayCueNotify_LocallyControlledPolicy__Always                               = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly                            = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_AttachPolicy : uint8_t
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach                                     = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3,
	EGameplayEffectMagnitudeCalculation__FloatCurve                                  = 4
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectVersion
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectVersion : uint8_t
{
	EGameplayEffectVersion__Monolithic                                               = 0,
	EGameplayEffectVersion__Modular53                                                = 1,
	EGameplayEffectVersion__AbilitiesComponent53                                     = 2,
	EGameplayEffectVersion__Current                                                  = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x01 (1 bytes)
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x01 (1 bytes)
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Minimum                                                          = 4,
	EGameplayModOp__Maximum                                                          = 5,
	EGameplayModOp__AddUnstacked                                                     = 6,
	EGameplayModOp__MulUnstacked                                                     = 7,
	EGameplayModOp__Max                                                              = 8
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0560 (1376 bytes) (0x000560 - 0x000560) align 8 MaxSize: 0x0560
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0018)  
	FDataRegistryType                                  RegistryType;                                               // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x002C   (0x000C)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UStruct*                                     AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0148 (328 bytes) (0x000000 - 0x000148) align 8 MaxSize: 0x0148
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0038)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0038   (0x0038)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0070   (0x0038)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x00A8   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00E8   (0x0018)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x0100   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0102   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x0108   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x0128   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FCustomCalculationBasedFloat
{ 
	class UClass*                                      CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0038)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0040   (0x0038)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0078   (0x0038)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x00B0   (0x0018)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x000C)  
	FGameplayTag                                       DataTag;                                                    // 0x000C   (0x000C)  
};

/// Struct /Script/GameplayAbilities.FloatCurveFloat
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FFloatCurveFloat
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0000   (0x0088)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x02F0 (752 bytes) (0x000000 - 0x0002F0) align 8 MaxSize: 0x02F0
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0038)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0040   (0x0148)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0188   (0x00C8)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x0250   (0x0018)  
	FFloatCurveFloat                                   FloatCurveMagnitude;                                        // 0x0268   (0x0088)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0040   (0x0048)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0448 (1096 bytes) (0x000000 - 0x000448) align 8 MaxSize: 0x0448
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0040   (0x02F0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0330   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0331   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0338   (0x0088)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x03C0   (0x0088)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0458 (1112 bytes) (0x000000 - 0x000458) align 8 MaxSize: 0x0458
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x000C)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x004C   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x02F0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0340   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0341   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0348   (0x0088)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x03D0   (0x0088)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FConditionalGameplayEffect
{ 
	class UClass*                                      EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayEffectExecutionDefinition
{ 
	class UClass*                                      CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x01A0 (416 bytes) (0x000000 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0028   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0070   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B8   (0x0048)  
	FGameplayTagQuery                                  SourceAggregateTagQuery;                                    // 0x0100   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x0148   (0x0038)  
	class UObject*                                     EffectSource;                                               // 0x0180   (0x0008)  
	class UClass*                                      EffectDefinition;                                           // 0x0188   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0190   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FGameplayAbilitySpecDef
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0038)  
	int32_t                                            InputID;                                                    // 0x0040   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0050   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0BB8 (3000 bytes) (0x000030 - 0x000BB8) align 8 MaxSize: 0x0BB8
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0040   (0x02F0)  
	FScalableFloat                                     Period;                                                     // 0x0330   (0x0038)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0368   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0369   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x036A   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0370   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0380   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0390   (0x0038)  
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x03C8   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x03D8   (0x0010)  
	TArray<class UClass*>                              OverflowEffects;                                            // 0x03E8   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x03F8   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x03F9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x03FA   (0x0006)  MISSED
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                           // 0x0400   (0x0010)  
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                             // 0x0410   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x0420   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x0421   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x0422   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x0428   (0x0010)  
	class UGameplayEffectUIData*                       UIData;                                                     // 0x0438   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0440   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x04A0   (0x0060)  
	FInheritedTagContainer                             InheritableBlockedAbilityTagsContainer;                     // 0x0500   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x0560   (0x0088)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x05E8   (0x0088)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0670   (0x0088)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x06F8   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x0758   (0x0088)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x07E0   (0x01A0)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0980   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x0988   (0x01A0)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x0B28   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x0B29   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0B2A   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x0B2C   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x0B30   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x0B31   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x0B32   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x0B33   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x0B38   (0x0010)  
	unsigned char                                      UnknownData09_6[0x60];                                      // 0x0B48   (0x0060)  MISSED
	TArray<class UGameplayEffectComponent*>            GEComponents;                                               // 0x0BA8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectComponent
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayEffectComponent : public UObject
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecConfig
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayAbilitySpecConfig
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0038)  
	int32_t                                            InputID;                                                    // 0x0040   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitiesGameplayEffectComponent
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayAbilitySpecConfig>                 GrantAbilityConfigs;                                        // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	bool                                               bOnApplicationCopyDataFromOriginalSpec;                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FConditionalGameplayEffect>                 OnApplicationGameplayEffects;                               // 0x0038   (0x0010)  
	TArray<class UClass*>                              OnCompleteAlways;                                           // 0x0048   (0x0010)  
	TArray<class UClass*>                              OnCompleteNormal;                                           // 0x0058   (0x0010)  
	TArray<class UClass*>                              OnCompletePrematurely;                                      // 0x0068   (0x0010)  
};

/// Class /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableAssetTags;                                       // 0x0030   (0x0060)  
};

/// Class /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableBlockedAbilityTagsContainer;                     // 0x0030   (0x0060)  
};

/// Class /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0030   (0x0038)  
};

/// Class /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayEffectUIData : public UGameplayEffectComponent
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0030   (0x0018)  
};

/// Class /Script/GameplayAbilities.ImmunityGameplayEffectComponent
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayEffectQuery>                       ImmunityQueries;                                            // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayEffectQuery>                       RemoveGameplayEffectQueries;                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
/// Size: 0x01C8 (456 bytes) (0x000030 - 0x0001C8) align 8 MaxSize: 0x01C8
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x0030   (0x0088)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x00B8   (0x0088)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0140   (0x0088)  
};

/// Class /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableGrantedTagsContainer;                            // 0x0030   (0x0060)  
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAbilityAsync : public UCancellableAsyncAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync.EndAction
	// void EndAction();                                                                                                        // [0x3eaeab0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(Changed);                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	// class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // [0x4bb3da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	// void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // [0x1a821d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x0190 (400 bytes) (0x000040 - 0x000190) align 8 MaxSize: 0x0190
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x140];                                     // 0x0050   (0x0140)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	// class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0x4bb4900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	// void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x1a821d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	// class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x4bb6670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	// void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x1a821d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	// class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x4bb7520] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	// class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x4bb79b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x0110 (272 bytes) (0x000040 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x0040   (0x00C0)  MISSED
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(Triggered);                                          // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
	// class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition triggerCondition, bool bOnlyTriggerOnce); // [0x4bb8360] Final|Native|Static|Protected|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPredictionKey
{ 
	class UPackageMap*                                 PredictiveConnection;                                       // 0x0000   (0x0008)  
	int16_t                                            Current;                                                    // 0x0008   (0x0002)  
	int16_t                                            base;                                                       // 0x000A   (0x0002)  
	bool                                               bIsStale;                                                   // 0x000C   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0xA];                                       // 0x000E   (0x000A)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      Instigator;                                                 // 0x0010   (0x0008)  
	class AActor*                                      Target;                                                     // 0x0018   (0x0008)  
	class UObject*                                     OptionalObject;                                             // 0x0020   (0x0008)  
	class UObject*                                     OptionalObject2;                                            // 0x0028   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0030   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0048   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0068   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0090   (0x0028)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x000C)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x03C8 (968 bytes) (0x000030 - 0x0003C8) align 8 MaxSize: 0x03C8
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0030   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00B0   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00D0   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D2   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00D6   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00D7   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D8   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00E0   (0x0020)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x0100   (0x00B8)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01B8   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01B9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01BA   (0x0006)  MISSED
	class UClass*                                      CostGameplayEffectClass;                                    // 0x01C0   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01C8   (0x0010)  
	class UClass*                                      CooldownGameplayEffectClass;                                // 0x01D8   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01E0   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x0200   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0220   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0240   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0260   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0280   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x02A0   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02C0   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02E0   (0x0020)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0300   (0x0020)  MISSED
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0320   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0330   (0x0010)  MISSED
	class UAnimMontage*                                CurrentMontage;                                             // 0x0340   (0x0008)  
	unsigned char                                      UnknownData06_6[0x60];                                      // 0x0348   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x03A8   (0x0001)  
	bool                                               bIsAbilityEnding;                                           // 0x03A9   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x03AA   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x03AB   (0x0001)  
	unsigned char                                      UnknownData07_6[0x14];                                      // 0x03AC   (0x0014)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x03C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x4bbd6b0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x4bbd550] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x4bbc8c0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// void RemoveGrantedByEffect();                                                                                            // [0x4bbcce0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0x4bb9a90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x4bb9bc0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	// void MontageJumpToSection(FName SectionName);                                                                            // [0x4bb9de0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x4bb9770] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x4bb9960] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);                // [0x4bbd8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x1a821d0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x4bba560] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	// bool K2_HasAuthority();                                                                                                  // [0x4bbd810] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x4bbad50] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x4bbb0c0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	// void K2_EndAbilityLocally();                                                                                             // [0x3eacac0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	// void K2_EndAbility();                                                                                                    // [0x3eacaf0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x4bbd290] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x4bbd3a0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	// bool K2_CommitAbility();                                                                                                 // [0x3abb090] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// bool K2_CheckAbilityCost();                                                                                              // [0x4bbd210] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// bool K2_CheckAbilityCooldown();                                                                                          // [0x4bbd250] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	// void K2_CancelAbility();                                                                                                 // [0x4bbd650] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x4bbbc70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x4bbc4a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x4bba670] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x4bbaa80] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x4bbd840] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// void InvalidateClientPredictionKey();                                                                                    // [0x4bbcd10] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	// class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);              // [0x4bbcd80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// class USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                         // [0x4bbdd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// class AActor* GetOwningActorFromActorInfo();                                                                             // [0x4bbde20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x4bbdce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// class UObject* GetCurrentSourceObject();                                                                                 // [0x4bbcf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	// class UAnimMontage* GetCurrentMontage();                                                                                 // [0x3c59a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// float GetCooldownTimeRemaining();                                                                                        // [0x4bbd7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x4bbdad0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// class AActor* GetAvatarActorFromActorInfo();                                                                             // [0x4bbddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x4bbdf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                 // [0x4bbdd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	// int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                     // [0x4bbcfd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	// int32_t GetAbilityLevel();                                                                                               // [0x4bbd1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x4bba190] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x4bb9f30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x4bba2a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x4bba080] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x4bbb300] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x4bbb4d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x4bbb8a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x4bbc030] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x4bbc670] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0060)  
	class AActor*                                      SourceActor;                                                // 0x0080   (0x0008)  
	class UMeshComponent*                              SourceComponent;                                            // 0x0088   (0x0008)  
	class UGameplayAbility*                            SourceAbility;                                              // 0x0090   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0098   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x00A4   (0x000C)  MISSED
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x05C0 (1472 bytes) (0x000460 - 0x0005C0) align 16 MaxSize: 0x05C0
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0460   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0461   (0x000F)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x0470   (0x00B0)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0520   (0x0030)  MISSED
	class APlayerController*                           PrimaryPC;                                                  // 0x0550   (0x0008)  
	class UGameplayAbility*                            OwningAbility;                                              // 0x0558   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x0560   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0561   (0x0007)  MISSED
	class AActor*                                      SourceActor;                                                // 0x0568   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x0570   (0x0018)  
	class UClass*                                      ReticleClass;                                               // 0x0588   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x0590   (0x0010)  
	bool                                               bDebug;                                                     // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x17];                                      // 0x05A1   (0x0017)  MISSED
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                    // 0x05B8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// void ConfirmTargeting();                                                                                                 // [0x3c1d400] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// void CancelTargeting();                                                                                                  // [0x4bc73f0] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x05E0 (1504 bytes) (0x0005C0 - 0x0005E0) align 16 MaxSize: 0x05E0
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x05C0   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x05C4   (0x000C)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x05D1   (0x000F)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0600 (1536 bytes) (0x0005E0 - 0x000600) align 16 MaxSize: 0x0600
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x05E0   (0x0004)  
	float                                              CollisionHeight;                                            // 0x05E4   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x05E8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0620 (1568 bytes) (0x000600 - 0x000620) align 16 MaxSize: 0x0620
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	class UClass*                                      PlacedActorClass;                                           // 0x0600   (0x0008)  
	class UMaterialInterface*                          PlacedActorMaterial;                                        // 0x0608   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0610   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x05D0 (1488 bytes) (0x0005C0 - 0x0005D0) align 16 MaxSize: 0x05D0
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x05C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x05C4   (0x000C)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x05E0 (1504 bytes) (0x0005E0 - 0x0005E0) align 16 MaxSize: 0x05E0
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0490 (1168 bytes) (0x000460 - 0x000490) align 8 MaxSize: 0x0490
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0460   (0x0018)  
	bool                                               bFaceOwnerFlat;                                             // 0x0478   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x0479   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x047A   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x047B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x047C   (0x0004)  MISSED
	class APlayerController*                           PrimaryPC;                                                  // 0x0480   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetingActor;                                             // 0x0488   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x1a821d0] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// void OnParametersInitialized();                                                                                          // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x4bcd6f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x04A8 (1192 bytes) (0x000490 - 0x0004A8) align 8 MaxSize: 0x04A8
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x0490   (0x0008)  
	TArray<class UActorComponent*>                     VisualizationComponents;                                    // 0x0498   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x03C8 (968 bytes) (0x0003C8 - 0x0003C8) align 8 MaxSize: 0x03C8
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0400 (1024 bytes) (0x0003C8 - 0x000400) align 8 MaxSize: 0x0400
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x03C8   (0x0008)  
	float                                              PlayRate;                                                   // 0x03D0   (0x0004)  
	FName                                              SectionName;                                                // 0x03D4   (0x000C)  
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                        // 0x03E0   (0x0010)  
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                              // 0x03F0   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UAbilityTask : public UGameplayTask
{ 
public:
	class UGameplayAbility*                            Ability;                                                    // 0x0070   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x00D0 (208 bytes) (0x000088 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0088   (0x000C)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0094   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x0098   (0x0018)  
	float                                              FinishClampVelocity;                                        // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0118 (280 bytes) (0x0000D0 - 0x000118) align 8 MaxSize: 0x0118
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00D0   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00E0   (0x0018)  
	float                                              Strength;                                                   // 0x00F8   (0x0004)  
	float                                              Duration;                                                   // 0x00FC   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x0108   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0111   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x4bd0720] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0138 (312 bytes) (0x0000D0 - 0x000138) align 8 MaxSize: 0x0138
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnLanded);                                           // 0x00E0   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00F0   (0x0018)  
	float                                              Distance;                                                   // 0x0108   (0x0004)  
	float                                              Height;                                                     // 0x010C   (0x0004)  
	float                                              Duration;                                                   // 0x0110   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x0114   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0120   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x4bd3d30] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// void Finish();                                                                                                           // [0x4bd3e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve); // [0x4bd3200] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0170 (368 bytes) (0x0000D0 - 0x000170) align 8 MaxSize: 0x0170
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,469) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00E8   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0100   (0x0018)  
	class AActor*                                      TargetActor;                                                // 0x0118   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x0120   (0x0018)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x013C   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0140   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x0141   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0142   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0143   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0148   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0150   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                             // 0x0158   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                               // 0x0160   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0168   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);                                        // [0x4bd6860] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                             // [0x4bd6830] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x4bd6a10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x4bd7750] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0138 (312 bytes) (0x0000D0 - 0x000138) align 8 MaxSize: 0x0138
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(OnTimedOut);                                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(OnTimedOutAndDestinationReached);                    // 0x00E0   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00F0   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0108   (0x0018)  
	float                                              Duration;                                                   // 0x0120   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x0124   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0125   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0126   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0127   (0x0001)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x4bdc1f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0140 (320 bytes) (0x0000D0 - 0x000140) align 8 MaxSize: 0x0140
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00D0   (0x0010)  
	FVector                                            Location;                                                   // 0x00E0   (0x0018)  
	class AActor*                                      LocationActor;                                              // 0x00F8   (0x0008)  
	float                                              Strength;                                                   // 0x0100   (0x0004)  
	float                                              Duration;                                                   // 0x0104   (0x0004)  
	float                                              Radius;                                                     // 0x0108   (0x0004)  
	bool                                               bIsPush;                                                    // 0x010C   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x010D   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x010E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x010F   (0x0001)  MISSED
	class UCurveFloat*                                 StrengthDistanceFalloff;                                    // 0x0110   (0x0008)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x0118   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0128   (0x0018)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x4bdefb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x00F0 (240 bytes) (0x000088 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(OnTargetLocationReached);                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00A0   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00B8   (0x0018)  
	float                                              DurationOfMovement;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	class UCurveFloat*                                 LerpCurve;                                                  // 0x00E0   (0x0008)  
	class UCurveVector*                                LerpCurveVector;                                            // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve); // [0x4be4210] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnSync);                                             // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // [0x4be6970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// void OnSignalCallback();                                                                                                 // [0x4be6cf0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0118 (280 bytes) (0x000088 - 0x000118) align 8 MaxSize: 0x0118
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C8   (0x0028)  MISSED
	class UAnimMontage*                                MontageToPlay;                                              // 0x00F0   (0x0008)  
	float                                              Rate;                                                       // 0x00F8   (0x0004)  
	FName                                              StartSection;                                               // 0x00FC   (0x000C)  
	float                                              AnimRootMotionTranslationScale;                             // 0x0108   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x010C   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0110   (0x0001)  
	bool                                               bAllowInterruptAfterBlendOut;                               // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0112   (0x0006)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x4be7d20] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x4be7b50] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x4be7d40] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnGameplayAbilityCancelled
	// void OnGameplayAbilityCancelled();                                                                                       // [0x4be7d20] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // [0x4be7330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(OnPerformAction);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // [0x4bf3ac0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x00D0 (208 bytes) (0x000088 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class); // [0x4bf54b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor); // [0x4bf4cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor*& SpawnedActor); // [0x4bf5100] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(OnStateEnded);                                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(OnStateInterrupted);                                 // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x4bf6380] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(TimeElapsed);                                        // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0098   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x4bf7240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, FName TaskInstanceName, float Duration); // [0x4bf7580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x4bf6db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x4bf7010] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x0190 (400 bytes) (0x000088 - 0x000190) align 8 MaxSize: 0x0190
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnActivate);                                         // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0098   (0x00F8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x4bf8f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x4bf8a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x4bf96d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);                                                        // [0x4bf9a70] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0108 (264 bytes) (0x000088 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnCommit);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0098   (0x0070)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x4bfa210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x4bfa6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);                                                          // [0x4bfa9c0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0108 (264 bytes) (0x000088 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0098   (0x0068)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x4bfb630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x4bfbcd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x0148 (328 bytes) (0x000088 - 0x000148) align 8 MaxSize: 0x0148
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0098   (0x00A8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0140   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x4bfc8b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x00F8 (248 bytes) (0x000088 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0098   (0x0058)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x4bfda80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);                                        // [0x4bfe610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x4bfe8e0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x4bfe900] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);                                      // [0x4bff040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// void OnConfirmCallback(class UGameplayAbility* InAbility);                                                               // [0x4bff310] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);                          // [0x4bff870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// void OnLocalConfirmCallback();                                                                                           // [0x4bffb60] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x4bffb40] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// void OnConfirmCallback();                                                                                                // [0x4bffba0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x4bffb80] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);                              // [0x4c006e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x0250 (592 bytes) (0x000088 - 0x000250) align 8 MaxSize: 0x0250
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x1B8];                                     // 0x0088   (0x01B8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0240   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0248   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x4c01090] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0270 (624 bytes) (0x000250 - 0x000270) align 8 MaxSize: 0x0270
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0250   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0260   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x4c01b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x4c024f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0270 (624 bytes) (0x000250 - 0x000270) align 8 MaxSize: 0x0270
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0250   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0260   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x4c03a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x4c04360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x01C0 (448 bytes) (0x000088 - 0x0001C0) align 8 MaxSize: 0x01C0
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(bLocked);                                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x118];                                     // 0x0098   (0x0118)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x4c05940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnRemoved);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A8   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x4c06f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x4c07310] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x4c07a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x4c07de0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0098   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x4c08590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0088   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0x4c0a4f0] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x4c09510] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x4c09bf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x0168 (360 bytes) (0x000088 - 0x000168) align 8 MaxSize: 0x0168
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x0088   (0x00C0)  MISSED
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(Triggered);                                          // 0x0148   (0x0010)  
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0158   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0160   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	// class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, class AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition triggerCondition, bool bOnlyTriggerOnce); // [0x4c0ada0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
	// void UpdateTargetTags(FGameplayTag Tag, int32_t NewCount);                                                               // [0x4c0ab60] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnPress);                                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);      // [0x4c0be80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// void OnPressCallback();                                                                                                  // [0x4c0c200] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(OnRelease);                                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // [0x4c0c920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// void OnReleaseCallback();                                                                                                // [0x4c0cca0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x4c0d740] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x4c0d3c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(OnOverlap);                                          // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);                                   // [0x4c0df40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x4c0e210] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(ValidData);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(Cancelled);                                          // 0x0098   (0x0010)  
	class UClass*                                      TargetClass;                                                // 0x00A8   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetActor;                                                // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor); // [0x4c0f690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class); // [0x4c0f980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x41e76f0] Native|Public        
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x4c10010] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x4c0fe40] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x4c0fc70] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x4c0f2b0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x4c0f450] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(OnVelocityChage);                                    // 0x0088   (0x0010)  
	class UMovementComponent*                          CachedMovementComponent;                                    // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x4c11f80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                   // [0x4c1e690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                                 // [0x4c1ece0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                 // [0x4c1e110] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                    // [0x4c1ef80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);                                      // [0x4c14fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);                       // [0x4c15240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);                             // [0x4c167c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);                   // [0x4c23c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
	// bool RemoveLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);           // [0x4c14500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);          // [0x4c216b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
	// bool NotEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                   // [0x4c12710] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
	// bool NotEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);                // [0x4c12f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel); // [0x4c1ff80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // [0x4c17e40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);           // [0x4c20280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// bool IsValid(FGameplayAttribute Attribute);                                                                              // [0x4c23ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);                                             // [0x4c1bef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);                                                   // [0x4c1c240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// bool HasHitResult(FGameplayCueParameters Parameters);                                                                    // [0x4c1b170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                             // [0x4c1e3d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                  // [0x4c1dae0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                              // [0x4c1de00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// FVector GetOrigin(FGameplayCueParameters Parameters);                                                                    // [0x4c1a360] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);                 // [0x4c14170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);                                                    // [0x4c1a6a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);                                                     // [0x4c1aa90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                       // [0x4c1e950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// FHitResult GetHitResult(FGameplayCueParameters Parameters);                                                              // [0x4c1b460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
	// class UGameplayEffectUIData* GetGameplayEffectUIData(class UClass* EffectClass, class UClass* DataType);                 // [0x4c13290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
	// class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(FActiveGameplayEffectHandle& ActiveHandle);               // [0x4c12da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // [0x4c19ee0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);          // [0x4c19ae0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
	// class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // [0x4c12a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x4c23450] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x4c22dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// float GetFloatAttributeBase(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);       // [0x4c230d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// float GetFloatAttribute(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);           // [0x4c23760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);                                     // [0x4c14d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
	// FString GetDebugStringFromGameplayAttribute(FGameplayAttribute& Attribute);                                              // [0x4c214c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                        // [0x4c20ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0x4c14b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0x4c1f640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0x4c1f8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// int32_t GetActorCount(FGameplayCueParameters Parameters);                                                                // [0x4c1bb80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index);                                         // [0x4c1b820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x4c13970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectSuccessfullyApplied
	// bool GetActiveGameplayEffectSuccessfullyApplied(FActiveGameplayEffectHandle ActiveHandle);                               // [0x4c13420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);                                        // [0x4c13cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);                                // [0x4c13e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);                                     // [0x4c13fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // [0x4c13710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);                                  // [0x4c13b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x4c13510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);                                           // [0x4c24230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x4c1ad40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // [0x4c20490] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // [0x4c21c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // [0x4c22580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);        // [0x4c219a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
	// bool EqualEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                 // [0x4c128d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
	// bool EqualEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);              // [0x4c130d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);                                 // [0x4c1cbf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);                                                   // [0x4c1d960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);                             // [0x4c1d7c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);                                              // [0x4c1d370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);                                 // [0x4c1c570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);                       // [0x4c1c8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);                                              // [0x4c1ce40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);                               // [0x4c1ca50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);                                        // [0x4c1d520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);                                  // [0x4c1c710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);           // [0x4c1d050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);       // [0x4c1f260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // [0x4c19150] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // [0x4c1fb90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // [0x4c17040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // [0x4c16a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // [0x4c16d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // [0x4c210d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
	// bool AddLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);              // [0x4c14820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // [0x4c15760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect); // [0x4c15530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);   // [0x4c16130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);              // [0x4c16540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);     // [0x4c15a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);                // [0x4c15e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // [0x4c20e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult);                                  // [0x4c20ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0x4c207a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);                                        // [0x4c209b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttributeDefaults
{ 
	class UClass*                                      Attributes;                                                 // 0x0000   (0x0008)  
	class UDataTable*                                  DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00F8 (248 bytes) (0x00000C - 0x0000F8) align 8 MaxSize: 0x00F8
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	class UGameplayAbility*                            Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x16];                                      // 0x002A   (0x0016)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0060   (0x0020)  
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                     // 0x0080   (0x0010)  
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                        // 0x0090   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x00A8   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAbilityRepAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              Position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	char                                               PlayInstanceId;                                             // 0x0015   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0016:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0016:1 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0016:2 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0016:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	char                                               SectionIdToPlay;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayAbilityLocalAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	char                                               PlayInstanceId;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
	TWeakObjectPtr<class UGameplayAbility*>            AnimatingAbility;                                           // 0x0028   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FGameplayEffectSpec
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              Level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0368 (872 bytes) (0x00000C - 0x000368) align 8 MaxSize: 0x0368
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0018)  
	TArray<FGameplayAbilitySpecHandle>                 GrantedAbilityHandles;                                      // 0x02C8   (0x0010)  
	float                                              StartServerWorldTime;                                       // 0x02D8   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02DC   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02E0   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x83];                                      // 0x02E5   (0x0083)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x02F8 (760 bytes) (0x000108 - 0x0002F8) align 8 MaxSize: 0x02F8
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0108   (0x0028)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_7[0x1B8];                                     // 0x0140   (0x01B8)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x000C)  
	FGameplayTag                                       OriginalTag;                                                // 0x002C   (0x000C)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0038   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0058   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0078   (0x0018)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x0090   (0x0018)  
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x00A8   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x00B0   (0x0008)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x00B8   (0x0008)  
	TWeakObjectPtr<class UPhysicalMaterial*>           PhysicalMaterial;                                           // 0x00C0   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00C8   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00CC   (0x0004)  
	TWeakObjectPtr<class USceneComponent*>             TargetAttachComponent;                                      // 0x00D0   (0x0008)  
	bool                                               bReplicateLocationWhenUsingMinimalRepProxy;                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x0118 (280 bytes) (0x00000C - 0x000118) align 8 MaxSize: 0x0118
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x000C)  
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0030   (0x00E0)  
	bool                                               bPredictivelyRemoved;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x0028 (40 bytes) (0x00000C - 0x000028) align 8 MaxSize: 0x0028
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1298 (4760 bytes) (0x000150 - 0x001298) align 8 MaxSize: 0x1298
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0150   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0160   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0170   (0x000C)  
	unsigned char                                      UnknownData01_6[0xBC];                                      // 0x017C   (0x00BC)  MISSED
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnFailedApplicationTagRequirements);                 // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_6[0xF0];                                      // 0x0248   (0x00F0)  MISSED
	float                                              OutgoingDuration;                                           // 0x0338   (0x0004)  
	float                                              IncomingDuration;                                           // 0x033C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0340   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0360   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0370   (0x0010)  
	unsigned char                                      UnknownData04_6[0x60];                                      // 0x0380   (0x0060)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x03E0   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x03E1   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x03E2   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x03E3   (0x0001)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x03E4   (0x0004)  MISSED
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                        // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData06_6[0x28];                                      // 0x03F8   (0x0028)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x0420   (0x0008)  
	class AActor*                                      AvatarActor;                                                // 0x0428   (0x0008)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x0430   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x0440   (0x0120)  
	unsigned char                                      UnknownData08_6[0x30];                                      // 0x0560   (0x0030)  MISSED
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                            // 0x0590   (0x0010)  
	unsigned char                                      UnknownData09_6[0x230];                                     // 0x05A0   (0x0230)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x07D0   (0x0038)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0808   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0809   (0x0001)  
	unsigned char                                      UnknownData10_6[0x6];                                       // 0x080A   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0810   (0x0030)  
	unsigned char                                      UnknownData11_6[0xA0];                                      // 0x0840   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x08E0   (0x02F8)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0BD8   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0D00   (0x0128)  
	unsigned char                                      UnknownData12_6[0x128];                                     // 0x0E28   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x0F50   (0x0010)  
	unsigned char                                      UnknownData13_6[0x128];                                     // 0x0F60   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1088   (0x0060)  
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                          // 0x10E8   (0x0010)  
	unsigned char                                      UnknownData14_6[0x10];                                      // 0x10F8   (0x0010)  MISSED
	FMinimalReplicationTagCountMap                     ReplicatedLooseTags;                                        // 0x1108   (0x0060)  
	unsigned char                                      UnknownData15_6[0x8];                                       // 0x1168   (0x0008)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x1170   (0x0118)  
	unsigned char                                      UnknownData16_7[0x10];                                      // 0x1288   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	// void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // [0x4c34250] BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	// void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // [0x4c34520] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryCancelAbilityByClass
	// bool TryCancelAbilityByClass(class UClass* InAbilityToCancel);                                                           // [0x4c2dc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);                          // [0x4c2dfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	// bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);                      // [0x4c2de30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x4c2e1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// void TargetConfirm();                                                                                                    // [0x4c2c4a0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	// void TargetCancel();                                                                                                     // [0x4c2c470] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x4c2c730] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x4c33ed0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, float NewLevel);                             // [0x4c340a0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x4c2a1c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x4c2a7f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x4c2ad90] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x4c2b090] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x4c2b850] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x4c2bcb0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x4c2aaf0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x4c2ac40] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x4c2cd50] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// void ServerPrintDebug_Request();                                                                                         // [0x4c2ced0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x4c29dc0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);                           // [0x4c28780] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0x4c28bb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, FName SectionName);                    // [0x4c28980] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x4c299b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x4c2c850] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x4c35200] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x4c35420] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x4c32400] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x4c320c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x4c31b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x4c31d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	// void ReleaseInputID(int32_t InputID);                                                                                    // [0x4c2c530] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID
	// void PressInputID(int32_t InputID);                                                                                      // [0x4c2c630] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	// void OnSpawnedAttributesEndPlayed(class AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);                     // [0x4c2c050] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	// void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes);                                         // [0x4c28560] Final|Native|Private|HasOutParms 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// void OnRep_ServerDebugString();                                                                                          // [0x41e3410] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0x4c28f30] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// void OnRep_OwningActor();                                                                                                // [0x4c2c3c0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// void OnRep_ClientDebugString();                                                                                          // [0x41e3440] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// void OnRep_ActivateAbilities();                                                                                          // [0x4c2aac0] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	// void OnOwnerActorDestroyed(class AActor* InActor);                                                                       // [0x4c2c1e0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	// void OnAvatarActorDestroyed(class AActor* InActor);                                                                      // [0x4c2c2d0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x4c30220] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x4c30c10] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x4c2eda0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x4c307f0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x4c31380] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x4c310a0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x4c2f370] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x4c2f790] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x4c2fb20] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x4c2ff40] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x4c34f00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x4c34ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);                                                // [0x4c360d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	// FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(class UClass* AbilityClass, int32_t Level, int32_t InputID);    // [0x4c2e6a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	// FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* AbilityClass, int32_t Level, int32_t InputID);                   // [0x4c2e990] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x4c2ec80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm
	// void InputConfirm();                                                                                                     // [0x4c2c500] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel
	// void InputCancel();                                                                                                      // [0x4c2c4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// bool GetUserAbilityActivationInhibited();                                                                                // [0x4c2c830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	// int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0x4c33ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x4c33c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectDefForHandle
	// class UGameplayEffect* GetGameplayEffectDefForHandle(FActiveGameplayEffectHandle Handle);                                // [0x4c355d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	// int32_t GetGameplayEffectCount_IfLoaded(TSoftObjectPtr<UClass*> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x4c348a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck, bool bIncludeDerivedEffects); // [0x4c34bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	// float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);                                             // [0x4c35b20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	// class UAttributeSet* GetAttributeSet(class UClass* AttributeSetClass);                                                   // [0x4c35db0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	// void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);                                                        // [0x4c35f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	// void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);                                             // [0x4c2dab0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAggregatedStackCount
	// int32_t GetAggregatedStackCount(FGameplayEffectQuery& Query);                                                            // [0x4c34770] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x4c32740] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsTimeRemaining
	// TArray<float> GetActiveEffectsTimeRemaining(FGameplayEffectQuery& Query);                                                // [0x4c32de0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsDuration
	// TArray<float> GetActiveEffectsDuration(FGameplayEffectQuery& Query);                                                     // [0x4c32c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x4c32ac0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	// void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // [0x4c2d6c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	// void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID);                // [0x4c2cf50] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	// void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);      // [0x4c2d1e0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x4c2a0c0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x4c2b5d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x4c2cb70] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x4c29be0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x4c297d0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x4c28f60] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x4c29450] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x4c29620] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	// void ClearAllAbilitiesWithInputID(int32_t InputID);                                                                      // [0x4c2e510] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	// void ClearAllAbilities();                                                                                                // [0x4c2e680] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility
	// void ClearAbility(FGameplayAbilitySpecHandle& Handle);                                                                   // [0x4c2e410] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x4c33470] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x4c32f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target); // [0x4c358b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x4c356f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x1a821d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAbilitySystemDebugHUDExtension : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNetSerializeScriptStructCache
{ 
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0340 (832 bytes) (0x000030 - 0x000340) align 8 MaxSize: 0x0340
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0030   (0x0028)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0058   (0x0028)  MISSED
	bool                                               bUseDebugTargetFromHud;                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0084   (0x000C)  
	FName                                              ActivateFailIsDeadName;                                     // 0x0090   (0x000C)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x009C   (0x000C)  
	FName                                              ActivateFailCooldownName;                                   // 0x00A8   (0x000C)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x00B4   (0x000C)  
	FName                                              ActivateFailCostName;                                       // 0x00C0   (0x000C)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x00CC   (0x000C)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00D8   (0x000C)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00E4   (0x000C)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00F0   (0x000C)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00FC   (0x000C)  
	FName                                              ActivateFailNetworkingName;                                 // 0x0108   (0x000C)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x0114   (0x0004)  
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x0118   (0x0010)  
	FNetSerializeScriptStructCache                     EffectContextStructCache;                                   // 0x0128   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x0138   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x0139   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x013A   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases[10];                    // 0x013C   (0x0078)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x01B8   (0x0028)  
	class UCurveTable*                                 GlobalCurveTable;                                           // 0x01E0   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x01E8   (0x0028)  
	class UDataTable*                                  GlobalAttributeMetaDataTable;                               // 0x0210   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x0218   (0x0028)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x0240   (0x0010)  
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                              // 0x0250   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x0260   (0x0028)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x0288   (0x0028)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x02B0   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x02C0   (0x0028)  
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                   // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x02F0   (0x0001)  MISSED
	bool                                               PredictTargetGameplayEffects;                               // 0x02F1   (0x0001)  
	bool                                               ReplicateActivationOwnedTags;                               // 0x02F2   (0x0001)  
	unsigned char                                      UnknownData05_6[0x5];                                       // 0x02F3   (0x0005)  MISSED
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                   // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData06_7[0x40];                                      // 0x0300   (0x0040)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0038   (0x0004)  
	float                                              Health;                                                     // 0x003C   (0x0004)  
	float                                              Mana;                                                       // 0x0040   (0x0004)  
	float                                              MaxMana;                                                    // 0x0044   (0x0004)  
	float                                              Damage;                                                     // 0x0048   (0x0004)  
	float                                              SpellDamage;                                                // 0x004C   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0050   (0x0004)  
	float                                              CritChance;                                                 // 0x0054   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0058   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x005C   (0x0004)  
	float                                              DodgeChance;                                                // 0x0060   (0x0004)  
	float                                              LifeSteal;                                                  // 0x0064   (0x0004)  
	float                                              Strength;                                                   // 0x0068   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x006C   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0070   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x0074   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0530 (1328 bytes) (0x000510 - 0x000530) align 8 MaxSize: 0x0530
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0510   (0x0018)  MISSED
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0528   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x000C)  
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UAnimNotify_GameplayCue : public UAnimNotify
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
	// void RemoveGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);    // [0x4c7a2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
	// FGameplayCueParameters MakeGameplayCueParametersFromHitResult(FHitResult& HitResult);                                    // [0x4c7b260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
	// void ExecuteGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);   // [0x4c7adb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
	// void AddGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);       // [0x4c7a810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCueInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// void ForwardGameplayCueToParent();                                                                                       // [0x43e5af0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters);               // [0x1a821d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UObjectLibrary*                              ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	class UObjectLibrary*                              StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	class UGameplayCueSet*                             CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayEffectSpecForRPC
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x01A0 (416 bytes) (0x000000 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0020   (0x0018)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UAbilitySystemComponent*                     OwningComponent;                                            // 0x0040   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0048   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00C0   (0x00E0)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayCueNotifyActorArray
{ 
	TArray<class AGameplayCueNotify_Actor*>            Actors;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPreallocationInfo
{ 
	TMap<class UClass*, FGameplayCueNotifyActorArray>  PreallocatedInstances;                                      // 0x0000   (0x0050)  
	TArray<class UClass*>                              ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x02C8 (712 bytes) (0x000038 - 0x0002C8) align 8 MaxSize: 0x02C8
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0050   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x00F0   (0x0178)  MISSED
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                             // 0x0268   (0x0010)  
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                         // 0x0278   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x0288   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x0298   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x02B0   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x04D8 (1240 bytes) (0x000460 - 0x0004D8) align 8 MaxSize: 0x04D8
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0460   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0461   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x0464   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0468   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0469   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x046A   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x046C   (0x000C)  
	FName                                              GameplayCueName;                                            // 0x0478   (0x000C)  
	bool                                               bAutoAttachToOwner;                                         // 0x0484   (0x0001)  
	bool                                               IsOverride;                                                 // 0x0485   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x0486   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x0487   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x0488   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x0489   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x048A   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x048C   (0x0004)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x0490   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x4c884d0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x4c88180] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// void OnOwnerDestroyed(class AActor* DestroyedActor);                                                                     // [0x4c88ef0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x4c88b70] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x4c88820] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// void K2_EndGameplayCue();                                                                                                // [0x4c88ec0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0030   (0x000C)  
	FName                                              GameplayCueName;                                            // 0x003C   (0x000C)  
	bool                                               IsOverride;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x4c8d5e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x4c8d290] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x4c8dc80] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x4c8d930] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayCueNotify_SpawnCondition
{ 
	EGameplayCueNotify_LocallyControlledSource         LocallyControlledSource;                                    // 0x0000   (0x0001)  
	EGameplayCueNotify_LocallyControlledPolicy         LocallyControlledPolicy;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ChanceToPlay;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,515) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(AllowedSurfaceTypes);                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	SDK_UNDEFINED(16,516) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(RejectedSurfaceTypes);                  // 0x0020   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayCueNotify_PlacementInfo
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x000C)  
	EGameplayCueNotify_AttachPolicy                    AttachPolicy;                                               // 0x000C   (0x0001)  
	EAttachmentRule                                    AttachmentRule;                                             // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	bool                                               bOverrideRotation : 1;                                      // 0x0010:0 (0x0001)  
	bool                                               bOverrideScale : 1;                                         // 0x0010:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRotator                                           RotationOverride;                                           // 0x0018   (0x0018)  
	FVector                                            ScaleOverride;                                              // 0x0030   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FGameplayCueNotify_ParticleInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class UParticleSystem*                             NiagaraSystem;                                              // 0x0080   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:1 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0088:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{ 
	FName                                              StopTriggerName;                                            // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FGameplayCueNotify_SoundInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class USoundBase*                                  Sound;                                                      // 0x0080   (0x0008)  
	class USoundBase*                                  SoundCue;                                                   // 0x0088   (0x0008)  
	float                                              LoopingFadeOutDuration;                                     // 0x0090   (0x0004)  
	float                                              LoopingFadeVolumeLevel;                                     // 0x0094   (0x0004)  
	FGameplayCueNotify_SoundParameterInterfaceInfo     SoundParameterInterfaceInfo;                                // 0x0098   (0x000C)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x00A4:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x00A4:1 (0x0001)  
	bool                                               bUseSoundParameterInterface : 1;                            // 0x00A4:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00A5   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FGameplayCueNotify_CameraShakeInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class UClass*                                      CameraShake;                                                // 0x0080   (0x0008)  
	float                                              ShakeScale;                                                 // 0x0088   (0x0004)  
	EGameplayCueNotify_EffectPlaySpace                 Playspace;                                                  // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0090:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0090:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0090:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x0094   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0098   (0x0004)  
	float                                              WorldFalloffExponent;                                       // 0x009C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayCueNotify_CameraLensEffectInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class UClass*                                      CameraLensEffect;                                           // 0x0080   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0088:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x008C   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FGameplayCueNotify_ForceFeedbackInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                        // 0x0080   (0x0008)  
	FName                                              ForceFeedbackTag;                                           // 0x0088   (0x000C)  
	bool                                               bIsLooping : 1;                                             // 0x0094:0 (0x0001)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0094:1 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0094:2 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0094:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              WorldIntensity;                                             // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UForceFeedbackAttenuation*                   WorldAttenuation;                                           // 0x00A0   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayCueNotify_InputDevicePropertyInfo
{ 
	TArray<class UClass*>                              DeviceProperties;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameplayCueNotify_DecalInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0048)  
	class UMaterialInterface*                          DecalMaterial;                                              // 0x0080   (0x0008)  
	FVector                                            DecalSize;                                                  // 0x0088   (0x0018)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x00A0:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x00A0:1 (0x0001)  
	bool                                               bOverrideFadeOut : 1;                                       // 0x00A0:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              FadeOutStartDelay;                                          // 0x00A4   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x02C0 (704 bytes) (0x000000 - 0x0002C0) align 8 MaxSize: 0x02C0
struct FGameplayCueNotify_BurstEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            BurstParticles;                                             // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               BurstSounds;                                                // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 BurstCameraShake;                                           // 0x0020   (0x00A0)  
	FGameplayCueNotify_CameraLensEffectInfo            BurstCameraLensEffect;                                      // 0x00C0   (0x0098)  
	FGameplayCueNotify_ForceFeedbackInfo               BurstForceFeedback;                                         // 0x0158   (0x00A8)  
	FGameplayCueNotify_InputDevicePropertyInfo         BurstDevicePropertyEffect;                                  // 0x0200   (0x0010)  
	FGameplayCueNotify_DecalInfo                       BurstDecal;                                                 // 0x0210   (0x00B0)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0390 (912 bytes) (0x000050 - 0x000390) align 8 MaxSize: 0x0390
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x0050   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0088   (0x0048)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x00D0   (0x02C0)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayCueNotify_SpawnResult
{ 
	TArray<class UFXSystemComponent*>                  FxSystemComponents;                                         // 0x0000   (0x0010)  
	TArray<class UAudioComponent*>                     AudioComponents;                                            // 0x0010   (0x0010)  
	TArray<class UCameraShakeBase*>                    CameraShakes;                                               // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,517) /* TArray<TScriptInterface<Class>> */ __um(CameraLensEffects);                           // 0x0030   (0x0010)  
	class UForceFeedbackComponent*                     ForceFeedbackComponent;                                     // 0x0040   (0x0008)  
	class APlayerController*                           ForceFeedbackTargetPC;                                      // 0x0048   (0x0008)  
	class UDecalComponent*                             DecalComponent;                                             // 0x0050   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0870 (2160 bytes) (0x0004D8 - 0x000870) align 8 MaxSize: 0x0870
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x04D8   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0510   (0x0048)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x0558   (0x02C0)  
	FGameplayCueNotify_SpawnResult                     BurstSpawnResults;                                          // 0x0818   (0x0058)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0050   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0058   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x0210 (528 bytes) (0x000000 - 0x000210) align 8 MaxSize: 0x0210
struct FGameplayCueNotify_LoopingEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            LoopingParticles;                                           // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               LoopingSounds;                                              // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 LoopingCameraShake;                                         // 0x0020   (0x00A0)  
	FGameplayCueNotify_CameraLensEffectInfo            LoopingCameraLensEffect;                                    // 0x00C0   (0x0098)  
	FGameplayCueNotify_ForceFeedbackInfo               LoopingForceFeedback;                                       // 0x0158   (0x00A8)  
	FGameplayCueNotify_InputDevicePropertyInfo         LoopingInputDevicePropertyEffect;                           // 0x0200   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x1110 (4368 bytes) (0x0004D8 - 0x001110) align 8 MaxSize: 0x1110
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x04D8   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0510   (0x0048)  
	FGameplayCueNotify_BurstEffects                    ApplicationEffects;                                         // 0x0558   (0x02C0)  
	FGameplayCueNotify_SpawnResult                     ApplicationSpawnResults;                                    // 0x0818   (0x0058)  
	FGameplayCueNotify_LoopingEffects                  LoopingEffects;                                             // 0x0870   (0x0210)  
	FGameplayCueNotify_SpawnResult                     LoopingSpawnResults;                                        // 0x0A80   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RecurringEffects;                                           // 0x0AD8   (0x02C0)  
	FGameplayCueNotify_SpawnResult                     RecurringSpawnResults;                                      // 0x0D98   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RemovalEffects;                                             // 0x0DF0   (0x02C0)  
	FGameplayCueNotify_SpawnResult                     RemovalSpawnResults;                                        // 0x10B0   (0x0058)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x1108   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	// void OnRemoval(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);  // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	// void OnRecurring(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	// void OnLoopingStart(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	// void OnApplication(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0010   (0x0028)  
	class UClass*                                      LoadedGameplayCueClass;                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC); // [0x4cc42c0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x4cc4970] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	// float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // [0x4ccb8d0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	// FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x4ccac20] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	// FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x4ccaea0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	// FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x4ccad60] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	// FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x4ccb080] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	// FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x4ccb2f0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	// FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x4ccb1c0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	// float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& Tag);                                  // [0x4ccb6d0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	// float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName);                              // [0x4ccb4d0] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x4ccbd60] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      ResponseGameplayEffect;                                     // 0x0010   (0x0008)  
	TArray<class UClass*>                              ResponseGameplayEffects;                                    // 0x0018   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0030)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0030   (0x0030)  
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x0240 (576 bytes) (0x000038 - 0x000240) align 8 MaxSize: 0x0240
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1F8];                                     // 0x0048   (0x01F8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);              // [0x4cce7e0] Final|Native|Protected 
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FMovieSceneGameplayCueKey
{ 
	FGameplayCueTag                                    Cue;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FName                                              AttachSocketName;                                           // 0x0040   (0x000C)  
	float                                              NormalizedMagnitude;                                        // 0x004C   (0x0004)  
	FMovieSceneObjectBindingID                         Instigator;                                                 // 0x0050   (0x0018)  
	FMovieSceneObjectBindingID                         EffectCauser;                                               // 0x0068   (0x0018)  
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0080   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x0088   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x008C   (0x0004)  
	bool                                               bAttachToBinding;                                           // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00F8 (248 bytes) (0x000050 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneGameplayCueKey>                  KeyValues;                                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x88];                                      // 0x0070   (0x0088)  MISSED
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x0208 (520 bytes) (0x000110 - 0x000208) align 8 MaxSize: 0x0208
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueChannel                      Channel;                                                    // 0x0110   (0x00F8)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x01A8 (424 bytes) (0x000110 - 0x0001A8) align 8 MaxSize: 0x01A8
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueKey                          Cue;                                                        // 0x0110   (0x0098)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0x4cd1c40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0018)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0020   (0x0028)  
	bool                                               InputPressed;                                               // 0x0048   (0x0001)  
	bool                                               Ended;                                                      // 0x0049   (0x0001)  
	bool                                               Started;                                                    // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMinimalGameplayCueReplicationProxyForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
	TArray<FVector_NetQuantize>                        Locations;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalReplicationTagCountMapForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SelfActor;                                                  // 0x0008   (0x0008)  
	class UClass*                                      RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0170 (368 bytes) (0x000008 - 0x000170) align 16 MaxSize: 0x0170
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00B0)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x00C0   (0x00B0)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00B0)  
	SDK_UNDEFINED(16,518) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x00C0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 8 MaxSize: 0x0100
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x00F0)  
	bool                                               bHitReplaced;                                               // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<class APlayerController*>           PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<class UAnimInstance*>               AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<class UMovementComponent*>          MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAbilityEndedData
{ 
	class UGameplayAbility*                            AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAbilityTaskDebugMessage
{ 
	class UGameplayTask*                               FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x03D0 (976 bytes) (0x000000 - 0x0003D0) align 16 MaxSize: 0x03D0
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_7[0x3C0];                                     // 0x0000   (0x03C0)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x03C8   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayCueTranslationLink
{ 
	class UGameplayCueTranslator*                      RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x000C)  
	FName                                              CachedGameplayTagName;                                      // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x002C   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	class UGameplayTagsManager*                        TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectVersion
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayEffectVersion
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_2[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,519) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x0018)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x0078:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x0078:1 (0x0001)  
	bool                                               bReplicateInstigator : 1;                                   // 0x0078:2 (0x0001)  
	bool                                               bReplicateEffectCauser : 1;                                 // 0x0078:3 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x000C   (0x0024)  MISSED
	FName                                              PropertyName;                                               // 0x0030   (0x000C)  
	FGuid                                              PropertyGuid;                                               // 0x003C   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x004C   (0x000C)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectContextHandleNetSerializerConfig : FPolymorphicStructNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectContextNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalReplicationTagCountMapNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FPredictionKeyNetSerializerConfig : FNetSerializerConfig
{ 
};

#pragma pack(pop)


static_assert(sizeof(AAbilitySystemDebugHUD) == 0x0560); // 1376 bytes (0x000560 - 0x000560)
static_assert(sizeof(FScalableFloat) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayAttribute) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayEffectAttributeCaptureDefinition) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAttributeBasedFloat) == 0x0148); // 328 bytes (0x000000 - 0x000148)
static_assert(sizeof(FCustomCalculationBasedFloat) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FSetByCallerFloat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFloatCurveFloat) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FGameplayEffectModifierMagnitude) == 0x02F0); // 752 bytes (0x000000 - 0x0002F0)
static_assert(sizeof(FGameplayModEvaluationChannelSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagRequirements) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FGameplayModifierInfo) == 0x0448); // 1096 bytes (0x000000 - 0x000448)
static_assert(sizeof(FGameplayEffectExecutionScopedModifierInfo) == 0x0458); // 1112 bytes (0x000000 - 0x000458)
static_assert(sizeof(FConditionalGameplayEffect) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEffectExecutionDefinition) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FGameplayEffectCue) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FInheritedTagContainer) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FGameplayEffectQuery) == 0x01A0); // 416 bytes (0x000000 - 0x0001A0)
static_assert(sizeof(FGameplayAbilitySpecHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameplayAbilitySpecDef) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(UGameplayEffect) == 0x0BB8); // 3000 bytes (0x000030 - 0x000BB8)
static_assert(sizeof(UGameplayEffectComponent) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FGameplayAbilitySpecConfig) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UAbilitiesGameplayEffectComponent) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAdditionalEffectsGameplayEffectComponent) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UAssetTagsGameplayEffectComponent) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UBlockAbilityTagsGameplayEffectComponent) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UChanceToApplyGameplayEffectComponent) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UCustomCanApplyGameplayEffectComponent) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGameplayEffectUIData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayEffectUIData_TextOnly) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UImmunityGameplayEffectComponent) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URemoveOtherGameplayEffectComponent) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UTargetTagRequirementsGameplayEffectComponent) == 0x01C8); // 456 bytes (0x000030 - 0x0001C8)
static_assert(sizeof(UTargetTagsGameplayEffectComponent) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UAbilityAsync) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAbilityAsync_WaitAttributeChanged) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UAbilityAsync_WaitGameplayEffectApplied) == 0x0190); // 400 bytes (0x000040 - 0x000190)
static_assert(sizeof(UAbilityAsync_WaitGameplayEvent) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UAbilityAsync_WaitGameplayTag) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagAdded) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagRemoved) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagQuery) == 0x0110); // 272 bytes (0x000040 - 0x000110)
static_assert(sizeof(FPredictionKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayAbilityActivationInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayEffectContextHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayAbilityTargetDataHandle) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEventData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FAbilityTriggerData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGameplayAbility) == 0x03C8); // 968 bytes (0x000030 - 0x0003C8)
static_assert(sizeof(FGameplayAbilityBindInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGameplayAbilitySet) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FGameplayAbilityTargetingLocationInfo) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FWorldReticleParameters) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayTargetDataFilterHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AGameplayAbilityTargetActor) == 0x05C0); // 1472 bytes (0x000460 - 0x0005C0)
static_assert(sizeof(AGameplayAbilityTargetActor_Trace) == 0x05E0); // 1504 bytes (0x0005C0 - 0x0005E0)
static_assert(sizeof(AGameplayAbilityTargetActor_GroundTrace) == 0x0600); // 1536 bytes (0x0005E0 - 0x000600)
static_assert(sizeof(AGameplayAbilityTargetActor_ActorPlacement) == 0x0620); // 1568 bytes (0x000600 - 0x000620)
static_assert(sizeof(AGameplayAbilityTargetActor_Radius) == 0x05D0); // 1488 bytes (0x0005C0 - 0x0005D0)
static_assert(sizeof(AGameplayAbilityTargetActor_SingleLineTrace) == 0x05E0); // 1504 bytes (0x0005E0 - 0x0005E0)
static_assert(sizeof(AGameplayAbilityWorldReticle) == 0x0490); // 1168 bytes (0x000460 - 0x000490)
static_assert(sizeof(AGameplayAbilityWorldReticle_ActorVisualization) == 0x04A8); // 1192 bytes (0x000490 - 0x0004A8)
static_assert(sizeof(UGameplayAbility_CharacterJump) == 0x03C8); // 968 bytes (0x0003C8 - 0x0003C8)
static_assert(sizeof(UGameplayAbility_Montage) == 0x0400); // 1024 bytes (0x0003C8 - 0x000400)
static_assert(sizeof(UAbilityTask) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UAbilityTask_ApplyRootMotion_Base) == 0x00D0); // 208 bytes (0x000088 - 0x0000D0)
static_assert(sizeof(UAbilityTask_ApplyRootMotionConstantForce) == 0x0118); // 280 bytes (0x0000D0 - 0x000118)
static_assert(sizeof(UAbilityTask_ApplyRootMotionJumpForce) == 0x0138); // 312 bytes (0x0000D0 - 0x000138)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce) == 0x0170); // 368 bytes (0x0000D0 - 0x000170)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToForce) == 0x0138); // 312 bytes (0x0000D0 - 0x000138)
static_assert(sizeof(UAbilityTask_ApplyRootMotionRadialForce) == 0x0140); // 320 bytes (0x0000D0 - 0x000140)
static_assert(sizeof(UAbilityTask_MoveToLocation) == 0x00F0); // 240 bytes (0x000088 - 0x0000F0)
static_assert(sizeof(UAbilityTask_NetworkSyncPoint) == 0x00A0); // 160 bytes (0x000088 - 0x0000A0)
static_assert(sizeof(UAbilityTask_PlayMontageAndWait) == 0x0118); // 280 bytes (0x000088 - 0x000118)
static_assert(sizeof(UAbilityTask_Repeat) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(UAbilityTask_SpawnActor) == 0x00D0); // 208 bytes (0x000088 - 0x0000D0)
static_assert(sizeof(UAbilityTask_StartAbilityState) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(UAbilityTask_VisualizeTargeting) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UAbilityTask_WaitAbilityActivate) == 0x0190); // 400 bytes (0x000088 - 0x000190)
static_assert(sizeof(UAbilityTask_WaitAbilityCommit) == 0x0108); // 264 bytes (0x000088 - 0x000108)
static_assert(sizeof(UAbilityTask_WaitAttributeChange) == 0x0108); // 264 bytes (0x000088 - 0x000108)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeRatioThreshold) == 0x0148); // 328 bytes (0x000088 - 0x000148)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeThreshold) == 0x00F8); // 248 bytes (0x000088 - 0x0000F8)
static_assert(sizeof(UAbilityTask_WaitCancel) == 0x00A0); // 160 bytes (0x000088 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitConfirm) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitConfirmCancel) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UAbilityTask_WaitDelay) == 0x00A0); // 160 bytes (0x000088 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied) == 0x0250); // 592 bytes (0x000088 - 0x000250)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Self) == 0x0270); // 624 bytes (0x000250 - 0x000270)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Target) == 0x0270); // 624 bytes (0x000250 - 0x000270)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectBlockedImmunity) == 0x01C0); // 448 bytes (0x000088 - 0x0001C0)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectRemoved) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectStackChange) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayEvent) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayTag) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UAbilityTask_WaitGameplayTagAdded) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayTagRemoved) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayTagQuery) == 0x0168); // 360 bytes (0x000088 - 0x000168)
static_assert(sizeof(UAbilityTask_WaitInputPress) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitInputRelease) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitMovementModeChange) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitOverlap) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UAbilityTask_WaitTargetData) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(sizeof(UAbilityTask_WaitVelocityChange) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(UAbilitySystemBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAttributeDefaults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActiveGameplayEffectHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilitySpec) == 0x00F8); // 248 bytes (0x00000C - 0x0000F8)
static_assert(sizeof(FGameplayAbilitySpecContainer) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(FGameplayAbilityRepAnimMontage) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayAbilityLocalAnimMontage) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGameplayEffectModifiedAttribute) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpec) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpecContainer) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTagContainerAggregator) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FModifierSpec) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameplayEffectSpec) == 0x0298); // 664 bytes (0x000000 - 0x000298)
static_assert(sizeof(FActiveGameplayEffect) == 0x0368); // 872 bytes (0x00000C - 0x000368)
static_assert(sizeof(FActiveGameplayEffectsContainer) == 0x02F8); // 760 bytes (0x000108 - 0x0002F8)
static_assert(sizeof(FGameplayCueParameters) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FActiveGameplayCue) == 0x0118); // 280 bytes (0x00000C - 0x000118)
static_assert(sizeof(FActiveGameplayCueContainer) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(FMinimalReplicationTagCountMap) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FReplicatedPredictionKeyItem) == 0x0028); // 40 bytes (0x00000C - 0x000028)
static_assert(sizeof(FReplicatedPredictionKeyMap) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UAbilitySystemComponent) == 0x1298); // 4760 bytes (0x000150 - 0x001298)
static_assert(sizeof(UAbilitySystemDebugHUDExtension) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAbilitySystemDebugHUDExtension_Tags) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UAbilitySystemDebugHUDExtension_Attributes) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UAbilitySystemDebugHUDExtension_BlockedAbilityTags) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FNetSerializeScriptStructCache) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAbilitySystemGlobals) == 0x0340); // 832 bytes (0x000030 - 0x000340)
static_assert(sizeof(UAbilitySystemInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAbilitySystemReplicationProxyInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAttributeSet) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAbilitySystemTestAttributeSet) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(AAbilitySystemTestPawn) == 0x0530); // 1328 bytes (0x000510 - 0x000530)
static_assert(sizeof(FGameplayCueTag) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAnimNotify_GameplayCue) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAnimNotify_GameplayCueState) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UGameplayAbilityBlueprint) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UGameplayCueFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayCueInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FGameplayCueObjectLibrary) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectSpecForRPC) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FGameplayCuePendingExecute) == 0x01A0); // 416 bytes (0x000000 - 0x0001A0)
static_assert(sizeof(FGameplayCueNotifyActorArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPreallocationInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UGameplayCueManager) == 0x02C8); // 712 bytes (0x000038 - 0x0002C8)
static_assert(sizeof(AGameplayCueNotify_Actor) == 0x04D8); // 1240 bytes (0x000460 - 0x0004D8)
static_assert(sizeof(UGameplayCueNotify_Static) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FGameplayCueNotify_SpawnCondition) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayCueNotify_PlacementInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FGameplayCueNotify_ParticleInfo) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FGameplayCueNotify_SoundParameterInterfaceInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGameplayCueNotify_SoundInfo) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FGameplayCueNotify_CameraShakeInfo) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FGameplayCueNotify_CameraLensEffectInfo) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FGameplayCueNotify_ForceFeedbackInfo) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FGameplayCueNotify_InputDevicePropertyInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayCueNotify_DecalInfo) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FGameplayCueNotify_BurstEffects) == 0x02C0); // 704 bytes (0x000000 - 0x0002C0)
static_assert(sizeof(UGameplayCueNotify_Burst) == 0x0390); // 912 bytes (0x000050 - 0x000390)
static_assert(sizeof(FGameplayCueNotify_SpawnResult) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(AGameplayCueNotify_BurstLatent) == 0x0870); // 2160 bytes (0x0004D8 - 0x000870)
static_assert(sizeof(UGameplayCueNotify_HitImpact) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FGameplayCueNotify_LoopingEffects) == 0x0210); // 528 bytes (0x000000 - 0x000210)
static_assert(sizeof(AGameplayCueNotify_Looping) == 0x1110); // 4368 bytes (0x0004D8 - 0x001110)
static_assert(sizeof(FGameplayCueNotifyData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UGameplayCueSet) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UGameplayCueTranslator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayCueTranslator_Test) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayEffectCalculation) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGameplayEffectCustomApplicationRequirement) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayEffectExecutionCalculation) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UGameplayModMagnitudeCalculation) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FGameplayTagReponsePair) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGameplayTagResponseTableEntry) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UGameplayTagReponseTable) == 0x0240); // 576 bytes (0x000038 - 0x000240)
static_assert(sizeof(FMovieSceneGameplayCueKey) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FMovieSceneGameplayCueChannel) == 0x00F8); // 248 bytes (0x000050 - 0x0000F8)
static_assert(sizeof(UMovieSceneGameplayCueTriggerSection) == 0x0208); // 520 bytes (0x000110 - 0x000208)
static_assert(sizeof(UMovieSceneGameplayCueSection) == 0x01A8); // 424 bytes (0x000110 - 0x0001A8)
static_assert(sizeof(UMovieSceneGameplayCueTrack) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(UTickableAttributeSetInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FGameplayEffectSpecHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayEffectRemovalInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FServerAbilityRPCBatch) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FMinimalGameplayCueReplicationProxyForNetSerializer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMinimalReplicationTagCountMapForNetSerializer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTargetDataFilter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayAttributeData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAttributeMetaData) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FGameplayAbilityTargetData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilityTargetData_LocationInfo) == 0x0170); // 368 bytes (0x000008 - 0x000170)
static_assert(sizeof(FGameplayAbilityTargetData_ActorArray) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FGameplayAbilityTargetData_SingleTargetHit) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FGameplayAbilityActorInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAbilityEndedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAbilityTaskDebugMessage) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMinimalGameplayCueReplicationProxy) == 0x03D0); // 976 bytes (0x000000 - 0x0003D0)
static_assert(sizeof(FGameplayCueTranslatorNodeIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameplayCueTranslationLink) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayCueTranslatorNode) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FGameplayCueTranslationManager) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FActiveGameplayEffectQuery) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FGameplayEffectVersion) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayEffectCustomExecutionParameters) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FGameplayModifierEvaluatedData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectCustomExecutionOutput) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayEffectContext) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FGameplayTagBlueprintPropertyMapping) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FGameplayTagBlueprintPropertyMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayAbilityRepAnimMontageNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FGameplayEffectContextHandleNetSerializerConfig) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayEffectContextNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FMinimalGameplayCueReplicationProxyNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FMinimalReplicationTagCountMapNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FPredictionKeyNetSerializerConfig) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(offsetof(FScalableFloat, Curve) == 0x0008);
static_assert(offsetof(FScalableFloat, RegistryType) == 0x0020);
static_assert(offsetof(FGameplayAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 0x0030);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 0x0038);
static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0x0000);
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 0x0038);
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 0x0070);
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 0x00A8);
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 0x00E8);
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 0x0100);
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 0x0101);
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 0x0108);
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 0x0128);
static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0x0000);
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 0x0008);
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 0x0040);
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 0x0078);
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 0x00B0);
static_assert(offsetof(FSetByCallerFloat, DataName) == 0x0000);
static_assert(offsetof(FSetByCallerFloat, DataTag) == 0x000C);
static_assert(offsetof(FFloatCurveFloat, Curve) == 0x0000);
static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0x0000);
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 0x0008);
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 0x0040);
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 0x0188);
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 0x0250);
static_assert(offsetof(FGameplayEffectModifierMagnitude, FloatCurveMagnitude) == 0x0268);
static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 0x0020);
static_assert(offsetof(FGameplayTagRequirements, TagQuery) == 0x0040);
static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 0x0040);
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 0x0330);
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 0x0338);
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 0x03C0);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 0x0040);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 0x004C);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 0x004D);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 0x0050);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 0x0340);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 0x0348);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 0x03D0);
static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0x0000);
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 0x0028);
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 0x0038);
static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 0x0040);
static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0x0000);
static_assert(offsetof(FInheritedTagContainer, Added) == 0x0020);
static_assert(offsetof(FInheritedTagContainer, Removed) == 0x0040);
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 0x0028);
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 0x0070);
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 0x00B8);
static_assert(offsetof(FGameplayEffectQuery, SourceAggregateTagQuery) == 0x0100);
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 0x0148);
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 0x0180);
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 0x0188);
static_assert(offsetof(FGameplayAbilitySpecDef, Ability) == 0x0000);
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 0x0044);
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 0x0048);
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 0x00A0);
static_assert(offsetof(UGameplayEffect, DurationPolicy) == 0x0038);
static_assert(offsetof(UGameplayEffect, DurationMagnitude) == 0x0040);
static_assert(offsetof(UGameplayEffect, Period) == 0x0330);
static_assert(offsetof(UGameplayEffect, PeriodicInhibitionPolicy) == 0x0369);
static_assert(offsetof(UGameplayEffect, Modifiers) == 0x0370);
static_assert(offsetof(UGameplayEffect, Executions) == 0x0380);
static_assert(offsetof(UGameplayEffect, ChanceToApplyToTarget) == 0x0390);
static_assert(offsetof(UGameplayEffect, ApplicationRequirements) == 0x03C8);
static_assert(offsetof(UGameplayEffect, ConditionalGameplayEffects) == 0x03D8);
static_assert(offsetof(UGameplayEffect, OverflowEffects) == 0x03E8);
static_assert(offsetof(UGameplayEffect, PrematureExpirationEffectClasses) == 0x0400);
static_assert(offsetof(UGameplayEffect, RoutineExpirationEffectClasses) == 0x0410);
static_assert(offsetof(UGameplayEffect, GameplayCues) == 0x0428);
static_assert(offsetof(UGameplayEffect, UIData) == 0x0438);
static_assert(offsetof(UGameplayEffect, InheritableGameplayEffectTags) == 0x0440);
static_assert(offsetof(UGameplayEffect, InheritableOwnedTagsContainer) == 0x04A0);
static_assert(offsetof(UGameplayEffect, InheritableBlockedAbilityTagsContainer) == 0x0500);
static_assert(offsetof(UGameplayEffect, OngoingTagRequirements) == 0x0560);
static_assert(offsetof(UGameplayEffect, ApplicationTagRequirements) == 0x05E8);
static_assert(offsetof(UGameplayEffect, RemovalTagRequirements) == 0x0670);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectsWithTags) == 0x06F8);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityTags) == 0x0758);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityQuery) == 0x07E0);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectQuery) == 0x0988);
static_assert(offsetof(UGameplayEffect, StackingType) == 0x0B29);
static_assert(offsetof(UGameplayEffect, StackDurationRefreshPolicy) == 0x0B30);
static_assert(offsetof(UGameplayEffect, StackPeriodResetPolicy) == 0x0B31);
static_assert(offsetof(UGameplayEffect, StackExpirationPolicy) == 0x0B32);
static_assert(offsetof(UGameplayEffect, GrantedAbilities) == 0x0B38);
static_assert(offsetof(UGameplayEffect, GEComponents) == 0x0BA8);
static_assert(offsetof(FGameplayAbilitySpecConfig, Ability) == 0x0000);
static_assert(offsetof(FGameplayAbilitySpecConfig, LevelScalableFloat) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpecConfig, RemovalPolicy) == 0x0044);
static_assert(offsetof(UAbilitiesGameplayEffectComponent, GrantAbilityConfigs) == 0x0030);
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnApplicationGameplayEffects) == 0x0038);
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompleteAlways) == 0x0048);
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompleteNormal) == 0x0058);
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompletePrematurely) == 0x0068);
static_assert(offsetof(UAssetTagsGameplayEffectComponent, InheritableAssetTags) == 0x0030);
static_assert(offsetof(UBlockAbilityTagsGameplayEffectComponent, InheritableBlockedAbilityTagsContainer) == 0x0030);
static_assert(offsetof(UChanceToApplyGameplayEffectComponent, ChanceToApplyToTarget) == 0x0030);
static_assert(offsetof(UCustomCanApplyGameplayEffectComponent, ApplicationRequirements) == 0x0030);
static_assert(offsetof(UGameplayEffectUIData_TextOnly, Description) == 0x0030);
static_assert(offsetof(UImmunityGameplayEffectComponent, ImmunityQueries) == 0x0030);
static_assert(offsetof(URemoveOtherGameplayEffectComponent, RemoveGameplayEffectQueries) == 0x0030);
static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, ApplicationTagRequirements) == 0x0030);
static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, OngoingTagRequirements) == 0x00B8);
static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, RemovalTagRequirements) == 0x0140);
static_assert(offsetof(UTargetTagsGameplayEffectComponent, InheritableGrantedTagsContainer) == 0x0030);
static_assert(offsetof(FPredictionKey, PredictiveConnection) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 0x0008);
static_assert(offsetof(FGameplayEventData, EventTag) == 0x0000);
static_assert(offsetof(FGameplayEventData, Instigator) == 0x0010);
static_assert(offsetof(FGameplayEventData, Target) == 0x0018);
static_assert(offsetof(FGameplayEventData, OptionalObject) == 0x0020);
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 0x0028);
static_assert(offsetof(FGameplayEventData, ContextHandle) == 0x0030);
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 0x0048);
static_assert(offsetof(FGameplayEventData, TargetTags) == 0x0068);
static_assert(offsetof(FGameplayEventData, TargetData) == 0x0090);
static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0x0000);
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 0x000C);
static_assert(offsetof(UGameplayAbility, AbilityTags) == 0x00B0);
static_assert(offsetof(UGameplayAbility, ReplicationPolicy) == 0x00D6);
static_assert(offsetof(UGameplayAbility, InstancingPolicy) == 0x00D7);
static_assert(offsetof(UGameplayAbility, CurrentActivationInfo) == 0x00E0);
static_assert(offsetof(UGameplayAbility, CurrentEventData) == 0x0100);
static_assert(offsetof(UGameplayAbility, NetExecutionPolicy) == 0x01B8);
static_assert(offsetof(UGameplayAbility, NetSecurityPolicy) == 0x01B9);
static_assert(offsetof(UGameplayAbility, CostGameplayEffectClass) == 0x01C0);
static_assert(offsetof(UGameplayAbility, AbilityTriggers) == 0x01C8);
static_assert(offsetof(UGameplayAbility, CooldownGameplayEffectClass) == 0x01D8);
static_assert(offsetof(UGameplayAbility, CancelAbilitiesWithTag) == 0x01E0);
static_assert(offsetof(UGameplayAbility, BlockAbilitiesWithTag) == 0x0200);
static_assert(offsetof(UGameplayAbility, ActivationOwnedTags) == 0x0220);
static_assert(offsetof(UGameplayAbility, ActivationRequiredTags) == 0x0240);
static_assert(offsetof(UGameplayAbility, ActivationBlockedTags) == 0x0260);
static_assert(offsetof(UGameplayAbility, SourceRequiredTags) == 0x0280);
static_assert(offsetof(UGameplayAbility, SourceBlockedTags) == 0x02A0);
static_assert(offsetof(UGameplayAbility, TargetRequiredTags) == 0x02C0);
static_assert(offsetof(UGameplayAbility, TargetBlockedTags) == 0x02E0);
static_assert(offsetof(UGameplayAbility, ActiveTasks) == 0x0320);
static_assert(offsetof(UGameplayAbility, CurrentMontage) == 0x0340);
static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0x0000);
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 0x0008);
static_assert(offsetof(UGameplayAbilitySet, Abilities) == 0x0038);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 0x0020);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 0x0080);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 0x0088);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 0x0090);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 0x0098);
static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0x0000);
static_assert(offsetof(AGameplayAbilityTargetActor, StartLocation) == 0x0470);
static_assert(offsetof(AGameplayAbilityTargetActor, PrimaryPC) == 0x0550);
static_assert(offsetof(AGameplayAbilityTargetActor, OwningAbility) == 0x0558);
static_assert(offsetof(AGameplayAbilityTargetActor, SourceActor) == 0x0568);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleParams) == 0x0570);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleClass) == 0x0588);
static_assert(offsetof(AGameplayAbilityTargetActor, Filter) == 0x0590);
static_assert(offsetof(AGameplayAbilityTargetActor, GenericDelegateBoundASC) == 0x05B8);
static_assert(offsetof(AGameplayAbilityTargetActor_Trace, TraceProfile) == 0x05C4);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass) == 0x0600);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial) == 0x0608);
static_assert(offsetof(AGameplayAbilityWorldReticle, Parameters) == 0x0460);
static_assert(offsetof(AGameplayAbilityWorldReticle, PrimaryPC) == 0x0480);
static_assert(offsetof(AGameplayAbilityWorldReticle, TargetingActor) == 0x0488);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent) == 0x0490);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents) == 0x0498);
static_assert(offsetof(UGameplayAbility_Montage, MontageToPlay) == 0x03C8);
static_assert(offsetof(UGameplayAbility_Montage, SectionName) == 0x03D4);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectClassesWhileAnimating) == 0x03E0);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectsWhileAnimating) == 0x03F0);
static_assert(offsetof(UAbilityTask, Ability) == 0x0070);
static_assert(offsetof(UAbilityTask, AbilitySystemComponent) == 0x0078);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, ForceName) == 0x0088);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode) == 0x0094);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity) == 0x0098);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, MovementComponent) == 0x00B8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection) == 0x00E0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime) == 0x0108);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Rotation) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve) == 0x0120);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve) == 0x0128);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation) == 0x00E8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation) == 0x0100);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor) == 0x0118);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset) == 0x0120);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment) == 0x0138);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode) == 0x0142);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve) == 0x0148);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve) == 0x0150);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve) == 0x0158);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve) == 0x0160);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation) == 0x0108);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode) == 0x0125);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve) == 0x0128);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Location) == 0x00E0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, LocationActor) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff) == 0x0110);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime) == 0x0118);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection) == 0x0128);
static_assert(offsetof(UAbilityTask_MoveToLocation, StartLocation) == 0x00A0);
static_assert(offsetof(UAbilityTask_MoveToLocation, TargetLocation) == 0x00B8);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurve) == 0x00E0);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurveVector) == 0x00E8);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, MontageToPlay) == 0x00F0);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, StartSection) == 0x00FC);
static_assert(offsetof(UAbilityTask_WaitAttributeChange, ExternalOwner) == 0x0100);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner) == 0x0140);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeThreshold, ExternalOwner) == 0x00F0);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied, ExternalOwner) == 0x0240);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner) == 0x01B0);
static_assert(offsetof(UAbilityTask_WaitGameplayEvent, OptionalExternalTarget) == 0x00A8);
static_assert(offsetof(UAbilityTask_WaitGameplayTag, OptionalExternalTarget) == 0x0098);
static_assert(offsetof(UAbilityTask_WaitGameplayTagQuery, OptionalExternalTarget) == 0x0158);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetClass) == 0x00A8);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetActor) == 0x00B0);
static_assert(offsetof(UAbilityTask_WaitVelocityChange, CachedMovementComponent) == 0x0098);
static_assert(offsetof(FAttributeDefaults, Attributes) == 0x0000);
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpec, Handle) == 0x000C);
static_assert(offsetof(FGameplayAbilitySpec, Ability) == 0x0010);
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 0x0020);
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 0x0040);
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 0x0060);
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 0x0080);
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 0x0090);
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 0x00A0);
static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 0x0108);
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 0x0118);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 0x0018);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 0x0010);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 0x0028);
static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 0x0010);
static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0x0000);
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 0x0020);
static_assert(offsetof(FTagContainerAggregator, ScopedTags) == 0x0040);
static_assert(offsetof(FGameplayEffectSpec, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 0x0018);
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 0x0060);
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 0x00E8);
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 0x0170);
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 0x0190);
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 0x01B0);
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 0x01C8);
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 0x0278);
static_assert(offsetof(FActiveGameplayEffect, Spec) == 0x0018);
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 0x02B0);
static_assert(offsetof(FActiveGameplayEffect, GrantedAbilityHandles) == 0x02C8);
static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 0x0130);
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 0x0008);
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 0x0020);
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 0x002C);
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 0x0038);
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 0x0058);
static_assert(offsetof(FGameplayCueParameters, Location) == 0x0078);
static_assert(offsetof(FGameplayCueParameters, Normal) == 0x0090);
static_assert(offsetof(FGameplayCueParameters, Instigator) == 0x00A8);
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 0x00B0);
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 0x00B8);
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 0x00C0);
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 0x00D0);
static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 0x000C);
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 0x0018);
static_assert(offsetof(FActiveGameplayCue, Parameters) == 0x0030);
static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 0x0108);
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 0x0120);
static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 0x0050);
static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 0x0010);
static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 0x0108);
static_assert(offsetof(UAbilitySystemComponent, DefaultStartingData) == 0x0160);
static_assert(offsetof(UAbilitySystemComponent, AffectedAnimInstanceTag) == 0x0170);
static_assert(offsetof(UAbilitySystemComponent, ClientDebugStrings) == 0x0360);
static_assert(offsetof(UAbilitySystemComponent, ServerDebugStrings) == 0x0370);
static_assert(offsetof(UAbilitySystemComponent, SpawnedTargetActors) == 0x03E8);
static_assert(offsetof(UAbilitySystemComponent, OwnerActor) == 0x0420);
static_assert(offsetof(UAbilitySystemComponent, AvatarActor) == 0x0428);
static_assert(offsetof(UAbilitySystemComponent, ActivatableAbilities) == 0x0440);
static_assert(offsetof(UAbilitySystemComponent, AllReplicatedInstancedAbilities) == 0x0590);
static_assert(offsetof(UAbilitySystemComponent, RepAnimMontageInfo) == 0x07D0);
static_assert(offsetof(UAbilitySystemComponent, LocalAnimMontageInfo) == 0x0810);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayEffects) == 0x08E0);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayCues) == 0x0BD8);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationGameplayCues) == 0x0D00);
static_assert(offsetof(UAbilitySystemComponent, BlockedAbilityBindings) == 0x0F50);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationTags) == 0x1088);
static_assert(offsetof(UAbilitySystemComponent, SpawnedAttributes) == 0x10E8);
static_assert(offsetof(UAbilitySystemComponent, ReplicatedLooseTags) == 0x1108);
static_assert(offsetof(UAbilitySystemComponent, ReplicatedPredictionKeyMap) == 0x1170);
static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0x0000);
static_assert(offsetof(UAbilitySystemGlobals, AbilitySystemGlobalsClassName) == 0x0030);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadTag) == 0x0084);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadName) == 0x0090);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownTag) == 0x009C);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownName) == 0x00A8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostTag) == 0x00B4);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostName) == 0x00C0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedTag) == 0x00CC);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedName) == 0x00D8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingTag) == 0x00E4);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingName) == 0x00F0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingTag) == 0x00FC);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingName) == 0x0108);
static_assert(offsetof(UAbilitySystemGlobals, TargetDataStructCache) == 0x0118);
static_assert(offsetof(UAbilitySystemGlobals, EffectContextStructCache) == 0x0128);
static_assert(offsetof(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel) == 0x0139);
static_assert(offsetof(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases) == 0x013C);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTableName) == 0x01B8);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTable) == 0x01E0);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName) == 0x01E8);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTable) == 0x0210);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName) == 0x0218);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames) == 0x0240);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeDefaultsTables) == 0x0250);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerClass) == 0x0260);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerName) == 0x0288);
static_assert(offsetof(UAbilitySystemGlobals, GameplayCueNotifyPaths) == 0x02B0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTableName) == 0x02C0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTable) == 0x02E8);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManager) == 0x02F8);
static_assert(offsetof(AAbilitySystemTestPawn, AbilitySystemComponent) == 0x0528);
static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0x0000);
static_assert(offsetof(UAnimNotify_GameplayCue, GameplayCue) == 0x0040);
static_assert(offsetof(UAnimNotify_GameplayCueState, GameplayCue) == 0x0038);
static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0x0000);
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 0x0030);
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 0x0038);
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 0x0040);
static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 0x0018);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 0x0030);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 0x0050);
static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 0x0020);
static_assert(offsetof(FGameplayCuePendingExecute, PayloadType) == 0x0038);
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 0x0040);
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 0x0048);
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 0x00C0);
static_assert(offsetof(FGameplayCueNotifyActorArray, Actors) == 0x0000);
static_assert(offsetof(FPreallocationInfo, PreallocatedInstances) == 0x0000);
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 0x0050);
static_assert(offsetof(UGameplayCueManager, RuntimeGameplayCueObjectLibrary) == 0x0050);
static_assert(offsetof(UGameplayCueManager, EditorGameplayCueObjectLibrary) == 0x00A0);
static_assert(offsetof(UGameplayCueManager, LoadedGameplayCueNotifyClasses) == 0x0268);
static_assert(offsetof(UGameplayCueManager, GameplayCueClassesForPreallocation) == 0x0278);
static_assert(offsetof(UGameplayCueManager, PendingExecuteCues) == 0x0288);
static_assert(offsetof(UGameplayCueManager, PreallocationInfoList_Internal) == 0x02A0);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueTag) == 0x046C);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueName) == 0x0478);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueTag) == 0x0030);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueName) == 0x003C);
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledSource) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledPolicy) == 0x0001);
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, SocketName) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachPolicy) == 0x000C);
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachmentRule) == 0x000D);
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, RotationOverride) == 0x0018);
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, ScaleOverride) == 0x0030);
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, NiagaraSystem) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_SoundParameterInterfaceInfo, StopTriggerName) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_SoundInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_SoundInfo, Sound) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundCue) == 0x0088);
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundParameterInterfaceInfo) == 0x0098);
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, CameraShake) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, Playspace) == 0x008C);
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, CameraLensEffect) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackEffect) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackTag) == 0x0088);
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, WorldAttenuation) == 0x00A0);
static_assert(offsetof(FGameplayCueNotify_InputDevicePropertyInfo, DeviceProperties) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_DecalInfo, SpawnConditionOverride) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_DecalInfo, PlacementInfoOverride) == 0x0038);
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalMaterial) == 0x0080);
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalSize) == 0x0088);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstParticles) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstSounds) == 0x0010);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraShake) == 0x0020);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraLensEffect) == 0x00C0);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstForceFeedback) == 0x0158);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDevicePropertyEffect) == 0x0200);
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDecal) == 0x0210);
static_assert(offsetof(UGameplayCueNotify_Burst, DefaultSpawnCondition) == 0x0050);
static_assert(offsetof(UGameplayCueNotify_Burst, DefaultPlacementInfo) == 0x0088);
static_assert(offsetof(UGameplayCueNotify_Burst, BurstEffects) == 0x00D0);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, FxSystemComponents) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, AudioComponents) == 0x0010);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, CameraShakes) == 0x0020);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackComponent) == 0x0040);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackTargetPC) == 0x0048);
static_assert(offsetof(FGameplayCueNotify_SpawnResult, DecalComponent) == 0x0050);
static_assert(offsetof(AGameplayCueNotify_BurstLatent, DefaultSpawnCondition) == 0x04D8);
static_assert(offsetof(AGameplayCueNotify_BurstLatent, DefaultPlacementInfo) == 0x0510);
static_assert(offsetof(AGameplayCueNotify_BurstLatent, BurstEffects) == 0x0558);
static_assert(offsetof(AGameplayCueNotify_BurstLatent, BurstSpawnResults) == 0x0818);
static_assert(offsetof(UGameplayCueNotify_HitImpact, Sound) == 0x0050);
static_assert(offsetof(UGameplayCueNotify_HitImpact, ParticleSystem) == 0x0058);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingParticles) == 0x0000);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingSounds) == 0x0010);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraShake) == 0x0020);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraLensEffect) == 0x00C0);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingForceFeedback) == 0x0158);
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingInputDevicePropertyEffect) == 0x0200);
static_assert(offsetof(AGameplayCueNotify_Looping, DefaultSpawnCondition) == 0x04D8);
static_assert(offsetof(AGameplayCueNotify_Looping, DefaultPlacementInfo) == 0x0510);
static_assert(offsetof(AGameplayCueNotify_Looping, ApplicationEffects) == 0x0558);
static_assert(offsetof(AGameplayCueNotify_Looping, ApplicationSpawnResults) == 0x0818);
static_assert(offsetof(AGameplayCueNotify_Looping, LoopingEffects) == 0x0870);
static_assert(offsetof(AGameplayCueNotify_Looping, LoopingSpawnResults) == 0x0A80);
static_assert(offsetof(AGameplayCueNotify_Looping, RecurringEffects) == 0x0AD8);
static_assert(offsetof(AGameplayCueNotify_Looping, RecurringSpawnResults) == 0x0D98);
static_assert(offsetof(AGameplayCueNotify_Looping, RemovalEffects) == 0x0DF0);
static_assert(offsetof(AGameplayCueNotify_Looping, RemovalSpawnResults) == 0x10B0);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0x0000);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 0x0010);
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 0x0038);
static_assert(offsetof(UGameplayCueSet, GameplayCueData) == 0x0038);
static_assert(offsetof(UGameplayEffectCalculation, RelevantAttributesToCapture) == 0x0030);
static_assert(offsetof(FGameplayTagReponsePair, Tag) == 0x0000);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 0x0010);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 0x0018);
static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0x0000);
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 0x0030);
static_assert(offsetof(UGameplayTagReponseTable, Entries) == 0x0038);
static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0x0000);
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 0x0010);
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 0x0028);
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 0x0040);
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 0x0050);
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 0x0068);
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 0x0080);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 0x0050);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 0x0060);
static_assert(offsetof(UMovieSceneGameplayCueTriggerSection, Channel) == 0x0110);
static_assert(offsetof(UMovieSceneGameplayCueSection, Cue) == 0x0110);
static_assert(offsetof(UMovieSceneGameplayCueTrack, Sections) == 0x00A0);
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, AbilitySpecHandle) == 0x0000);
static_assert(offsetof(FServerAbilityRPCBatch, PredictionKey) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, TargetData) == 0x0020);
static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Tags) == 0x0000);
static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Locations) == 0x0010);
static_assert(offsetof(FMinimalReplicationTagCountMapForNetSerializer, Tags) == 0x0000);
static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 0x0008);
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 0x0010);
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 0x0018);
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 0x0018);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x00C0);
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 0x0010);
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 0x0018);
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 0x0020);
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 0x0028);
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 0x0030);
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 0x0038);
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 0x0040);
static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0x0000);
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 0x0008);
static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0x0000);
static_assert(offsetof(FAbilityTaskDebugMessage, Message) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0x0000);
static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 0x03C0);
static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 0x0010);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 0x0014);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 0x0020);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0x0000);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 0x0010);
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 0x0060);
static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 0x0040);
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0x0000);
static_assert(offsetof(FGameplayEffectContext, Instigator) == 0x0008);
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 0x0010);
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 0x0018);
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 0x0020);
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 0x002C);
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 0x0034);
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 0x0060);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0x0000);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 0x0030);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 0x003C);
static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 0x0010);
