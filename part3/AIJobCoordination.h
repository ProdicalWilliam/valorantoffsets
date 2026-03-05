
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

#pragma pack(push, 0x1)

/// Enum /Script/AIJobCoordination.EAIJobCoordination_JobStatus
/// Size: 0x01 (1 bytes)
enum class EAIJobCoordination_JobStatus : uint8_t
{
	EAIJobCoordination_JobStatus__NotClaimed                                         = 0,
	EAIJobCoordination_JobStatus__InProgress                                         = 1,
	EAIJobCoordination_JobStatus__Completed                                          = 2,
	EAIJobCoordination_JobStatus__Failed                                             = 3,
	EAIJobCoordination_JobStatus__Aborted                                            = 4,
	EAIJobCoordination_JobStatus__Discarded                                          = 5,
	EAIJobCoordination_JobStatus__Count                                              = 6
};

/// Class /Script/AIJobCoordination.BTDecorator_FulfillsJobTag
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class UBTDecorator_FulfillsJobTag : public UBTDecorator
{ 
public:
	FGameplayTag                                       FulfillsJobTag;                                             // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	class UJobPerformerComponent_Base*                 OwnerPerformerComp;                                         // 0x0080   (0x0008)  
	class UBehaviorTreeComponent*                      OwnerBehaviorTreeComp;                                      // 0x0088   (0x0008)  


	/// Functions
	// Function /Script/AIJobCoordination.BTDecorator_FulfillsJobTag.OnOwnerUnclaimedJob
	// void OnOwnerUnclaimedJob(class UJobPerformerComponent_Base* JobPerformer, class UJobObject_Base* OldJob);                // [0x56c92c0] Final|Native|Private 
	// Function /Script/AIJobCoordination.BTDecorator_FulfillsJobTag.OnOwnerClaimedJob
	// void OnOwnerClaimedJob(class UJobPerformerComponent_Base* JobPerformer, class UJobObject_Base* NewJob);                  // [0x56c92c0] Final|Native|Private 
};

/// Class /Script/AIJobCoordination.BTDecorator_JobStatus
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UBTDecorator_JobStatus : public UBTDecorator
{ 
public:
	EAIJobCoordination_JobStatus                       FulfillsJobStatus;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	class UJobPerformerComponent_Base*                 OwnerPerformerComp;                                         // 0x0078   (0x0008)  
	class UBehaviorTreeComponent*                      OwnerBehaviorTreeComp;                                      // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/AIJobCoordination.BTDecorator_JobStatus.OnOwnerUnclaimedJob
	// void OnOwnerUnclaimedJob(class UJobPerformerComponent_Base* JobPerformer, class UJobObject_Base* OldJob);                // [0x56c9860] Final|Native|Private 
	// Function /Script/AIJobCoordination.BTDecorator_JobStatus.OnOwnerClaimedJob
	// void OnOwnerClaimedJob(class UJobPerformerComponent_Base* JobPerformer, class UJobObject_Base* NewJob);                  // [0x56c99f0] Final|Native|Private 
	// Function /Script/AIJobCoordination.BTDecorator_JobStatus.OnJobStatusUpdated
	// void OnJobStatusUpdated(class UJobObject_Base* Job, EAIJobCoordination_JobStatus NewStatus, EAIJobCoordination_JobStatus OldStatus); // [0x56c9650] Final|Native|Private 
};

/// Class /Script/AIJobCoordination.BTTask_UpdateJobStatus
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UBTTask_UpdateJobStatus : public UBTTaskNode
{ 
public:
	EAIJobCoordination_JobStatus                       SetStatus;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AIJobCoordination.JobCoordinatorSpawnerComponent
/// Size: 0x0138 (312 bytes) (0x0000D8 - 0x000138) align 8 MaxSize: 0x0138
class UJobCoordinatorSpawnerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,367) /* TSet<UClass*> */          __um(CoordinatorTypesToSpawn);                              // 0x00D8   (0x0050)  
	TArray<class AJobCoordinator_Base*>                SpawnedCoordinators;                                        // 0x0128   (0x0010)  


	/// Functions
	// Function /Script/AIJobCoordination.JobCoordinatorSpawnerComponent.GetCoordinators
	// TArray<AJobCoordinator_Base*> GetCoordinators();                                                                         // [0x56c9f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobCoordinatorSpawnerComponent.AuthSpawnJobCoordinators
	// void AuthSpawnJobCoordinators();                                                                                         // [0x39273b0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIJobCoordination.JobCoordinator_Base
