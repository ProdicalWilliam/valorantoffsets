
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

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x01 (1 bytes)
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1,
	ETaskResourceOverlapPolicy__RequestCancelAndStartOnTop                           = 2,
	ETaskResourceOverlapPolicy__RequestCancelAndStartAtEnd                           = 3
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0044   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x0046   (0x0001)  
	unsigned char                                      UnknownData02_6[0x21];                                      // 0x0047   (0x0021)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                               // [0x4ba7480] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                          // [0x4ba7440] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0030   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0150 (336 bytes) (0x0000D8 - 0x000150) align 8 MaxSize: 0x0150
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x00D8   (0x0018)  MISSED
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0100   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x0110   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,343) /* FMulticastInlineDelegate */ __um(OnClaimedResourcesChange);                           // 0x0130   (0x0010)  
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x0140   (0x0010)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks(TArray<UGameplayTask*>& PreviousSimulatedTasks);                                               // [0x4ba9270] Final|RequiredAPI|Native|Public|HasOutParms 
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x4ba8e20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x4bac2f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x4bac700] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x00C8 (200 bytes) (0x000070 - 0x0000C8) align 8 MaxSize: 0x00C8
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,344) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,345) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0090   (0x0030)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x4bacfb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                                 // [0x4bacc60] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                                 // [0x4bace00] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x00A8 (168 bytes) (0x000070 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,346) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,347) /* FMulticastInlineDelegate */ __um(OnTimeExpired);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0090   (0x0018)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,348) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0080   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);              // [0x4bae7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x1a821d0] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGameplayTask) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UGameplayTaskOwnerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGameplayTaskResource) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGameplayTasksComponent) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UGameplayTask_ClaimResource) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UGameplayTask_SpawnActor) == 0x00C8); // 200 bytes (0x000070 - 0x0000C8)
static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0x00A8); // 168 bytes (0x000070 - 0x0000A8)
static_assert(sizeof(UGameplayTask_WaitDelay) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(FGameplayResourceSet) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(offsetof(UGameplayTask, InstanceName) == 0x0038);
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 0x0046);
static_assert(offsetof(UGameplayTask, ChildTask) == 0x0068);
static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 0x00F0);
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 0x0110);
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 0x0120);
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 0x0140);
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 0x00C0);
