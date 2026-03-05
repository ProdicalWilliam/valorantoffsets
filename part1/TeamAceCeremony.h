
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

/// Class /Game/TeamAceCeremony.TeamAceCeremony_C
/// Size: 0x0490 (1168 bytes) (0x000480 - 0x000490) align 8 MaxSize: 0x0490
class ATeamAceCeremony_C : public ABaseCeremony_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UBaseTeamComponent*                          TeamAcingTeam;                                              // 0x0488   (0x0008)  


	/// Functions
	// Function /Game/TeamAceCeremony.TeamAceCeremony_C.GetFocusTeam
	// void GetFocusTeam(class UBaseTeamComponent*& CeremonyTeam);                                                              // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/TeamAceCeremony.TeamAceCeremony_C.ShouldDisplayCeremony
	// bool ShouldDisplayCeremony(FAresCeremonyDecisionContext& DecisionContext);                                               // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/TeamAceCeremony.TeamAceCeremony_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TeamAceCeremony.TeamAceCeremony_C.AuthCheatSetCeremonyDisplayed
	// void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/TeamAceCeremony.TeamAceCeremony_C.ExecuteUbergraph_TeamAceCeremony
	// void ExecuteUbergraph_TeamAceCeremony(int32_t EntryPoint);                                                               // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ATeamAceCeremony_C) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(offsetof(ATeamAceCeremony_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(ATeamAceCeremony_C, TeamAcingTeam) == 0x0488);