/// Size: 0x04A8 (1192 bytes) (0x000460 - 0x0004A8) align 8 MaxSize: 0x04A8
class AJobCoordinator_Base : public AActor
{ 
public:
	class UClass*                                      JobPerformerType;                                           // 0x0460   (0x0008)  
	TArray<class UJobObject_Base*>                     UnclaimedJobs;                                              // 0x0468   (0x0010)  
	TArray<class UJobObject_Base*>                     ClaimedJobs;                                                // 0x0478   (0x0010)  
	TArray<class UJobPerformerComponent_Base*>         JobPerformers;                                              // 0x0488   (0x0010)  
	TArray<class UJobProviderComponent_Base*>          JobProviders;                                               // 0x0498   (0x0010)  


	/// Functions
	// Function /Script/AIJobCoordination.JobCoordinator_Base.GetUnclaimedJobs
	// TArray<UJobObject_Base*> GetUnclaimedJobs();                                                                             // [0x56ca350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobCoordinator_Base.GetJobProviders
	// TArray<UJobProviderComponent_Base*> GetJobProviders();                                                                   // [0x56ca260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobCoordinator_Base.GetJobPerformers
	// TArray<UJobPerformerComponent_Base*> GetJobPerformers();                                                                 // [0x56ca2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobCoordinator_Base.GetClaimedJobs
	// TArray<UJobObject_Base*> GetClaimedJobs();                                                                               // [0x56ca320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobCoordinator_Base.AuthRegisterAndInitNewJobPerformer
	// bool AuthRegisterAndInitNewJobPerformer(class AController* InController);                                                // [0x56ca380] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIJobCoordination.JobCoordinator_Base.AuthDeregisterJobPerformer
	// bool AuthDeregisterJobPerformer(class AController* InController);                                                        // [0x56ca380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIJobCoordination.JobObject_Base
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UJobObject_Base : public UObject
{ 
public:
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnJobStatusUpdated);                                 // 0x0030   (0x0010)  
	FGameplayTag                                       CapabilityTagFulfillingJob;                                 // 0x0040   (0x000C)  
	EAIJobCoordination_JobStatus                       Status;                                                     // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	class UJobPerformerComponent_Base*                 JobPerformer;                                               // 0x0050   (0x0008)  
	class AJobCoordinator_Base*                        JobCoordinator;                                             // 0x0058   (0x0008)  
	bool                                               bIsJobRegistered;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIJobCoordination.JobObject_Base.UpdateStatus
	// void UpdateStatus(EAIJobCoordination_JobStatus NewStatus);                                                               // [0x56caa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIJobCoordination.JobObject_Base.GetStatus
	// EAIJobCoordination_JobStatus GetStatus();                                                                                // [0x56ca950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.GetPriority
	// float GetPriority();                                                                                                     // [0x3d66d00] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.GetPerformer
	// class UJobPerformerComponent_Base* GetPerformer();                                                                       // [0x56ca930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.GetJobPerformerSuitability
	// float GetJobPerformerSuitability(class UJobPerformerComponent_Base* PotentialPerformer);                                 // [0x56ca970] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.GetIsRegistered
	// bool GetIsRegistered();                                                                                                  // [0x4e9eb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.GetCapabilityTagFulfillingJob
	// FGameplayTag GetCapabilityTagFulfillingJob();                                                                            // [0x56ca900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobObject_Base.AuthOnJobUnclaimedResponse
	// void AuthOnJobUnclaimedResponse();                                                                                       // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/AIJobCoordination.JobObject_Base.AuthOnJobClaimedResponse
	// void AuthOnJobClaimedResponse();                                                                                         // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/AIJobCoordination.JobPerformerComponent_Base
/// Size: 0x0128 (296 bytes) (0x0000D8 - 0x000128) align 8 MaxSize: 0x0128
class UJobPerformerComponent_Base : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnPerformerClaimedJob);                              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnPerformerUnclaimedJob);                            // 0x00E8   (0x0010)  
	class AController*                                 OwningController;                                           // 0x00F8   (0x0008)  
	class UJobObject_Base*                             ClaimedJob;                                                 // 0x0100   (0x0008)  
	FGameplayTagContainer                              CapabilitiesTags;                                           // 0x0108   (0x0020)  


	/// Functions
	// Function /Script/AIJobCoordination.JobPerformerComponent_Base.GetController
	// class AController* GetController();                                                                                      // [0x4607780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobPerformerComponent_Base.GetClaimedJob
	// class UJobObject_Base* GetClaimedJob();                                                                                  // [0x36d8020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobPerformerComponent_Base.GetCapabilitiesTags
	// FGameplayTagContainer GetCapabilitiesTags();                                                                             // [0x56caf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobPerformerComponent_Base.AuthInitializeCapabilitiesTags
	// FGameplayTagContainer AuthInitializeCapabilitiesTags();                                                                  // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/AIJobCoordination.JobProviderComponent_Base
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align 8 MaxSize: 0x0100
class UJobProviderComponent_Base : public UActorComponent
{ 
public:
	TArray<class UJobPerformerComponent_Base*>         JobPerformers;                                              // 0x00D8   (0x0010)  
	class AJobCoordinator_Base*                        OwningCoordinator;                                          // 0x00E8   (0x0008)  
	TArray<class UJobObject_Base*>                     CreatedJobs;                                                // 0x00F0   (0x0010)  


