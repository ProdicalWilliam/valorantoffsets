
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

/// Class /Game/CloserCeremony.CloserCeremony_C
/// Size: 0x0498 (1176 bytes) (0x000480 - 0x000498) align 8 MaxSize: 0x0498
class ACloserCeremony_C : public ABaseCeremony_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	double                                             MinTimeForOneVsOne;                                         // 0x0488   (0x0008)  
	class AShooterPlayerState*                         CloserPlayer;                                               // 0x0490   (0x0008)  


	/// Functions
	// Function /Game/CloserCeremony.CloserCeremony_C.GetFocusPlayer
	// void GetFocusPlayer(class AShooterPlayerState*& CeremonyPlayer);                                                         // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/CloserCeremony.CloserCeremony_C.ShouldDisplayCeremony
	// bool ShouldDisplayCeremony(FAresCeremonyDecisionContext& DecisionContext);                                               // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/CloserCeremony.CloserCeremony_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CloserCeremony.CloserCeremony_C.AuthCheatSetCeremonyDisplayed
	// void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/CloserCeremony.CloserCeremony_C.ExecuteUbergraph_CloserCeremony
	// void ExecuteUbergraph_CloserCeremony(int32_t EntryPoint);                                                                // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ACloserCeremony_C) == 0x0498); // 1176 bytes (0x000480 - 0x000498)
static_assert(offsetof(ACloserCeremony_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(ACloserCeremony_C, CloserPlayer) == 0x0490);
