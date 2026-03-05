
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RGIEngine
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C
/// Size: 0x013C (316 bytes) (0x0000E0 - 0x00013C) align 8 MaxSize: 0x013C
class UPlayerScoreCombatTrackerComponent_C : public UPlayerScoreCombatTrackerComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00E0   (0x0008)  
	FClassInclusionExclusionFilter                     CharacterFilter;                                            // 0x00E8   (0x0050)  
	int32_t                                            EnemiesAlive;                                               // 0x0138   (0x0004)  


	/// Functions
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredKill
	// void ScoredKill(FScoreKillData& ScoreKillData);                                                                          // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredAssist
	// void ScoredAssist(class UDamageResponse* KillingBlow, FAresAssist& AssistInfo, class AOwnerExclusivePlayerInfo* Killer, class AOwnerExclusivePlayerInfo* Assister); // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredDeath
	// void ScoredDeath(class UDamageResponse* Response, class AOwnerExclusivePlayerInfo* Killer, TArray<FAresAssist>& AssistsList); // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.DealtDamage
	// void DealtDamage(class UDamageResponse* Response);                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ReceivedDamage
	// void ReceivedDamage(class UDamageResponse* Response);                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Meta/Score/PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ExecuteUbergraph_PlayerScoreCombatTrackerComponent
	// void ExecuteUbergraph_PlayerScoreCombatTrackerComponent(int32_t EntryPoint);                                             // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UPlayerScoreCombatTrackerComponent_C) == 0x013C); // 316 bytes (0x0000E0 - 0x00013C)
static_assert(offsetof(UPlayerScoreCombatTrackerComponent_C, UberGraphFrame) == 0x00E0);
static_assert(offsetof(UPlayerScoreCombatTrackerComponent_C, CharacterFilter) == 0x00E8);
