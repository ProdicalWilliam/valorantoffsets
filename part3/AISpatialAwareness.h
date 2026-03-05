
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
/// dependency: GameplayTags
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Enum /Script/AISpatialAwareness.ELayerBlockBehavior
/// Size: 0x01 (1 bytes)
enum class ELayerBlockBehavior : uint8_t
{
	ELayerBlockBehavior__AffectNone                                                  = 0,
	ELayerBlockBehavior__AffectBlockID                                               = 1,
	ELayerBlockBehavior__AffectOtherBlockIDs                                         = 2,
	ELayerBlockBehavior__AffectAllBlockIDs                                           = 3,
	ELayerBlockBehavior__Count                                                       = 4
};

/// Enum /Script/AISpatialAwareness.EInfluenceLayerTag
/// Size: 0x01 (1 bytes)
enum class EInfluenceLayerTag : uint8_t
{
	EInfluenceLayerTag__Debug                                                        = 0,
	EInfluenceLayerTag__Hazard                                                       = 1,
	EInfluenceLayerTag__Position                                                     = 2,
	EInfluenceLayerTag__AllyThreat                                                   = 3,
	EInfluenceLayerTag__Count                                                        = 4
};

/// Enum /Script/AISpatialAwareness.EInfluenceSourceTag
/// Size: 0x01 (1 bytes)
enum class EInfluenceSourceTag : uint8_t
{
	EInfluenceSourceTag__TestTagA                                                    = 0,
	EInfluenceSourceTag__Count                                                       = 1
};

/// Enum /Script/AISpatialAwareness.EPropagationModifierTag
/// Size: 0x01 (1 bytes)
enum class EPropagationModifierTag : uint8_t
{
	EPropagationModifierTag__Count                                                   = 0
};

/// Enum /Script/AISpatialAwareness.EEnvTestWaypointVisibilityMode
/// Size: 0x01 (1 bytes)
enum class EEnvTestWaypointVisibilityMode : uint8_t
{
	EEnvTestWaypointVisibilityMode__Perception                                       = 0
};

/// Enum /Script/AISpatialAwareness.EWaypointInfluenceQueryReturnType
/// Size: 0x01 (1 bytes)
enum class EWaypointInfluenceQueryReturnType : uint8_t
{
	EWaypointInfluenceQueryReturnType__Sum                                           = 0,
	EWaypointInfluenceQueryReturnType__Average                                       = 1,
	EWaypointInfluenceQueryReturnType__Count                                         = 2
};

/// Enum /Script/AISpatialAwareness.EWaypointTypeFlags
/// Size: 0x01 (1 bytes)
enum class EWaypointTypeFlags : uint8_t
{
	EWaypointTypeFlags__None                                                         = 0,
	EWaypointTypeFlags__RoomEntrance                                                 = 1,
	EWaypointTypeFlags__DefensePoint                                                 = 2,
	EWaypointTypeFlags__ObjectivePoint                                               = 4,
	EWaypointTypeFlags__All                                                          = 255
};

/// Enum /Script/AISpatialAwareness.ENodeOperation
/// Size: 0x01 (1 bytes)
enum class ENodeOperation : uint8_t
{
	ENodeOperation__Set                                                              = 0,
	ENodeOperation__SetWithModulation                                                = 1,
	ENodeOperation__Increment                                                        = 2,
	ENodeOperation__Decrement                                                        = 3,
	ENodeOperation__Clear                                                            = 4
};

/// Class /Script/AISpatialAwareness.AISpatialAwarenessAmortizationInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAISpatialAwarenessAmortizationInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AISpatialAwareness.AISpatialAwarenessAmortizationInterface.PerformAmortizedWork
	// void PerformAmortizedWork();                                                                                             // [0x2634250] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/AISpatialAwareness.AISpatialAwarenessAmortizationQueue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAISpatialAwarenessAmortizationQueue
{ 
	TArray<class UObject*>                             AmortizationQueue;                                          // 0x0000   (0x0010)  
};

/// Class /Script/AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent
/// Size: 0x0130 (304 bytes) (0x0000D8 - 0x000130) align 8 MaxSize: 0x0130
class UAISpatialAwarenessAmortizationManagerComponent : public UActorComponent
{ 
public:
	int32_t                                            AmortizedCallsPerQueuePerTick;                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TMap<class UClass*, FAISpatialAwarenessAmortizationQueue> AmortizationQueues;                                  // 0x00E0   (0x0050)  


	/// Functions
	// Function /Script/AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.RegisterAmortizedCall
	// void RegisterAmortizedCall(class UClass* QueueID, class UObject* AmortizationInterface);                                 // [0x56a49b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.DeregisterAmortizedCall
	// void DeregisterAmortizedCall(class UClass* QueueID, class UObject* AmortizationInterface);                               // [0x56a4780] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.AISpatialAwarenessBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAISpatialAwarenessBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerIDFInfluenceLayerID
	// bool EqualEqual_FInfluenceLayerIDFInfluenceLayerID(FInfluenceLayerID& A, FInfluenceLayerID& B);                          // [0x4c128d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID
	// bool EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID(FInfluenceLayerBlockID& A, FInfluenceLayerBlockID& B);      // [0x4c128d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent
/// Size: 0x00F0 (240 bytes) (0x0000D8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAISpatialAwarenessDebugControllerComponent : public UActorComponent
{ 
public:
	class APlayerController*                           CachedPlayerController;                                     // 0x00D8   (0x0008)  
	class UInfluenceMapDebuggerComponent*              CachedInfluenceMapDebuggerComponent;                        // 0x00E0   (0x0008)  
	class UMapMarkupWaypointDebuggerComponent*         CachedMapMarkupWaypointDebuggerComponent;                   // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerStepPropagation
	// void ServerStepPropagation(float PropagationStepAmount);                                                                 // [0x56a53d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetPropagationPaused
	// void ServerSetPropagationPaused(bool bPaused);                                                                           // [0x56a54d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetLayerID
	// void ServerSetLayerID(int32_t LayerID);                                                                                  // [0x56a50d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedWaypointDebugData
	// void ServerSetClientRequestedWaypointDebugData(FClientRequestedWaypointDebugData ClientRequestedDebugData);              // [0x56a56d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedInfluenceMapDebugData
	// void ServerSetClientRequestedInfluenceMapDebugData(FClientRequestedInfluenceMapDebugData ClientRequestedDebugData);      // [0x56a55d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetBlockID
	// void ServerSetBlockID(int32_t BlockID);                                                                                  // [0x56a51d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerRegisterInfluenceAtPoint
	// void ServerRegisterInfluenceAtPoint(float InfluenceValue);                                                               // [0x56a52d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleToNextActiveLayer
	// void ServerCycleToNextActiveLayer();                                                                                     // [0x4a529f0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleLayer
	// void ServerCycleLayer(int32_t CycleAmount);                                                                              // [0x56a4fd0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveWaypointDebugData
	// void ClientReceiveWaypointDebugData(FMapMarkupWaypointDebugData DebugData);                                              // [0x56a57d0] Net|Native|Event|Public|NetClient 
	// Function /Script/AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveInfluenceDebugData
	// void ClientReceiveInfluenceDebugData(FInfluenceMapDebugData DebugData);                                                  // [0x56a5980] Net|Native|Event|Public|NetClient 
};

/// Struct /Script/AISpatialAwareness.WaypointQueryInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWaypointQueryInfo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/AISpatialAwareness.BTService_RunWaypointQuery
/// Size: 0x01D8 (472 bytes) (0x000078 - 0x0001D8) align 8 MaxSize: 0x01D8
class UBTService_RunWaypointQuery : public UBTService
{ 
public:
	class UEnvQuery*                                   PrimaryQueryTemplate;                                       // 0x0078   (0x0008)  
	FBlackboardKeySelector                             PrimaryQueryBlackboardKey;                                  // 0x0080   (0x0030)  
	class UEnvQuery*                                   SecondaryQueryTemplate;                                     // 0x00B0   (0x0008)  
	FBlackboardKeySelector                             SecondaryQueryBlackboardKey;                                // 0x00B8   (0x0030)  
	float                                              SecondaryQueryCombinedScoreWeight;                          // 0x00E8   (0x0004)  
	float                                              SecondaryQueryScoreTolerance;                               // 0x00EC   (0x0004)  
	bool                                               bDiscardPrimaryResultWithFailedSecondaryQuery;              // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              FoundWaypointTimeoutDuration;                               // 0x00F4   (0x0004)  
	bool                                               bRunQueryIfFoundWaypointValid;                              // 0x00F8   (0x0001)  
	bool                                               bUsePreviousWaypointOnNoneFound;                            // 0x00F9   (0x0001)  
	EInfluenceLayerTag                                 InfluenceTypeCheckTag;                                      // 0x00FA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00FB   (0x0005)  MISSED
	class UClass*                                      GameplayEventsHelperType;                                   // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0108   (0x0020)  MISSED
	class UWaypointQueryEventsHelperBase*              GameplayEventsHelper;                                       // 0x0128   (0x0008)  
	TMap<int32_t, FWaypointQueryInfo>                  CachedWaypointQueryInfo;                                    // 0x0130   (0x0050)  
	FWaypointQueryInfo                                 CachedPreviousWaypointInfo;                                 // 0x0180   (0x0030)  
	class APawn*                                       CachedOwnerPawn;                                            // 0x01B0   (0x0008)  
	class AAIController*                               CachedOwnerController;                                      // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x01C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.BTService_RunWaypointQuery.InvalidatePreviousWaypointInfo
	// void InvalidatePreviousWaypointInfo();                                                                                   // [0x56a6550] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.BTService_RunWaypointQuery.GetOwnerPawn
	// class APawn* GetOwnerPawn();                                                                                             // [0x56a65c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AISpatialAwareness.EnvQueryContext_QuerierOccupiedRooms
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryContext_QuerierOccupiedRooms : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryPawn
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryContext_SecondaryWaypointQueryPawn : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryWaypoint
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryContext_SecondaryWaypointQueryWaypoint : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AISpatialAwareness.EnvQueryGenerator_ConnectedWaypoints
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UEnvQueryGenerator_ConnectedWaypoints : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      Context;                                                    // 0x0058   (0x0008)  
};

/// Class /Script/AISpatialAwareness.EnvQueryGenerator_WaypointsInRoom
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UEnvQueryGenerator_WaypointsInRoom : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      MarkupRoomContext;                                          // 0x0058   (0x0008)  
};

