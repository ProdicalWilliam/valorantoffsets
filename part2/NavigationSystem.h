
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

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x01 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x01 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x01 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

/// Enum /Script/NavigationSystem.EHeightFieldRenderMode
/// Size: 0x01 (1 bytes)
enum class EHeightFieldRenderMode : uint8_t
{
	EHeightFieldRenderMode__Solid                                                    = 0,
	EHeightFieldRenderMode__Walkable                                                 = 1
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x01 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0360 (864 bytes) (0x000330 - 0x000360) align 16 MaxSize: 0x0360
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x0330   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0348   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0350   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0358   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0688 (1672 bytes) (0x000460 - 0x000688) align 8 MaxSize: 0x0688
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x0468   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x0470   (0x0098)  
	bool                                               bEnableDrawing : 1;                                         // 0x0508:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x0508:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0508:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x0508:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0508:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x0508:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0509   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x050C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x050D   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x0510   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x0514   (0x0004)  
	unsigned char                                      UnknownData03_6[0x108];                                     // 0x0518   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0620   (0x0010)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0630   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0688 (1672 bytes) (0x000688 - 0x000688) align 8 MaxSize: 0x0688
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0038   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x003C   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0040   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0044   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0048:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0048:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0048:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0048:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0048:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0048:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0048:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0048:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0049:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0049:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0049:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0049:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0049:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0049:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0049:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0049:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align 8 MaxSize: 0x00D0
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0098   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00C0   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C8   (0x0008)  
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              Height;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	FVector                                            Extent;                                                     // 0x0018   (0x0018)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x00D8 (216 bytes) (0x000078 - 0x0000D8) align 8 MaxSize: 0x00D8
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0078   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0088   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0098   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A8   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00B0:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x27];                                      // 0x00B1   (0x0027)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0030   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0040   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0688 (1672 bytes) (0x000688 - 0x000688) align 8 MaxSize: 0x0688
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00D8   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00DC   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x00E0   (0x0004)  
	ENavigationInvokerPriority                         Priority;                                                   // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00E5   (0x0003)  MISSED
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,349) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                                // 0x0030   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0040   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0051   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                          // [0x50948e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                   // [0x3b9c6d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                        // [0x5094900] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// double GetPathLength();                                                                                                  // [0x50949a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// double GetPathCost();                                                                                                    // [0x5094940] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                                // [0x5094ca0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x50949d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x5094af0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15C0 (5568 bytes) (0x000030 - 0x0015C0) align 8 MaxSize: 0x15C0
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0030   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0038   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TSoftObjectPtr<class UClass*>                      CrowdManagerClass;                                          // 0x0050   (0x0030)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0080:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0080:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0080:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0080:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0080:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0080:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0080:6 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0080:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0081:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	int32_t                                            GeometryExportTriangleCountWarningThreshold;                // 0x0084   (0x0004)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x008C   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x0094   (0x0004)  
	float                                              GatheringNavModifiersWarningLimitTime;                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x00A0   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FBox                                               BuildBounds;                                                // 0x00B8   (0x0038)  
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x00F0   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x0100   (0x0010)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x0110   (0x0010)  MISSED
	SDK_UNDEFINED(16,350) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                           // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);             // 0x0130   (0x0010)  
	unsigned char                                      UnknownData08_6[0xF8];                                      // 0x0140   (0x00F8)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x0238   (0x0001)  
	unsigned char                                      UnknownData09_7[0x1387];                                    // 0x0239   (0x1387)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x5097790] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x5097c00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x5097690] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x5097b00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x5097890] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x5097260] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x5097d70] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x5097410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x5099900] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x50994e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x5096e40] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x5096e40] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x5098a80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x5098b70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x5098c60] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x50990a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x5099d20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x5098700] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x50981c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0070:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0070:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0070:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0070:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0590 (1424 bytes) (0x000460 - 0x000590) align 8 MaxSize: 0x0590
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0460   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0470   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x0478   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x0480:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0481   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x0488   (0x0040)  
	FVector                                            QueryingExtent;                                             // 0x04C8   (0x0018)  
	class ANavigationData*                             MyNavData;                                                  // 0x04E0   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x04E8   (0x0018)  
	bool                                               bProjectedLocationValid : 1;                                // 0x0500:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x0500:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0501   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x0504   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x0508   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x050C:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x050C:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x050C:2 (0x0001)  
	bool                                               bRequireNavigableEndLocation : 1;                           // 0x050C:3 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x050C:4 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x050C:5 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x050C:6 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x050C:7 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x050D:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x050E   (0x0002)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x0510   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0511   (0x0007)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x0518   (0x0010)  
	bool                                               bPathExist : 1;                                             // 0x0528:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x0528:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0528:2 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0529   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x052C   (0x0004)  
	double                                             PathCost;                                                   // 0x0530   (0x0008)  
	int32_t                                            PathfindingSteps;                                           // 0x0538   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x053C   (0x0004)  MISSED
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x0540   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x0548   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x0550   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x0554   (0x0004)  
	unsigned char                                      UnknownData07_7[0x38];                                      // 0x0558   (0x0038)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x06A0 (1696 bytes) (0x000688 - 0x0006A0) align 16 MaxSize: 0x06A0
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0688   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x0690   (0x0010)  
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0128 (296 bytes) (0x0000D8 - 0x000128) align 8 MaxSize: 0x0128
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x00D8   (0x0040)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x0120   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x5103090] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x0218 (536 bytes) (0x000128 - 0x000218) align 8 MaxSize: 0x0218
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0128   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	FNavLinkId                                         CustomLinkId;                                               // 0x0138   (0x0008)  
	FNavLinkAuxiliaryId                                AuxiliaryCustomLinkId;                                      // 0x0140   (0x0008)  
	class UClass*                                      EnabledAreaClass;                                           // 0x0148   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0150   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0158   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	FVector                                            LinkRelativeStart;                                          // 0x0160   (0x0018)  
	FVector                                            LinkRelativeEnd;                                            // 0x0178   (0x0018)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x0190   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0191   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0194:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0194:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0194:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0194:3 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0195   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0198   (0x0018)  
	FVector                                            ObstacleExtent;                                             // 0x01B0   (0x0018)  
	class UClass*                                      ObstacleAreaClass;                                          // 0x01C8   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x01D0   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x01D4   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3F];                                      // 0x01D9   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0690 (1680 bytes) (0x000688 - 0x000690) align 16 MaxSize: 0x0690
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0688   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x04A0 (1184 bytes) (0x000498 - 0x0004A0) align 8 MaxSize: 0x04A0
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0498   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x049C   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x06F0 (1776 bytes) (0x0006D8 - 0x0006F0) align 16 MaxSize: 0x06F0
class UNavMeshRenderingComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x06D8   (0x0018)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x06E0 (1760 bytes) (0x0006D8 - 0x0006E0) align 16 MaxSize: 0x06E0
class UNavTestRenderingComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x06D8   (0x0008)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FRecastNavMeshTileGenerationDebug
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FIntVector                                         TileCoordinate;                                             // 0x0004   (0x000C)  
	bool                                               bGenerateDebugTileOnly : 1;                                 // 0x0010:0 (0x0001)  
	bool                                               bCollisionGeometry : 1;                                     // 0x0010:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	EHeightFieldRenderMode                             HeightFieldRenderMode;                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	bool                                               bHeightfieldFromRasterization : 1;                          // 0x0018:0 (0x0001)  
	bool                                               bHeightfieldPostInclusionBoundsFiltering : 1;               // 0x0018:1 (0x0001)  
	bool                                               bHeightfieldPostHeightFiltering : 1;                        // 0x0018:2 (0x0001)  
	bool                                               bHeightfieldBounds : 1;                                     // 0x0018:3 (0x0001)  
	bool                                               bCompactHeightfield : 1;                                    // 0x0018:4 (0x0001)  
	bool                                               bCompactHeightfieldEroded : 1;                              // 0x0018:5 (0x0001)  
	bool                                               bCompactHeightfieldRegions : 1;                             // 0x0018:6 (0x0001)  
	bool                                               bCompactHeightfieldDistances : 1;                           // 0x0018:7 (0x0001)  
	bool                                               bTileCacheLayerAreas : 1;                                   // 0x0019:0 (0x0001)  
	bool                                               bTileCacheLayerRegions : 1;                                 // 0x0019:1 (0x0001)  
	bool                                               bTileCacheContours : 1;                                     // 0x0019:2 (0x0001)  
	bool                                               bTileCachePolyMesh : 1;                                     // 0x0019:3 (0x0001)  
	bool                                               bTileCacheDetailMesh : 1;                                   // 0x0019:4 (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/NavigationSystem.NavMeshResolutionParam
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNavMeshResolutionParam
{ 
	float                                              CellSize;                                                   // 0x0000   (0x0004)  
	float                                              CellHeight;                                                 // 0x0004   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0008   (0x0004)  
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x07A0 (1952 bytes) (0x000688 - 0x0007A0) align 8 MaxSize: 0x07A0
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x0688:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x0688:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x0688:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x0688:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x0688:4 (0x0001)  
	bool                                               bDrawTileResolutions : 1;                                   // 0x0688:5 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x0688:6 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x0688:7 (0x0001)  
	bool                                               bDrawTileBuildTimes : 1;                                    // 0x0689:0 (0x0001)  
	bool                                               bDrawTileBuildTimesHeatMap : 1;                             // 0x0689:1 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x0689:2 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x0689:3 (0x0001)  
	bool                                               bDrawPolygonFlags : 1;                                      // 0x0689:4 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x0689:5 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x0689:6 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x0689:7 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x068A:0 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x068A:1 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x068A:2 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x068A:3 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x068A:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x068B   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x068C   (0x0004)  
	FRecastNavMeshTileGenerationDebug                  TileGenerationDebug;                                        // 0x0690   (0x001C)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x06AC:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x06AD   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x06B0   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x06B4   (0x0004)  
	float                                              CellSize;                                                   // 0x06B8   (0x0004)  
	float                                              CellHeight;                                                 // 0x06BC   (0x0004)  
	FNavMeshResolutionParam                            NavMeshResolutionParams[3];                                 // 0x06C0   (0x0024)  
	float                                              AgentRadius;                                                // 0x06E4   (0x0004)  
	float                                              AgentHeight;                                                // 0x06E8   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x06EC   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x06F0   (0x0004)  
	float                                              MinRegionArea;                                              // 0x06F4   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x06F8   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x06FC   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0700   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x0704   (0x0004)  
	int32_t                                            ExpectedMaxLayersPerTile;                                   // 0x0708   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x070C   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0710   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0714   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x0718   (0x0018)  
	float                                              DefaultDrawDistance;                                        // 0x0730   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x0734   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0738   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x073C   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x073D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x073E   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0740   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0744   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0748:0 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x0748:1 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0748:2 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0748:3 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0748:4 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0748:5 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0748:6 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0748:7 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0749:0 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0749:1 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0749:2 (0x0001)  
	bool                                               bUseVirtualGeometryFilteringAndDirtying : 1;                // 0x0749:3 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0749:4 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x074A   (0x0002)  MISSED
	int32_t                                            TimeSliceFilterLedgeSpansMaxYProcess;                       // 0x074C   (0x0004)  
	double                                             TimeSliceLongDurationDebug;                                 // 0x0750   (0x0008)  
	uint32_t                                           InvokerTilePriorityBumpDistanceThresholdInTileUnits;        // 0x0758   (0x0004)  
	char                                               InvokerTilePriorityBumpIncrease;                            // 0x075C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x075D   (0x0003)  MISSED
	bool                                               bUseVoxelCache : 1;                                         // 0x0760:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0761   (0x0003)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x0764   (0x0004)  
	float                                              HeuristicScale;                                             // 0x0768   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x076C   (0x0004)  
	unsigned char                                      UnknownData06_7[0x30];                                      // 0x0770   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x50d6200] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x01D0 (464 bytes) (0x000128 - 0x0001D0) align 16 MaxSize: 0x01D0
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x0128   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x0130   (0x0018)  
	ENavigationDataResolution                          NavMeshResolution;                                          // 0x0148   (0x0001)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x0149:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x86];                                      // 0x014A   (0x0086)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x50ff370] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x04B0 (1200 bytes) (0x000498 - 0x0004B0) align 8 MaxSize: 0x04B0
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0498   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x04A0   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x04A8   (0x0001)  
	ENavigationDataResolution                          NavMeshResolution;                                          // 0x04A9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x04AA   (0x0006)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x5102a70] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0470 (1136 bytes) (0x000460 - 0x000470) align 8 MaxSize: 0x0470
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x0460   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0468   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0469:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x046A   (0x0006)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	FNavLinkId                                         CustomLinkId;                                               // 0x0068   (0x0008)  
	FNavLinkAuxiliaryId                                AuxiliaryCustomLinkId;                                      // 0x0070   (0x0008)  
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	int32_t                                            ExpectedMaxLayersPerTile;                                   // 0x0030   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0034   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0038   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x003C   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0040:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0040:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0040:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0040:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0040:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0040:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x0040:6 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x0040:7 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0041   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UCrowdManagerBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ANavigationGraphNode) == 0x0460); // 1120 bytes (0x000460 - 0x000460)
static_assert(sizeof(FNavGraphNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x0360); // 864 bytes (0x000330 - 0x000360)
static_assert(sizeof(UNavigationPathGenerator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UNavLinkCustomInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UNavLinkHostInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UNavLinkTrivial) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNavNodeInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FSupportedAreaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ANavigationData) == 0x0688); // 1672 bytes (0x000460 - 0x000688)
static_assert(sizeof(AAbstractNavData) == 0x0688); // 1672 bytes (0x000688 - 0x000688)
static_assert(sizeof(UNavArea) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNavAreaMeta) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UNavArea_Default) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_LowHeight) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_Null) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UNavArea_Obstacle) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FNavCollisionCylinder) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNavCollisionBox) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNavCollision) == 0x00D8); // 216 bytes (0x000078 - 0x0000D8)
static_assert(sizeof(FNavigationFilterArea) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavigationFilterFlags) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationQueryFilter) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(ANavigationGraph) == 0x0688); // 1672 bytes (0x000688 - 0x000688)
static_assert(sizeof(UNavigationInvokerComponent) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNavigationPath) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UNavigationSystemV1) == 0x15C0); // 5568 bytes (0x000030 - 0x0015C0)
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ANavigationTestingActor) == 0x0590); // 1424 bytes (0x000460 - 0x000590)
static_assert(sizeof(UNavLinkComponent) == 0x06A0); // 1696 bytes (0x000688 - 0x0006A0)
static_assert(sizeof(UNavRelevantComponent) == 0x0128); // 296 bytes (0x0000D8 - 0x000128)
static_assert(sizeof(UNavLinkCustomComponent) == 0x0218); // 536 bytes (0x000128 - 0x000218)
static_assert(sizeof(UNavLinkRenderingComponent) == 0x0690); // 1680 bytes (0x000688 - 0x000690)
static_assert(sizeof(ANavMeshBoundsVolume) == 0x04A0); // 1184 bytes (0x000498 - 0x0004A0)
static_assert(sizeof(UNavMeshRenderingComponent) == 0x06F0); // 1776 bytes (0x0006D8 - 0x0006F0)
static_assert(sizeof(UNavTestRenderingComponent) == 0x06E0); // 1760 bytes (0x0006D8 - 0x0006E0)
static_assert(sizeof(FRecastNavMeshTileGenerationDebug) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FNavMeshResolutionParam) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ARecastNavMesh) == 0x07A0); // 1952 bytes (0x000688 - 0x0007A0)
static_assert(sizeof(URecastNavMeshDataChunk) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNavModifierComponent) == 0x01D0); // 464 bytes (0x000128 - 0x0001D0)
static_assert(sizeof(ANavModifierVolume) == 0x04B0); // 1200 bytes (0x000498 - 0x0004B0)
static_assert(sizeof(ANavSystemConfigOverride) == 0x0470); // 1136 bytes (0x000460 - 0x000470)
static_assert(sizeof(FNavGraphEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(offsetof(FNavGraphNode, Owner) == 0x0000);
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x0330);
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0348);
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0350);
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x0000);
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x0018);
static_assert(offsetof(ANavigationData, RenderingComp) == 0x0468);
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x0470);
static_assert(offsetof(ANavigationData, RuntimeGeneration) == 0x050C);
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x0620);
static_assert(offsetof(UNavArea, DrawColor) == 0x0040);
static_assert(offsetof(UNavArea, SupportedAgents) == 0x0044);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x0050);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x0058);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x0060);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x0068);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x0070);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x0078);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x0080);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x0088);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x0090);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x0098);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x00A0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x00A8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x00B0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x00B8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x00C0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x00C8);
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Extent) == 0x0018);
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x0088);
static_assert(offsetof(UNavCollision, BoxCollision) == 0x0098);
static_assert(offsetof(UNavCollision, AreaClass) == 0x00A8);
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x0000);
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x0030);
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x0040);
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x0044);
static_assert(offsetof(UNavigationInvokerComponent, SupportedAgents) == 0x00E0);
static_assert(offsetof(UNavigationInvokerComponent, Priority) == 0x00E4);
static_assert(offsetof(UNavigationPath, PathPoints) == 0x0040);
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 0x0050);
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x0030);
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x0038);
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x0040);
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 0x0050);
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 0x0090);
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x00A0);
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x00B0);
static_assert(offsetof(UNavigationSystemV1, BuildBounds) == 0x00B8);
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x00F0);
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x0100);
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 0x0238);
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x0470);
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x0478);
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x0488);
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x04C8);
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x04E0);
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x04E8);
static_assert(offsetof(ANavigationTestingActor, CostDisplayMode) == 0x0510);
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x0518);
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x0540);
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x0548);
static_assert(offsetof(UNavLinkComponent, Links) == 0x0690);
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x0120);
static_assert(offsetof(UNavLinkCustomComponent, CustomLinkId) == 0x0138);
static_assert(offsetof(UNavLinkCustomComponent, AuxiliaryCustomLinkId) == 0x0140);
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x0148);
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x0150);
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x0158);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x0160);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x0178);
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 0x0190);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x0198);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x01B0);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x01C8);
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 0x01D8);
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0498);
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, TileCoordinate) == 0x0004);
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode) == 0x0014);
static_assert(offsetof(ARecastNavMesh, TileGenerationDebug) == 0x0690);
static_assert(offsetof(ARecastNavMesh, NavMeshResolutionParams) == 0x06C0);
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x0718);
static_assert(offsetof(ARecastNavMesh, RegionPartitioning) == 0x073C);
static_assert(offsetof(ARecastNavMesh, LayerPartitioning) == 0x073D);
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x0128);
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x0130);
static_assert(offsetof(UNavModifierComponent, NavMeshResolution) == 0x0148);
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x04A0);
static_assert(offsetof(ANavModifierVolume, NavMeshResolution) == 0x04A9);
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x0460);
static_assert(offsetof(ANavSystemConfigOverride, OverridePolicy) == 0x0468);
static_assert(offsetof(FNavLinkCustomInstanceData, CustomLinkId) == 0x0068);
static_assert(offsetof(FNavLinkCustomInstanceData, AuxiliaryCustomLinkId) == 0x0070);
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x0034);
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x0035);
