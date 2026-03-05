
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/GameStats/MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMatchResultAbilityCastCountObject_C : public UObject
{ 
public:
	int32_t                                            GrenadeCasts;                                               // 0x0030   (0x0004)  
	int32_t                                            Ability1Casts;                                              // 0x0034   (0x0004)  
	int32_t                                            Ability2Casts;                                              // 0x0038   (0x0004)  
	int32_t                                            UltCasts;                                                   // 0x003C   (0x0004)  
	FString                                            Subject;                                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Game/GameStats/MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C.ToStruct
	// void ToStruct(FMatchResultAbilityCastCount& NewParam);                                                                   // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameStats/MatchResultAbilityCastCountObject.MatchResultAbilityCastCountObject_C.AddCast
	// void AddCast(EAresItemSlot EquippableSlot);                                                                              // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/GameStats/MatchResultDamageEvent.MatchResultDamageEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMatchResultDamageEvent
{ 
	int32_t                                            round_11_CFF62C074EBF487B150B848F754D33A5;                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            attacker_10_530D54CA48FA7B48495579BB0F92E80B;               // 0x0008   (0x0010)  
	FString                                            victim_9_3BA971BB4EEF730E63DF46B3F6A9D355;                  // 0x0018   (0x0010)  
	int32_t                                            damage_8_953F5B63400A3C9B09C000A71BFDF982;                  // 0x0028   (0x0004)  
	int32_t                                            headshots_15_75D0622A43B550033CF4959F27CF1B1C;              // 0x002C   (0x0004)  
	int32_t                                            bodyshots_18_835197AF44B5589B5AFE9885CF0221EC;              // 0x0030   (0x0004)  
	int32_t                                            legshots_19_9344AED04C9707BA03D28EBD88800E0A;               // 0x0034   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultPlayerEconomy.MatchResultPlayerEconomy
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMatchResultPlayerEconomy
{ 
	FString                                            Subject_15_9CA928D44A801927BFAD0794F8AA1C7F;                // 0x0000   (0x0010)  
	int32_t                                            LoadoutValue_14_D89F9DE14795868F74C48AA7FF2F88F2;           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Weapon_13_55387BEC4CD6928999F6D48620484554;                 // 0x0018   (0x0010)  
	FString                                            Armor_12_A949E66E47F370772865CEB9E1934A41;                  // 0x0028   (0x0010)  
	int32_t                                            Remaining_11_55BFFE4C4293F42F5D340583CFB2DF1E;              // 0x0038   (0x0004)  
	int32_t                                            Spent_18_C23A08A8434C2B9B7312D6B95D362861;                  // 0x003C   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultMapLocation.MatchResultMapLocation
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMatchResultMapLocation
{ 
	int32_t                                            x_7_A9B1780A47FFCD05F8D1C98DA886EA2D;                       // 0x0000   (0x0004)  
	int32_t                                            y_8_A016DED54C5E6F9038F214B4AA19C45F;                       // 0x0004   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultPlayerLocation.MatchResultPlayerLocation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMatchResultPlayerLocation
{ 
	FMatchResultMapLocation                            location_8_A9B1780A47FFCD05F8D1C98DA886EA2D;                // 0x0000   (0x0008)  
	float                                              viewRadians_7_D233027D4DF11E18F2CE91824AE2EB91;             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            subject_6_89F6A32F4B8473E7969911A9A289064B;                 // 0x0010   (0x0010)  
};

/// Struct /Game/GameStats/MatchResultBombPlantEvent.MatchResultBombPlantEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMatchResultBombPlantEvent
{ 
	int32_t                                            round_2_9A093ED44DB3CAB2BBBD00A7060A6340;                   // 0x0000   (0x0004)  
	int32_t                                            gameTime_4_2B8BA5F1485F20289107F4AF28C6FCCC;                // 0x0004   (0x0004)  
	FString                                            planter_10_CBBD5D7F4E61B20F0C499EAFD3CAA313;                // 0x0008   (0x0010)  
	FMatchResultMapLocation                            plantLocation_13_77A7C4C3432EF2ED86E4E8B35B458AC0;          // 0x0018   (0x0008)  
	int32_t                                            roundTime_16_C99A336B40BEAEB2BD58CDA0B6BDD6BF;              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FMatchResultPlayerLocation>                 playerLocations_20_C05C692C4DCB734A4CA668AD4B47F435;        // 0x0028   (0x0010)  
	FString                                            plantSite_25_2A5B51B74DA537A1AA2B5A97161EB826;              // 0x0038   (0x0010)  
};

/// Struct /Game/GameStats/MatchResultPlayerRoundScores.MatchResultPlayerRoundScores
/// Size: 0x0054 (84 bytes) (0x000000 - 0x000054) align 8 MaxSize: 0x0054
struct FMatchResultPlayerRoundScores
{ 
	TMap<FString, int32_t>                             PlayerScores_4_E5741E1746A48B4BE359D28202741B2E;            // 0x0000   (0x0050)  
	int32_t                                            Round_8_21F2C6754706411B29D2418475C06659;                   // 0x0050   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultDamageInfo.MatchResultDamageInfo
/// Size: 0x0021 (33 bytes) (0x000000 - 0x000021) align 8 MaxSize: 0x0021
struct FMatchResultDamageInfo
{ 
	FString                                            damageType_6_58B77E7C49F99324A2F0DEA4FB8EE2C6;              // 0x0000   (0x0010)  
	FString                                            damageItem_8_3AED95914326522481988995EE27FE53;              // 0x0010   (0x0010)  
	bool                                               isSecondaryFireMode_17_574CB32E4559BDDA297C65ACDB1AA14E;    // 0x0020   (0x0001)  
};

/// Struct /Game/GameStats/MatchResultPlayerKillEvent.MatchResultPlayerKillEvent
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FMatchResultPlayerKillEvent
{ 
	FString                                            killer_10_1D83512740BB059095027EB9FEA7BF08;                 // 0x0000   (0x0010)  
	FString                                            victim_11_B2E03FE841188A91B07D2BAC206FEA5A;                 // 0x0010   (0x0010)  
	TArray<FString>                                    assistants_15_D6E0069C451067811525719D1898C41B;             // 0x0020   (0x0010)  
	int32_t                                            gameTime_13_BC7C5D36479D09DDC4A61B82015D3497;               // 0x0030   (0x0004)  
	int32_t                                            round_14_6ED19A8C4AC3EE8C1566B48D92BC8E38;                  // 0x0034   (0x0004)  
	int32_t                                            roundTime_18_820ED55E450CC2F4A9D7D4B8A225A12C;              // 0x0038   (0x0004)  
	FMatchResultMapLocation                            victimLocation_22_458A221F42643DF752E5508A28C1080F;         // 0x003C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FMatchResultPlayerLocation>                 playerLocations_25_17996FD44BE99D1ED476A29835AE5E86;        // 0x0048   (0x0010)  
	FMatchResultDamageInfo                             finishingDamage_29_FB25ABEE4AB9897002B4E5B7CE833A3F;        // 0x0058   (0x0021)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Game/GameStats/MatchResultBombDefuseEvent.MatchResultBombDefuseEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMatchResultBombDefuseEvent
{ 
	int32_t                                            round_2_6C8303154E3E7F8560C50BB16173EAD7;                   // 0x0000   (0x0004)  
	int32_t                                            gameTime_4_EEC6ABF94C0FEC900B323C92F0EFF8DB;                // 0x0004   (0x0004)  
	FString                                            defuser_7_28973B444CF82F918F9DCAAA2CA05F14;                 // 0x0008   (0x0010)  
	FMatchResultMapLocation                            defuseLocation_14_E101DACC412B55CF88A4A2B09DEAAD9F;         // 0x0018   (0x0008)  
	int32_t                                            roundTime_17_16CCB9F445D79D5D97735FBD0238EDAA;              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FMatchResultPlayerLocation>                 playerLocations_21_E9F3169444A22D8C043C88866BC6394D;        // 0x0028   (0x0010)  
};

/// Struct /Game/GameStats/MatchResultRoundEconomy.MatchResultRoundEconomy
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 8 MaxSize: 0x0014
struct FMatchResultRoundEconomy
{ 
	TArray<FMatchResultPlayerEconomy>                  playerEconomies_3_CB6936D8421227488F2CB086B9D11507;         // 0x0000   (0x0010)  
	int32_t                                            round_7_ADF6D5FC43C580BE17511AADDCE30278;                   // 0x0010   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultAbilityInfo.MatchResultAbilityInfo
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 8 MaxSize: 0x002C
struct FMatchResultAbilityInfo
{ 
	EAresItemSlot                                      AbilitySlot_12_711C2843408D9EE7418E4988A8640032;            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AbilityType_25_711F19E74BFCB1338F0B40ABFBB74391;            // 0x0004   (0x000C)  
	float                                              Value_15_4819929F43889FB712DC8F8B4F011B57;                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Subject_24_7334C8224D58E0CF389CF5BA0E0AE50E;                // 0x0018   (0x0010)  
	int32_t                                            Round_22_573F749F492464704A05E1892196D179;                  // 0x0028   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultRoundStayedInSpawnEvent.MatchResultRoundStayedInSpawnEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMatchResultRoundStayedInSpawnEvent
{ 
	int32_t                                            RoundNum_2_37864B1945DDCF280C8C67AF73ACBA4C;                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Subject_5_198527AF4711E59A1730A5AE810B019F;                 // 0x0008   (0x0010)  
};

/// Struct /Game/GameStats/MatchResultRoundCeremony.MatchResultRoundCeremony
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 8 MaxSize: 0x0014
struct FMatchResultRoundCeremony
{ 
	FString                                            ceremony_11_CB6936D8421227488F2CB086B9D11507;               // 0x0000   (0x0010)  
	int32_t                                            round_7_ADF6D5FC43C580BE17511AADDCE30278;                   // 0x0010   (0x0004)  
};

/// Struct /Game/GameStats/MatchResultAbilityCastCount.MatchResultAbilityCastCount
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMatchResultAbilityCastCount
{ 
	TMap<EAresItemSlot, int32_t>                       abilityCounts_20_CB6936D8421227488F2CB086B9D11507;          // 0x0000   (0x0050)  
	FString                                            subject_15_88E168344FF47E2293741C989E105357;                // 0x0050   (0x0010)  
};

/// Struct /Game/GameStats/MatchResultRoundPenaltyEvent.MatchResultRoundPenaltyEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMatchResultRoundPenaltyEvent
{ 
	int32_t                                            RoundNum_23_C23A08A8434C2B9B7312D6B95D362861;               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Subject_35_B672429647AE143BDBDA498327D8E3A0;                // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMatchResultAbilityCastCountObject_C) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FMatchResultDamageEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMatchResultPlayerEconomy) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMatchResultMapLocation) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMatchResultPlayerLocation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMatchResultBombPlantEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMatchResultPlayerRoundScores) == 0x0054); // 84 bytes (0x000000 - 0x000054)
static_assert(sizeof(FMatchResultDamageInfo) == 0x0021); // 33 bytes (0x000000 - 0x000021)
static_assert(sizeof(FMatchResultPlayerKillEvent) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FMatchResultBombDefuseEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMatchResultRoundEconomy) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMatchResultAbilityInfo) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FMatchResultRoundStayedInSpawnEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMatchResultRoundCeremony) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMatchResultAbilityCastCount) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMatchResultRoundPenaltyEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UMatchResultAbilityCastCountObject_C, Subject) == 0x0040);
static_assert(offsetof(FMatchResultDamageEvent, attacker_10_530D54CA48FA7B48495579BB0F92E80B) == 0x0008);
static_assert(offsetof(FMatchResultDamageEvent, victim_9_3BA971BB4EEF730E63DF46B3F6A9D355) == 0x0018);
static_assert(offsetof(FMatchResultPlayerEconomy, Subject_15_9CA928D44A801927BFAD0794F8AA1C7F) == 0x0000);
static_assert(offsetof(FMatchResultPlayerEconomy, Weapon_13_55387BEC4CD6928999F6D48620484554) == 0x0018);
static_assert(offsetof(FMatchResultPlayerEconomy, Armor_12_A949E66E47F370772865CEB9E1934A41) == 0x0028);
static_assert(offsetof(FMatchResultPlayerLocation, location_8_A9B1780A47FFCD05F8D1C98DA886EA2D) == 0x0000);
static_assert(offsetof(FMatchResultPlayerLocation, subject_6_89F6A32F4B8473E7969911A9A289064B) == 0x0010);
static_assert(offsetof(FMatchResultBombPlantEvent, planter_10_CBBD5D7F4E61B20F0C499EAFD3CAA313) == 0x0008);
static_assert(offsetof(FMatchResultBombPlantEvent, plantLocation_13_77A7C4C3432EF2ED86E4E8B35B458AC0) == 0x0018);
static_assert(offsetof(FMatchResultBombPlantEvent, playerLocations_20_C05C692C4DCB734A4CA668AD4B47F435) == 0x0028);
static_assert(offsetof(FMatchResultBombPlantEvent, plantSite_25_2A5B51B74DA537A1AA2B5A97161EB826) == 0x0038);
static_assert(offsetof(FMatchResultPlayerRoundScores, PlayerScores_4_E5741E1746A48B4BE359D28202741B2E) == 0x0000);
static_assert(offsetof(FMatchResultDamageInfo, damageType_6_58B77E7C49F99324A2F0DEA4FB8EE2C6) == 0x0000);
static_assert(offsetof(FMatchResultDamageInfo, damageItem_8_3AED95914326522481988995EE27FE53) == 0x0010);
static_assert(offsetof(FMatchResultPlayerKillEvent, killer_10_1D83512740BB059095027EB9FEA7BF08) == 0x0000);
static_assert(offsetof(FMatchResultPlayerKillEvent, victim_11_B2E03FE841188A91B07D2BAC206FEA5A) == 0x0010);
static_assert(offsetof(FMatchResultPlayerKillEvent, assistants_15_D6E0069C451067811525719D1898C41B) == 0x0020);
static_assert(offsetof(FMatchResultPlayerKillEvent, victimLocation_22_458A221F42643DF752E5508A28C1080F) == 0x003C);
static_assert(offsetof(FMatchResultPlayerKillEvent, playerLocations_25_17996FD44BE99D1ED476A29835AE5E86) == 0x0048);
static_assert(offsetof(FMatchResultPlayerKillEvent, finishingDamage_29_FB25ABEE4AB9897002B4E5B7CE833A3F) == 0x0058);
static_assert(offsetof(FMatchResultBombDefuseEvent, defuser_7_28973B444CF82F918F9DCAAA2CA05F14) == 0x0008);
static_assert(offsetof(FMatchResultBombDefuseEvent, defuseLocation_14_E101DACC412B55CF88A4A2B09DEAAD9F) == 0x0018);
static_assert(offsetof(FMatchResultBombDefuseEvent, playerLocations_21_E9F3169444A22D8C043C88866BC6394D) == 0x0028);
static_assert(offsetof(FMatchResultRoundEconomy, playerEconomies_3_CB6936D8421227488F2CB086B9D11507) == 0x0000);
static_assert(offsetof(FMatchResultAbilityInfo, AbilitySlot_12_711C2843408D9EE7418E4988A8640032) == 0x0000);
static_assert(offsetof(FMatchResultAbilityInfo, AbilityType_25_711F19E74BFCB1338F0B40ABFBB74391) == 0x0004);
static_assert(offsetof(FMatchResultAbilityInfo, Subject_24_7334C8224D58E0CF389CF5BA0E0AE50E) == 0x0018);
static_assert(offsetof(FMatchResultRoundStayedInSpawnEvent, Subject_5_198527AF4711E59A1730A5AE810B019F) == 0x0008);
static_assert(offsetof(FMatchResultRoundCeremony, ceremony_11_CB6936D8421227488F2CB086B9D11507) == 0x0000);
static_assert(offsetof(FMatchResultAbilityCastCount, abilityCounts_20_CB6936D8421227488F2CB086B9D11507) == 0x0000);
static_assert(offsetof(FMatchResultAbilityCastCount, subject_15_88E168344FF47E2293741C989E105357) == 0x0050);
static_assert(offsetof(FMatchResultRoundPenaltyEvent, Subject_35_B672429647AE143BDBDA498327D8E3A0) == 0x0008);