	/// Functions
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.GetJobPerformers
	// TArray<UJobPerformerComponent_Base*> GetJobPerformers();                                                                 // [0x56cb790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.GetCreatedJobs
	// TArray<UJobObject_Base*> GetCreatedJobs();                                                                               // [0x56cb760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.GetCoordinator
	// class AJobCoordinator_Base* GetCoordinator();                                                                            // [0x3c3dc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.AuthOnJobStatusUpdatedResponse
	// void AuthOnJobStatusUpdatedResponse(class UJobObject_Base* Job, EAIJobCoordination_JobStatus NewStatus, EAIJobCoordination_JobStatus OldStatus); // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.AuthOnJobStatusUpdated
	// void AuthOnJobStatusUpdated(class UJobObject_Base* Job, EAIJobCoordination_JobStatus NewStatus, EAIJobCoordination_JobStatus OldStatus); // [0x56cb560] Final|Native|Private 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.AuthInvalidateJob
	// void AuthInvalidateJob(class UJobObject_Base* InJob);                                                                    // [0x34773d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.AuthInvalidateCreatedJobs
	// void AuthInvalidateCreatedJobs();                                                                                        // [0x39273b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIJobCoordination.JobProviderComponent_Base.AuthCreateNewJob
	// class UJobObject_Base* AuthCreateNewJob(class UClass* InJobType);                                                        // [0x3b01f90] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UBTDecorator_FulfillsJobTag) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(UBTDecorator_JobStatus) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UBTTask_UpdateJobStatus) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UJobCoordinatorSpawnerComponent) == 0x0138); // 312 bytes (0x0000D8 - 0x000138)
static_assert(sizeof(AJobCoordinator_Base) == 0x04A8); // 1192 bytes (0x000460 - 0x0004A8)
static_assert(sizeof(UJobObject_Base) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UJobPerformerComponent_Base) == 0x0128); // 296 bytes (0x0000D8 - 0x000128)
static_assert(sizeof(UJobProviderComponent_Base) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(offsetof(UBTDecorator_FulfillsJobTag, FulfillsJobTag) == 0x0070);
static_assert(offsetof(UBTDecorator_FulfillsJobTag, OwnerPerformerComp) == 0x0080);
static_assert(offsetof(UBTDecorator_FulfillsJobTag, OwnerBehaviorTreeComp) == 0x0088);
static_assert(offsetof(UBTDecorator_JobStatus, FulfillsJobStatus) == 0x0070);
static_assert(offsetof(UBTDecorator_JobStatus, OwnerPerformerComp) == 0x0078);
static_assert(offsetof(UBTDecorator_JobStatus, OwnerBehaviorTreeComp) == 0x0080);
static_assert(offsetof(UBTTask_UpdateJobStatus, SetStatus) == 0x0078);
static_assert(offsetof(UJobCoordinatorSpawnerComponent, SpawnedCoordinators) == 0x0128);
static_assert(offsetof(AJobCoordinator_Base, JobPerformerType) == 0x0460);
static_assert(offsetof(AJobCoordinator_Base, UnclaimedJobs) == 0x0468);
static_assert(offsetof(AJobCoordinator_Base, ClaimedJobs) == 0x0478);
static_assert(offsetof(AJobCoordinator_Base, JobPerformers) == 0x0488);
static_assert(offsetof(AJobCoordinator_Base, JobProviders) == 0x0498);
static_assert(offsetof(UJobObject_Base, CapabilityTagFulfillingJob) == 0x0040);
static_assert(offsetof(UJobObject_Base, Status) == 0x004C);
static_assert(offsetof(UJobObject_Base, JobPerformer) == 0x0050);
static_assert(offsetof(UJobObject_Base, JobCoordinator) == 0x0058);
static_assert(offsetof(UJobPerformerComponent_Base, OwningController) == 0x00F8);
static_assert(offsetof(UJobPerformerComponent_Base, ClaimedJob) == 0x0100);
static_assert(offsetof(UJobPerformerComponent_Base, CapabilitiesTags) == 0x0108);
static_assert(offsetof(UJobProviderComponent_Base, JobPerformers) == 0x00D8);
static_assert(offsetof(UJobProviderComponent_Base, OwningCoordinator) == 0x00E8);
static_assert(offsetof(UJobProviderComponent_Base, CreatedJobs) == 0x00F0);
