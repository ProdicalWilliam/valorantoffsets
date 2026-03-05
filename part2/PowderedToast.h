
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/PowderedToast/Comp_PowderedToastFunctions.Comp_PowderedToastFunctions_C
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UComp_PowderedToastFunctions_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00D8   (0x0008)  


	/// Functions
	// Function /Game/PowderedToast/Comp_PowderedToastFunctions.Comp_PowderedToastFunctions_C.On Damaged
	// void OnDamaged(class UDamageResponse* Response);                                                                         // [0x1a821d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/Comp_PowderedToastFunctions.Comp_PowderedToastFunctions_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/PowderedToast/Comp_PowderedToastFunctions.Comp_PowderedToastFunctions_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/PowderedToast/Comp_PowderedToastFunctions.Comp_PowderedToastFunctions_C.ExecuteUbergraph_Comp_PowderedToastFunctions
	// void ExecuteUbergraph_Comp_PowderedToastFunctions(int32_t EntryPoint);                                                   // [0x1a821d0] Final                
};

/// Class /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C
/// Size: 0x0110 (272 bytes) (0x0000D8 - 0x000110) align 8 MaxSize: 0x0110
class UPowderedToastAbilityListener_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00D8   (0x0008)  
	TArray<int32_t>                                    AbilityCount;                                               // 0x00E0   (0x0010)  
	TArray<int32_t>                                    AbilityCount_Copy;                                          // 0x00F0   (0x0010)  
	TArray<class AShooterCharacter*>                   BoundCharacters;                                            // 0x0100   (0x0010)  


	/// Functions
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.BindToCharactersAbilityUsage
	// void BindToCharactersAbilityUsage(class AShooterCharacter* Character, bool ShouldBindAbility1, bool ShouldBindAbility2, bool ShouldBindAbilityGrenade, bool ShouldBindUltimate); // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.Ability Used
	// void AbilityUsed(class AAresEquippable* Equip);                                                                          // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnRep_AbilityCount
	// void OnRep_AbilityCount();                                                                                               // [0x1a821d0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnPossessedCharacterChanged_Event
	// void OnPossessedCharacterChanged_Event(class AShooterCharacter* NewValue);                                               // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnSpawnedCharacterChanged_Event
	// void OnSpawnedCharacterChanged_Event(class AShooterCharacter* NewValue);                                                 // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/PowderedToast/PowderedToastAbilityListener.PowderedToastAbilityListener_C.ExecuteUbergraph_PowderedToastAbilityListener
	// void ExecuteUbergraph_PowderedToastAbilityListener(int32_t EntryPoint);                                                  // [0x1a821d0] Final                
};

#pragma pack(pop)


static_assert(sizeof(UComp_PowderedToastFunctions_C) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UPowderedToastAbilityListener_C) == 0x0110); // 272 bytes (0x0000D8 - 0x000110)
static_assert(offsetof(UComp_PowderedToastFunctions_C, UberGraphFrame) == 0x00D8);
static_assert(offsetof(UPowderedToastAbilityListener_C, UberGraphFrame) == 0x00D8);
static_assert(offsetof(UPowderedToastAbilityListener_C, AbilityCount) == 0x00E0);
static_assert(offsetof(UPowderedToastAbilityListener_C, AbilityCount_Copy) == 0x00F0);
static_assert(offsetof(UPowderedToastAbilityListener_C, BoundCharacters) == 0x0100);
