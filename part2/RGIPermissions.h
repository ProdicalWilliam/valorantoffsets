
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: RGISocialShared

#pragma pack(push, 0x1)

/// Enum /Script/RGIPermissions.ERGIPermissionsUsersCommunicationPermissionsResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsUsersCommunicationPermissionsResponseErrors : uint8_t
{
	ERGIPermissionsUsersCommunicationPermissionsResponseErrors__RiotGamesApiUpdateRequired = 0,
	ERGIPermissionsUsersCommunicationPermissionsResponseErrors__NotAvailable         = 1,
	ERGIPermissionsUsersCommunicationPermissionsResponseErrors__PlatformUserNotConnected = 2,
	ERGIPermissionsUsersCommunicationPermissionsResponseErrors__InternalError        = 3
};

/// Enum /Script/RGIPermissions.ERGIPermissionsCommunicationPermissionState
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsCommunicationPermissionState : uint8_t
{
	ERGIPermissionsCommunicationPermissionState__NotAllowed                          = 0,
	ERGIPermissionsCommunicationPermissionState__Allowed                             = 1
};

/// Enum /Script/RGIPermissions.ERGIPermissionsCommunicationPermissionType
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsCommunicationPermissionType : uint8_t
{
	ERGIPermissionsCommunicationPermissionType__Unknown                              = 0,
	ERGIPermissionsCommunicationPermissionType__Text                                 = 1,
	ERGIPermissionsCommunicationPermissionType__Voice                                = 2
};

/// Enum /Script/RGIPermissions.ERGIPermissionsCrossPlayPermissionsPartyCompatibility
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsCrossPlayPermissionsPartyCompatibility : uint8_t
{
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__Compatible                = 0,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__NewMemberDoesNotSupportCrossPlay = 1,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__TargetPartyDoesNotSupportCrossPlay = 2,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__Invalid                   = 3,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__PartyFull                 = 4,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility__MissingData               = 5
};

/// Enum /Script/RGIPermissions.ERGIPermissionsCrossPlayPermissionsPlayerCompatibility
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsCrossPlayPermissionsPlayerCompatibility : uint8_t
{
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility__Compatible               = 0,
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility__LocalPlayerCrossPlayOff  = 1,
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility__TargetPlayerCrossPlayOff = 2,
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility__Invalid                  = 3
};

/// Enum /Script/RGIPermissions.ERGIPermissionsUsersCommunicationPermissionsDenyReasons
/// Size: 0x01 (1 bytes)
enum class ERGIPermissionsUsersCommunicationPermissionsDenyReasons : uint8_t
{
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__Unknown                 = 0,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__NotAllowed              = 1,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__MissingPrivilege        = 2,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__PrivilegeRestrictsTarget = 3,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__BlockListRestrictsTarget = 4,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__MuteListRestrictsTarget = 5,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__PrivacySettingRestrictsTarget = 6,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons__CrossNetworkUserMustBeFriend = 7
};

/// Struct /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissionDetails
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRGIPermissionsLoggedPlayerPermissionDetails
{ 
	FString                                            PermissionId;                                               // 0x0000   (0x0010)  
	bool                                               bHasPermission;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1F];                                      // 0x0011   (0x001F)  MISSED
};

/// Struct /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRGIPermissionsLoggedPlayerPermissions
{ 
	TArray<FRGIPermissionsLoggedPlayerPermissionDetails> Permissions;                                              // 0x0000   (0x0010)  
};

/// Class /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class URGIPermissionsLoggedPlayerPermissionsViewModel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(16,5212) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x0070   (0x0010)  
	FRGIPermissionsLoggedPlayerPermissions             LoggedPlayerPermissions;                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.SetLoggedPlayerPermissions
	// void SetLoggedPlayerPermissions(FRGIPermissionsLoggedPlayerPermissions& InLoggedPlayerPermissions);                      // [0x520dcf0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.SetCrossPlatformInteractionsPermission
	// void SetCrossPlatformInteractionsPermission(bool bNewCrossPlatformInteractionsPermission);                               // [0x520da60] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.GetLoggedPlayerPermissions
	// FRGIPermissionsLoggedPlayerPermissions GetLoggedPlayerPermissions();                                                     // [0x520db60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIPermissions.RGIPermissionsMockedData
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class URGIPermissionsMockedData : public UPrimaryDataAsset
{ 
public:
	FRGIPermissionsLoggedPlayerPermissions             LoggedPlayerPermissions;                                    // 0x0038   (0x0010)  
};

/// Class /Script/RGIPermissions.RGIPermissionsMockedDataStore
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class URGIPermissionsMockedDataStore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	FRGIPermissionsLoggedPlayerPermissions             LoggedPlayerPermissions;                                    // 0x0050   (0x0010)  
};

/// Class /Script/RGIPermissions.RGIPermissionsUserSettings
/// Size: 0x0080 (128 bytes) (0x000048 - 0x000080) align 8 MaxSize: 0x0080
class URGIPermissionsUserSettings : public UDeveloperSettings
{ 
public:
	bool                                               bUseMockedData;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TWeakObjectPtr<class URGIPermissionsMockedData*>   MockedData;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0058   (0x0028)  MISSED
};

/// Class /Script/RGIPermissions.RGIPermissionsDataStore
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIPermissionsDataStore : public UInterface
{ 
public:
};

