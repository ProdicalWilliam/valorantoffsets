
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AICopilot.AICopilotComponent
/// Size: 0x0110 (272 bytes) (0x0000D8 - 0x000110) align 8 MaxSize: 0x0110
class UAICopilotComponent : public UActorComponent
{ 
public:
	class UClass*                                      AIControllerClass;                                          // 0x00D8   (0x0008)  
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnAIActiveChangedDelegate);                          // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnOwningPawnChangedDelegate);                        // 0x00F0   (0x0010)  
	class AAIController*                               SpawnedAIController;                                        // 0x0100   (0x0008)  
	bool                                               bAIActive;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0109   (0x0007)  MISSED


	/// Functions
	// Function /Script/AICopilot.AICopilotComponent.SetAIControllerClass
	// void SetAIControllerClass(class UClass* ControllerClass);                                                                // [0x5261db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AICopilot.AICopilotComponent.ServerSetAIActive
	// void ServerSetAIActive(bool IsActive);                                                                                   // [0x51d27a0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AICopilot.AICopilotComponent.OnOwningPawnChanged
	// void OnOwningPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                    // [0x5261b00] Final|Native|Private 
	// Function /Script/AICopilot.AICopilotComponent.MulticastSetBoolAIActive
	// void MulticastSetBoolAIActive(bool IsActive);                                                                            // [0x5261c90] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/AICopilot.AICopilotComponent.GetOwningPawn
	// class APawn* GetOwningPawn();                                                                                            // [0x5261f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AICopilot.AICopilotComponent.GetAIController
	// class AAIController* GetAIController();                                                                                  // [0x36d8020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AICopilot.AICopilotComponent.GetAIActive
	// bool GetAIActive();                                                                                                      // [0x5261d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AICopilot.AICopilotLifecycleInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAICopilotLifecycleInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AICopilot.AICopilotLifecycleInterface.InitializeForCopilotActivation
	// void InitializeForCopilotActivation(class APawn* PossessedPawn);                                                         // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/AICopilot.AICopilotLifecycleInterface.CleanupForCopilotDeactivation
	// void CleanupForCopilotDeactivation(class APawn* UnpossessedPawn);                                                        // [0x1a821d0] Event|Public|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UAICopilotComponent) == 0x0110); // 272 bytes (0x0000D8 - 0x000110)
static_assert(sizeof(UAICopilotLifecycleInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(offsetof(UAICopilotComponent, AIControllerClass) == 0x00D8);
static_assert(offsetof(UAICopilotComponent, SpawnedAIController) == 0x0100);
