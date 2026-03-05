
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame
/// dependency: UI

#pragma pack(push, 0x1)

/// Class /Game/ClutchCeremony.ClutchCeremony_C
/// Size: 0x0498 (1176 bytes) (0x000480 - 0x000498) align 8 MaxSize: 0x0498
class AClutchCeremony_C : public ABaseCeremony_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	double                                             MinTimeForOneVsMany;                                        // 0x0488   (0x0008)  
	class AShooterPlayerState*                         ClutchPlayer;                                               // 0x0490   (0x0008)  


	/// Functions
	// Function /Game/ClutchCeremony.ClutchCeremony_C.GetFocusPlayer
	// void GetFocusPlayer(class AShooterPlayerState*& CeremonyPlayer);                                                         // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ClutchCeremony.ClutchCeremony_C.ShouldDisplayCeremony
	// bool ShouldDisplayCeremony(FAresCeremonyDecisionContext& DecisionContext);                                               // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ClutchCeremony.ClutchCeremony_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ClutchCeremony.ClutchCeremony_C.AuthCheatSetCeremonyDisplayed
	// void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/ClutchCeremony.ClutchCeremony_C.ExecuteUbergraph_ClutchCeremony
	// void ExecuteUbergraph_ClutchCeremony(int32_t EntryPoint);                                                                // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AClutchCeremony_C) == 0x0498); // 1176 bytes (0x000480 - 0x000498)
static_assert(offsetof(AClutchCeremony_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(AClutchCeremony_C, ClutchPlayer) == 0x0490);
