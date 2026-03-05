
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Enum /Script/AINavigation.ENavAreaFlag
/// Size: 0x01 (1 bytes)
enum class ENavAreaFlag : uint8_t
{
	ENavAreaFlag__Default                                                            = 0,
	ENavAreaFlag__Jump                                                               = 1,
	ENavAreaFlag__Crouch                                                             = 2,
	ENavAreaFlag__Teleport                                                           = 3,
	ENavAreaFlag__Drop                                                               = 4,
	ENavAreaFlag__Fly                                                                = 5
};

/// Struct /Script/AINavigation.GeneratedNavigationLinkInfo
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
struct FGeneratedNavigationLinkInfo : FNavigationLinkBase
{ 
	FVector                                            Left;                                                       // 0x0040   (0x0018)  
	FVector                                            Right;                                                      // 0x0058   (0x0018)  
};

/// Class /Script/AINavigation.GeneratedNavDropOffLinks
/// Size: 0x0480 (1152 bytes) (0x000460 - 0x000480) align 8 MaxSize: 0x0480
class AGeneratedNavDropOffLinks : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0460   (0x0010)  MISSED
	TArray<FGeneratedNavigationLinkInfo>               PointLinks;                                                 // 0x0470   (0x0010)  
};

/// Struct /Script/AINavigation.NavLinkArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNavLinkArray
{ 
	TArray<FNavigationLink>                            Links;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/AINavigation.FastGeneratedNavDropOffLinks
/// Size: 0x04D0 (1232 bytes) (0x000480 - 0x0004D0) align 8 MaxSize: 0x04D0
class AFastGeneratedNavDropOffLinks : public AGeneratedNavDropOffLinks
{ 
public:
	TMap<FIntPoint, FNavLinkArray>                     TilesToNavLinks;                                            // 0x0480   (0x0050)  
};

/// Class /Script/AINavigation.JumpingPathFollowingComponent
/// Size: 0x0388 (904 bytes) (0x000310 - 0x000388) align 8 MaxSize: 0x0388
class UJumpingPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnPathChanged);                                      // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnEnterNavFlyLink);                                  // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(OnExitNavFlyLink);                                   // 0x0330   (0x0010)  
	float                                              FlyingAcceptanceRadius;                                     // 0x0340   (0x0004)  
	float                                              HeightAcceptanceModifier;                                   // 0x0344   (0x0004)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(JumpSignal);                                         // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(CrouchSignal);                                       // 0x0358   (0x0010)  
	class UClass*                                      DebuggerClass;                                              // 0x0368   (0x0008)  
	class UCharacterMovementComponent*                 CharacterMoveComp;                                          // 0x0370   (0x0008)  
	class UObject*                                     DebuggerObject;                                             // 0x0378   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/AINavigation.JumpingPathFollowingComponent.OnPostProcessMove
	// void OnPostProcessMove(class UPathFollowingComponent* PathFollower, FVector& InOutVelocity);                             // [0x51dceb0] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/AINavigation.NavArea_Crouch
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Crouch : public UNavArea
{ 
public:
};

/// Class /Script/AINavigation.NavArea_FallDamage
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_FallDamage : public UNavArea
{ 
public:
};

/// Class /Script/AINavigation.NavArea_Fly
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Fly : public UNavArea
{ 
public:
};

/// Class /Script/AINavigation.NavArea_Jump
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Jump : public UNavArea
{ 
public:
};

/// Class /Script/AINavigation.NavArea_JumpWithFallDamage
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_JumpWithFallDamage : public UNavArea_Jump
{ 
public:
};

/// Class /Script/AINavigation.NavFilter_Dropper
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Dropper : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AINavigation.NavFilter_Flyer
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Flyer : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AINavigation.NavFilter_Jumper
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Jumper : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AINavigation.NavFilter_Jumper_IgnoreFallDamage
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavFilter_Jumper_IgnoreFallDamage : public UNavFilter_Jumper
{ 
public:
};

/// Struct /Script/AINavigation.NavQuerierClassOverride
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNavQuerierClassOverride
{ 
	FString                                            QuerierClassName;                                           // 0x0000   (0x0010)  
	TArray<FNavigationFilterArea>                      Overrides;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AINavigation.NavFilter_QuerierClassOverrides
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNavFilter_QuerierClassOverrides : public UNavigationQueryFilter
{ 
public:
	TArray<FNavQuerierClassOverride>                   QuerierClassOverrides;                                      // 0x0050   (0x0010)  
};

/// Class /Script/AINavigation.NavLinkDropOff
/// Size: 0x0490 (1168 bytes) (0x000460 - 0x000490) align 8 MaxSize: 0x0490
class ANavLinkDropOff : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0460   (0x0010)  MISSED
	float                                              DropOffDistance;                                            // 0x0470   (0x0004)  
	float                                              MaxDropOff;                                                 // 0x0474   (0x0004)  
	float                                              MaxJumpHeight;                                              // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x047C   (0x0014)  MISSED
};