/// Class /Script/RGIPermissions.RGIPermissionsNoOpDataStore
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class URGIPermissionsNoOpDataStore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/RGIPermissions.RGIPermissionsSubsystem
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class URGIPermissionsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(16,5213) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x0058   (0x0010)  
	class URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel;                       // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0070   (0x0018)  MISSED


	/// Functions
	// Function /Script/RGIPermissions.RGIPermissionsSubsystem.UpdateCrossPlatformInteractionsPermission
	// void UpdateCrossPlatformInteractionsPermission();                                                                        // [0x5210590] Native|Public|BlueprintCallable 
	// Function /Script/RGIPermissions.RGIPermissionsSubsystem.SetCrossPlatformInteractionsPermission
	// void SetCrossPlatformInteractionsPermission(bool bNewCrossPlatformInteractionsPermission);                               // [0x5210030] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIPermissions.RGIPermissionsSubsystem.GetUsersCommunicationPermissions
	// void GetUsersCommunicationPermissions(TMap<FString, ERGISocialSharedPlatform>& Players, FDelegateProperty& OnSuccess, FDelegateProperty& OnError); // [0x5210290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIPermissions.RGIPermissionsSubsystem.GetLoggedPlayerPermissions
	// FRGIPermissionsLoggedPlayerPermissions GetLoggedPlayerPermissions();                                                     // [0x5210140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RGIPermissions.RGIPermissionsUsersCommunicationPermissions
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIPermissionsUsersCommunicationPermissions
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/RGIPermissions.RGIPermissionsCrossPlayPermissions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRGIPermissionsCrossPlayPermissions
{ 
	bool                                               bHasPlayerCrossPlayEnabled;                                 // 0x0000   (0x0001)  
	bool                                               bIsInParty;                                                 // 0x0001   (0x0001)  
	bool                                               bHasPartyCrossPlayEnabled;                                  // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0003   (0x0005)  MISSED
	TArray<ERGISocialSharedPlatform>                   PartyMemberPlatforms;                                       // 0x0008   (0x0010)  
	uint32_t                                           CurrentPartySize;                                           // 0x0018   (0x0004)  
	uint32_t                                           MaxPartySize;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/RGIPermissions.RGIPermissionsCrossPlayPermissionsCheckResult
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FRGIPermissionsCrossPlayPermissionsCheckResult
{ 
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility PlayerCompatibility;                                    // 0x0000   (0x0001)  
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility InviteCompatibility;                                     // 0x0001   (0x0001)  
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility JoinCompatibility;                                       // 0x0002   (0x0001)  
};

/// Struct /Script/RGIPermissions.RGIPermissionsCommunicationPermission
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRGIPermissionsCommunicationPermission
{ 
	ERGIPermissionsCommunicationPermissionState        Permission;                                                 // 0x0000   (0x0001)  
	ERGIPermissionsCommunicationPermissionType         Type;                                                       // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<ERGIPermissionsUsersCommunicationPermissionsDenyReasons> Reasons;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/RGIPermissions.RGIPermissionsUserCommunicationPermissions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRGIPermissionsUserCommunicationPermissions
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FRGIPermissionsLoggedPlayerPermissionDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRGIPermissionsLoggedPlayerPermissions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(URGIPermissionsLoggedPlayerPermissionsViewModel) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(URGIPermissionsMockedData) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(URGIPermissionsMockedDataStore) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(URGIPermissionsUserSettings) == 0x0080); // 128 bytes (0x000048 - 0x000080)
static_assert(sizeof(URGIPermissionsDataStore) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGIPermissionsNoOpDataStore) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(URGIPermissionsSubsystem) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FRGIPermissionsUsersCommunicationPermissions) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRGIPermissionsCrossPlayPermissions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRGIPermissionsCrossPlayPermissionsCheckResult) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FRGIPermissionsCommunicationPermission) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRGIPermissionsUserCommunicationPermissions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FRGIPermissionsLoggedPlayerPermissionDetails, PermissionId) == 0x0000);
static_assert(offsetof(FRGIPermissionsLoggedPlayerPermissions, Permissions) == 0x0000);
static_assert(offsetof(URGIPermissionsLoggedPlayerPermissionsViewModel, LoggedPlayerPermissions) == 0x0080);
static_assert(offsetof(URGIPermissionsMockedData, LoggedPlayerPermissions) == 0x0038);
static_assert(offsetof(URGIPermissionsMockedDataStore, LoggedPlayerPermissions) == 0x0050);
static_assert(offsetof(URGIPermissionsUserSettings, MockedData) == 0x0050);
static_assert(offsetof(URGIPermissionsSubsystem, LoggedPlayerPermissionsViewModel) == 0x0068);
static_assert(offsetof(FRGIPermissionsCrossPlayPermissions, PartyMemberPlatforms) == 0x0008);
static_assert(offsetof(FRGIPermissionsCrossPlayPermissionsCheckResult, PlayerCompatibility) == 0x0000);
static_assert(offsetof(FRGIPermissionsCrossPlayPermissionsCheckResult, InviteCompatibility) == 0x0001);
static_assert(offsetof(FRGIPermissionsCrossPlayPermissionsCheckResult, JoinCompatibility) == 0x0002);
static_assert(offsetof(FRGIPermissionsCommunicationPermission, Permission) == 0x0000);
static_assert(offsetof(FRGIPermissionsCommunicationPermission, Type) == 0x0001);
static_assert(offsetof(FRGIPermissionsCommunicationPermission, Reasons) == 0x0008);
