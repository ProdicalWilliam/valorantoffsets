
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

/// Class /Game/ThriftyCeremony.ThriftyCeremony_C
/// Size: 0x0498 (1176 bytes) (0x000480 - 0x000498) align 8 MaxSize: 0x0498
class AThriftyCeremony_C : public ABaseCeremony_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UBaseTeamComponent*                          SalvagingTeam;                                              // 0x0488   (0x0008)  
	int32_t                                            BlueTeamStartingAvgInventoryValue;                          // 0x0490   (0x0004)  
	int32_t                                            RedTeamStartingAvgInventoryValue;                           // 0x0494   (0x0004)  


	/// Functions
	// Function /Game/ThriftyCeremony.ThriftyCeremony_C.GetFocusTeam
	// void GetFocusTeam(class UBaseTeamComponent*& CeremonyTeam);                                                              // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThriftyCeremony.ThriftyCeremony_C.ShouldDisplayCeremony
	// bool ShouldDisplayCeremony(FAresCeremonyDecisionContext& DecisionContext);                                               // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThriftyCeremony.ThriftyCeremony_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ThriftyCeremony.ThriftyCeremony_C.AuthCheatSetCeremonyDisplayed
	// void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/ThriftyCeremony.ThriftyCeremony_C.ExecuteUbergraph_ThriftyCeremony
	// void ExecuteUbergraph_ThriftyCeremony(int32_t EntryPoint);                                                               // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AThriftyCeremony_C) == 0x0498); // 1176 bytes (0x000480 - 0x000498)
static_assert(offsetof(AThriftyCeremony_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(AThriftyCeremony_C, SalvagingTeam) == 0x0488);
