
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

#pragma pack(push, 0x1)

/// Enum /Script/GameplayMessageRuntime.EGameplayMessageMatch
/// Size: 0x01 (1 bytes)
enum class EGameplayMessageMatch : uint8_t
{
	EGameplayMessageMatch__ExactMatch                                                = 0,
	EGameplayMessageMatch__PartialMatch                                              = 1
};

/// Class /Script/GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UAsyncAction_ListenForGameplayMessage : public UCancellableAsyncAction
{ 
public:
	SDK_UNDEFINED(16,5109) /* FMulticastInlineDelegate */ __um(OnMessageReceived);                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.ListenForGameplayMessages
	// class UAsyncAction_ListenForGameplayMessage* ListenForGameplayMessages(class UObject* WorldContextObject, FGameplayTag Channel, class UScriptStruct* PayloadType, EGameplayMessageMatch MatchType); // [0x5405af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x5406950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayMessageRuntime.GameplayMessageSubsystem
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UGameplayMessageSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0038   (0x0050)  MISSED


	/// Functions
	// Function /Script/GameplayMessageRuntime.GameplayMessageSubsystem.K2_BroadcastMessage
	// void K2_BroadcastMessage(FGameplayTag Channel, int32_t& Message);                                                        // [0x5408210] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Struct /Script/GameplayMessageRuntime.GameplayMessageListenerHandle
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayMessageListenerHandle
{ 
	TWeakObjectPtr<class UGameplayMessageSubsystem*>   Subsystem;                                                  // 0x0000   (0x0008)  
	FGameplayTag                                       Channel;                                                    // 0x0008   (0x000C)  
	int32_t                                            ID;                                                         // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/GameplayMessageRuntime.GameplayMessageListenerData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FGameplayMessageListenerData
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAsyncAction_ListenForGameplayMessage) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UGameplayMessageSubsystem) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FGameplayMessageListenerHandle) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayMessageListenerData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FGameplayMessageListenerHandle, Subsystem) == 0x0000);
static_assert(offsetof(FGameplayMessageListenerHandle, Channel) == 0x0008);
