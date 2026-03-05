
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

/// Enum /Script/VTSPlugin.EVTSSerializeResult
/// Size: 0x01 (1 bytes)
enum class EVTSSerializeResult : uint8_t
{
	EVTSSerializeResult__SuccessWithPayload                                          = 0,
	EVTSSerializeResult__SuccessEmptyPayload                                         = 1,
	EVTSSerializeResult__SerializationError                                          = 2
};

/// Enum /Script/VTSPlugin.EVTSPlayerSynchronizationEventType
/// Size: 0x01 (1 bytes)
enum class EVTSPlayerSynchronizationEventType : uint8_t
{
	EVTSPlayerSynchronizationEventType__AutonomousHeartbeat                          = 0,
	EVTSPlayerSynchronizationEventType__RemoteHeartbeat                              = 1,
	EVTSPlayerSynchronizationEventType__TimeShift                                    = 2,
	EVTSPlayerSynchronizationEventType__FixedTimeStepSizeChange                      = 3,
	EVTSPlayerSynchronizationEventType__Count                                        = 4
};

/// Enum /Script/VTSPlugin.EVTSTInstructionType
/// Size: 0x01 (1 bytes)
enum class EVTSTInstructionType : uint8_t
{
	EVTSTInstructionType__Delivery                                                   = 0,
	EVTSTInstructionType__Tick                                                       = 1
};

/// Enum /Script/VTSPlugin.EVTSTSerializationChannel
/// Size: 0x01 (1 bytes)
enum class EVTSTSerializationChannel : uint8_t
{
	EVTSTSerializationChannel__Reliable                                              = 0,
	EVTSTSerializationChannel__Unreliable                                            = 1
};

/// Enum /Script/VTSPlugin.EVTSVALHeartbeatEnqueueHealth
/// Size: 0x01 (1 bytes)
enum class EVTSVALHeartbeatEnqueueHealth : uint8_t
{
	EVTSVALHeartbeatEnqueueHealth__Perfect                                           = 0,
	EVTSVALHeartbeatEnqueueHealth__Good                                              = 1,
	EVTSVALHeartbeatEnqueueHealth__Outdated                                          = 2,
	EVTSVALHeartbeatEnqueueHealth__Duplicate                                         = 3,
	EVTSVALHeartbeatEnqueueHealth__OverCapacity                                      = 4
};

/// Enum /Script/VTSPlugin.EVTSVALHeartbeatDequeueHealth
/// Size: 0x01 (1 bytes)
enum class EVTSVALHeartbeatDequeueHealth : uint8_t
{
	EVTSVALHeartbeatDequeueHealth__Good                                              = 0,
	EVTSVALHeartbeatDequeueHealth__ForwardPredictedGap                               = 1,
	EVTSVALHeartbeatDequeueHealth__ForwardPredicted                                  = 2,
	EVTSVALHeartbeatDequeueHealth__NoBasis                                           = 3
};

/// Enum /Script/VTSPlugin.EVTSVALTimeShiftMonitorRemoteDelayCondition
/// Size: 0x01 (1 bytes)
enum class EVTSVALTimeShiftMonitorRemoteDelayCondition : uint8_t
{
	EVTSVALTimeShiftMonitorRemoteDelayCondition__Optimal                             = 0,
	EVTSVALTimeShiftMonitorRemoteDelayCondition__Average                             = 1,
	EVTSVALTimeShiftMonitorRemoteDelayCondition__Poor                                = 2
};