/// Class /Script/AINavigation.NavLinkDropOffGenerator
/// Size: 0x04A0 (1184 bytes) (0x000460 - 0x0004A0) align 8 MaxSize: 0x04A0
class ANavLinkDropOffGenerator : public AActor
{ 
public:
	float                                              DropOffSeparation;                                          // 0x0460   (0x0004)  
	float                                              DropOffDistance;                                            // 0x0464   (0x0004)  
	float                                              MaxStepUpHeight;                                            // 0x0468   (0x0004)  
	float                                              MinStepDownHeight;                                          // 0x046C   (0x0004)  
	float                                              MaxDropOff;                                                 // 0x0470   (0x0004)  
	float                                              MaxJumpHeight;                                              // 0x0474   (0x0004)  
	float                                              FallDamageHeight;                                           // 0x0478   (0x0004)  
	float                                              BaseLift;                                                   // 0x047C   (0x0004)  
	float                                              BaseBackOff;                                                // 0x0480   (0x0004)  
	FName                                              IgnoreObjectsWithTag;                                       // 0x0484   (0x000C)  
	class UClass*                                      GeneratedNavDropOffLinksClass;                              // 0x0490   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0498   (0x0008)  MISSED


	/// Functions
	// Function /Script/AINavigation.NavLinkDropOffGenerator.OnNavigationGenerated
	// void OnNavigationGenerated(class ANavigationData* NavData);                                                              // [0x34773d0] Final|Native|Private 
	// Function /Script/AINavigation.NavLinkDropOffGenerator.OnBuildStarted
	// void OnBuildStarted();                                                                                                   // [0x51de3a0] Final|Native|Private 
	// Function /Script/AINavigation.NavLinkDropOffGenerator.HasValidData
	// bool HasValidData();                                                                                                     // [0x51de4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AINavigation.NavLinkDropOffGenerator.DoesMapHaveHealthyJumpLinks
	// bool DoesMapHaveHealthyJumpLinks();                                                                                      // [0x51de4b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AINavigation.NavLinkDropOffIgnoreVolumeBase
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class ANavLinkDropOffIgnoreVolumeBase : public AActor
{ 
public:
	class UBoxComponent*                               IgnoreVolume;                                               // 0x0460   (0x0008)  
};

/// Class /Script/AINavigation.NavLinkDropOffIgnoreVolume
/// Size: 0x0468 (1128 bytes) (0x000468 - 0x000468) align 8 MaxSize: 0x0468
class ANavLinkDropOffIgnoreVolume : public ANavLinkDropOffIgnoreVolumeBase
{ 
public:
};

/// Class /Script/AINavigation.PathFollowingDebuggerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPathFollowingDebuggerInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(FGeneratedNavigationLinkInfo) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(AGeneratedNavDropOffLinks) == 0x0480); // 1152 bytes (0x000460 - 0x000480)
static_assert(sizeof(FNavLinkArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AFastGeneratedNavDropOffLinks) == 0x04D0); // 1232 bytes (0x000480 - 0x0004D0)
static_assert(sizeof(UJumpingPathFollowingComponent) == 0x0388); // 904 bytes (0x000310 - 0x000388)
static_assert(sizeof(UNavArea_Crouch) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_FallDamage) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_Fly) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_Jump) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_JumpWithFallDamage) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Dropper) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Flyer) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Jumper) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavFilter_Jumper_IgnoreFallDamage) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FNavQuerierClassOverride) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNavFilter_QuerierClassOverrides) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(ANavLinkDropOff) == 0x0490); // 1168 bytes (0x000460 - 0x000490)
static_assert(sizeof(ANavLinkDropOffGenerator) == 0x04A0); // 1184 bytes (0x000460 - 0x0004A0)
static_assert(sizeof(ANavLinkDropOffIgnoreVolumeBase) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(ANavLinkDropOffIgnoreVolume) == 0x0468); // 1128 bytes (0x000468 - 0x000468)
static_assert(sizeof(UPathFollowingDebuggerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(offsetof(FGeneratedNavigationLinkInfo, Left) == 0x0040);
static_assert(offsetof(FGeneratedNavigationLinkInfo, Right) == 0x0058);
static_assert(offsetof(AGeneratedNavDropOffLinks, PointLinks) == 0x0470);
static_assert(offsetof(FNavLinkArray, Links) == 0x0000);
static_assert(offsetof(AFastGeneratedNavDropOffLinks, TilesToNavLinks) == 0x0480);
static_assert(offsetof(UJumpingPathFollowingComponent, DebuggerClass) == 0x0368);
static_assert(offsetof(UJumpingPathFollowingComponent, CharacterMoveComp) == 0x0370);
static_assert(offsetof(UJumpingPathFollowingComponent, DebuggerObject) == 0x0378);
static_assert(offsetof(FNavQuerierClassOverride, QuerierClassName) == 0x0000);
static_assert(offsetof(FNavQuerierClassOverride, Overrides) == 0x0010);
static_assert(offsetof(UNavFilter_QuerierClassOverrides, QuerierClassOverrides) == 0x0050);
static_assert(offsetof(ANavLinkDropOffGenerator, IgnoreObjectsWithTag) == 0x0484);
static_assert(offsetof(ANavLinkDropOffGenerator, GeneratedNavDropOffLinksClass) == 0x0490);
static_assert(offsetof(ANavLinkDropOffIgnoreVolumeBase, IgnoreVolume) == 0x0460);
