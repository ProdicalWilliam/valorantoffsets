
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

/// Class /Game/FlawlessCeremony.FlawlessCeremony_C
/// Size: 0x0490 (1168 bytes) (0x000480 - 0x000490) align 8 MaxSize: 0x0490
class AFlawlessCeremony_C : public ABaseCeremony_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UBaseTeamComponent*                          FlawlessTeam;                                               // 0x0488   (0x0008)  


	/// Functions
	// Function /Game/FlawlessCeremony.FlawlessCeremony_C.GetFocusTeam
	// void GetFocusTeam(class UBaseTeamComponent*& CeremonyTeam);                                                              // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FlawlessCeremony.FlawlessCeremony_C.ShouldDisplayCeremony
	// bool ShouldDisplayCeremony(FAresCeremonyDecisionContext& DecisionContext);                                               // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FlawlessCeremony.FlawlessCeremony_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FlawlessCeremony.FlawlessCeremony_C.AuthCheatSetCeremonyDisplayed
	// void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/FlawlessCeremony.FlawlessCeremony_C.ExecuteUbergraph_FlawlessCeremony
	// void ExecuteUbergraph_FlawlessCeremony(int32_t EntryPoint);                                                              // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AFlawlessCeremony_C) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(offsetof(AFlawlessCeremony_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(AFlawlessCeremony_C, FlawlessTeam) == 0x0488);
