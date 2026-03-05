
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

/// Class /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C
/// Size: 0x04B0 (1200 bytes) (0x000460 - 0x0004B0) align 8 MaxSize: 0x04B0
class AActor_SimpleWarmupTransition_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UPostProcessComponent*                       PostProcess;                                                // 0x0468   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0470   (0x0008)  
	float                                              FadeInTimeline_Alpha_6DE345CF45066CFED934EE870B0BBEE8;      // 0x0478   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    FadeInTimeline__Direction_6DE345CF45066CFED934EE870B0BBEE8; // 0x047C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x047D   (0x0003)  MISSED
	class UTimelineComponent*                          FadeInTimeline;                                             // 0x0480   (0x0008)  
	double                                             FadeInDuration;                                             // 0x0488   (0x0008)  
	double                                             FadeOutDuration;                                            // 0x0490   (0x0008)  
	bool                                               ShouldDestroyOnFinish;                                      // 0x0498   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0499   (0x0007)  MISSED
	double                                             FadeOutDelay;                                               // 0x04A0   (0x0008)  
	double                                             FadeInDurationNoSlow;                                       // 0x04A8   (0x0008)  


	/// Functions
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.GetFadeInDuration
	// void GetFadeInDuration(double& FadeInDuration);                                                                          // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__FinishedFunc
	// void FadeInTimeline__FinishedFunc();                                                                                     // [0x1a821d0] BlueprintEvent       
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__UpdateFunc
	// void FadeInTimeline__UpdateFunc();                                                                                       // [0x1a821d0] BlueprintEvent       
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.Event Fade Out
	// void EventFadeOut();                                                                                                     // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.OnWarmupRoundChanged_Event
	// void OnWarmupRoundChanged_Event(bool IsWarmupRound);                                                                     // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ExecuteUbergraph_Actor_SimpleWarmupTransition
	// void ExecuteUbergraph_Actor_SimpleWarmupTransition(int32_t EntryPoint);                                                  // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AActor_SimpleWarmupTransition_C) == 0x04B0); // 1200 bytes (0x000460 - 0x0004B0)
static_assert(offsetof(AActor_SimpleWarmupTransition_C, UberGraphFrame) == 0x0460);
static_assert(offsetof(AActor_SimpleWarmupTransition_C, PostProcess) == 0x0468);
static_assert(offsetof(AActor_SimpleWarmupTransition_C, DefaultSceneRoot) == 0x0470);
static_assert(offsetof(AActor_SimpleWarmupTransition_C, FadeInTimeline__Direction_6DE345CF45066CFED934EE870B0BBEE8) == 0x047C);
static_assert(offsetof(AActor_SimpleWarmupTransition_C, FadeInTimeline) == 0x0480);