/// Class /Script/AISpatialAwareness.EnvQueryTest_WaypointInfluenceValue
/// Size: 0x0240 (576 bytes) (0x000238 - 0x000240) align 8 MaxSize: 0x0240
class UEnvQueryTest_WaypointInfluenceValue : public UEnvQueryTest
{ 
public:
	EInfluenceLayerTag                                 LayerTag;                                                   // 0x0238   (0x0001)  
	EWaypointInfluenceQueryReturnType                  QueryReturnType;                                            // 0x0239   (0x0001)  
	bool                                               bIgnoreQuerierInfluenceContribution;                        // 0x023A   (0x0001)  
	bool                                               bDiscardZeroInfluenceWaypoints;                             // 0x023B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x023C   (0x0004)  MISSED
};

/// Class /Script/AISpatialAwareness.EnvQueryTest_WaypointType
/// Size: 0x0248 (584 bytes) (0x000238 - 0x000248) align 8 MaxSize: 0x0248
class UEnvQueryTest_WaypointType : public UEnvQueryTest
{ 
public:
	char                                               WaypointTypeFlags;                                          // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UClass*                                      WaypointClass;                                              // 0x0240   (0x0008)  
};

/// Class /Script/AISpatialAwareness.EnvQueryTest_WaypointVisibility
/// Size: 0x0240 (576 bytes) (0x000238 - 0x000240) align 8 MaxSize: 0x0240
class UEnvQueryTest_WaypointVisibility : public UEnvQueryTest
{ 
public:
	EEnvTestWaypointVisibilityMode                     CheckMode;                                                  // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Struct /Script/AISpatialAwareness.InfluenceLayerBlockID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FInfluenceLayerBlockID
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Class /Script/AISpatialAwareness.InfluenceClearerComponentBase
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align 8 MaxSize: 0x0100
class UInfluenceClearerComponentBase : public UActorComponent
{ 
public:
	float                                              ClearTickRate;                                              // 0x00D8   (0x0004)  
	EInfluenceLayerTag                                 ClearLayerTag;                                              // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	TArray<EInfluenceSourceTag>                        ClearSourceTags;                                            // 0x00E0   (0x0010)  
	FInfluenceLayerBlockID                             OwnerLayerBlockID;                                          // 0x00F0   (0x0004)  
	ELayerBlockBehavior                                LayerBlockBehavior;                                         // 0x00F4   (0x0001)  
	bool                                               bEnabled;                                                   // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData01_7[0xA];                                       // 0x00F6   (0x000A)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceClearerComponentBase.Enable
	// void Enable();                                                                                                           // [0x56a74d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceClearerComponentBase.Disable
	// void Disable();                                                                                                          // [0x56a74b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.InfluenceMap
/// Size: 0x04A0 (1184 bytes) (0x000460 - 0x0004A0) align 8 MaxSize: 0x04A0
class AInfluenceMap : public AActor
{ 
public:
	class UInfluenceMapNodeGraphComponent*             InfluenceMapNodeGraphComponent;                             // 0x0460   (0x0008)  
	class UInfluenceMapSourceManagerComponent*         InfluenceMapSourceManagerComponent;                         // 0x0468   (0x0008)  
	class UInfluencePropagationComponent*              InfluencePropagationComponent;                              // 0x0470   (0x0008)  
	class UInfluenceMapRoomManagerComponent*           InfluenceMapRoomManagerComponent;                           // 0x0478   (0x0008)  
	class UInfluenceMapDebuggerComponent*              InfluenceMapDebuggerComponent;                              // 0x0480   (0x0008)  
	class UMapMarkupWaypointDebuggerComponent*         MapMarkupWaypointDebuggerComponent;                         // 0x0488   (0x0008)  
	class UAISpatialAwarenessAmortizationManagerComponent* AmortizationManagerComponent;                           // 0x0490   (0x0008)  
	int32_t                                            NumExpectedPropagatingLayers;                               // 0x0498   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x049C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceMap.GetNumExpectedPropagatingLayers
	// int32_t GetNumExpectedPropagatingLayers();                                                                               // [0x56a7760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMap.AuthGetInfluenceMap
	// class AInfluenceMap* AuthGetInfluenceMap(class UObject* WorldContextObject);                                             // [0x56a7780] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AISpatialAwareness.InfluenceLayerDebugInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FInfluenceLayerDebugInfo
{ 
	int32_t                                            BlockID;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            BlockIDDebugString;                                         // 0x0008   (0x0010)  
	int32_t                                            LayerID;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            LayerIDDebugString;                                         // 0x0020   (0x0010)  
	FString                                            ActiveSourcesDebugString;                                   // 0x0030   (0x0010)  
	bool                                               bLayerPropagates;                                           // 0x0040   (0x0001)  
	bool                                               bPropagationPaused;                                         // 0x0041   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Struct /Script/AISpatialAwareness.InfluenceNodeSimpleDebugInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FInfluenceNodeSimpleDebugInfo
{ 
	int32_t                                            NodeIndex;                                                  // 0x0000   (0x0004)  
	float                                              Value;                                                      // 0x0004   (0x0004)  
	bool                                               bRecentlyCleared;                                           // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/AISpatialAwareness.PropagationProgressDebugInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPropagationProgressDebugInfo
{ 
	int32_t                                            NodeNeighborIndex;                                          // 0x0000   (0x0004)  
	float                                              DistanceTravelled;                                          // 0x0004   (0x0004)  
};

/// Struct /Script/AISpatialAwareness.InfluenceNodeComplexDebugInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInfluenceNodeComplexDebugInfo
{ 
	int32_t                                            NodeIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SeedNumber;                                                 // 0x0004   (0x0004)  
	float                                              PropagatedToTimestamp;                                      // 0x0008   (0x0004)  
	float                                              ClearedTimestamp;                                           // 0x000C   (0x0004)  
	bool                                               bPropagationFrontierNode;                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            WaypointName;                                               // 0x0018   (0x0010)  
	float                                              WaypointValue;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPropagationProgressDebugInfo>              PropagationProgress;                                        // 0x0030   (0x0010)  
};

/// Struct /Script/AISpatialAwareness.InfluenceNodeNeighborDebugInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInfluenceNodeNeighborDebugInfo
{ 
	int32_t                                            NodeIndex;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    NodeNeighborIndices;                                        // 0x0008   (0x0010)  
	int32_t                                            NumHopsToOriginNode;                                        // 0x0018   (0x0004)  
	float                                              DistanceToOriginNode;                                       // 0x001C   (0x0004)  
};

/// Struct /Script/AISpatialAwareness.InfluenceMapDebugData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FInfluenceMapDebugData
{ 
	TArray<int32_t>                                    FocusedNodeIndices;                                         // 0x0000   (0x0010)  
	FInfluenceLayerDebugInfo                           LayerDebugInfo;                                             // 0x0010   (0x0048)  
	TArray<int32_t>                                    NodeIndicesToDebugDraw;                                     // 0x0058   (0x0010)  
	TArray<FInfluenceNodeSimpleDebugInfo>              InfluenceNodeSimpleDebugInfo;                               // 0x0068   (0x0010)  
	TArray<FInfluenceNodeComplexDebugInfo>             InfluenceNodeComplexDebugInfo;                              // 0x0078   (0x0010)  
	TArray<FInfluenceNodeNeighborDebugInfo>            InfluenceNodeNeighborDebugInfo;                             // 0x0088   (0x0010)  
};

/// Struct /Script/AISpatialAwareness.PropagationSavedInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPropagationSavedInfo
{ 
	float                                              PropagatedToTimestamp;                                      // 0x0000   (0x0004)  
	float                                              ClearedTimestamp;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/AISpatialAwareness.SavedInfoMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FSavedInfoMap
{ 
	TMap<int32_t, FPropagationSavedInfo>               LayerToPropagationSavedInfo;                                // 0x0000   (0x0050)  
};

/// Struct /Script/AISpatialAwareness.ClientRequestedInfluenceMapDebugData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FClientRequestedInfluenceMapDebugData
{ 
	bool                                               bNodeDebuggingEnabled;                                      // 0x0000   (0x0001)  
	bool                                               bDrawNodeConnectivityEnabled;                               // 0x0001   (0x0001)  
	bool                                               bFocusedNodeIndexLocked;                                    // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            NumHopsToShow;                                              // 0x0004   (0x0004)  
};

/// Class /Script/AISpatialAwareness.InfluenceMapDebuggerComponent
/// Size: 0x02D8 (728 bytes) (0x0000D8 - 0x0002D8) align 8 MaxSize: 0x02D8
class UInfluenceMapDebuggerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x00D8   (0x0038)  MISSED
	class AInfluenceMap*                               CachedInfluenceMap;                                         // 0x0110   (0x0008)  
	class ULayerBlockAssignerComponentBase*            CachedBlockAssignerComponent;                               // 0x0118   (0x0008)  
	class UInfluenceMapNodeGraphComponent*             CachedNodeGraphComp;                                        // 0x0120   (0x0008)  
	class UInfluenceMapSourceManagerComponent*         CachedSourceManagerComp;                                    // 0x0128   (0x0008)  
	class UInfluencePropagationComponent*              CachedPropagationComp;                                      // 0x0130   (0x0008)  
	class ARecastNavMesh*                              CachedNavMesh;                                              // 0x0138   (0x0008)  
	FInfluenceMapDebugData                             InfluenceMapDebugData;                                      // 0x0140   (0x0098)  
	TMap<class APlayerController*, int32_t>            FocusedNodeIndexMap;                                        // 0x01D8   (0x0050)  
	TArray<FSavedInfoMap>                              SavedInfoArray;                                             // 0x0228   (0x0010)  
	TMap<int32_t, class AMapMarkupWaypoint*>           NodeIndexToWaypointMap;                                     // 0x0238   (0x0050)  
	TMap<class APlayerController*, FClientRequestedInfluenceMapDebugData> ClientRequestedDebugDataMap;             // 0x0288   (0x0050)  
};

/// Struct /Script/AISpatialAwareness.LayerValue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLayerValue
{ 
	int32_t                                            SeedNumber;                                                 // 0x0000   (0x0004)  
	float                                              Value;                                                      // 0x0004   (0x0004)  
	float                                              ModulationStartTimestamp;                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UCurveFloat*                                 ModulationCurve;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AISpatialAwareness.NodeConnectionInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNodeConnectionInfo
{ 
	int32_t                                            NodeIndex;                                                  // 0x0000   (0x0004)  
	float                                              Distance;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/AISpatialAwareness.InfluenceMapNode
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FInfluenceMapNode
{ 
	FVector                                            NodeLocation;                                               // 0x0000   (0x0018)  
	TArray<FLayerValue>                                LayerValueMap;                                              // 0x0018   (0x0010)  
	TArray<FNodeConnectionInfo>                        NodeConnectionInfo;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/AISpatialAwareness.NodeOperation
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNodeOperation
{ 
	ENodeOperation                                     Operation;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
	int32_t                                            SeedNumber;                                                 // 0x0008   (0x0004)  
	float                                              ModulationTimestamp;                                        // 0x000C   (0x0004)  
	class UCurveFloat*                                 ModulationCurve;                                            // 0x0010   (0x0008)  
	TArray<int32_t>                                    AffectedLayerIndices;                                       // 0x0018   (0x0010)  
};

/// Struct /Script/AISpatialAwareness.NodeOperationsList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNodeOperationsList
{ 
	TArray<FNodeOperation>                             Operations;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent
/// Size: 0x01A0 (416 bytes) (0x0000D8 - 0x0001A0) align 8 MaxSize: 0x01A0
class UInfluenceMapNodeGraphComponent : public UActorComponent
{ 
public:
	class UClass*                                      NodePlacementStrategyClass;                                 // 0x00D8   (0x0008)  
	TMap<FIntVector, int32_t>                          InfluenceMapNodeIndices;                                    // 0x00E0   (0x0050)  
	TArray<FInfluenceMapNode>                          InfluenceMapNodes;                                          // 0x0130   (0x0010)  
	TMap<int32_t, FNodeOperationsList>                 PendingNodeOperations;                                      // 0x0140   (0x0050)  
	class UNodePlacementStrategyBase*                  NodePlacementStrategy;                                      // 0x0190   (0x0008)  
	class UInfluencePropagationComponent*              CachedPropagationComponent;                                 // 0x0198   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetSurroundingNodeIndicesAtLocation
	// TArray<int32_t> GetSurroundingNodeIndicesAtLocation(FVector& Location);                                                  // [0x56abcf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNumNodes
	// int32_t GetNumNodes();                                                                                                   // [0x56ab480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNodeLocation
	// FVector GetNodeLocation(int32_t NodeIndex);                                                                              // [0x56ab280] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNearestInfluenceMapNodeIndex
	// int32_t GetNearestInfluenceMapNodeIndex(FVector& Location);                                                              // [0x56abe80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInSphere
	// TArray<int32_t> GetInfluenceMapNodeIndicesInSphere(FVector& Location, float Radius);                                     // [0x56abab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInCone
	// TArray<int32_t> GetInfluenceMapNodeIndicesInCone(FVector& Location, FVector& ViewDirection, float PeripheralVisionAngleCos, float PointOfViewBackwardOffset, float NearClippingRadiusSq, float SightRadiusSq); // [0x56ab630] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInBox
	// TArray<int32_t> GetInfluenceMapNodeIndicesInBox(FBox& Box);                                                              // [0x56ab4a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AISpatialAwareness.InfluenceMapRoomManagerComponent
/// Size: 0x0140 (320 bytes) (0x0000D8 - 0x000140) align 8 MaxSize: 0x0140
class UInfluenceMapRoomManagerComponent : public UActorComponent
{ 
public:
	class UClass*                                      RoomOccupierClass;                                          // 0x00D8   (0x0008)  
	SDK_UNDEFINED(80,376) /* TSet<UClass*> */          __um(WaypointVisCheckIgnoreTypes);                          // 0x00E0   (0x0050)  
	TArray<class AMapMarkupRoom*>                      MapMarkupRooms;                                             // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceMapRoomManagerComponent.GetMapMarkupRooms
	// TArray<AMapMarkupRoom*> GetMapMarkupRooms();                                                                             // [0x56ac4b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapRoomManagerComponent.AuthGetRoomsForActor
	// TArray<AMapMarkupRoom*> AuthGetRoomsForActor(class AActor* InActor);                                                     // [0x56ac4e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AISpatialAwareness.InfluenceMapLayer
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FInfluenceMapLayer
{ 
	TArray<class UInfluenceSourceComponentBase*>       ActiveSources;                                              // 0x0000   (0x0010)  
	TArray<EInfluenceSourceTag>                        SourceTags;                                                 // 0x0010   (0x0010)  
	EInfluenceLayerTag                                 Tag;                                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0021   (0x000B)  MISSED
	EPropagationModifierTag                            PropagationTag;                                             // 0x002C   (0x0001)  
	bool                                               bPropagates;                                                // 0x002D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	int32_t                                            SeedNumber;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AISpatialAwareness.InfluenceMapSourceManagerComponent
/// Size: 0x0130 (304 bytes) (0x0000D8 - 0x000130) align 8 MaxSize: 0x0130
class UInfluenceMapSourceManagerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(OnInfluenceSourceRegistered);                        // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnInfluenceSourceDeregistered);                      // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,379) /* FMulticastInlineDelegate */ __um(OnInfluenceValuesCleared);                           // 0x00F8   (0x0010)  
	bool                                               bPropagatingSourceStampedNodesImmuneToClears;               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	TArray<FInfluenceMapLayer>                         InfluenceSourceLayers;                                      // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0120   (0x0010)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceMapSourceManagerComponent.IsValidBlockID
	// bool IsValidBlockID(FInfluenceLayerBlockID& BlockID);                                                                    // [0x56acaf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceMapSourceManagerComponent.IsInfluenceSourceRegistered
	// bool IsInfluenceSourceRegistered(class UInfluenceSourceComponentBase* SourceComp);                                       // [0x56acbf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.InfluenceNodeVisibilityCheckerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInfluenceNodeVisibilityCheckerInterface : public UInterface
{ 
public:
};

/// Class /Script/AISpatialAwareness.InfluenceNodeVisibilityCheckerLineTrace
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInfluenceNodeVisibilityCheckerLineTrace : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/AISpatialAwareness.PropagationParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPropagationParameters
{ 
	float                                              MovementSpeed;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UCurveFloat*                                 ValueModulationCurve;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/AISpatialAwareness.InfluenceIdentifiers
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FInfluenceIdentifiers
{ 
	TArray<EInfluenceSourceTag>                        SourceTags;                                                 // 0x0000   (0x0010)  
	class AActor*                                      SourceActor;                                                // 0x0010   (0x0008)  
	EInfluenceLayerTag                                 LayerTag;                                                   // 0x0018   (0x0001)  
	ELayerBlockBehavior                                LayerBlockBehavior;                                         // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x001A   (0x000E)  MISSED
};

/// Struct /Script/AISpatialAwareness.StampedValue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FStampedValue
{ 
	TArray<int32_t>                                    StampedLayers;                                              // 0x0000   (0x0010)  
	float                                              StampedValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AISpatialAwareness.InfluenceSourceRegistrationData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FInfluenceSourceRegistrationData
{ 
	FPropagationParameters                             PropagationParameters;                                      // 0x0000   (0x0010)  
	EPropagationModifierTag                            PropagationTag;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FInfluenceIdentifiers                              InfluenceIdentifiers;                                       // 0x0018   (0x0028)  
	TMap<int32_t, FStampedValue>                       StampedNodes;                                               // 0x0040   (0x0050)  
	TMap<int32_t, float>                               InitialStampedNodeValues;                                   // 0x0090   (0x0050)  
};

/// Class /Script/AISpatialAwareness.InfluenceSourceComponentBase
/// Size: 0x01E8 (488 bytes) (0x0000D8 - 0x0001E8) align 8 MaxSize: 0x01E8
class UInfluenceSourceComponentBase : public UActorComponent
{ 
public:
	FInfluenceSourceRegistrationData                   RegistrationData;                                           // 0x00D8   (0x00E0)  
	float                                              ReseedTickRate;                                             // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	TArray<FInfluenceLayerBlockID>                     ReseedBlockIDs;                                             // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x01D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.IsReseedingOnBlock
	// bool IsReseedingOnBlock(FInfluenceLayerBlockID& InBlock);                                                                // [0x56aeb50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.GetSourceIdentifiers
	// FInfluenceIdentifiers GetSourceIdentifiers();                                                                            // [0x56aec80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.GetRegistrationData
	// FInfluenceSourceRegistrationData GetRegistrationData();                                                                  // [0x56aedc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthUpdateReseedBlockIDs
	// void AuthUpdateReseedBlockIDs(TArray<FInfluenceLayerBlockID>& InNewReseed);                                              // [0x4aa5d10] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthStopPropagationReseedTimer
	// void AuthStopPropagationReseedTimer();                                                                                   // [0x39273b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthStartPropagationReseedTimer
	// void AuthStartPropagationReseedTimer();                                                                                  // [0x39273b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthSetInfluencePropagationPaused
	// void AuthSetInfluencePropagationPaused(bool bPaused);                                                                    // [0x3449ba0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthResetReseedBlockIDs
	// void AuthResetReseedBlockIDs(bool bAllBlocksReseed);                                                                     // [0x3449ba0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterSource
	// bool AuthRegisterSource(FName Reason);                                                                                   // [0x56aedf0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterOnPropagatingBlocks
	// void AuthRegisterOnPropagatingBlocks(TArray<FInfluenceLayerBlockID>& InRegisterBlockIDs, FName Reason);                  // [0x56ae990] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthModifyPropagationParameters
	// void AuthModifyPropagationParameters(FPropagationParameters& NewPropagationParameters);                                  // [0x56aecf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceSourceComponentBase.AuthDeregisterSource
	// bool AuthDeregisterSource(FName Reason);                                                                                 // [0x56aedf0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.InfluencePointSourceComponent
/// Size: 0x01F8 (504 bytes) (0x0001E8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UInfluencePointSourceComponent : public UInfluenceSourceComponentBase
{ 
public:
	float                                              InfluenceValue;                                             // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x01EC   (0x000C)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluencePointSourceComponent.GetInfluenceValue
	// float GetInfluenceValue();                                                                                               // [0x56ad390] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AISpatialAwareness.InfluencePropagationComponent
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UInfluencePropagationComponent : public UActorComponent
{ 
public:
	class UInfluencePropagatorMovement*                InfluencePropagatorMovement;                                // 0x00D8   (0x0008)  
	bool                                               bAllPropagationPaused;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              PropagationTimeOffset;                                      // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/AISpatialAwareness.InfluencePropagationComponent.OnInfluenceValuesCleared
	// void OnInfluenceValuesCleared(TArray<int32_t>& LayerIndices, TArray<int32_t>& ClearedNodes);                             // [0x56ad580] Final|Native|Public|HasOutParms 
	// Function /Script/AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceRegistered
	// void OnInfluenceSourceRegistered(TArray<int32_t>& LayerIndices, FInfluenceSourceRegistrationData& RegistrationData);     // [0x56adbe0] Final|Native|Public|HasOutParms 
	// Function /Script/AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceDeregistered
	// void OnInfluenceSourceDeregistered(TArray<int32_t>& LayerIndices, FInfluenceSourceRegistrationData& RegistrationData);   // [0x56ad770] Final|Native|Public|HasOutParms 
};

/// Class /Script/AISpatialAwareness.InfluencePropagatorBase
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UInfluencePropagatorBase : public UObject
{ 
public:
	class UInfluenceMapSourceManagerComponent*         CachedInfluenceMapSourceManagerComponent;                   // 0x0030   (0x0008)  
	class UInfluenceMapNodeGraphComponent*             CachedInfluenceMapNodeGraphComponent;                       // 0x0038   (0x0008)  
	class UInfluencePropagationComponent*              CachedPropagationComponent;                                 // 0x0040   (0x0008)  
};

/// Struct /Script/AISpatialAwareness.FrontierNodePropagationInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFrontierNodePropagationInfo
{ 
	int32_t                                            NodeIndex;                                                  // 0x0000   (0x0004)  
	float                                              PropagatedToTimestamp;                                      // 0x0004   (0x0004)  
};

/// Struct /Script/AISpatialAwareness.MovementLayerPropagationInfo
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FMovementLayerPropagationInfo
{ 
	int32_t                                            SeedNumber;                                                 // 0x0000   (0x0004)  
	bool                                               bPaused;                                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FPropagationParameters                             PropagationParameters;                                      // 0x0008   (0x0010)  
	TArray<FFrontierNodePropagationInfo>               FrontierNodePropagationInfo;                                // 0x0018   (0x0010)  
	TMap<int32_t, float>                               ClearedNodeTimestamps;                                      // 0x0028   (0x0050)  
};

/// Class /Script/AISpatialAwareness.InfluencePropagatorMovement
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInfluencePropagatorMovement : public UInfluencePropagatorBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0048   (0x0008)  MISSED
	TMap<int32_t, FMovementLayerPropagationInfo>       PropagatingLayerInfo;                                       // 0x0050   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/AISpatialAwareness.InfluenceSphereClearerComponent
/// Size: 0x0118 (280 bytes) (0x000100 - 0x000118) align 8 MaxSize: 0x0118
class UInfluenceSphereClearerComponent : public UInfluenceClearerComponentBase
{ 
public:
	float                                              SphereRadius;                                               // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x0104   (0x0014)  MISSED
};

/// Class /Script/AISpatialAwareness.InfluenceStaticMeshClearerComponent
/// Size: 0x0128 (296 bytes) (0x000100 - 0x000128) align 8 MaxSize: 0x0128
class UInfluenceStaticMeshClearerComponent : public UInfluenceClearerComponentBase
{ 
public:
	bool                                               bCacheInitialNodeLocations;                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0x27];                                      // 0x0101   (0x0027)  MISSED
};

/// Class /Script/AISpatialAwareness.InfluenceVisionConeClearerComponent
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align 8 MaxSize: 0x0108
class UInfluenceVisionConeClearerComponent : public UInfluenceClearerComponentBase
{ 
public:
	class UInfluenceMapSourceManagerComponent*         CachedSourceManagerComp;                                    // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceVisionConeClearerComponent.OnNodesInConeUpdated
	// void OnNodesInConeUpdated(TArray<int32_t>& NodesInCone, TArray<int32_t>& VisibleNodes);                                  // [0x56b1160] Final|Native|Private|HasOutParms 
};

/// Class /Script/AISpatialAwareness.InfluenceVisionConeSourceComponent
/// Size: 0x01F8 (504 bytes) (0x0001E8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UInfluenceVisionConeSourceComponent : public UInfluenceSourceComponentBase
{ 
public:
	float                                              InfluenceValue;                                             // 0x01E8   (0x0004)  
	bool                                               bEnabled;                                                   // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x01ED   (0x000B)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.InfluenceVisionConeSourceComponent.OnNodesInConeUpdated
	// void OnNodesInConeUpdated(TArray<int32_t>& NodesInCone, TArray<int32_t>& VisibleNodes);                                  // [0x56b1160] Final|Native|Private|HasOutParms 
	// Function /Script/AISpatialAwareness.InfluenceVisionConeSourceComponent.GetInfluenceValue
	// float GetInfluenceValue();                                                                                               // [0x56ad390] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AISpatialAwareness.InfluenceVisionConeSourceComponent.Enable
	// void Enable();                                                                                                           // [0x56b1580] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.InfluenceVisionConeSourceComponent.Disable
	// void Disable();                                                                                                          // [0x56b14c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.LayerBlockAssignerComponentBase
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class ULayerBlockAssignerComponentBase : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.GetStringIdentifierForBlockID
	// FString GetStringIdentifierForBlockID(FInfluenceLayerBlockID BlockID);                                                   // [0x1a821d0] Event|Public|BlueprintEvent|Const 
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.GetNumLayerBlocks
	// int32_t GetNumLayerBlocks();                                                                                             // [0x56b17a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.GetNextLayerBlockID
	// FInfluenceLayerBlockID GetNextLayerBlockID();                                                                            // [0x56b1770] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.GetLayerBlockIDForActor
	// FInfluenceLayerBlockID GetLayerBlockIDForActor(class AActor* InActor);                                                   // [0x56b17e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.AuthGetLayerBlockAssigner
	// class ULayerBlockAssignerComponentBase* AuthGetLayerBlockAssigner(class UObject* WorldContextObject);                    // [0x56b18f0] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AISpatialAwareness.LayerBlockAssignerComponentBase.AssignLayerBlockIDs
	// void AssignLayerBlockIDs();                                                                                              // [0x1a821d0] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/AISpatialAwareness.MapMarkupRoom
/// Size: 0x04F8 (1272 bytes) (0x000460 - 0x0004F8) align 8 MaxSize: 0x04F8
class AMapMarkupRoom : public AActor
{ 
public:
	FGameplayTagContainer                              RoomTags;                                                   // 0x0460   (0x0020)  
	TArray<class AMapMarkupRoom*>                      NavConnectedRooms;                                          // 0x0480   (0x0010)  
	TArray<class AMapMarkupWaypoint*>                  RoomWaypoints;                                              // 0x0490   (0x0010)  
	SDK_UNDEFINED(80,380) /* TSet<AActor*> */          __um(OccupyingActors);                                      // 0x04A0   (0x0050)  
	class UInfluenceMapRoomManagerComponent*           CachedRoomManagerComponent;                                 // 0x04F0   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.MapMarkupRoom.IsActorInRoom
	// bool IsActorInRoom(class AActor* InActor);                                                                               // [0x56b1de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupRoom.GetWaypointsOfType
	// TArray<AMapMarkupWaypoint*> GetWaypointsOfType(char TypeFlags);                                                          // [0x56b1f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupRoom.GetWaypointsOfClass
	// TArray<AMapMarkupWaypoint*> GetWaypointsOfClass(class UClass* WaypointType);                                             // [0x56b2170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupRoom.GetWaypoints
	// TArray<AMapMarkupWaypoint*> GetWaypoints();                                                                              // [0x56b2400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupRoom.GetNavConnectedRooms
	// TArray<AMapMarkupRoom*> GetNavConnectedRooms();                                                                          // [0x56b23d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupRoom.GetActorsInRoom
	// TArray<AActor*> GetActorsInRoom();                                                                                       // [0x56b1d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AISpatialAwareness.MapMarkupWaypoint
/// Size: 0x04F0 (1264 bytes) (0x000460 - 0x0004F0) align 8 MaxSize: 0x04F0
class AMapMarkupWaypoint : public AActor
{ 
public:
	TMap<FName, FEnvNamedValue>                        WaypointQueryNamedParams;                                   // 0x0460   (0x0050)  
	float                                              MinValueAfterDecay;                                         // 0x04B0   (0x0004)  
	float                                              MaxValueAfterGrowth;                                        // 0x04B4   (0x0004)  
	TArray<class AMapMarkupWaypoint*>                  ConnectedWaypoints;                                         // 0x04B8   (0x0010)  
	TArray<class AMapMarkupRoom*>                      OwningRooms;                                                // 0x04C8   (0x0010)  
	int32_t                                            CachedNodeIndex;                                            // 0x04D8   (0x0004)  
	char                                               WaypointTypeFlags;                                          // 0x04DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x04DD   (0x0003)  MISSED
	class UInfluenceMapNodeGraphComponent*             CachedNodeGraphComponent;                                   // 0x04E0   (0x0008)  
	class UInfluenceMapSourceManagerComponent*         CachedSourceManagerComponent;                               // 0x04E8   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.WaypointIsType
	// bool WaypointIsType(char TypeFlags);                                                                                     // [0x56b29f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.QueryInfluence
	// float QueryInfluence(class AActor* Querent, FInfluenceLayerBlockID& BlockID, EInfluenceLayerTag InfluenceType, EWaypointInfluenceQueryReturnType ReturnType, bool bIgnoreQuerent); // [0x56b2ca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.IsInRoom
	// bool IsInRoom(class AMapMarkupRoom* InRoom);                                                                             // [0x56b28a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.HasInfluenceOfType
	// bool HasInfluenceOfType(FInfluenceLayerBlockID& BlockID, EInfluenceLayerTag LayerTag);                                   // [0x56b2af0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.GetOwningRooms
	// TArray<AMapMarkupRoom*> GetOwningRooms();                                                                                // [0x56b29c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.GetInfluenceValue
	// float GetInfluenceValue(FInfluenceLayerBlockID& BlockID, FInfluenceLayerID& LayerID);                                    // [0x56b3340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.MapMarkupWaypoint.GetDebugString
	// FString GetDebugString();                                                                                                // [0x56b2800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AISpatialAwareness.MapMarkupWaypointDebugData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMapMarkupWaypointDebugData
{ 
	TArray<class AMapMarkupWaypoint*>                  FocusedWaypoints;                                           // 0x0000   (0x0010)  
	TArray<class AMapMarkupRoom*>                      FocusedRooms;                                               // 0x0010   (0x0010)  
	TArray<class AMapMarkupWaypoint*>                  WaypointsToDebugDraw;                                       // 0x0020   (0x0010)  
};

/// Struct /Script/AISpatialAwareness.ClientRequestedWaypointDebugData
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FClientRequestedWaypointDebugData
{ 
	bool                                               bWaypointDebuggingEnabled;                                  // 0x0000   (0x0001)  
	bool                                               bDrawVisibilityConnectionsEnabled;                          // 0x0001   (0x0001)  
	bool                                               bRelevantWaypointsByRoom;                                   // 0x0002   (0x0001)  
	bool                                               bLockOriginWaypoint;                                        // 0x0003   (0x0001)  
	bool                                               bLockOriginRoom;                                            // 0x0004   (0x0001)  
};

/// Class /Script/AISpatialAwareness.MapMarkupWaypointDebuggerComponent
/// Size: 0x01C0 (448 bytes) (0x0000D8 - 0x0001C0) align 8 MaxSize: 0x01C0
class UMapMarkupWaypointDebuggerComponent : public UActorComponent
{ 
public:
	FMapMarkupWaypointDebugData                        WaypointDebugData;                                          // 0x00D8   (0x0030)  
	class AInfluenceMap*                               CachedInfluenceMap;                                         // 0x0108   (0x0008)  
	TArray<class AMapMarkupWaypoint*>                  CachedWaypoints;                                            // 0x0110   (0x0010)  
	TMap<class APlayerController*, class AMapMarkupWaypoint*> FocusedWaypointsMap;                                 // 0x0120   (0x0050)  
	TMap<class APlayerController*, FClientRequestedWaypointDebugData> ClientRequestedDebugDataMap;                 // 0x0170   (0x0050)  
};

/// Struct /Script/AISpatialAwareness.WaypointsForNavMeshPoly
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FWaypointsForNavMeshPoly
{ 
	TArray<class AMapMarkupWaypoint*>                  Waypoints;                                                  // 0x0000   (0x0010)  
};

/// Class /Script/AISpatialAwareness.NodePlacementStrategyBase
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UNodePlacementStrategyBase : public UObject
{ 
public:
	TMap<uint64_t, FWaypointsForNavMeshPoly>           CachedWaypoints;                                            // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0080   (0x0018)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.NodePlacementStrategyBase.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                                // [0x56b4440] Final|Native|Private 
};

/// Class /Script/AISpatialAwareness.NodePlacementStrategyNavMeshPolys
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNodePlacementStrategyNavMeshPolys : public UNodePlacementStrategyBase
{ 
public:
	float                                              UpwardNavLinkConnectionLimit;                               // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/AISpatialAwareness.RoomAssignerComponent
/// Size: 0x0110 (272 bytes) (0x0000D8 - 0x000110) align 8 MaxSize: 0x0110
class URoomAssignerComponent : public UActorComponent
{ 
public:
	float                                              ReadyCheckResponseTimerDuration;                            // 0x00D8   (0x0004)  
	float                                              ImmediatePassAfterReadyTimerDuration;                       // 0x00DC   (0x0004)  
	TArray<class APlayerState*>                        PendingRoomReadyChecks;                                     // 0x00E0   (0x0010)  
	TArray<class APlayerState*>                        PassedRoomReadyChecks;                                      // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0100   (0x0010)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.ServerUpdateReadyCheck
	// void ServerUpdateReadyCheck(class APlayerState* InPlayerState, bool bIsReady);                                           // [0x56b4aa0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.ReceiveReadyCheckUpdate
	// void ReceiveReadyCheckUpdate(class APlayerState* InPlayerState, bool bIsReady);                                          // [0x56b4d40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.HasPendingReadyChecks
	// bool HasPendingReadyChecks();                                                                                            // [0x56b52e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.HasPassedReadyChecks
	// bool HasPassedReadyChecks();                                                                                             // [0x56b52b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.GetPendingReadyChecks
	// TArray<APlayerState*> GetPendingReadyChecks();                                                                           // [0x56b51c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.GetPassedReadyChecks
	// TArray<APlayerState*> GetPassedReadyChecks();                                                                            // [0x56b50d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthRemoveFromReadyCheck
	// void AuthRemoveFromReadyCheck(class APlayerState* InPlayerState);                                                        // [0x34773d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthOnReadyCheckPassedResponse
	// void AuthOnReadyCheckPassedResponse(class APlayerState* InPlayerState);                                                  // [0x56b4c40] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthOnAllReadyChecksPassedResponse
	// void AuthOnAllReadyChecksPassedResponse();                                                                               // [0x46a08e0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthInitPendingReadyChecks
	// void AuthInitPendingReadyChecks(TArray<APlayerState*> InNewPendingReadyChecks);                                          // [0x56b4f30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthImmediatePassAllPendingReadyChecks
	// void AuthImmediatePassAllPendingReadyChecks();                                                                           // [0x39273b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomAssignerComponent.AuthCleanReadyCheckData
	// void AuthCleanReadyCheckData();                                                                                          // [0x39273b0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.RoomPathFinderComponent
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class URoomPathFinderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.RoomPathFinderComponent.GetCostBetweenRooms
	// float GetCostBetweenRooms(class AMapMarkupRoom* FromRoom, class AMapMarkupRoom* ToRoom);                                 // [0x56b58b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AISpatialAwareness.RoomPathFinderComponent.FindRoomPath
	// bool FindRoomPath(class AMapMarkupRoom* Start, class AMapMarkupRoom* Dest, TArray<AMapMarkupRoom*>& OutPath, float& OutDistance); // [0x56b5a50] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AISpatialAwareness.RoomPathfinderData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRoomPathfinderData
{ 
	class AMapMarkupRoom*                              DestinationRoom;                                            // 0x0000   (0x0008)  
	TArray<class AMapMarkupRoom*>                      PreferredPathRooms;                                         // 0x0008   (0x0010)  
	TArray<class AMapMarkupRoom*>                      AvoidPathRooms;                                             // 0x0018   (0x0010)  
};

/// Class /Script/AISpatialAwareness.RoomPathfinderDataComponent
/// Size: 0x0130 (304 bytes) (0x0000D8 - 0x000130) align 8 MaxSize: 0x0130
class URoomPathfinderDataComponent : public UActorComponent
{ 
public:
	TMap<class APlayerState*, FRoomPathfinderData>     AssignedRoomPathfindingData;                                // 0x00D8   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.RoomPathfinderDataComponent.MulticastSetRoomData
	// void MulticastSetRoomData(TArray<APlayerState*> InPlayerStates, TArray<FRoomPathfinderData> InData);                     // [0x56b60e0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/AISpatialAwareness.RoomPathfinderDataComponent.GetRoomData
	// FRoomPathfinderData GetRoomData(class APlayerState* InPlayerState);                                                      // [0x56b6380] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomPathfinderDataComponent.ClearRoomData
	// void ClearRoomData(class APlayerState* InPlayerState);                                                                   // [0x56b6660] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.RoomPathfinderDataComponent.AssignRoomData
	// void AssignRoomData(class APlayerState* InPlayerState, FRoomPathfinderData& InData);                                     // [0x56b6770] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.VisionConeNodeDetectorComponent
/// Size: 0x0150 (336 bytes) (0x0000D8 - 0x000150) align 8 MaxSize: 0x0150
class UVisionConeNodeDetectorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00D8   (0x0008)  MISSED
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnInfluenceNodesInConeUpdated);                      // 0x00E0   (0x0010)  
	class UClass*                                      VisibilityCheckerClass;                                     // 0x00F0   (0x0008)  
	float                                              RefreshTickRate;                                            // 0x00F8   (0x0004)  
	float                                              SightRadius;                                                // 0x00FC   (0x0004)  
	float                                              PeripheralVisionHalfAngleDegrees;                           // 0x0100   (0x0004)  
	float                                              PointOfViewBackwardOffset;                                  // 0x0104   (0x0004)  
	float                                              NearClippingRadius;                                         // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UObject*                                     VisibilityCheckerObject;                                    // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	TArray<int32_t>                                    CachedNodesInCone;                                          // 0x0120   (0x0010)  
	TArray<int32_t>                                    CachedVisibleNodes;                                         // 0x0130   (0x0010)  
	class UInfluenceMapNodeGraphComponent*             CachedNodeGraphComp;                                        // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickRate
	// void AuthSetRefreshTickRate(float NewRefreshTickRate);                                                                   // [0x3df0ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickActive
	// void AuthSetRefreshTickActive(bool bActivate);                                                                           // [0x3449ba0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AISpatialAwareness.WaypointQueryEventsHelperBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UWaypointQueryEventsHelperBase : public UObject
{ 
public:
	class UBTService_RunWaypointQuery*                 OwnerService;                                               // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/AISpatialAwareness.WaypointQueryEventsHelperBase.UnbindGameplayEvents
	// void UnbindGameplayEvents();                                                                                             // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/AISpatialAwareness.WaypointQueryEventsHelperBase.BindGameplayEvents
	// void BindGameplayEvents();                                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Struct /Script/AISpatialAwareness.InfluenceLayerID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FInfluenceLayerID
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/AISpatialAwareness.InfluenceMapQuery
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInfluenceMapQuery
{ 
	FVector                                            SourcePosition;                                             // 0x0000   (0x0018)  
};

/// Struct /Script/AISpatialAwareness.NeighboringNodeInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNeighboringNodeInfo
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Distance;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AISpatialAwareness.NodeInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNodeInfo
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	class AMapMarkupWaypoint*                          Waypoint;                                                   // 0x0018   (0x0008)  
	TArray<FNeighboringNodeInfo>                       NeighboringNodesInfo;                                       // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UAISpatialAwarenessAmortizationInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAISpatialAwarenessAmortizationQueue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAISpatialAwarenessAmortizationManagerComponent) == 0x0130); // 304 bytes (0x0000D8 - 0x000130)
static_assert(sizeof(UAISpatialAwarenessBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAISpatialAwarenessDebugControllerComponent) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(FWaypointQueryInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBTService_RunWaypointQuery) == 0x01D8); // 472 bytes (0x000078 - 0x0001D8)
static_assert(sizeof(UEnvQueryContext_QuerierOccupiedRooms) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryContext_SecondaryWaypointQueryPawn) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryContext_SecondaryWaypointQueryWaypoint) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator_ConnectedWaypoints) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UEnvQueryGenerator_WaypointsInRoom) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UEnvQueryTest_WaypointInfluenceValue) == 0x0240); // 576 bytes (0x000238 - 0x000240)
static_assert(sizeof(UEnvQueryTest_WaypointType) == 0x0248); // 584 bytes (0x000238 - 0x000248)
static_assert(sizeof(UEnvQueryTest_WaypointVisibility) == 0x0240); // 576 bytes (0x000238 - 0x000240)
static_assert(sizeof(FInfluenceLayerBlockID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UInfluenceClearerComponentBase) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(AInfluenceMap) == 0x04A0); // 1184 bytes (0x000460 - 0x0004A0)
static_assert(sizeof(FInfluenceLayerDebugInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FInfluenceNodeSimpleDebugInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPropagationProgressDebugInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInfluenceNodeComplexDebugInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInfluenceNodeNeighborDebugInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInfluenceMapDebugData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FPropagationSavedInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSavedInfoMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FClientRequestedInfluenceMapDebugData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UInfluenceMapDebuggerComponent) == 0x02D8); // 728 bytes (0x0000D8 - 0x0002D8)
static_assert(sizeof(FLayerValue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNodeConnectionInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInfluenceMapNode) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNodeOperation) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNodeOperationsList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UInfluenceMapNodeGraphComponent) == 0x01A0); // 416 bytes (0x0000D8 - 0x0001A0)
static_assert(sizeof(UInfluenceMapRoomManagerComponent) == 0x0140); // 320 bytes (0x0000D8 - 0x000140)
static_assert(sizeof(FInfluenceMapLayer) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UInfluenceMapSourceManagerComponent) == 0x0130); // 304 bytes (0x0000D8 - 0x000130)
static_assert(sizeof(UInfluenceNodeVisibilityCheckerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInfluenceNodeVisibilityCheckerLineTrace) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FPropagationParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInfluenceIdentifiers) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FStampedValue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInfluenceSourceRegistrationData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(UInfluenceSourceComponentBase) == 0x01E8); // 488 bytes (0x0000D8 - 0x0001E8)
static_assert(sizeof(UInfluencePointSourceComponent) == 0x01F8); // 504 bytes (0x0001E8 - 0x0001F8)
static_assert(sizeof(UInfluencePropagationComponent) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UInfluencePropagatorBase) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FFrontierNodePropagationInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovementLayerPropagationInfo) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UInfluencePropagatorMovement) == 0x00B0); // 176 bytes (0x000048 - 0x0000B0)
static_assert(sizeof(UInfluenceSphereClearerComponent) == 0x0118); // 280 bytes (0x000100 - 0x000118)
static_assert(sizeof(UInfluenceStaticMeshClearerComponent) == 0x0128); // 296 bytes (0x000100 - 0x000128)
static_assert(sizeof(UInfluenceVisionConeClearerComponent) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UInfluenceVisionConeSourceComponent) == 0x01F8); // 504 bytes (0x0001E8 - 0x0001F8)
static_assert(sizeof(ULayerBlockAssignerComponentBase) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(AMapMarkupRoom) == 0x04F8); // 1272 bytes (0x000460 - 0x0004F8)
static_assert(sizeof(AMapMarkupWaypoint) == 0x04F0); // 1264 bytes (0x000460 - 0x0004F0)
static_assert(sizeof(FMapMarkupWaypointDebugData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FClientRequestedWaypointDebugData) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(UMapMarkupWaypointDebuggerComponent) == 0x01C0); // 448 bytes (0x0000D8 - 0x0001C0)
static_assert(sizeof(FWaypointsForNavMeshPoly) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNodePlacementStrategyBase) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UNodePlacementStrategyNavMeshPolys) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(URoomAssignerComponent) == 0x0110); // 272 bytes (0x0000D8 - 0x000110)
static_assert(sizeof(URoomPathFinderComponent) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(FRoomPathfinderData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(URoomPathfinderDataComponent) == 0x0130); // 304 bytes (0x0000D8 - 0x000130)
static_assert(sizeof(UVisionConeNodeDetectorComponent) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UWaypointQueryEventsHelperBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FInfluenceLayerID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FInfluenceMapQuery) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNeighboringNodeInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNodeInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FAISpatialAwarenessAmortizationQueue, AmortizationQueue) == 0x0000);
static_assert(offsetof(UAISpatialAwarenessAmortizationManagerComponent, AmortizationQueues) == 0x00E0);
static_assert(offsetof(UAISpatialAwarenessDebugControllerComponent, CachedPlayerController) == 0x00D8);
static_assert(offsetof(UAISpatialAwarenessDebugControllerComponent, CachedInfluenceMapDebuggerComponent) == 0x00E0);
static_assert(offsetof(UAISpatialAwarenessDebugControllerComponent, CachedMapMarkupWaypointDebuggerComponent) == 0x00E8);
static_assert(offsetof(UBTService_RunWaypointQuery, PrimaryQueryTemplate) == 0x0078);
static_assert(offsetof(UBTService_RunWaypointQuery, PrimaryQueryBlackboardKey) == 0x0080);
static_assert(offsetof(UBTService_RunWaypointQuery, SecondaryQueryTemplate) == 0x00B0);
static_assert(offsetof(UBTService_RunWaypointQuery, SecondaryQueryBlackboardKey) == 0x00B8);
static_assert(offsetof(UBTService_RunWaypointQuery, InfluenceTypeCheckTag) == 0x00FA);
static_assert(offsetof(UBTService_RunWaypointQuery, GameplayEventsHelperType) == 0x0100);
static_assert(offsetof(UBTService_RunWaypointQuery, GameplayEventsHelper) == 0x0128);
static_assert(offsetof(UBTService_RunWaypointQuery, CachedWaypointQueryInfo) == 0x0130);
static_assert(offsetof(UBTService_RunWaypointQuery, CachedPreviousWaypointInfo) == 0x0180);
static_assert(offsetof(UBTService_RunWaypointQuery, CachedOwnerPawn) == 0x01B0);
static_assert(offsetof(UBTService_RunWaypointQuery, CachedOwnerController) == 0x01B8);
static_assert(offsetof(UEnvQueryGenerator_ConnectedWaypoints, Context) == 0x0058);
static_assert(offsetof(UEnvQueryGenerator_WaypointsInRoom, MarkupRoomContext) == 0x0058);
static_assert(offsetof(UEnvQueryTest_WaypointInfluenceValue, LayerTag) == 0x0238);
static_assert(offsetof(UEnvQueryTest_WaypointInfluenceValue, QueryReturnType) == 0x0239);
static_assert(offsetof(UEnvQueryTest_WaypointType, WaypointClass) == 0x0240);
static_assert(offsetof(UEnvQueryTest_WaypointVisibility, CheckMode) == 0x0238);
static_assert(offsetof(UInfluenceClearerComponentBase, ClearLayerTag) == 0x00DC);
static_assert(offsetof(UInfluenceClearerComponentBase, ClearSourceTags) == 0x00E0);
static_assert(offsetof(UInfluenceClearerComponentBase, OwnerLayerBlockID) == 0x00F0);
static_assert(offsetof(UInfluenceClearerComponentBase, LayerBlockBehavior) == 0x00F4);
static_assert(offsetof(AInfluenceMap, InfluenceMapNodeGraphComponent) == 0x0460);
static_assert(offsetof(AInfluenceMap, InfluenceMapSourceManagerComponent) == 0x0468);
static_assert(offsetof(AInfluenceMap, InfluencePropagationComponent) == 0x0470);
static_assert(offsetof(AInfluenceMap, InfluenceMapRoomManagerComponent) == 0x0478);
static_assert(offsetof(AInfluenceMap, InfluenceMapDebuggerComponent) == 0x0480);
static_assert(offsetof(AInfluenceMap, MapMarkupWaypointDebuggerComponent) == 0x0488);
static_assert(offsetof(AInfluenceMap, AmortizationManagerComponent) == 0x0490);
static_assert(offsetof(FInfluenceLayerDebugInfo, BlockIDDebugString) == 0x0008);
static_assert(offsetof(FInfluenceLayerDebugInfo, LayerIDDebugString) == 0x0020);
static_assert(offsetof(FInfluenceLayerDebugInfo, ActiveSourcesDebugString) == 0x0030);
static_assert(offsetof(FInfluenceNodeComplexDebugInfo, WaypointName) == 0x0018);
static_assert(offsetof(FInfluenceNodeComplexDebugInfo, PropagationProgress) == 0x0030);
static_assert(offsetof(FInfluenceNodeNeighborDebugInfo, NodeNeighborIndices) == 0x0008);
static_assert(offsetof(FInfluenceMapDebugData, FocusedNodeIndices) == 0x0000);
static_assert(offsetof(FInfluenceMapDebugData, LayerDebugInfo) == 0x0010);
static_assert(offsetof(FInfluenceMapDebugData, NodeIndicesToDebugDraw) == 0x0058);
static_assert(offsetof(FInfluenceMapDebugData, InfluenceNodeSimpleDebugInfo) == 0x0068);
static_assert(offsetof(FInfluenceMapDebugData, InfluenceNodeComplexDebugInfo) == 0x0078);
static_assert(offsetof(FInfluenceMapDebugData, InfluenceNodeNeighborDebugInfo) == 0x0088);
static_assert(offsetof(FSavedInfoMap, LayerToPropagationSavedInfo) == 0x0000);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedInfluenceMap) == 0x0110);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedBlockAssignerComponent) == 0x0118);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedNodeGraphComp) == 0x0120);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedSourceManagerComp) == 0x0128);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedPropagationComp) == 0x0130);
static_assert(offsetof(UInfluenceMapDebuggerComponent, CachedNavMesh) == 0x0138);
static_assert(offsetof(UInfluenceMapDebuggerComponent, InfluenceMapDebugData) == 0x0140);
static_assert(offsetof(UInfluenceMapDebuggerComponent, FocusedNodeIndexMap) == 0x01D8);
static_assert(offsetof(UInfluenceMapDebuggerComponent, SavedInfoArray) == 0x0228);
static_assert(offsetof(UInfluenceMapDebuggerComponent, NodeIndexToWaypointMap) == 0x0238);
static_assert(offsetof(UInfluenceMapDebuggerComponent, ClientRequestedDebugDataMap) == 0x0288);
static_assert(offsetof(FLayerValue, ModulationCurve) == 0x0010);
static_assert(offsetof(FInfluenceMapNode, NodeLocation) == 0x0000);
static_assert(offsetof(FInfluenceMapNode, LayerValueMap) == 0x0018);
static_assert(offsetof(FInfluenceMapNode, NodeConnectionInfo) == 0x0028);
static_assert(offsetof(FNodeOperation, Operation) == 0x0000);
static_assert(offsetof(FNodeOperation, ModulationCurve) == 0x0010);
static_assert(offsetof(FNodeOperation, AffectedLayerIndices) == 0x0018);
static_assert(offsetof(FNodeOperationsList, Operations) == 0x0000);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, NodePlacementStrategyClass) == 0x00D8);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, InfluenceMapNodeIndices) == 0x00E0);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, InfluenceMapNodes) == 0x0130);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, PendingNodeOperations) == 0x0140);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, NodePlacementStrategy) == 0x0190);
static_assert(offsetof(UInfluenceMapNodeGraphComponent, CachedPropagationComponent) == 0x0198);
static_assert(offsetof(UInfluenceMapRoomManagerComponent, RoomOccupierClass) == 0x00D8);
static_assert(offsetof(UInfluenceMapRoomManagerComponent, MapMarkupRooms) == 0x0130);
static_assert(offsetof(FInfluenceMapLayer, ActiveSources) == 0x0000);
static_assert(offsetof(FInfluenceMapLayer, SourceTags) == 0x0010);
static_assert(offsetof(FInfluenceMapLayer, Tag) == 0x0020);
static_assert(offsetof(FInfluenceMapLayer, PropagationTag) == 0x002C);
static_assert(offsetof(UInfluenceMapSourceManagerComponent, InfluenceSourceLayers) == 0x0110);
static_assert(offsetof(FPropagationParameters, ValueModulationCurve) == 0x0008);
static_assert(offsetof(FInfluenceIdentifiers, SourceTags) == 0x0000);
static_assert(offsetof(FInfluenceIdentifiers, SourceActor) == 0x0010);
static_assert(offsetof(FInfluenceIdentifiers, LayerTag) == 0x0018);
static_assert(offsetof(FInfluenceIdentifiers, LayerBlockBehavior) == 0x0019);
static_assert(offsetof(FStampedValue, StampedLayers) == 0x0000);
static_assert(offsetof(FInfluenceSourceRegistrationData, PropagationParameters) == 0x0000);
static_assert(offsetof(FInfluenceSourceRegistrationData, PropagationTag) == 0x0010);
static_assert(offsetof(FInfluenceSourceRegistrationData, InfluenceIdentifiers) == 0x0018);
static_assert(offsetof(FInfluenceSourceRegistrationData, StampedNodes) == 0x0040);
static_assert(offsetof(FInfluenceSourceRegistrationData, InitialStampedNodeValues) == 0x0090);
static_assert(offsetof(UInfluenceSourceComponentBase, RegistrationData) == 0x00D8);
static_assert(offsetof(UInfluenceSourceComponentBase, ReseedBlockIDs) == 0x01C0);
static_assert(offsetof(UInfluencePropagationComponent, InfluencePropagatorMovement) == 0x00D8);
static_assert(offsetof(UInfluencePropagatorBase, CachedInfluenceMapSourceManagerComponent) == 0x0030);
static_assert(offsetof(UInfluencePropagatorBase, CachedInfluenceMapNodeGraphComponent) == 0x0038);
static_assert(offsetof(UInfluencePropagatorBase, CachedPropagationComponent) == 0x0040);
static_assert(offsetof(FMovementLayerPropagationInfo, PropagationParameters) == 0x0008);
static_assert(offsetof(FMovementLayerPropagationInfo, FrontierNodePropagationInfo) == 0x0018);
static_assert(offsetof(FMovementLayerPropagationInfo, ClearedNodeTimestamps) == 0x0028);
static_assert(offsetof(UInfluencePropagatorMovement, PropagatingLayerInfo) == 0x0050);
static_assert(offsetof(UInfluenceVisionConeClearerComponent, CachedSourceManagerComp) == 0x0100);
static_assert(offsetof(AMapMarkupRoom, RoomTags) == 0x0460);
static_assert(offsetof(AMapMarkupRoom, NavConnectedRooms) == 0x0480);
static_assert(offsetof(AMapMarkupRoom, RoomWaypoints) == 0x0490);
static_assert(offsetof(AMapMarkupRoom, CachedRoomManagerComponent) == 0x04F0);
static_assert(offsetof(AMapMarkupWaypoint, WaypointQueryNamedParams) == 0x0460);
static_assert(offsetof(AMapMarkupWaypoint, ConnectedWaypoints) == 0x04B8);
static_assert(offsetof(AMapMarkupWaypoint, OwningRooms) == 0x04C8);
static_assert(offsetof(AMapMarkupWaypoint, CachedNodeGraphComponent) == 0x04E0);
static_assert(offsetof(AMapMarkupWaypoint, CachedSourceManagerComponent) == 0x04E8);
static_assert(offsetof(FMapMarkupWaypointDebugData, FocusedWaypoints) == 0x0000);
static_assert(offsetof(FMapMarkupWaypointDebugData, FocusedRooms) == 0x0010);
static_assert(offsetof(FMapMarkupWaypointDebugData, WaypointsToDebugDraw) == 0x0020);
static_assert(offsetof(UMapMarkupWaypointDebuggerComponent, WaypointDebugData) == 0x00D8);
static_assert(offsetof(UMapMarkupWaypointDebuggerComponent, CachedInfluenceMap) == 0x0108);
static_assert(offsetof(UMapMarkupWaypointDebuggerComponent, CachedWaypoints) == 0x0110);
static_assert(offsetof(UMapMarkupWaypointDebuggerComponent, FocusedWaypointsMap) == 0x0120);
static_assert(offsetof(UMapMarkupWaypointDebuggerComponent, ClientRequestedDebugDataMap) == 0x0170);
static_assert(offsetof(FWaypointsForNavMeshPoly, Waypoints) == 0x0000);
static_assert(offsetof(UNodePlacementStrategyBase, CachedWaypoints) == 0x0030);
static_assert(offsetof(URoomAssignerComponent, PendingRoomReadyChecks) == 0x00E0);
static_assert(offsetof(URoomAssignerComponent, PassedRoomReadyChecks) == 0x00F0);
static_assert(offsetof(FRoomPathfinderData, DestinationRoom) == 0x0000);
static_assert(offsetof(FRoomPathfinderData, PreferredPathRooms) == 0x0008);
static_assert(offsetof(FRoomPathfinderData, AvoidPathRooms) == 0x0018);
static_assert(offsetof(URoomPathfinderDataComponent, AssignedRoomPathfindingData) == 0x00D8);
static_assert(offsetof(UVisionConeNodeDetectorComponent, VisibilityCheckerClass) == 0x00F0);
static_assert(offsetof(UVisionConeNodeDetectorComponent, VisibilityCheckerObject) == 0x0110);
static_assert(offsetof(UVisionConeNodeDetectorComponent, CachedNodesInCone) == 0x0120);
static_assert(offsetof(UVisionConeNodeDetectorComponent, CachedVisibleNodes) == 0x0130);
static_assert(offsetof(UVisionConeNodeDetectorComponent, CachedNodeGraphComp) == 0x0140);
static_assert(offsetof(UWaypointQueryEventsHelperBase, OwnerService) == 0x0030);
static_assert(offsetof(FInfluenceMapQuery, SourcePosition) == 0x0000);
static_assert(offsetof(FNeighboringNodeInfo, Location) == 0x0000);
static_assert(offsetof(FNodeInfo, Location) == 0x0000);
static_assert(offsetof(FNodeInfo, Waypoint) == 0x0018);
static_assert(offsetof(FNodeInfo, NeighboringNodesInfo) == 0x0020);