/// Class /Script/VTSPlugin.VTSGameTimelineManager
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSGameTimelineManager : public UObject
{ 
public:
	TArray<class UVTSPlayerTimelineSynchronizer*>      PlayerTimelineSynchronizers;                                // 0x0030   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSAuthorityGameTimelineManager
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UVTSAuthorityGameTimelineManager : public UVTSGameTimelineManager
{ 
public:
	class UVTSFixedTimeStepTimeline*                   AuthorityFixedTimeStepTimeline;                             // 0x0040   (0x0008)  
	class UVTSFixedTimeStepTimelineAPI*                AuthorityFixedTimeStepTimelineAPI;                          // 0x0048   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSPlayerTimelineSynchronizer
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 16 MaxSize: 0x00A0
class UVTSPlayerTimelineSynchronizer : public UObject
{ 
public:
	bool                                               bHasBasis;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            Basis;                                                      // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0038   (0x0068)  MISSED
};

/// Class /Script/VTSPlugin.VTSAuthorityPlayerTimelineSynchronizer
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 16 MaxSize: 0x00B0
class UVTSAuthorityPlayerTimelineSynchronizer : public UVTSPlayerTimelineSynchronizer
{ 
public:
	class UVTSFixedTimeStepTimeline*                   AuthorityFixedTimeStepTimeline;                             // 0x00A0   (0x0008)  
	class UVTSTimeShiftMonitor*                        AuthorityTimeShiftMonitor;                                  // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/VTSPlugin.VTSAuthorityPlayerTimelineSynchronizer.Rebase
	// void Rebase();                                                                                                           // [0x5264c80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VTSPlugin.VTSAutonomousGameTimelineManager
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UVTSAutonomousGameTimelineManager : public UVTSGameTimelineManager
{ 
public:
	class UVTSFixedTimeStepTimeline*                   AutonomousFixedTimeStepTimeline;                            // 0x0040   (0x0008)  
	class UVTSFixedTimeStepTimelineAPI*                AutonomousFixedTimeStepTimelineAPI;                         // 0x0048   (0x0008)  
	class UVTSFixedTimeStepTimeline*                   RemoteFixedTimeStepTimeline;                                // 0x0050   (0x0008)  
	class UVTSFixedTimeStepTimelineAPI*                RemoteFixedTimeStepTimelineAPI;                             // 0x0058   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSAutonomousPlayerTimelineSynchronizer
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 16 MaxSize: 0x00C0
class UVTSAutonomousPlayerTimelineSynchronizer : public UVTSPlayerTimelineSynchronizer
{ 
public:
	class UVTSFixedTimeStepTimeline*                   AutonomousFixedTimeStepTimeline;                            // 0x00A0   (0x0008)  
	class UVTSFixedTimeStepTimeline*                   RemoteFixedTimeStepTimeline;                                // 0x00A8   (0x0008)  
	class UVTSTimeShiftMonitee*                        AutonomousTimeShiftMonitee;                                 // 0x00B0   (0x0008)  
	class UVTSRemoteTimeShifter*                       RemoteTimeShifter;                                          // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/VTSPlugin.VTSAutonomousPlayerTimelineSynchronizer.Rebase
	// void Rebase();                                                                                                           // [0x52651f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VTSPlugin.VTSTimeStampDelegate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVTSTimeStampDelegate
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/VTSPlugin.VTSFixedTimeStepTimeline
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UVTSFixedTimeStepTimeline : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	SDK_UNDEFINED(16,567) /* TArray<TScriptInterface<Class>> */ __um(TimeSynchronizedObjects);                     // 0x0048   (0x0010)  
	TMap<class UObject*, class UVTSTimeSynchronizedInterfaceBlueprintAdapter*> ObjectAdapterMap;                   // 0x0058   (0x0050)  
	TArray<FVTSTimeStampDelegate>                      TimeStampDelegates;                                         // 0x00A8   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSFixedTimeStepTimelineAPI : public UObject
{ 
public:
	class UVTSFixedTimeStepTimeline*                   FixedTimeStepTimeline;                                      // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.UnregisterTimeSynchronizedObjectBlueprint
	// void UnregisterTimeSynchronizedObjectBlueprint(class UObject* TimeSynchronizedObjectBlueprint);                          // [0x5265e80] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.SetTimeStampDelegateBlueprint
	// bool SetTimeStampDelegateBlueprint(FVTSTimeStampIndex& TimeStampIndex, FDelegateProperty TimeStampActionDynamicDelegate); // [0x5265ca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.RegisterTimeSynchronizedObjectBlueprint
	// void RegisterTimeSynchronizedObjectBlueprint(class UObject* TimeSynchronizedObjectBlueprint);                            // [0x5266050] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.GetRemainingRequiredSimulationTime
	// float GetRemainingRequiredSimulationTime();                                                                              // [0x5265c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.GetInterpolationValue
	// float GetInterpolationValue();                                                                                           // [0x5265bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.GetFixedTimeStepSize
	// float GetFixedTimeStepSize();                                                                                            // [0x5265c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VTSPlugin.VTSFixedTimeStepTimelineAPI.GetCurrentTimeStampIndex
	// FVTSTimeStampIndex GetCurrentTimeStampIndex();                                                                           // [0x5265c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VTSPlugin.VTSMoniteeTimeShiftCoreInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSMoniteeTimeShiftCoreInterface : public UInterface
{ 
public:
};

/// Class /Script/VTSPlugin.VTSMonitorTimeShiftCoreInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSMonitorTimeShiftCoreInterface : public UInterface
{ 
public:
};

/// Class /Script/VTSPlugin.VTSRemoteTimeShifter
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVTSRemoteTimeShifter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,568) /* TScriptInterface<Class> */ __um(MonitorCoreInterface);                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,569) /* TScriptInterface<Class> */ __um(MoniteeCoreInterface);                                // 0x0048   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTAppEmulationData
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSTAppEmulationData : public UObject
{ 
public:
};

/// Class /Script/VTSPlugin.VTSTBasicTestAppEmulationData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSTBasicTestAppEmulationData : public UVTSTAppEmulationData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSTTest
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSTTest : public UObject
{ 
public:
};

/// Struct /Script/VTSPlugin.VTSTBasicTestTestParticipantTrackingData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVTSTBasicTestTestParticipantTrackingData
{ 
	float                                              LastLoadedValue;                                            // 0x0000   (0x0004)  
	float                                              LastDeltaTime;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/VTSPlugin.VTSTBasicTestEnvironmentEmulatorInstructionTrackingData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData
{ 
	EVTSTInstructionType                               InstructionType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           ModifiedParticipantIndex;                                   // 0x0004   (0x0004)  
	float                                              ExecutionTime;                                              // 0x0008   (0x0004)  
	float                                              DeltaTime;                                                  // 0x000C   (0x0004)  
	FVTSTBasicTestTestParticipantTrackingData          FirstParticipant;                                           // 0x0010   (0x0008)  
	FVTSTBasicTestTestParticipantTrackingData          SecondParticipant;                                          // 0x0018   (0x0008)  
};

/// Struct /Script/VTSPlugin.VTSTBasicTestEnvironmentEmulatorTrackingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVTSTBasicTestEnvironmentEmulatorTrackingData
{ 
	TArray<FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData> PostInstructionStates;                        // 0x0000   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTBasicTestEnvironmentEmulatorTest
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UVTSTBasicTestEnvironmentEmulatorTest : public UVTSTTest
{ 
public:
	FVTSTBasicTestEnvironmentEmulatorTrackingData      TrackingData;                                               // 0x0030   (0x0010)  
	TArray<class UVTSTBasicTestTestParticipant*>       Participants;                                               // 0x0040   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTBasicTestTest
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UVTSTBasicTestTest : public UVTSTTest
{ 
public:
	class UVTSTBasicTestTestParticipant*               Participant;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/VTSPlugin.VTSTTestParticipant
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSTTestParticipant : public UObject
{ 
public:
	class UVTSTAppEmulationData*                       AppData;                                                    // 0x0030   (0x0008)  
	class UVTSTTransportEmulationData*                 TransportData;                                              // 0x0038   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTBasicTestTestParticipant
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTBasicTestTestParticipant : public UVTSTTestParticipant
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSTTransportEmulationData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSTTransportEmulationData : public UObject
{ 
public:
	class UVTSTTestParticipant*                        Destination;                                                // 0x0030   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTBasicTestTransportEmulationData
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTBasicTestTransportEmulationData : public UVTSTTransportEmulationData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSTClientManager
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTClientManager : public UVTSTTestParticipant
{ 
public:
	class UVTSAutonomousGameTimelineManager*           AutonomousTimelineManager;                                  // 0x0040   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTClientPlayerTimelineSynchronizer
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTClientPlayerTimelineSynchronizer : public UVTSTTestParticipant
{ 
public:
	class UVTSAutonomousPlayerTimelineSynchronizer*    AutonomousPlayerTimelineSynchronizer;                       // 0x0040   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTConstantDeltaTimeAppEmulationData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSTConstantDeltaTimeAppEmulationData : public UVTSTAppEmulationData
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSTConstantLatencyTransportEmulationData
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTConstantLatencyTransportEmulationData : public UVTSTTransportEmulationData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSTEnvironmentEmulator
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVTSTEnvironmentEmulator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	TArray<class UVTSTSimulationInstruction*>          SimulationInstructions;                                     // 0x0048   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTimeShiftMonitee
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTimeShiftMonitee : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,570) /* TScriptInterface<Class> */ __um(MoniteeCoreInterface);                                // 0x0038   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTimeShiftMonitor
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSTimeShiftMonitor : public UObject
{ 
public:
	SDK_UNDEFINED(16,571) /* TScriptInterface<Class> */ __um(MonitorCoreInterface);                                // 0x0030   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTimeSynchronizedInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSTimeSynchronizedInterface : public UInterface
{ 
public:
};

/// Class /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSTimeSynchronizedInterfaceBlueprint : public UInterface
{ 
public:


	/// Functions
	// Function /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnRebaseBlueprint
	// void OnRebaseBlueprint();                                                                                                // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnPreFixedTimeStepsBlueprint
	// void OnPreFixedTimeStepsBlueprint(float ResidualTimeSeconds);                                                            // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnPostFixedTimeStepsBlueprint
	// void OnPostFixedTimeStepsBlueprint(float ResidualTimeSeconds);                                                           // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnFixedTimeStepBlueprint
	// void OnFixedTimeStepBlueprint(FVTSTimeStampIndex& TimeStampIndex);                                                       // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.GetFixedTimeStepPriorityBlueprint
	// int32_t GetFixedTimeStepPriorityBlueprint();                                                                             // [0x1a821d0] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/VTSPlugin.VTSTimeSynchronizedInterfaceBlueprintAdapter
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSTimeSynchronizedInterfaceBlueprintAdapter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UObject*                                     TimeSynchronizedBlueprintObject;                            // 0x0038   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTServerManager
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UVTSTServerManager : public UVTSTTestParticipant
{ 
public:
	class UVTSAuthorityGameTimelineManager*            AuthorityTimelineManager;                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSTServerPlayerTimelineSynchronizer
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UVTSTServerPlayerTimelineSynchronizer : public UVTSTTestParticipant
{ 
public:
	class UVTSAuthorityPlayerTimelineSynchronizer*     AuthorityPlayerTimelineSynchronizer;                        // 0x0040   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSTSimulationInstruction
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UVTSTSimulationInstruction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xD8];                                      // 0x0030   (0x00D8)  MISSED
};

/// Class /Script/VTSPlugin.VTSTTestResult
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVTSTTestResult : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Struct /Script/VTSPlugin.VTSTimeStampIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FVTSTimeStampIndex
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Class /Script/VTSPlugin.VTSTVALGameObjectTest
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UVTSTVALGameObjectTest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FString                                            LogPrefix;                                                  // 0x0038   (0x0010)  
	FVTSTimeStampIndex                                 MostRecentTimeStampIndex;                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/VTSPlugin.VTSTVALDataPoint
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVTSTVALDataPoint
{ 
	float                                              XAxisPoint;                                                 // 0x0000   (0x0004)  
	float                                              YAxisPoint;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/VTSPlugin.VTSTValTestTrackingData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FVTSTValTestTrackingData
{ 
	TArray<FVTSTVALDataPoint>                          ServerSimulationTickTimeVsAppTickTimeGraph;                 // 0x0000   (0x0010)  
	TArray<FVTSTVALDataPoint>                          ServerSimulationTickTimeVsTransportDelayGraph;              // 0x0010   (0x0010)  
	TArray<FVTSTVALDataPoint>                          ClientSimulationTickTimeVsAppTickTimeGraph;                 // 0x0020   (0x0010)  
	TArray<FVTSTVALDataPoint>                          ClientSimulationTickTimeVsTransportDelayGraph;              // 0x0030   (0x0010)  
};

/// Class /Script/VTSPlugin.VTSTValTest
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVTSTValTest : public UVTSTTest
{ 
public:
	class UVTSTServerManager*                          ServerManager;                                              // 0x0030   (0x0008)  
	TArray<class UVTSTClientManager*>                  ClientManagers;                                             // 0x0038   (0x0010)  
	TArray<class UVTSTServerPlayerTimelineSynchronizer*> ServerPlayers;                                            // 0x0048   (0x0010)  
	TArray<class UVTSTClientPlayerTimelineSynchronizer*> ClientPlayers;                                            // 0x0058   (0x0010)  
	TArray<class UVTSTVALGameObjectTest*>              ServerPlayerGameObjects;                                    // 0x0068   (0x0010)  
	TArray<class UVTSTVALGameObjectTest*>              ClientPlayerGameObjects;                                    // 0x0078   (0x0010)  
	FVTSTValTestTrackingData                           TrackingData;                                               // 0x0088   (0x0040)  
};

/// Class /Script/VTSPlugin.VTSVALHeartbeatQueue
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UVTSVALHeartbeatQueue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALMaxTimeShiftMagnitudeStrategyConfig
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSVALMaxTimeShiftMagnitudeStrategyConfig : public UObject
{ 
public:
};

/// Class /Script/VTSPlugin.VTSVALMaxTimeShiftMagnitudeStrategy
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSVALMaxTimeShiftMagnitudeStrategy : public UObject
{ 
public:
	class UVTSVALMaxTimeShiftMagnitudeStrategyConfig*  MaxTimeShiftMagnitudeStrategyConfig;                        // 0x0030   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALMoniteeTimeShiftCoreConfig
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSVALMoniteeTimeShiftCoreConfig : public UObject
{ 
public:
};

/// Class /Script/VTSPlugin.VTSVALMoniteeTimeShiftCore
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UVTSVALMoniteeTimeShiftCore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UVTSVALMoniteeTimeShiftCoreConfig*           MoniteeTimeShiftCoreConfig;                                 // 0x0038   (0x0008)  
	class UVTSVALMaxTimeShiftMagnitudeStrategy*        MaxTimeShiftMagnitudeStrategy;                              // 0x0040   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALMonitorTimeShiftCoreConfig
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALMonitorTimeShiftCoreConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALMonitorTimeShiftCore
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UVTSVALMonitorTimeShiftCore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UVTSVALMonitorTimeShiftCoreConfig*           MonitorTimeShiftCoreConfig;                                 // 0x0038   (0x0008)  
	class UVTSVALMaxTimeShiftMagnitudeStrategy*        MaxTimeShiftMagnitudeStrategy;                              // 0x0040   (0x0008)  
	class UVTSVALTimeShiftMonitorQueueEvaluationStrategy* TimeShiftMonitorQueueEvaluationStrategy;                 // 0x0048   (0x0008)  
	class UVTSVALTimeShiftMonitorQueueSizeTargetStrategy* TimeShiftMonitorQueueSizeTargetStrategy;                 // 0x0050   (0x0008)  
	class UVTSVALTimeShiftMonitorRebaseStrategy*       TimeShiftMonitorRebaseStrategy;                             // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALNoOpTimeShiftCore
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALNoOpTimeShiftCore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig : public UVTSVALMaxTimeShiftMagnitudeStrategyConfig
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALRichCurveMaxTimeShiftMagnitudeStrategy
/// Size: 0x00C8 (200 bytes) (0x000038 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy : public UVTSVALMaxTimeShiftMagnitudeStrategy
{ 
public:
	class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig* RichCurveMaxTimeShiftMagnitudeStrategyConfig;       // 0x0038   (0x0008)  
	FRuntimeFloatCurve                                 ShiftApplyRateCurve;                                        // 0x0040   (0x0088)  
};

/// Class /Script/VTSPlugin.VTSVALMonitorTimeShiftCorePreset
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVTSVALMonitorTimeShiftCorePreset : public UObject
{ 
public:
	class UVTSVALMonitorTimeShiftCoreConfig*           MonitorTimeShiftCoreConfig;                                 // 0x0030   (0x0008)  
	class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy;                            // 0x0038   (0x0008)  
	class UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy* QueueSizeTargetStrategy;                            // 0x0040   (0x0008)  
	class UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy* QueueEvaluationStrategy;                   // 0x0048   (0x0008)  
	class UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy* RebaseStrategy;                          // 0x0050   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALMoniteeTimeShiftCorePreset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALMoniteeTimeShiftCorePreset : public UObject
{ 
public:
	class UVTSVALMoniteeTimeShiftCoreConfig*           MoniteeTimeShiftCoreConfig;                                 // 0x0030   (0x0008)  
	class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy;                            // 0x0038   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALRemoteTimeShifterMonitorTimeShiftCorePreset
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset : public UObject
{ 
public:
	class UVTSVALMonitorTimeShiftCoreConfig*           MonitorTimeShiftCoreConfig;                                 // 0x0030   (0x0008)  
	class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy;                            // 0x0038   (0x0008)  
	class UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy* QueueSizeTargetStrategy;                            // 0x0040   (0x0008)  
	class UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy* QueueEvaluationStrategy;                   // 0x0048   (0x0008)  
	class UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy* RebaseStrategy;                          // 0x0050   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset : public UObject
{ 
public:
	class UVTSVALMoniteeTimeShiftCoreConfig*           MoniteeTimeShiftCoreConfig;                                 // 0x0030   (0x0008)  
	class UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy;                            // 0x0038   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig : public UObject
{ 
public:
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig : public UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorQueueSizeTargetStrategy
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSVALTimeShiftMonitorQueueSizeTargetStrategy : public UObject
{ 
public:
	class UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig* TimeShiftMonitorQueueSizeTargetStrategyConfig;     // 0x0030   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy : public UVTSVALTimeShiftMonitorQueueSizeTargetStrategy
{ 
public:
	class UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig* TimeShiftMonitorFixedQueueSizeTargetStrategyConfig; // 0x0038   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorQueueEvaluationStrategyConfig
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig : public UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorQueueEvaluationStrategy
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSVALTimeShiftMonitorQueueEvaluationStrategy : public UObject
{ 
public:
	class UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig* TimeShiftMonitorQueueEvaluationStrategyConfig;     // 0x0030   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy : public UVTSVALTimeShiftMonitorQueueEvaluationStrategy
{ 
public:
	class UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig* TimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig; // 0x0038   (0x0008)  
	class UVTSVALHeartbeatQueue*                       HeartbeatQueue;                                             // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0048   (0x0028)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorRebaseStrategyConfig
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVTSVALTimeShiftMonitorRebaseStrategyConfig : public UObject
{ 
public:
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig : public UVTSVALTimeShiftMonitorRebaseStrategyConfig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorRebaseStrategy
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UVTSVALTimeShiftMonitorRebaseStrategy : public UObject
{ 
public:
	class UVTSVALTimeShiftMonitorRebaseStrategyConfig* TimeShiftMonitorRebaseStrategyConfig;                       // 0x0030   (0x0008)  
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy : public UVTSVALTimeShiftMonitorRebaseStrategy
{ 
public:
	class UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig* TimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig; // 0x0038   (0x0008)  
	class UVTSVALHeartbeatQueue*                       HeartbeatQueue;                                             // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig : public UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/VTSPlugin.VTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy : public UVTSVALTimeShiftMonitorQueueSizeTargetStrategy
{ 
public:
	class UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig* TimeShiftMonitorFixedQueueSizeTargetStrategyConfig; // 0x0038   (0x0008)  
};

/// Struct /Script/VTSPlugin.VTSPlayerSynchronizationEvent
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FVTSPlayerSynchronizationEvent
{ 
	EVTSPlayerSynchronizationEventType                 EventType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVTSTimeStampIndex                                 TimeStampIndex;                                             // 0x0004   (0x0004)  
	uint32_t                                           HeartbeatCount;                                             // 0x0008   (0x0004)  
	float                                              AutonomousTimeShiftAmount;                                  // 0x000C   (0x0004)  
	float                                              FixedTimeStepSize;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/VTSPlugin.VTSTBasicTestTestTrackingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVTSTBasicTestTestTrackingData
{ 
	TArray<FVTSTBasicTestTestParticipantTrackingData>  ParticipantStates;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/VTSPlugin.VTSTSimulationInstructionPredicate
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FVTSTSimulationInstructionPredicate
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UVTSGameTimelineManager) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSAuthorityGameTimelineManager) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UVTSPlayerTimelineSynchronizer) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UVTSAuthorityPlayerTimelineSynchronizer) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(UVTSAutonomousGameTimelineManager) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UVTSAutonomousPlayerTimelineSynchronizer) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(FVTSTimeStampDelegate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UVTSFixedTimeStepTimeline) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UVTSFixedTimeStepTimelineAPI) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSMoniteeTimeShiftCoreInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSMonitorTimeShiftCoreInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSRemoteTimeShifter) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UVTSTAppEmulationData) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSTBasicTestAppEmulationData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSTTest) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FVTSTBasicTestTestParticipantTrackingData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVTSTBasicTestEnvironmentEmulatorTrackingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UVTSTBasicTestEnvironmentEmulatorTest) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVTSTBasicTestTest) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVTSTTestParticipant) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSTBasicTestTestParticipant) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UVTSTTransportEmulationData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSTBasicTestTransportEmulationData) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UVTSTClientManager) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UVTSTClientPlayerTimelineSynchronizer) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UVTSTConstantDeltaTimeAppEmulationData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSTConstantLatencyTransportEmulationData) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UVTSTEnvironmentEmulator) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UVTSTimeShiftMonitee) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UVTSTimeShiftMonitor) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSTimeSynchronizedInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSTimeSynchronizedInterfaceBlueprint) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSTimeSynchronizedInterfaceBlueprintAdapter) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSTServerManager) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UVTSTServerPlayerTimelineSynchronizer) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UVTSTSimulationInstruction) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UVTSTTestResult) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FVTSTimeStampIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UVTSTVALGameObjectTest) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FVTSTVALDataPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVTSTValTestTrackingData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UVTSTValTest) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UVTSVALHeartbeatQueue) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UVTSVALMaxTimeShiftMagnitudeStrategyConfig) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSVALMaxTimeShiftMagnitudeStrategy) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSVALMoniteeTimeShiftCoreConfig) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSVALMoniteeTimeShiftCore) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UVTSVALMonitorTimeShiftCoreConfig) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSVALMonitorTimeShiftCore) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UVTSVALNoOpTimeShiftCore) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(UVTSVALMonitorTimeShiftCorePreset) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UVTSVALMoniteeTimeShiftCorePreset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UVTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSVALTimeShiftMonitorQueueSizeTargetStrategy) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UVTSVALTimeShiftMonitorQueueEvaluationStrategy) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UVTSVALTimeShiftMonitorRebaseStrategyConfig) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVTSVALTimeShiftMonitorRebaseStrategy) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FVTSPlayerSynchronizationEvent) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FVTSTBasicTestTestTrackingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVTSTSimulationInstructionPredicate) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UVTSGameTimelineManager, PlayerTimelineSynchronizers) == 0x0030);
static_assert(offsetof(UVTSAuthorityGameTimelineManager, AuthorityFixedTimeStepTimeline) == 0x0040);
static_assert(offsetof(UVTSAuthorityGameTimelineManager, AuthorityFixedTimeStepTimelineAPI) == 0x0048);
static_assert(offsetof(UVTSAuthorityPlayerTimelineSynchronizer, AuthorityFixedTimeStepTimeline) == 0x00A0);
static_assert(offsetof(UVTSAuthorityPlayerTimelineSynchronizer, AuthorityTimeShiftMonitor) == 0x00A8);
static_assert(offsetof(UVTSAutonomousGameTimelineManager, AutonomousFixedTimeStepTimeline) == 0x0040);
static_assert(offsetof(UVTSAutonomousGameTimelineManager, AutonomousFixedTimeStepTimelineAPI) == 0x0048);
static_assert(offsetof(UVTSAutonomousGameTimelineManager, RemoteFixedTimeStepTimeline) == 0x0050);
static_assert(offsetof(UVTSAutonomousGameTimelineManager, RemoteFixedTimeStepTimelineAPI) == 0x0058);
static_assert(offsetof(UVTSAutonomousPlayerTimelineSynchronizer, AutonomousFixedTimeStepTimeline) == 0x00A0);
static_assert(offsetof(UVTSAutonomousPlayerTimelineSynchronizer, RemoteFixedTimeStepTimeline) == 0x00A8);
static_assert(offsetof(UVTSAutonomousPlayerTimelineSynchronizer, AutonomousTimeShiftMonitee) == 0x00B0);
static_assert(offsetof(UVTSAutonomousPlayerTimelineSynchronizer, RemoteTimeShifter) == 0x00B8);
static_assert(offsetof(UVTSFixedTimeStepTimeline, ObjectAdapterMap) == 0x0058);
static_assert(offsetof(UVTSFixedTimeStepTimeline, TimeStampDelegates) == 0x00A8);
static_assert(offsetof(UVTSFixedTimeStepTimelineAPI, FixedTimeStepTimeline) == 0x0030);
static_assert(offsetof(FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData, InstructionType) == 0x0000);
static_assert(offsetof(FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData, FirstParticipant) == 0x0010);
static_assert(offsetof(FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData, SecondParticipant) == 0x0018);
static_assert(offsetof(FVTSTBasicTestEnvironmentEmulatorTrackingData, PostInstructionStates) == 0x0000);
static_assert(offsetof(UVTSTBasicTestEnvironmentEmulatorTest, TrackingData) == 0x0030);
static_assert(offsetof(UVTSTBasicTestEnvironmentEmulatorTest, Participants) == 0x0040);
static_assert(offsetof(UVTSTBasicTestTest, Participant) == 0x0030);
static_assert(offsetof(UVTSTTestParticipant, AppData) == 0x0030);
static_assert(offsetof(UVTSTTestParticipant, TransportData) == 0x0038);
static_assert(offsetof(UVTSTTransportEmulationData, Destination) == 0x0030);
static_assert(offsetof(UVTSTClientManager, AutonomousTimelineManager) == 0x0040);
static_assert(offsetof(UVTSTClientPlayerTimelineSynchronizer, AutonomousPlayerTimelineSynchronizer) == 0x0040);
static_assert(offsetof(UVTSTEnvironmentEmulator, SimulationInstructions) == 0x0048);
static_assert(offsetof(UVTSTimeSynchronizedInterfaceBlueprintAdapter, TimeSynchronizedBlueprintObject) == 0x0038);
static_assert(offsetof(UVTSTServerManager, AuthorityTimelineManager) == 0x0040);
static_assert(offsetof(UVTSTServerPlayerTimelineSynchronizer, AuthorityPlayerTimelineSynchronizer) == 0x0040);
static_assert(offsetof(UVTSTVALGameObjectTest, LogPrefix) == 0x0038);
static_assert(offsetof(UVTSTVALGameObjectTest, MostRecentTimeStampIndex) == 0x0048);
static_assert(offsetof(FVTSTValTestTrackingData, ServerSimulationTickTimeVsAppTickTimeGraph) == 0x0000);
static_assert(offsetof(FVTSTValTestTrackingData, ServerSimulationTickTimeVsTransportDelayGraph) == 0x0010);
static_assert(offsetof(FVTSTValTestTrackingData, ClientSimulationTickTimeVsAppTickTimeGraph) == 0x0020);
static_assert(offsetof(FVTSTValTestTrackingData, ClientSimulationTickTimeVsTransportDelayGraph) == 0x0030);
static_assert(offsetof(UVTSTValTest, ServerManager) == 0x0030);
static_assert(offsetof(UVTSTValTest, ClientManagers) == 0x0038);
static_assert(offsetof(UVTSTValTest, ServerPlayers) == 0x0048);
static_assert(offsetof(UVTSTValTest, ClientPlayers) == 0x0058);
static_assert(offsetof(UVTSTValTest, ServerPlayerGameObjects) == 0x0068);
static_assert(offsetof(UVTSTValTest, ClientPlayerGameObjects) == 0x0078);
static_assert(offsetof(UVTSTValTest, TrackingData) == 0x0088);
static_assert(offsetof(UVTSVALMaxTimeShiftMagnitudeStrategy, MaxTimeShiftMagnitudeStrategyConfig) == 0x0030);
static_assert(offsetof(UVTSVALMoniteeTimeShiftCore, MoniteeTimeShiftCoreConfig) == 0x0038);
static_assert(offsetof(UVTSVALMoniteeTimeShiftCore, MaxTimeShiftMagnitudeStrategy) == 0x0040);
static_assert(offsetof(UVTSVALMonitorTimeShiftCore, MonitorTimeShiftCoreConfig) == 0x0038);
static_assert(offsetof(UVTSVALMonitorTimeShiftCore, MaxTimeShiftMagnitudeStrategy) == 0x0040);
static_assert(offsetof(UVTSVALMonitorTimeShiftCore, TimeShiftMonitorQueueEvaluationStrategy) == 0x0048);
static_assert(offsetof(UVTSVALMonitorTimeShiftCore, TimeShiftMonitorQueueSizeTargetStrategy) == 0x0050);
static_assert(offsetof(UVTSVALMonitorTimeShiftCore, TimeShiftMonitorRebaseStrategy) == 0x0058);
static_assert(offsetof(UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy, RichCurveMaxTimeShiftMagnitudeStrategyConfig) == 0x0038);
static_assert(offsetof(UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy, ShiftApplyRateCurve) == 0x0040);
static_assert(offsetof(UVTSVALMonitorTimeShiftCorePreset, MonitorTimeShiftCoreConfig) == 0x0030);
static_assert(offsetof(UVTSVALMonitorTimeShiftCorePreset, MaxTimeShiftMagnitudeStrategy) == 0x0038);
static_assert(offsetof(UVTSVALMonitorTimeShiftCorePreset, QueueSizeTargetStrategy) == 0x0040);
static_assert(offsetof(UVTSVALMonitorTimeShiftCorePreset, QueueEvaluationStrategy) == 0x0048);
static_assert(offsetof(UVTSVALMonitorTimeShiftCorePreset, RebaseStrategy) == 0x0050);
static_assert(offsetof(UVTSVALMoniteeTimeShiftCorePreset, MoniteeTimeShiftCoreConfig) == 0x0030);
static_assert(offsetof(UVTSVALMoniteeTimeShiftCorePreset, MaxTimeShiftMagnitudeStrategy) == 0x0038);
static_assert(offsetof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset, MonitorTimeShiftCoreConfig) == 0x0030);
static_assert(offsetof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset, MaxTimeShiftMagnitudeStrategy) == 0x0038);
static_assert(offsetof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset, QueueSizeTargetStrategy) == 0x0040);
static_assert(offsetof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset, QueueEvaluationStrategy) == 0x0048);
static_assert(offsetof(UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset, RebaseStrategy) == 0x0050);
static_assert(offsetof(UVTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset, MoniteeTimeShiftCoreConfig) == 0x0030);
static_assert(offsetof(UVTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset, MaxTimeShiftMagnitudeStrategy) == 0x0038);
static_assert(offsetof(UVTSVALTimeShiftMonitorQueueSizeTargetStrategy, TimeShiftMonitorQueueSizeTargetStrategyConfig) == 0x0030);
static_assert(offsetof(UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy, TimeShiftMonitorFixedQueueSizeTargetStrategyConfig) == 0x0038);
static_assert(offsetof(UVTSVALTimeShiftMonitorQueueEvaluationStrategy, TimeShiftMonitorQueueEvaluationStrategyConfig) == 0x0030);
static_assert(offsetof(UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy, TimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig) == 0x0038);
static_assert(offsetof(UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy, HeartbeatQueue) == 0x0040);
static_assert(offsetof(UVTSVALTimeShiftMonitorRebaseStrategy, TimeShiftMonitorRebaseStrategyConfig) == 0x0030);
static_assert(offsetof(UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy, TimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig) == 0x0038);
static_assert(offsetof(UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy, HeartbeatQueue) == 0x0040);
static_assert(offsetof(UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy, TimeShiftMonitorFixedQueueSizeTargetStrategyConfig) == 0x0038);
static_assert(offsetof(FVTSPlayerSynchronizationEvent, EventType) == 0x0000);
static_assert(offsetof(FVTSPlayerSynchronizationEvent, TimeStampIndex) == 0x0004);
static_assert(offsetof(FVTSTBasicTestTestTrackingData, ParticipantStates) == 0x0000);
