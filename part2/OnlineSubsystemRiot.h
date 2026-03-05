
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemRiot.OnlineIdentityRiotSettings
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineIdentityRiotSettings : public UDeveloperSettings
{ 
public:
	TArray<FString>                                    ExtraRSOScopes;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPRiotGamesApiConfig
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FRGIOPRiotGamesApiConfig
{ 
	FString                                            ProductId;                                                  // 0x0000   (0x0010)  
	FString                                            Publisher;                                                  // 0x0010   (0x0010)  
	FString                                            RsoClientId;                                                // 0x0020   (0x0010)  
	FString                                            PatchlineId;                                                // 0x0030   (0x0010)  
	FString                                            DefaultRegion;                                              // 0x0040   (0x0010)  
	FString                                            DefaultLocale;                                              // 0x0050   (0x0010)  
	FString                                            ClientConfigUrl;                                            // 0x0060   (0x0010)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPConsoleClientConfigEnvironments
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRGIOPConsoleClientConfigEnvironments
{ 
	FString                                            PS5DefaultEnvironment;                                      // 0x0000   (0x0010)  
	TMap<FString, FString>                             PS5ClientConfigUrls;                                        // 0x0010   (0x0050)  
	TMap<FString, FString>                             XSXClientConfigUrls;                                        // 0x0060   (0x0050)  
};

/// Class /Script/OnlineSubsystemRiot.RGIOPRiotGamesApiSettings
/// Size: 0x0190 (400 bytes) (0x000048 - 0x000190) align 8 MaxSize: 0x0190
class URGIOPRiotGamesApiSettings : public UDeveloperSettings
{ 
public:
	TMap<FString, FRGIOPRiotGamesApiConfig>            Configurations;                                             // 0x0048   (0x0050)  
	FString                                            ProductId;                                                  // 0x0098   (0x0010)  
	FString                                            AppName;                                                    // 0x00A8   (0x0010)  
	FString                                            EditorPatchlineId;                                          // 0x00B8   (0x0010)  
	FString                                            DefaultPatchlineId;                                         // 0x00C8   (0x0010)  
	FRGIOPConsoleClientConfigEnvironments              ConsoleClientConfigEnvironments;                            // 0x00D8   (0x00B0)  
	bool                                               bShouldUseRiotClientSettings;                               // 0x0188   (0x0001)  
	bool                                               bAutoSetAlias;                                              // 0x0189   (0x0001)  
	bool                                               bAutoAcceptEula;                                            // 0x018A   (0x0001)  
	bool                                               bReserveAccountsFromSourceControl;                          // 0x018B   (0x0001)  
	bool                                               bPersistLogin;                                              // 0x018C   (0x0001)  
	bool                                               bEnableDebugLogging;                                        // 0x018D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x018E   (0x0002)  MISSED
};

/// Class /Script/OnlineSubsystemRiot.RGIOPRiotGamesApiEditorSettings
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class URGIOPRiotGamesApiEditorSettings : public UDeveloperSettings
{ 
public:
	FString                                            EditorPatchlineOverride;                                    // 0x0048   (0x0010)  
	bool                                               bShouldUseDevRiotClient;                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemRiot.RGIOPRiotGamesApiEditorSettings.GetPatchlineOptions
	// TArray<FString> GetPatchlineOptions();                                                                                   // [0x541df30] Final|Native|Public|Const 
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPRestrictionData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRGIOPRestrictionData
{ 
	int64_t                                            ExpirationMillis;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPRestrictionClaim
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRGIOPRestrictionClaim
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FString                                            scope;                                                      // 0x0010   (0x0010)  
	FString                                            Reason;                                                     // 0x0020   (0x0010)  
	FRGIOPRestrictionData                              Data;                                                       // 0x0030   (0x0008)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPBanClaims
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRGIOPBanClaims
{ 
	TArray<FRGIOPRestrictionClaim>                     Restrictions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPUserAccount
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRGIOPUserAccount
{ 
	FString                                            GameName;                                                   // 0x0000   (0x0010)  
	FString                                            Tagline;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/OnlineSubsystemRiot.RGIOPUserInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRGIOPUserInfo
{ 
	bool                                               bAccountVerified;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FRGIOPUserAccount                                  Account;                                                    // 0x0008   (0x0020)  
	int32_t                                            Age;                                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            Country;                                                    // 0x0030   (0x0010)  
	int64_t                                            IssuedAt;                                                   // 0x0040   (0x0008)  
	FString                                            Puuid;                                                      // 0x0048   (0x0010)  
	FRGIOPBanClaims                                    BanClaims;                                                  // 0x0058   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UOnlineIdentityRiotSettings) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FRGIOPRiotGamesApiConfig) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRGIOPConsoleClientConfigEnvironments) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(URGIOPRiotGamesApiSettings) == 0x0190); // 400 bytes (0x000048 - 0x000190)
static_assert(sizeof(URGIOPRiotGamesApiEditorSettings) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(FRGIOPRestrictionData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRGIOPRestrictionClaim) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRGIOPBanClaims) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRGIOPUserAccount) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRGIOPUserInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UOnlineIdentityRiotSettings, ExtraRSOScopes) == 0x0048);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, ProductId) == 0x0000);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, Publisher) == 0x0010);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, RsoClientId) == 0x0020);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, PatchlineId) == 0x0030);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, DefaultRegion) == 0x0040);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, DefaultLocale) == 0x0050);
static_assert(offsetof(FRGIOPRiotGamesApiConfig, ClientConfigUrl) == 0x0060);
static_assert(offsetof(FRGIOPConsoleClientConfigEnvironments, PS5DefaultEnvironment) == 0x0000);
static_assert(offsetof(FRGIOPConsoleClientConfigEnvironments, PS5ClientConfigUrls) == 0x0010);
static_assert(offsetof(FRGIOPConsoleClientConfigEnvironments, XSXClientConfigUrls) == 0x0060);
static_assert(offsetof(URGIOPRiotGamesApiSettings, Configurations) == 0x0048);
static_assert(offsetof(URGIOPRiotGamesApiSettings, ProductId) == 0x0098);
static_assert(offsetof(URGIOPRiotGamesApiSettings, AppName) == 0x00A8);
static_assert(offsetof(URGIOPRiotGamesApiSettings, EditorPatchlineId) == 0x00B8);
static_assert(offsetof(URGIOPRiotGamesApiSettings, DefaultPatchlineId) == 0x00C8);
static_assert(offsetof(URGIOPRiotGamesApiSettings, ConsoleClientConfigEnvironments) == 0x00D8);
static_assert(offsetof(URGIOPRiotGamesApiEditorSettings, EditorPatchlineOverride) == 0x0048);
static_assert(offsetof(FRGIOPRestrictionClaim, Type) == 0x0000);
static_assert(offsetof(FRGIOPRestrictionClaim, scope) == 0x0010);
static_assert(offsetof(FRGIOPRestrictionClaim, Reason) == 0x0020);
static_assert(offsetof(FRGIOPRestrictionClaim, Data) == 0x0030);
static_assert(offsetof(FRGIOPBanClaims, Restrictions) == 0x0000);
static_assert(offsetof(FRGIOPUserAccount, GameName) == 0x0000);
static_assert(offsetof(FRGIOPUserAccount, Tagline) == 0x0010);
static_assert(offsetof(FRGIOPUserInfo, Account) == 0x0008);
static_assert(offsetof(FRGIOPUserInfo, Country) == 0x0030);
static_assert(offsetof(FRGIOPUserInfo, Puuid) == 0x0048);
static_assert(offsetof(FRGIOPUserInfo, BanClaims) == 0x0058);
