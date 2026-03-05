
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation     = 4,
	EClusterConnectionTypeEnum__Chaos_None                                           = 5,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 6
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(80,5086) /* TSet<UObject*> */        __um(ChaosHandlers);                                        // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRemovalEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FCrumblingEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x02F0 (752 bytes) (0x0000E0 - 0x0002F0) align 8 MaxSize: 0x02F0
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x00E0   (0x00C0)  MISSED
	TMap<class UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;                                // 0x01A0   (0x0050)  
	TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                          // 0x01F0   (0x0050)  
	TMap<class UPrimitiveComponent*, FRemovalEventCallbackWrapper> RemovalEventRegistrations;                      // 0x0240   (0x0050)  
	TMap<class UPrimitiveComponent*, FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                  // 0x0290   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x02E0   (0x0010)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x359aea0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x0558 (1368 bytes) (0x000460 - 0x000558) align 8 MaxSize: 0x0558
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x0460   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x04C8   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x04CC   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x04D0   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x04D4   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x04D8   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x04DC   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x04DD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x04DE   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x04E0   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04F1   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x04F4   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x0504   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0505   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0508   (0x0010)  
	float                                              MassScale;                                                  // 0x0518   (0x0004)  
	bool                                               bHasFloor;                                                  // 0x051C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x051D   (0x0003)  MISSED
	float                                              FloorHeight;                                                // 0x0520   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x0524   (0x0003)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0527   (0x0001)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0528   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0530   (0x0018)  MISSED
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x0548   (0x0008)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0550   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0x359b640] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x359b740] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0048   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0050   (0x0028)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FChaosPhysicsCollisionInfo
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0040   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0058   (0x0018)  
	FVector                                            OtherVelocity;                                              // 0x0070   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0088   (0x0018)  
	FVector                                            OtherAngularVelocity;                                       // 0x00A0   (0x0018)  
	float                                              Mass;                                                       // 0x00B8   (0x0004)  
	float                                              OtherMass;                                                  // 0x00BC   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UChaosDebugDrawComponent) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRemovalEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCrumblingEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x02F0); // 752 bytes (0x0000E0 - 0x0002F0)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UChaosSolver) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x0558); // 1368 bytes (0x000460 - 0x000558)
static_assert(sizeof(UChaosSolverSettings) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x01A0);
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x01F0);
static_assert(offsetof(UChaosGameplayEventDispatcher, RemovalEventRegistrations) == 0x0240);
static_assert(offsetof(UChaosGameplayEventDispatcher, CrumblingEventRegistrations) == 0x0290);
static_assert(offsetof(AChaosSolverActor, Properties) == 0x0460);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x04DC);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x04E0);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x04F4);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x0508);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x0524);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x0528);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x0548);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0050);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0058);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0070);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x0088);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x00A0);
