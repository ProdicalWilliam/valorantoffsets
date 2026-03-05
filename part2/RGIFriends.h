
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
/// dependency: RGIPermissions
/// dependency: RGISocialNotifications
/// dependency: RGISocialShared

#pragma pack(push, 0x1)

/// Enum /Script/RGIFriends.ERGIFriendsBlockPlayerResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsBlockPlayerResponseErrors : uint8_t
{
	ERGIFriendsBlockPlayerResponseErrors__NoPuuidProvided                            = 0,
	ERGIFriendsBlockPlayerResponseErrors__MissingPuuidOrName                         = 1,
	ERGIFriendsBlockPlayerResponseErrors__AlreadyBlocked                             = 2,
	ERGIFriendsBlockPlayerResponseErrors__TargetingSelf                              = 3,
	ERGIFriendsBlockPlayerResponseErrors__InternalError                              = 4
};

/// Enum /Script/RGIFriends.ERGIFriendsDeclineRequestErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsDeclineRequestErrors : uint8_t
{
	ERGIFriendsDeclineRequestErrors__RequestNotFound                                 = 0,
	ERGIFriendsDeclineRequestErrors__InternalError                                   = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsRequestResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsRequestResponseErrors : uint8_t
{
	ERGIFriendsRequestResponseErrors__NoGameNameAndTagLineProvided                   = 0,
	ERGIFriendsRequestResponseErrors__InvalidNameTagFormatting                       = 1,
	ERGIFriendsRequestResponseErrors__RequestSentToFriend                            = 2,
	ERGIFriendsRequestResponseErrors__RequestSentToBlockedPlayer                     = 3,
	ERGIFriendsRequestResponseErrors__RequestSentToBlockingPlayer                    = 4,
	ERGIFriendsRequestResponseErrors__RequestSentToSelf                              = 5,
	ERGIFriendsRequestResponseErrors__RequestedPlayerNotFound                        = 6,
	ERGIFriendsRequestResponseErrors__FriendListFull                                 = 7,
	ERGIFriendsRequestResponseErrors__MaxOutgoingInvites                             = 8,
	ERGIFriendsRequestResponseErrors__MaxIncomingInvites                             = 9,
	ERGIFriendsRequestResponseErrors__InternalError                                  = 10
};

/// Enum /Script/RGIFriends.ERGIFriendsPlatform
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsPlatform : uint8_t
{
	ERGIFriendsPlatform__FirstPartyA                                                 = 0,
	ERGIFriendsPlatform__FirstPartyB                                                 = 1,
	ERGIFriendsPlatform__FirstPartyC                                                 = 2,
	ERGIFriendsPlatform__NotFirstParty                                               = 3,
	ERGIFriendsPlatform__Windows                                                     = 4,
	ERGIFriendsPlatform__Mac                                                         = 5,
	ERGIFriendsPlatform__Ios                                                         = 6,
	ERGIFriendsPlatform__Android                                                     = 7,
	ERGIFriendsPlatform__Web                                                         = 8,
	ERGIFriendsPlatform__Riot                                                        = 9,
	ERGIFriendsPlatform__Unknown                                                     = 10
};

/// Enum /Script/RGIFriends.ERGIFriendRequestType
/// Size: 0x01 (1 bytes)
enum class ERGIFriendRequestType : uint8_t
{
	ERGIFriendRequestType__Inbound                                                   = 0,
	ERGIFriendRequestType__Outbound                                                  = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsPermissionRequestResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsPermissionRequestResponseErrors : uint8_t
{
	ERGIFriendsPermissionRequestResponseErrors__PermissionIdNotFound                 = 0,
	ERGIFriendsPermissionRequestResponseErrors__InternalError                        = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsRemoveFriendErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsRemoveFriendErrors : uint8_t
{
	ERGIFriendsRemoveFriendErrors__FriendNotFound                                    = 0,
	ERGIFriendsRemoveFriendErrors__InternalError                                     = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsSetCrossPlatformSocialPermissionErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsSetCrossPlatformSocialPermissionErrors : uint8_t
{
	ERGIFriendsSetCrossPlatformSocialPermissionErrors__InternalError                 = 0
};

/// Enum /Script/RGIFriends.ERGIFriendsUnblockPlayerResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsUnblockPlayerResponseErrors : uint8_t
{
	ERGIFriendsUnblockPlayerResponseErrors__NoPuuidProvided                          = 0,
	ERGIFriendsUnblockPlayerResponseErrors__NotBlocked                               = 1,
	ERGIFriendsUnblockPlayerResponseErrors__TargetingSelf                            = 2,
	ERGIFriendsUnblockPlayerResponseErrors__InternalError                            = 3
};

/// Enum /Script/RGIFriends.ERGIFriendsUpdateFriendsResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsUpdateFriendsResponseErrors : uint8_t
{
	ERGIFriendsUpdateFriendsResponseErrors__FriendGroupEmpty                         = 0,
	ERGIFriendsUpdateFriendsResponseErrors__MetaGroupName                            = 1,
	ERGIFriendsUpdateFriendsResponseErrors__FriendNotFound                           = 2,
	ERGIFriendsUpdateFriendsResponseErrors__StatusAlreadyTrue                        = 3,
	ERGIFriendsUpdateFriendsResponseErrors__InternalError                            = 4
};

/// Enum /Script/RGIFriends.ERGIFriendsUpdatePresenceErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsUpdatePresenceErrors : uint8_t
{
	ERGIFriendsUpdatePresenceErrors__NoPlayerPUUID                                   = 0,
	ERGIFriendsUpdatePresenceErrors__InternalError                                   = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsDisplayFirstPartyProfileResponseErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsDisplayFirstPartyProfileResponseErrors : uint8_t
{
	ERGIFriendsDisplayFirstPartyProfileResponseErrors__FirstPartyAPINotReady         = 0,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors__UserNotLoggedIn               = 1,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors__FirstPartyProfileNotFound     = 2,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors__InvalidIdFormat               = 3,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors__InternalError                 = 4
};

/// Enum /Script/RGIFriends.ERGIFriendsFriendStatus
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsFriendStatus : uint8_t
{
	ERGIFriendsFriendStatus__Chat                                                    = 0,
	ERGIFriendsFriendStatus__Away                                                    = 1,
	ERGIFriendsFriendStatus__Dnd                                                     = 2,
	ERGIFriendsFriendStatus__FirstPartyOnline                                        = 3,
	ERGIFriendsFriendStatus__FirstPartyBlocked                                       = 4,
	ERGIFriendsFriendStatus__DiscordOnline                                           = 5,
	ERGIFriendsFriendStatus__Offline                                                 = 6
};

/// Enum /Script/RGIFriends.ERGIFriendsPresencesPartyStatus
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsPresencesPartyStatus : uint8_t
{
	ERGIFriendsPresencesPartyStatus__Open                                            = 0,
	ERGIFriendsPresencesPartyStatus__Closed                                          = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsPresencesPartyMemberRole
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsPresencesPartyMemberRole : uint8_t
{
	ERGIFriendsPresencesPartyMemberRole__Member                                      = 0,
	ERGIFriendsPresencesPartyMemberRole__Leader                                      = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsListInviteType
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsListInviteType : uint8_t
{
	ERGIFriendsListInviteType__Incoming                                              = 0,
	ERGIFriendsListInviteType__Outgoing                                              = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsListInviteState
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsListInviteState : uint8_t
{
	ERGIFriendsListInviteState__Valid                                                = 0,
	ERGIFriendsListInviteState__Cancelled                                            = 1,
	ERGIFriendsListInviteState__Expired                                              = 2
};

/// Enum /Script/RGIFriends.FRGIFriendsOnSetPrivateDataForLocalPlayerErrors
/// Size: 0x01 (1 bytes)
enum class FRGIFriendsOnSetPrivateDataForLocalPlayerErrors : uint8_t
{
	FRGIFriendsOnSetPrivateDataForLocalPlayerErrors__NoLoggedPlayer                  = 0,
	FRGIFriendsOnSetPrivateDataForLocalPlayerErrors__InternalError                   = 1
};

/// Enum /Script/RGIFriends.ERGIFriendsPlatformMask
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsPlatformMask : uint8_t
{
	ERGIFriendsPlatformMask__None                                                    = 0,
	ERGIFriendsPlatformMask__FirstPartyA                                             = 1,
	ERGIFriendsPlatformMask__FirstPartyB                                             = 2,
	ERGIFriendsPlatformMask__FirstPartyC                                             = 4
};

/// Enum /Script/RGIFriends.ERGIFriendsActivityProgressType
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsActivityProgressType : uint8_t
{
	ERGIFriendsActivityProgressType__StartTime                                       = 0,
	ERGIFriendsActivityProgressType__EndTime                                         = 1,
	ERGIFriendsActivityProgressType__Custom                                          = 2
};

/// Enum /Script/RGIFriends.ERGIFriendsLinkDiscordAccountErrors
/// Size: 0x01 (1 bytes)
enum class ERGIFriendsLinkDiscordAccountErrors : uint8_t
{
	ERGIFriendsLinkDiscordAccountErrors__AlreadyLinked                               = 0,
	ERGIFriendsLinkDiscordAccountErrors__Disabled                                    = 1,
	ERGIFriendsLinkDiscordAccountErrors__InternalError                               = 2,
	ERGIFriendsLinkDiscordAccountErrors__RateLimited                                 = 3
};

/// Class /Script/RGIFriends.RGIFriendsAddFriendModalViewModel
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align 8 MaxSize: 0x0100
class URGIFriendsAddFriendModalViewModel : public URGISocialSharedModalViewModelBase
{ 
public:
	class URGIFriendsSubsystem*                        FriendsSubsystem;                                           // 0x00D8   (0x0008)  
	FText                                              AddFriendInput;                                             // 0x00E0   (0x0018)  
	ERGIFriendsRequestResponseErrors                   ErrorResult;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsAddFriendModalViewModel.SetInputText
	// void SetInputText(FText& InText);                                                                                        // [0x5213ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGIFriends.RGIFriendsCollectionViewModel
/// Size: 0x00E8 (232 bytes) (0x000070 - 0x0000E8) align 8 MaxSize: 0x00E8
class URGIFriendsCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class URGIFriendsPlayerViewModel*>          Friends;                                                    // 0x0070   (0x0010)  
	class URGIFriendsPlayerViewModel*                  SelectedFriendsPlayerViewModel;                             // 0x0080   (0x0008)  
	SDK_UNDEFINED(16,5215) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x0088   (0x0010)  
	TMap<FString, class URGIFriendsPlayerViewModel*>   FriendMap;                                                  // 0x0098   (0x0050)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(class UGameInstance* GameInstance);                                                             // [0x51fa250] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsCollectionViewModel.HandleFriendsUpdated
	// void HandleFriendsUpdated(FRGIFriendsPlayers& FriendList);                                                               // [0x52145b0] Final|Native|Private|HasOutParms 
	// Function /Script/RGIFriends.RGIFriendsCollectionViewModel.GetSelectedFriendsPlayerViewModel
	// class URGIFriendsPlayerViewModel* GetSelectedFriendsPlayerViewModel();                                                   // [0x5214730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsCollectionViewModel.GetFriendByPuuid
	// class URGIFriendsPlayerViewModel* GetFriendByPuuid(FString Puuid);                                                       // [0x5214ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsCollectionViewModel.AddFriendToCollection
	// class URGIFriendsPlayerViewModel* AddFriendToCollection(class URGIFriendsPlayer* FriendData);                            // [0x5214750] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel
/// Size: 0x00B8 (184 bytes) (0x000070 - 0x0000B8) align 8 MaxSize: 0x00B8
class URGIFriendsFriendRequestCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class URGIFriendsFriendRequestViewModel*>   InboundFriendRequestCollection;                             // 0x0070   (0x0010)  
	TArray<class URGIFriendsFriendRequestViewModel*>   OutboundFriendRequestCollection;                            // 0x0080   (0x0010)  
	int32_t                                            InboundFriendRequestCount;                                  // 0x0090   (0x0004)  
	int32_t                                            OutboundFriendRequestCount;                                 // 0x0094   (0x0004)  
	SDK_UNDEFINED(16,5216) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x0098   (0x0010)  
	class URGISocialSharedModalManagerViewModel*       ModalManagerViewModel;                                      // 0x00A8   (0x0008)  
	class UGameInstance*                               CachedGameInstance;                                         // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel.MakeContext
	// FMVVMViewModelContext MakeContext();                                                                                     // [0x5215530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetOutboundFriendRequestCollection
	// TArray<URGIFriendsFriendRequestViewModel*> GetOutboundFriendRequestCollection();                                         // [0x52152f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetInboundFriendRequestViewModelAtIndex
	// class URGIFriendsFriendRequestViewModel* GetInboundFriendRequestViewModelAtIndex(int32_t Index);                         // [0x5215090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetInboundFriendRequestCollection
	// TArray<URGIFriendsFriendRequestViewModel*> GetInboundFriendRequestCollection();                                          // [0x5215410] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetFriendRequestViewModel
	// class URGIFriendsFriendRequestViewModel* GetFriendRequestViewModel(FString Puuid);                                       // [0x52151b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIFriends.RGIFriendsFriendRequestViewModel
/// Size: 0x00C8 (200 bytes) (0x000070 - 0x0000C8) align 8 MaxSize: 0x00C8
class URGIFriendsFriendRequestViewModel : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0070   (0x0008)  MISSED
	FString                                            Puuid;                                                      // 0x0078   (0x0010)  
	FString                                            GameName;                                                   // 0x0088   (0x0010)  
	FString                                            GameTag;                                                    // 0x0098   (0x0010)  
	ERGIFriendRequestType                              RequestType;                                                // 0x00A8   (0x0001)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	SDK_UNDEFINED(16,5217) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x00B0   (0x0010)  
	class URGIFriendsFriendRequestCollectionViewModel* OwningCollectionViewModel;                                  // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetRequestType
	// ERGIFriendRequestType GetRequestType();                                                                                  // [0x5215e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetPuuid
	// FString GetPuuid();                                                                                                      // [0x5216050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetPlatform
	// ERGIFriendsPlatform GetPlatform();                                                                                       // [0x5215e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetGameTag
	// FString GetGameTag();                                                                                                    // [0x51fc770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetGameName
	// FString GetGameName();                                                                                                   // [0x5215f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.GetFullRiotID
	// FString GetFullRiotID();                                                                                                 // [0x5215eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.DeclineFriendRequest
	// void DeclineFriendRequest(FDelegateProperty OnSuccess, FDelegateProperty OnError);                                       // [0x5215a10] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/RGIFriends.RGIFriendsFriendRequestViewModel.AcceptFriendRequest
	// void AcceptFriendRequest(FDelegateProperty OnSuccess, FDelegateProperty OnError);                                        // [0x5215c40] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/RGIFriends.RGIFriendsPlayerActionModalViewModel
/// Size: 0x00F0 (240 bytes) (0x0000D8 - 0x0000F0) align 8 MaxSize: 0x00F0
class URGIFriendsPlayerActionModalViewModel : public URGISocialSharedModalViewModelBase
{ 
public:
	FString                                            PlayerPuuid;                                                // 0x00D8   (0x0010)  
	ERGIFriendsFriendStatus                            PlayerStatus;                                               // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/RGIFriends.RGIFriendsPartyMember
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRGIFriendsPartyMember
{ 
	FString                                            Puuid;                                                      // 0x0000   (0x0010)  
	int32_t                                            TimeJoined;                                                 // 0x0010   (0x0004)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RGIFriends.RGIFriendsParty
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRGIFriendsParty
{ 
	FString                                            PartyId;                                                    // 0x0000   (0x0010)  
	FString                                            Join;                                                       // 0x0010   (0x0010)  
	TArray<FString>                                    Actions;                                                    // 0x0020   (0x0010)  
	FText                                              Title;                                                      // 0x0030   (0x0018)  
	int32_t                                            TimeCreated;                                                // 0x0048   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x004C   (0x0004)  
	int32_t                                            CurrentPartySize;                                           // 0x0050   (0x0004)  
	ERGIFriendsPresencesPartyStatus                    Status;                                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	TArray<FRGIFriendsPartyMember>                     Members;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/RGIFriends.RGIFriendsPlayerViewModel
/// Size: 0x0208 (520 bytes) (0x000070 - 0x000208) align 8 MaxSize: 0x0208
class URGIFriendsPlayerViewModel : public UMVVMViewModelBase
{ 
public:
	FString                                            Puuid;                                                      // 0x0070   (0x0010)  
	FString                                            GameName;                                                   // 0x0080   (0x0010)  
	FString                                            PreferredDisplayName;                                       // 0x0090   (0x0010)  
	FString                                            GameTag;                                                    // 0x00A0   (0x0010)  
	FString                                            Product;                                                    // 0x00B0   (0x0010)  
	FString                                            ProductPresenceName;                                        // 0x00C0   (0x0010)  
	FString                                            ProductFolderName;                                          // 0x00D0   (0x0010)  
	FString                                            VoiceSessionId;                                             // 0x00E0   (0x0010)  
	FString                                            Note;                                                       // 0x00F0   (0x0010)  
	FString                                            FirstPartyAAlias;                                           // 0x0100   (0x0010)  
	FString                                            FirstPartyBAlias;                                           // 0x0110   (0x0010)  
	FString                                            FirstPartyBSuffix;                                          // 0x0120   (0x0010)  
	FString                                            Message;                                                    // 0x0130   (0x0010)  
	bool                                               bIsSelectedFriend;                                          // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	FString                                            AccountRank;                                                // 0x0148   (0x0010)  
	ERGIFriendsFriendStatus                            Status;                                                     // 0x0158   (0x0001)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x0159   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x015A   (0x0002)  MISSED
	int32_t                                            VisiblePlatforms;                                           // 0x015C   (0x0004)  
	FString                                            PresenceState;                                              // 0x0160   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0170   (0x0020)  MISSED
	bool                                               bIsDiscordFriend;                                           // 0x0190   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FString                                            DiscordDisplayName;                                         // 0x0198   (0x0010)  
	bool                                               bIsRiotFriend;                                              // 0x01A8   (0x0001)  
	bool                                               bIsActivePlatformFriend;                                    // 0x01A9   (0x0001)  
	bool                                               bIsRiotBlocked;                                             // 0x01AA   (0x0001)  
	bool                                               bIsActivePlatformBlocked;                                   // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<FRGIFriendsParty>                           Parties;                                                    // 0x01B0   (0x0010)  
	class URGIFriendsPlayer*                           Player;                                                     // 0x01C0   (0x0008)  
	SDK_UNDEFINED(16,5218) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData05_7[0x30];                                      // 0x01D8   (0x0030)  MISSED


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.SetPresenceState
	// void SetPresenceState(FString Value);                                                                                    // [0x5217fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.SetIsSelectedFriend
	// void SetIsSelectedFriend(bool InIsSelectedFriend);                                                                       // [0x5217e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.SetAccountRank
	// void SetAccountRank(FString Value);                                                                                      // [0x5217c40] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.IsSelectedFriend
	// bool IsSelectedFriend();                                                                                                 // [0x5217fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.IsPlayingSameProduct
	// bool IsPlayingSameProduct();                                                                                             // [0x5217c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.IsDiscordFriend
	// bool IsDiscordFriend();                                                                                                  // [0x5218360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetStatus
	// ERGIFriendsFriendStatus GetStatus();                                                                                     // [0x52183d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetPuuid
	// FString GetPuuid();                                                                                                      // [0x52187d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetProduct
	// FString GetProduct();                                                                                                    // [0x5218570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetPresenceState
	// FString GetPresenceState();                                                                                              // [0x5218130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetPreferredDisplayName
	// FString GetPreferredDisplayName();                                                                                       // [0x5218440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetGameName
	// FString GetGameName();                                                                                                   // [0x52186a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetDiscordDisplayName
	// FString GetDiscordDisplayName();                                                                                         // [0x5218230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayerViewModel.GetAccountRank
	// FString GetAccountRank();                                                                                                // [0x5217d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIFriends.RGIFriendsPrivateCDataInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIFriendsPrivateCDataInterface : public UInterface
{ 
public:
};

/// Class /Script/RGIFriends.RGIFriendsSendPartyInviteViewModel
/// Size: 0x0110 (272 bytes) (0x0000D8 - 0x000110) align 8 MaxSize: 0x0110
class URGIFriendsSendPartyInviteViewModel : public URGISocialSharedModalViewModelBase
{ 
public:
	FText                                              TextInput;                                                  // 0x00D8   (0x0018)  
	FText                                              ResultText;                                                 // 0x00F0   (0x0018)  
	class URGISocialPartyCollectionViewModel*          PartyCollectionViewModel;                                   // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsSendPartyInviteViewModel.OnTextSubmitted
	// void OnTextSubmitted(FText& Text);                                                                                       // [0x5219670] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGIFriends.RGIFriendsUserSettings
/// Size: 0x0120 (288 bytes) (0x000048 - 0x000120) align 8 MaxSize: 0x0120
class URGIFriendsUserSettings : public UDeveloperSettings
{ 
public:
	bool                                               bUseMockedData;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TWeakObjectPtr<class URGIFriendsMockedData*>       MockedData;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0058   (0x0028)  MISSED
	class UClass*                                      CustomPrivateDataClass;                                     // 0x0080   (0x0008)  
	TSoftObjectPtr<class UClass*>                      PartyCollectionViewModelClass;                              // 0x0088   (0x0030)  
	TSoftObjectPtr<class UClass*>                      FriendsCollectionViewModelClass;                            // 0x00B8   (0x0030)  
	TSoftObjectPtr<class UClass*>                      FriendRequestCollectionViewModelClass;                      // 0x00E8   (0x0030)  
	bool                                               bGenerateFakePuuidWhenEmpty;                                // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/RGIFriends.RGISocialPartyCollectionViewModel
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x0000D0) align 8 MaxSize: 0x00D0
class URGISocialPartyCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	class URGISocialSharedModalManagerViewModel*       ModalManagerViewModel;                                      // 0x0070   (0x0008)  
	TArray<class URGISocialPartyViewModel*>            Parties;                                                    // 0x0078   (0x0010)  
	TArray<class URGISocialPartyInviteViewModel*>      AllPartyInvites;                                            // 0x0088   (0x0010)  
	TArray<class URGISocialPartyInviteViewModel*>      InboundPartyInvites;                                        // 0x0098   (0x0010)  
	int32_t                                            InboundPartyInviteCount;                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<class URGISocialPartyInviteViewModel*>      OutboundPartyInvites;                                       // 0x00B0   (0x0010)  
	int32_t                                            OutboundPartyInviteCount;                                   // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UGameInstance*                               CachedGameInstance;                                         // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.SetParties
	// void SetParties(TArray<URGISocialPartyViewModel*>& NewParties);                                                          // [0x521c450] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.SetAllPartyInvites
	// void SetAllPartyInvites(TArray<URGISocialPartyInviteViewModel*>& NewInvites);                                            // [0x521bb40] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.RemoveParty
	// void RemoveParty(class URGISocialPartyViewModel* PartyViewModel);                                                        // [0x39e6c40] Native|Protected|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.RemoveInvite
	// void RemoveInvite(FString InviteId);                                                                                     // [0x521ba00] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.PartyInviteSelected
	// void PartyInviteSelected(class URGISocialPartyInviteViewModel* PartyInviteViewModel);                                    // [0x521c900] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnPartyUpdated
	// void OnPartyUpdated(FString PartyId, class UObject* OptionalContext);                                                    // [0x521c090] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnPartyInviteSubmitted
	// void OnPartyInviteSubmitted(FString InviteePuuid, FString InviterPuuid, class UObject* OptionalContext);                 // [0x521b740] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnPartyInviteListSubmitted
	// void OnPartyInviteListSubmitted(TArray<FString>& InviteePuuids, FString InviterPuuid, class UObject* OptionalContext);   // [0x521b430] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnPartyCreated
	// void OnPartyCreated(FString PartyId, class UObject* OptionalContext);                                                    // [0x521c270] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnInviteReceived
	// void OnInviteReceived(FString InviteId, class UObject* OptionalContext);                                                 // [0x521beb0] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnInviteDeclined
	// void OnInviteDeclined(class URGISocialPartyInviteViewModel* PartyInviteViewModel);                                       // [0x3920ba0] Native|Public        
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.OnInviteAccepted
	// void OnInviteAccepted(class URGISocialPartyInviteViewModel* PartyInviteViewModel);                                       // [0x521b330] Native|Public        
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.MakeContext
	// FMVVMViewModelContext MakeContext();                                                                                     // [0x521ca00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetPartyInvite
	// class URGISocialPartyInviteViewModel* GetPartyInvite(FString InviteId);                                                  // [0x521c700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetPartyById
	// class URGISocialPartyViewModel* GetPartyById(FString PartyId);                                                           // [0x521bd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetParties
	// TArray<URGISocialPartyViewModel*> GetParties();                                                                          // [0x521c8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetOutboundInvites
	// TArray<URGISocialPartyInviteViewModel*> GetOutboundInvites();                                                            // [0x521c870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetOutboundInviteCount
	// int32_t GetOutboundInviteCount();                                                                                        // [0x41e8850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetInviteCount
	// int32_t GetInviteCount();                                                                                                // [0x521c5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetInboundPartyInvite
	// class URGISocialPartyInviteViewModel* GetInboundPartyInvite(int32_t Index);                                              // [0x521c5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetInboundInvites
	// TArray<URGISocialPartyInviteViewModel*> GetInboundInvites();                                                             // [0x521c8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetInboundInviteCount
	// int32_t GetInboundInviteCount();                                                                                         // [0x521c590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.GetAllPartyInvites
	// TArray<URGISocialPartyInviteViewModel*> GetAllPartyInvites();                                                            // [0x521c840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.CreateInboundPartyInviteToast
	// void CreateInboundPartyInviteToast(class URGISocialPartyInviteViewModel* NewInvite);                                     // [0x521bc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.AddParty
	// void AddParty(class URGISocialPartyViewModel* NewParty);                                                                 // [0x521b230] Native|Protected|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyCollectionViewModel.AddInvite
	// void AddInvite(class URGISocialPartyInviteViewModel* NewInvite);                                                         // [0x4efbe20] Native|Public|BlueprintCallable 
};

/// Class /Script/RGIFriends.RGISocialPartyInviteViewModel
/// Size: 0x0110 (272 bytes) (0x000070 - 0x000110) align 8 MaxSize: 0x0110
class URGISocialPartyInviteViewModel : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0070   (0x0008)  MISSED
	FString                                            InviteId;                                                   // 0x0078   (0x0010)  
	FText                                              Description;                                                // 0x0088   (0x0018)  
	FString                                            InvitePuuid;                                                // 0x00A0   (0x0010)  
	FString                                            InviteGameName;                                             // 0x00B0   (0x0010)  
	FString                                            InviteGameTag;                                              // 0x00C0   (0x0010)  
	ERGIFriendsFriendStatus                            InviteStatus;                                               // 0x00D0   (0x0001)  
	ERGIFriendsListInviteType                          InviteType;                                                 // 0x00D1   (0x0001)  
	ERGIFriendsListInviteState                         InviteState;                                                // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00D3   (0x0005)  MISSED
	double                                             InviteSpawnGameTime;                                        // 0x00D8   (0x0008)  
	FDateTime                                          InviteSpawnTime;                                            // 0x00E0   (0x0008)  
	FDateTime                                          InviteExpiryTime;                                           // 0x00E8   (0x0008)  
	FString                                            FolderName;                                                 // 0x00F0   (0x0010)  
	class URGISocialPartyCollectionViewModel*          OwningCollectionViewModel;                                  // 0x0100   (0x0008)  
	class UGameInstance*                               CachedGameInstance;                                         // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteType
	// void SetInviteType(ERGIFriendsListInviteType InInviteType);                                                              // [0x521d7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteStatus
	// void SetInviteStatus(ERGIFriendsFriendStatus InInviteStatus);                                                            // [0x521d8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteState
	// void SetInviteState(ERGIFriendsListInviteState InInviteState);                                                           // [0x521d6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInvitePuuid
	// void SetInvitePuuid(FString InInvitePuuid);                                                                              // [0x521dc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteId
	// void SetInviteId(FString InInviteId);                                                                                    // [0x521ded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteGameTag
	// void SetInviteGameTag(FString InInviteGameTag);                                                                          // [0x521da00] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetInviteGameName
	// void SetInviteGameName(FString InInviteGameName);                                                                        // [0x521db40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.SetDescription
	// void SetDescription(FText& InDescription);                                                                               // [0x521ddb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.OnInviteDeclined
	// void OnInviteDeclined();                                                                                                 // [0x27ec750] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.OnInviteCancelled
	// void OnInviteCancelled();                                                                                                // [0x27ec720] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.OnInviteAccepted
	// void OnInviteAccepted();                                                                                                 // [0x3b20670] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.OnInInviteUpdated
	// void OnInInviteUpdated();                                                                                                // [0x3ecc2e0] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteType
	// ERGIFriendsListInviteType GetInviteType();                                                                               // [0x521e150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteStatus
	// ERGIFriendsFriendStatus GetInviteStatus();                                                                               // [0x521e0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteState
	// ERGIFriendsListInviteState GetInviteState();                                                                             // [0x521e130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInvitePuuid
	// FString GetInvitePuuid();                                                                                                // [0x521e170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteId
	// FString GetInviteId();                                                                                                   // [0x521e1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteGameTag
	// FString GetInviteGameTag();                                                                                              // [0x521e0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetInviteGameName
	// FString GetInviteGameName();                                                                                             // [0x521e100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetFullRiotID
	// FString GetFullRiotID();                                                                                                 // [0x521e010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyInviteViewModel.GetDescription
	// FText GetDescription();                                                                                                  // [0x521e1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIFriends.RGISocialPartyMemberViewModel
/// Size: 0x00B0 (176 bytes) (0x000070 - 0x0000B0) align 8 MaxSize: 0x00B0
class URGISocialPartyMemberViewModel : public UMVVMViewModelBase
{ 
public:
	FString                                            Puuid;                                                      // 0x0070   (0x0010)  
	FString                                            GameName;                                                   // 0x0080   (0x0010)  
	FString                                            GameTag;                                                    // 0x0090   (0x0010)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x00A0   (0x0001)  
	bool                                               bIsPartyLeader;                                             // 0x00A1   (0x0001)  
	bool                                               bIsLocalPlayer;                                             // 0x00A2   (0x0001)  
	ERGIFriendsFriendStatus                            FriendStatus;                                               // 0x00A3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UGameInstance*                               CachedGameInstance;                                         // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetPuuid
	// void SetPuuid(FString InPuuid);                                                                                          // [0x521f250] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetPlatform
	// void SetPlatform(ERGIFriendsPlatform InPlatform);                                                                        // [0x521eeb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetIsPartyLeader
	// void SetIsPartyLeader(bool bInIsPartyLeader);                                                                            // [0x521ed90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetIsLocalPlayer
	// void SetIsLocalPlayer(bool bInIsLocalPlayer);                                                                            // [0x521ec70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetGameTag
	// void SetGameTag(FString InGameTag);                                                                                      // [0x521efd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetGameName
	// void SetGameName(FString InGameName);                                                                                    // [0x521f110] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.SetFriendStatus
	// void SetFriendStatus(ERGIFriendsFriendStatus InStatus);                                                                  // [0x521eb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.MemberUpdated
	// void MemberUpdated(class UObject* OptionalContext);                                                                      // [0x51fa250] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetPuuid
	// FString GetPuuid();                                                                                                      // [0x521f430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetPlatform
	// ERGIFriendsPlatform GetPlatform();                                                                                       // [0x521f3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetIsPartyLeader
	// bool GetIsPartyLeader();                                                                                                 // [0x521f3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetIsLocalPlayer
	// bool GetIsLocalPlayer();                                                                                                 // [0x521f3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetGameTag
	// FString GetGameTag();                                                                                                    // [0x521f400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetGameName
	// FString GetGameName();                                                                                                   // [0x521f400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyMemberViewModel.GetFriendStatus
	// ERGIFriendsFriendStatus GetFriendStatus();                                                                               // [0x521f380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIFriends.RGISocialPartyViewModel
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class URGISocialPartyViewModel : public UMVVMViewModelBase
{ 
public:
	FString                                            PartyId;                                                    // 0x0070   (0x0010)  
	FText                                              GameName;                                                   // 0x0080   (0x0018)  
	FText                                              GameTag;                                                    // 0x0098   (0x0018)  
	TArray<class URGISocialPartyMemberViewModel*>      Members;                                                    // 0x00B0   (0x0010)  
	int32_t                                            MaxPartySize;                                               // 0x00C0   (0x0004)  
	int32_t                                            CurrentPartySize;                                           // 0x00C4   (0x0004)  
	ERGIFriendsPresencesPartyStatus                    PartyStatus;                                                // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	class UGameInstance*                               CachedGameInstance;                                         // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetStatus
	// void SetStatus(ERGIFriendsPresencesPartyStatus InStatus);                                                                // [0x521fc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetPartyId
	// void SetPartyId(FString InPartyId);                                                                                      // [0x52209f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetMembers
	// void SetMembers(TArray<URGISocialPartyMemberViewModel*>& InMembers);                                                     // [0x52205e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetMaxPartySize
	// void SetMaxPartySize(int32_t InMaxPartySize);                                                                            // [0x521fe40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetGameTag
	// void SetGameTag(FText InGameTag);                                                                                        // [0x5220710] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetGameName
	// void SetGameName(FText InGameName);                                                                                      // [0x52208b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.SetCurrentPartySize
	// void SetCurrentPartySize(int32_t InPartySize);                                                                           // [0x521fd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.RemoveMemberByPuuid
	// void RemoveMemberByPuuid(FString Puuid);                                                                                 // [0x521ff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.RemoveMember
	// void RemoveMember(class URGISocialPartyMemberViewModel* Member);                                                         // [0x5220090] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.PartyUpdated
	// void PartyUpdated(class UObject* OptionalContext);                                                                       // [0x51fa250] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.OnLeaveParty
	// void OnLeaveParty();                                                                                                     // [0x3b20670] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetStatus
	// ERGIFriendsPresencesPartyStatus GetStatus();                                                                             // [0x5220b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetPartyId
	// FString GetPartyId();                                                                                                    // [0x521f430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetMembers
	// TArray<URGISocialPartyMemberViewModel*> GetMembers();                                                                    // [0x5220b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                               // [0x41e8850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetGameTag
	// FText GetGameTag();                                                                                                      // [0x5220c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetGameName
	// FText GetGameName();                                                                                                     // [0x5220c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.GetCurrentPartySize
	// int32_t GetCurrentPartySize();                                                                                           // [0x5220b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGISocialPartyViewModel.AddMember
	// void AddMember(class URGISocialPartyMemberViewModel* NewMember);                                                         // [0x5220290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGIFriends.RGIFriendsPlayer
/// Size: 0x0208 (520 bytes) (0x000030 - 0x000208) align 8 MaxSize: 0x0208
class URGIFriendsPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	FString                                            GameName;                                                   // 0x0048   (0x0010)  
	FString                                            PreferredDisplayName;                                       // 0x0058   (0x0010)  
	FString                                            GameTag;                                                    // 0x0068   (0x0010)  
	FString                                            Pid;                                                        // 0x0078   (0x0010)  
	FString                                            Puuid;                                                      // 0x0088   (0x0010)  
	FString                                            Region;                                                     // 0x0098   (0x0010)  
	FString                                            Note;                                                       // 0x00A8   (0x0010)  
	FString                                            VoiceSessionId;                                             // 0x00B8   (0x0010)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FString                                            Product;                                                    // 0x00D0   (0x0010)  
	FString                                            ProductPresenceName;                                        // 0x00E0   (0x0010)  
	FString                                            ProductFolderName;                                          // 0x00F0   (0x0010)  
	bool                                               bIsRiotFriend;                                              // 0x0100   (0x0001)  
	bool                                               bIsActivePlatformFriend;                                    // 0x0101   (0x0001)  
	bool                                               bIsRiotBlocked;                                             // 0x0102   (0x0001)  
	bool                                               bIsActivePlatformBlocked;                                   // 0x0103   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FString                                            AccountRank;                                                // 0x0108   (0x0010)  
	FString                                            FirstPartyAAlias;                                           // 0x0118   (0x0010)  
	FString                                            FirstPartyBAlias;                                           // 0x0128   (0x0010)  
	FString                                            FirstPartyBSuffix;                                          // 0x0138   (0x0010)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0148   (0x0001)  MISSED
	ERGIFriendsFriendStatus                            Status;                                                     // 0x0149   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x014A   (0x0006)  MISSED
	FString                                            Message;                                                    // 0x0150   (0x0010)  
	TArray<FRGIFriendsParty>                           Parties;                                                    // 0x0160   (0x0010)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x0170   (0x0030)  MISSED
	FRGIPermissionsCrossPlayPermissions                CrossPlayPermissions;                                       // 0x01A0   (0x0020)  
	unsigned char                                      UnknownData06_6[0x30];                                      // 0x01C0   (0x0030)  MISSED
	bool                                               bIsDiscordFriend;                                           // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FString                                            DiscordDisplayName;                                         // 0x01F8   (0x0010)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsPlayer.SetIsDiscordFriend
	// void SetIsDiscordFriend(bool bValue);                                                                                    // [0x5224450] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsPlayer.SetDiscordDisplayName
	// void SetDiscordDisplayName(FString Value);                                                                               // [0x52242b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsPlayer.IsDiscordFriend
	// bool IsDiscordFriend();                                                                                                  // [0x5224430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsPlayer.GetDiscordDisplayName
	// FString GetDiscordDisplayName();                                                                                         // [0x5224280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGIFriends.RGIFriendsDataStore
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIFriendsDataStore : public UInterface
{ 
public:
};

/// Struct /Script/RGIFriends.RGIFriendsPresenceLocalizedContent
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRGIFriendsPresenceLocalizedContent
{ 
	FString                                            State;                                                      // 0x0000   (0x0010)  
	FString                                            Location;                                                   // 0x0010   (0x0010)  
	FString                                            Mode;                                                       // 0x0020   (0x0010)  
	TArray<FString>                                    Actors;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsFriendRequest
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRGIFriendsFriendRequest
{ 
	FString                                            PlayerName;                                                 // 0x0000   (0x0010)  
	FString                                            PlayerTag;                                                  // 0x0010   (0x0010)  
	FString                                            Puuid;                                                      // 0x0020   (0x0010)  
	ERGIFriendRequestType                              RequestType;                                                // 0x0030   (0x0001)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/RGIFriends.RGIFriendsMockedData
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align 8 MaxSize: 0x00C0
class URGIFriendsMockedData : public UPrimaryDataAsset
{ 
public:
	class URGIFriendsPlayer*                           LoggedPlayer;                                               // 0x0038   (0x0008)  
	FRGIFriendsPresenceLocalizedContent                LoggedPlayerPresenceLocalizedContent;                       // 0x0040   (0x0040)  
	TArray<class URGIFriendsPlayer*>                   Friends;                                                    // 0x0080   (0x0010)  
	TArray<class URGIFriendsPlayer*>                   BlockedPlayers;                                             // 0x0090   (0x0010)  
	TArray<FRGIFriendsFriendRequest>                   FriendsRequests;                                            // 0x00A0   (0x0010)  
	TArray<class URGIFriendsPlayer*>                   PartyPlayers;                                               // 0x00B0   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsPlayers
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIFriendsPlayers
{ 
	TMap<FString, class URGIFriendsPlayer*>            MapOfPlayers;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/RGIFriends.RGIFriendsFriendRequests
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIFriendsFriendRequests
{ 
	TMap<FString, FRGIFriendsFriendRequest>            MapOfPuuidsToRequests;                                      // 0x0000   (0x0050)  
};

/// Struct /Script/RGIFriends.RGIFriendsAliasList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRGIFriendsAliasList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RGIFriends.RGIFriendsConnectionState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FRGIFriendsConnectionState
{ 
	bool                                               bIsInternetConnected;                                       // 0x0000   (0x0001)  
	bool                                               bIsChatConnected;                                           // 0x0001   (0x0001)  
};

/// Class /Script/RGIFriends.FriendsMockedDataStore
/// Size: 0x04C8 (1224 bytes) (0x000030 - 0x0004C8) align 8 MaxSize: 0x04C8
class UFriendsMockedDataStore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x2E0];                                     // 0x0030   (0x02E0)  MISSED
	class URGIFriendsPlayer*                           LoggedPlayer;                                               // 0x0310   (0x0008)  
	FRGIFriendsPresenceLocalizedContent                LoggedPlayerPresenceLocalizedContent;                       // 0x0318   (0x0040)  
	FRGIFriendsPlayers                                 Friends;                                                    // 0x0358   (0x0050)  
	FRGIFriendsPlayers                                 BlockedPlayers;                                             // 0x03A8   (0x0050)  
	FRGIFriendsFriendRequests                          FriendRequests;                                             // 0x03F8   (0x0050)  
	TMap<FString, class URGIFriendsPlayer*>            PartyMembers;                                               // 0x0448   (0x0050)  
	FRGIFriendsAliasList                               AliasList;                                                  // 0x0498   (0x0010)  
	class UObject*                                     CustomPrivateDataObject;                                    // 0x04A8   (0x0008)  
	FRGIFriendsConnectionState                         ConnectionState;                                            // 0x04B0   (0x0002)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x04B2   (0x0006)  MISSED
	class URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel;                       // 0x04B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x04C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/RGIFriends.FriendsMockedDataStore.OnCustomPrivateDataUpdated
	// void OnCustomPrivateDataUpdated(FString SerializedData);                                                                 // [0x5226360] Final|Native|Public  
};

/// Class /Script/RGIFriends.RGIFriendsNoOpDataStore
/// Size: 0x0400 (1024 bytes) (0x000030 - 0x000400) align 8 MaxSize: 0x0400
class URGIFriendsNoOpDataStore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x2C8];                                     // 0x0030   (0x02C8)  MISSED
	class URGIFriendsPlayer*                           LoggedPlayer;                                               // 0x02F8   (0x0008)  
	FRGIFriendsPlayers                                 Friends;                                                    // 0x0300   (0x0050)  
	FRGIFriendsFriendRequests                          FriendRequests;                                             // 0x0350   (0x0050)  
	FRGIFriendsPlayers                                 BlockedPlayers;                                             // 0x03A0   (0x0050)  
	FRGIFriendsAliasList                               AliasList;                                                  // 0x03F0   (0x0010)  
};

/// Class /Script/RGIFriends.RGIFriendsFriendRequestNotificationData
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class URGIFriendsFriendRequestNotificationData : public UObject
{ 
public:
	FString                                            PlayerName;                                                 // 0x0030   (0x0010)  
	FString                                            PlayerTag;                                                  // 0x0040   (0x0010)  
	FString                                            Puuid;                                                      // 0x0050   (0x0010)  
	ERGIFriendsPlatform                                Platform;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/RGIFriends.RGIFriendsSubsystem
/// Size: 0x0498 (1176 bytes) (0x000038 - 0x000498) align 8 MaxSize: 0x0498
class URGIFriendsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x2C8];                                     // 0x0038   (0x02C8)  MISSED
	SDK_UNDEFINED(16,5219) /* TScriptInterface<Class> */ __um(DataStore);                                          // 0x0300   (0x0010)  
	class URGISocialNotificationsNotificationCollectionViewModel* NotificationCollection;                          // 0x0310   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0318   (0x0028)  MISSED
	SDK_UNDEFINED(16,5220) /* FMulticastInlineDelegate */ __um(OnFriendsUpdatedDynamic);                           // 0x0340   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0350   (0x0018)  MISSED
	SDK_UNDEFINED(16,5221) /* FMulticastInlineDelegate */ __um(OnLoggedPlayerUpdatedDynamic);                      // 0x0368   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0378   (0x0018)  MISSED
	SDK_UNDEFINED(16,5222) /* FMulticastInlineDelegate */ __um(OnBlockedPlayersUpdatedDynamic);                    // 0x0390   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x03A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,5223) /* FMulticastInlineDelegate */ __um(OnFriendsRequestListUpdatedDynamic);                // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x03C8   (0x0018)  MISSED
	SDK_UNDEFINED(16,5224) /* FMulticastInlineDelegate */ __um(OnFriendRequestAcceptedDynamic);                    // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x03F0   (0x0018)  MISSED
	SDK_UNDEFINED(16,5225) /* FMulticastInlineDelegate */ __um(OnFriendRequestDeclinedDynamic);                    // 0x0408   (0x0010)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x0418   (0x0018)  MISSED
	SDK_UNDEFINED(16,5226) /* FMulticastInlineDelegate */ __um(OnFriendRequestSentDynamic);                        // 0x0430   (0x0010)  
	unsigned char                                      UnknownData08_6[0x18];                                      // 0x0440   (0x0018)  MISSED
	SDK_UNDEFINED(16,5227) /* FMulticastInlineDelegate */ __um(OnProfileViewStateChangedDynamic);                  // 0x0458   (0x0010)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x0468   (0x0018)  MISSED
	class URGIFriendsFriendRequestCollectionViewModel* FriendRequestCollectionViewModel;                           // 0x0480   (0x0008)  
	class URGIFriendsCollectionViewModel*              FriendsCollectionViewModel;                                 // 0x0488   (0x0008)  
	class URGISocialPartyCollectionViewModel*          PartyCollectionViewModel;                                   // 0x0490   (0x0008)  


	/// Functions
	// Function /Script/RGIFriends.RGIFriendsSubsystem.ViewFirstPartyProfile
	// void ViewFirstPartyProfile(FString ID, FDelegateProperty OnSuccess, FDelegateProperty OnError, bool bIsFirstPartyId);    // [0x522bc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.UnblockPlayer
	// void UnblockPlayer(FString Puuid, FDelegateProperty OnSuccess, FDelegateProperty OnError);                               // [0x522c320] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.SetBuddyNote
	// void SetBuddyNote(FString Puuid, FString NoteString, FDelegateProperty OnSuccess, FDelegateProperty OnError);            // [0x522bf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.SendPresence
	// void SendPresence(FDelegateProperty& OnSuccess, FDelegateProperty& OnError);                                             // [0x522b780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.SendFriendRequest
	// void SendFriendRequest(FString GameNameAndTagLine, FDelegateProperty OnSuccess, FDelegateProperty OnError);              // [0x522d0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.RequestLoggedPlayerInactiveAliasList
	// void RequestLoggedPlayerInactiveAliasList();                                                                             // [0x522b030] Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.RemoveFriend
	// void RemoveFriend(FString Puuid, FDelegateProperty OnSuccess, FDelegateProperty OnError);                                // [0x522ce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetVersion
	// FText GetVersion();                                                                                                      // [0x522b440] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetPlayerNamesFromPuuids
	// void GetPlayerNamesFromPuuids(TArray<FString>& Puuids, FDelegateProperty OnSuccess);                                     // [0x522b980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetLoggedPlayerPresenceLocalizedContent
	// FRGIFriendsPresenceLocalizedContent GetLoggedPlayerPresenceLocalizedContent();                                           // [0x522b0c0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetLoggedPlayer
	// class URGIFriendsPlayer* GetLoggedPlayer();                                                                              // [0x522b150] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetIsReady
	// bool GetIsReady();                                                                                                       // [0x522b3a0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetFriendViewModel
	// class URGIFriendsPlayerViewModel* GetFriendViewModel(FString Puuid);                                                     // [0x522b490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetFriends
	// FRGIFriendsPlayers GetFriends();                                                                                         // [0x522b350] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetFriendRequestViewModel
	// class URGIFriendsFriendRequestViewModel* GetFriendRequestViewModel(FString Puuid);                                       // [0x522b640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetFriendRequests
	// FRGIFriendsFriendRequests GetFriendRequests();                                                                           // [0x522b1a0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetFriend
	// class URGIFriendsPlayer* GetFriend(FString Puuid);                                                                       // [0x522b1f0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetCustomPrivateDataObject
	// class UObject* GetCustomPrivateDataObject();                                                                             // [0x522b3f0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.GetBlockedPlayers
	// FRGIFriendsPlayers GetBlockedPlayers();                                                                                  // [0x522b070] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.DeclineFriendRequest
	// void DeclineFriendRequest(FString Puuid, FDelegateProperty OnSuccess, FDelegateProperty OnError);                        // [0x522c880] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.BlockPlayer
	// void BlockPlayer(FString Puuid, FDelegateProperty OnSuccess, FDelegateProperty OnError);                                 // [0x522c5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGIFriends.RGIFriendsSubsystem.AcceptFriendRequest
	// void AcceptFriendRequest(FString Puuid, FDelegateProperty OnSuccess, FDelegateProperty OnError);                         // [0x522cb50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RGIFriends.RGIFriendsGameNameAndTag
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIFriendsGameNameAndTag
{ 
	FString                                            GameName;                                                   // 0x0000   (0x0010)  
	FString                                            Tag;                                                        // 0x0010   (0x0010)  
	FString                                            FirstPartyAAlias;                                           // 0x0020   (0x0010)  
	FString                                            FirstPartyBAlias;                                           // 0x0030   (0x0010)  
	FString                                            FirstPartyBSuffix;                                          // 0x0040   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsPuuidGameNameAndTagMapping
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIFriendsPuuidGameNameAndTagMapping
{ 
	TMap<FString, FRGIFriendsGameNameAndTag>           MapOfPuuidsToGameNameAndTag;                                // 0x0000   (0x0050)  
};

/// Struct /Script/RGIFriends.ReflectedFriendEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReflectedFriendEntry
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RGIFriends.RGIFriendsPartyInvite
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRGIFriendsPartyInvite
{ 
	FString                                            InviteId;                                                   // 0x0000   (0x0010)  
	FText                                              Description;                                                // 0x0010   (0x0018)  
	FString                                            Puuid;                                                      // 0x0028   (0x0010)  
	ERGIFriendsListInviteType                          InviteType;                                                 // 0x0038   (0x0001)  
	ERGIFriendsListInviteState                         InviteState;                                                // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	double                                             InviteSpawnGameTime;                                        // 0x0040   (0x0008)  
	FDateTime                                          InviteSpawnTime;                                            // 0x0048   (0x0008)  
	FDateTime                                          InviteExpiryTime;                                           // 0x0050   (0x0008)  
	FString                                            FolderName;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsPartyInviteWithPlayer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRGIFriendsPartyInviteWithPlayer
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FText                                              Description;                                                // 0x0010   (0x0018)  
	class URGIFriendsPlayer*                           InviteTargetPlayer;                                         // 0x0028   (0x0008)  
	ERGIFriendsListInviteType                          InviteType;                                                 // 0x0030   (0x0001)  
	ERGIFriendsListInviteState                         InviteState;                                                // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	double                                             InviteSpawnGameTime;                                        // 0x0038   (0x0008)  
	FDateTime                                          InviteSpawnTime;                                            // 0x0040   (0x0008)  
	FDateTime                                          InviteExpiryTime;                                           // 0x0048   (0x0008)  
	FString                                            FolderName;                                                 // 0x0050   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsActivityProgress
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRGIFriendsActivityProgress
{ 
	ERGIFriendsActivityProgressType                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsPresenceActivity
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRGIFriendsPresenceActivity
{ 
	TArray<FString>                                    Actors;                                                     // 0x0000   (0x0010)  
	FString                                            Location;                                                   // 0x0010   (0x0010)  
	FString                                            Mode;                                                       // 0x0020   (0x0010)  
	FRGIFriendsActivityProgress                        Progress;                                                   // 0x0030   (0x0018)  
	FString                                            Spectate;                                                   // 0x0048   (0x0010)  
};

/// Struct /Script/RGIFriends.RGIFriendsLoggedPlayerPrivateData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIFriendsLoggedPlayerPrivateData
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URGIFriendsAddFriendModalViewModel) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(URGIFriendsCollectionViewModel) == 0x00E8); // 232 bytes (0x000070 - 0x0000E8)
static_assert(sizeof(URGIFriendsFriendRequestCollectionViewModel) == 0x00B8); // 184 bytes (0x000070 - 0x0000B8)
static_assert(sizeof(URGIFriendsFriendRequestViewModel) == 0x00C8); // 200 bytes (0x000070 - 0x0000C8)
static_assert(sizeof(URGIFriendsPlayerActionModalViewModel) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(FRGIFriendsPartyMember) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRGIFriendsParty) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(URGIFriendsPlayerViewModel) == 0x0208); // 520 bytes (0x000070 - 0x000208)
static_assert(sizeof(URGIFriendsPrivateCDataInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGIFriendsSendPartyInviteViewModel) == 0x0110); // 272 bytes (0x0000D8 - 0x000110)
static_assert(sizeof(URGIFriendsUserSettings) == 0x0120); // 288 bytes (0x000048 - 0x000120)
static_assert(sizeof(URGISocialPartyCollectionViewModel) == 0x00D0); // 208 bytes (0x000070 - 0x0000D0)
static_assert(sizeof(URGISocialPartyInviteViewModel) == 0x0110); // 272 bytes (0x000070 - 0x000110)
static_assert(sizeof(URGISocialPartyMemberViewModel) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(URGISocialPartyViewModel) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(URGIFriendsPlayer) == 0x0208); // 520 bytes (0x000030 - 0x000208)
static_assert(sizeof(URGIFriendsDataStore) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRGIFriendsPresenceLocalizedContent) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRGIFriendsFriendRequest) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(URGIFriendsMockedData) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(FRGIFriendsPlayers) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRGIFriendsFriendRequests) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRGIFriendsAliasList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRGIFriendsConnectionState) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(UFriendsMockedDataStore) == 0x04C8); // 1224 bytes (0x000030 - 0x0004C8)
static_assert(sizeof(URGIFriendsNoOpDataStore) == 0x0400); // 1024 bytes (0x000030 - 0x000400)
static_assert(sizeof(URGIFriendsFriendRequestNotificationData) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(URGIFriendsSubsystem) == 0x0498); // 1176 bytes (0x000038 - 0x000498)
static_assert(sizeof(FRGIFriendsGameNameAndTag) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRGIFriendsPuuidGameNameAndTagMapping) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FReflectedFriendEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRGIFriendsPartyInvite) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRGIFriendsPartyInviteWithPlayer) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRGIFriendsActivityProgress) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRGIFriendsPresenceActivity) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRGIFriendsLoggedPlayerPrivateData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(URGIFriendsAddFriendModalViewModel, FriendsSubsystem) == 0x00D8);
static_assert(offsetof(URGIFriendsAddFriendModalViewModel, AddFriendInput) == 0x00E0);
static_assert(offsetof(URGIFriendsAddFriendModalViewModel, ErrorResult) == 0x00F8);
static_assert(offsetof(URGIFriendsCollectionViewModel, Friends) == 0x0070);
static_assert(offsetof(URGIFriendsCollectionViewModel, SelectedFriendsPlayerViewModel) == 0x0080);
static_assert(offsetof(URGIFriendsCollectionViewModel, FriendMap) == 0x0098);
static_assert(offsetof(URGIFriendsFriendRequestCollectionViewModel, InboundFriendRequestCollection) == 0x0070);
static_assert(offsetof(URGIFriendsFriendRequestCollectionViewModel, OutboundFriendRequestCollection) == 0x0080);
static_assert(offsetof(URGIFriendsFriendRequestCollectionViewModel, ModalManagerViewModel) == 0x00A8);
static_assert(offsetof(URGIFriendsFriendRequestCollectionViewModel, CachedGameInstance) == 0x00B0);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, Puuid) == 0x0078);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, GameName) == 0x0088);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, GameTag) == 0x0098);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, RequestType) == 0x00A8);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, Platform) == 0x00A9);
static_assert(offsetof(URGIFriendsFriendRequestViewModel, OwningCollectionViewModel) == 0x00C0);
static_assert(offsetof(URGIFriendsPlayerActionModalViewModel, PlayerPuuid) == 0x00D8);
static_assert(offsetof(URGIFriendsPlayerActionModalViewModel, PlayerStatus) == 0x00E8);
static_assert(offsetof(FRGIFriendsPartyMember, Puuid) == 0x0000);
static_assert(offsetof(FRGIFriendsPartyMember, Platform) == 0x0014);
static_assert(offsetof(FRGIFriendsParty, PartyId) == 0x0000);
static_assert(offsetof(FRGIFriendsParty, Join) == 0x0010);
static_assert(offsetof(FRGIFriendsParty, Actions) == 0x0020);
static_assert(offsetof(FRGIFriendsParty, Title) == 0x0030);
static_assert(offsetof(FRGIFriendsParty, Status) == 0x0054);
static_assert(offsetof(FRGIFriendsParty, Members) == 0x0058);
static_assert(offsetof(URGIFriendsPlayerViewModel, Puuid) == 0x0070);
static_assert(offsetof(URGIFriendsPlayerViewModel, GameName) == 0x0080);
static_assert(offsetof(URGIFriendsPlayerViewModel, PreferredDisplayName) == 0x0090);
static_assert(offsetof(URGIFriendsPlayerViewModel, GameTag) == 0x00A0);
static_assert(offsetof(URGIFriendsPlayerViewModel, Product) == 0x00B0);
static_assert(offsetof(URGIFriendsPlayerViewModel, ProductPresenceName) == 0x00C0);
static_assert(offsetof(URGIFriendsPlayerViewModel, ProductFolderName) == 0x00D0);
static_assert(offsetof(URGIFriendsPlayerViewModel, VoiceSessionId) == 0x00E0);
static_assert(offsetof(URGIFriendsPlayerViewModel, Note) == 0x00F0);
static_assert(offsetof(URGIFriendsPlayerViewModel, FirstPartyAAlias) == 0x0100);
static_assert(offsetof(URGIFriendsPlayerViewModel, FirstPartyBAlias) == 0x0110);
static_assert(offsetof(URGIFriendsPlayerViewModel, FirstPartyBSuffix) == 0x0120);
static_assert(offsetof(URGIFriendsPlayerViewModel, Message) == 0x0130);
static_assert(offsetof(URGIFriendsPlayerViewModel, AccountRank) == 0x0148);
static_assert(offsetof(URGIFriendsPlayerViewModel, Status) == 0x0158);
static_assert(offsetof(URGIFriendsPlayerViewModel, Platform) == 0x0159);
static_assert(offsetof(URGIFriendsPlayerViewModel, PresenceState) == 0x0160);
static_assert(offsetof(URGIFriendsPlayerViewModel, DiscordDisplayName) == 0x0198);
static_assert(offsetof(URGIFriendsPlayerViewModel, Parties) == 0x01B0);
static_assert(offsetof(URGIFriendsPlayerViewModel, Player) == 0x01C0);
static_assert(offsetof(URGIFriendsSendPartyInviteViewModel, TextInput) == 0x00D8);
static_assert(offsetof(URGIFriendsSendPartyInviteViewModel, ResultText) == 0x00F0);
static_assert(offsetof(URGIFriendsSendPartyInviteViewModel, PartyCollectionViewModel) == 0x0108);
static_assert(offsetof(URGIFriendsUserSettings, MockedData) == 0x0050);
static_assert(offsetof(URGIFriendsUserSettings, CustomPrivateDataClass) == 0x0080);
static_assert(offsetof(URGIFriendsUserSettings, PartyCollectionViewModelClass) == 0x0088);
static_assert(offsetof(URGIFriendsUserSettings, FriendsCollectionViewModelClass) == 0x00B8);
static_assert(offsetof(URGIFriendsUserSettings, FriendRequestCollectionViewModelClass) == 0x00E8);
static_assert(offsetof(URGISocialPartyCollectionViewModel, ModalManagerViewModel) == 0x0070);
static_assert(offsetof(URGISocialPartyCollectionViewModel, Parties) == 0x0078);
static_assert(offsetof(URGISocialPartyCollectionViewModel, AllPartyInvites) == 0x0088);
static_assert(offsetof(URGISocialPartyCollectionViewModel, InboundPartyInvites) == 0x0098);
static_assert(offsetof(URGISocialPartyCollectionViewModel, OutboundPartyInvites) == 0x00B0);
static_assert(offsetof(URGISocialPartyCollectionViewModel, CachedGameInstance) == 0x00C8);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteId) == 0x0078);
static_assert(offsetof(URGISocialPartyInviteViewModel, Description) == 0x0088);
static_assert(offsetof(URGISocialPartyInviteViewModel, InvitePuuid) == 0x00A0);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteGameName) == 0x00B0);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteGameTag) == 0x00C0);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteStatus) == 0x00D0);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteType) == 0x00D1);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteState) == 0x00D2);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteSpawnTime) == 0x00E0);
static_assert(offsetof(URGISocialPartyInviteViewModel, InviteExpiryTime) == 0x00E8);
static_assert(offsetof(URGISocialPartyInviteViewModel, FolderName) == 0x00F0);
static_assert(offsetof(URGISocialPartyInviteViewModel, OwningCollectionViewModel) == 0x0100);
static_assert(offsetof(URGISocialPartyInviteViewModel, CachedGameInstance) == 0x0108);
static_assert(offsetof(URGISocialPartyMemberViewModel, Puuid) == 0x0070);
static_assert(offsetof(URGISocialPartyMemberViewModel, GameName) == 0x0080);
static_assert(offsetof(URGISocialPartyMemberViewModel, GameTag) == 0x0090);
static_assert(offsetof(URGISocialPartyMemberViewModel, Platform) == 0x00A0);
static_assert(offsetof(URGISocialPartyMemberViewModel, FriendStatus) == 0x00A3);
static_assert(offsetof(URGISocialPartyMemberViewModel, CachedGameInstance) == 0x00A8);
static_assert(offsetof(URGISocialPartyViewModel, PartyId) == 0x0070);
static_assert(offsetof(URGISocialPartyViewModel, GameName) == 0x0080);
static_assert(offsetof(URGISocialPartyViewModel, GameTag) == 0x0098);
static_assert(offsetof(URGISocialPartyViewModel, Members) == 0x00B0);
static_assert(offsetof(URGISocialPartyViewModel, PartyStatus) == 0x00C8);
static_assert(offsetof(URGISocialPartyViewModel, CachedGameInstance) == 0x00D0);
static_assert(offsetof(URGIFriendsPlayer, GameName) == 0x0048);
static_assert(offsetof(URGIFriendsPlayer, PreferredDisplayName) == 0x0058);
static_assert(offsetof(URGIFriendsPlayer, GameTag) == 0x0068);
static_assert(offsetof(URGIFriendsPlayer, Pid) == 0x0078);
static_assert(offsetof(URGIFriendsPlayer, Puuid) == 0x0088);
static_assert(offsetof(URGIFriendsPlayer, Region) == 0x0098);
static_assert(offsetof(URGIFriendsPlayer, Note) == 0x00A8);
static_assert(offsetof(URGIFriendsPlayer, VoiceSessionId) == 0x00B8);
static_assert(offsetof(URGIFriendsPlayer, Platform) == 0x00C8);
static_assert(offsetof(URGIFriendsPlayer, Product) == 0x00D0);
static_assert(offsetof(URGIFriendsPlayer, ProductPresenceName) == 0x00E0);
static_assert(offsetof(URGIFriendsPlayer, ProductFolderName) == 0x00F0);
static_assert(offsetof(URGIFriendsPlayer, AccountRank) == 0x0108);
static_assert(offsetof(URGIFriendsPlayer, FirstPartyAAlias) == 0x0118);
static_assert(offsetof(URGIFriendsPlayer, FirstPartyBAlias) == 0x0128);
static_assert(offsetof(URGIFriendsPlayer, FirstPartyBSuffix) == 0x0138);
static_assert(offsetof(URGIFriendsPlayer, Status) == 0x0149);
static_assert(offsetof(URGIFriendsPlayer, Message) == 0x0150);
static_assert(offsetof(URGIFriendsPlayer, Parties) == 0x0160);
static_assert(offsetof(URGIFriendsPlayer, CrossPlayPermissions) == 0x01A0);
static_assert(offsetof(URGIFriendsPlayer, DiscordDisplayName) == 0x01F8);
static_assert(offsetof(FRGIFriendsPresenceLocalizedContent, State) == 0x0000);
static_assert(offsetof(FRGIFriendsPresenceLocalizedContent, Location) == 0x0010);
static_assert(offsetof(FRGIFriendsPresenceLocalizedContent, Mode) == 0x0020);
static_assert(offsetof(FRGIFriendsPresenceLocalizedContent, Actors) == 0x0030);
static_assert(offsetof(FRGIFriendsFriendRequest, PlayerName) == 0x0000);
static_assert(offsetof(FRGIFriendsFriendRequest, PlayerTag) == 0x0010);
static_assert(offsetof(FRGIFriendsFriendRequest, Puuid) == 0x0020);
static_assert(offsetof(FRGIFriendsFriendRequest, RequestType) == 0x0030);
static_assert(offsetof(FRGIFriendsFriendRequest, Platform) == 0x0031);
static_assert(offsetof(URGIFriendsMockedData, LoggedPlayer) == 0x0038);
static_assert(offsetof(URGIFriendsMockedData, LoggedPlayerPresenceLocalizedContent) == 0x0040);
static_assert(offsetof(URGIFriendsMockedData, Friends) == 0x0080);
static_assert(offsetof(URGIFriendsMockedData, BlockedPlayers) == 0x0090);
static_assert(offsetof(URGIFriendsMockedData, FriendsRequests) == 0x00A0);
static_assert(offsetof(URGIFriendsMockedData, PartyPlayers) == 0x00B0);
static_assert(offsetof(FRGIFriendsPlayers, MapOfPlayers) == 0x0000);
static_assert(offsetof(FRGIFriendsFriendRequests, MapOfPuuidsToRequests) == 0x0000);
static_assert(offsetof(UFriendsMockedDataStore, LoggedPlayer) == 0x0310);
static_assert(offsetof(UFriendsMockedDataStore, LoggedPlayerPresenceLocalizedContent) == 0x0318);
static_assert(offsetof(UFriendsMockedDataStore, Friends) == 0x0358);
static_assert(offsetof(UFriendsMockedDataStore, BlockedPlayers) == 0x03A8);
static_assert(offsetof(UFriendsMockedDataStore, FriendRequests) == 0x03F8);
static_assert(offsetof(UFriendsMockedDataStore, PartyMembers) == 0x0448);
static_assert(offsetof(UFriendsMockedDataStore, AliasList) == 0x0498);
static_assert(offsetof(UFriendsMockedDataStore, CustomPrivateDataObject) == 0x04A8);
static_assert(offsetof(UFriendsMockedDataStore, ConnectionState) == 0x04B0);
static_assert(offsetof(UFriendsMockedDataStore, LoggedPlayerPermissionsViewModel) == 0x04B8);
static_assert(offsetof(URGIFriendsNoOpDataStore, LoggedPlayer) == 0x02F8);
static_assert(offsetof(URGIFriendsNoOpDataStore, Friends) == 0x0300);
static_assert(offsetof(URGIFriendsNoOpDataStore, FriendRequests) == 0x0350);
static_assert(offsetof(URGIFriendsNoOpDataStore, BlockedPlayers) == 0x03A0);
static_assert(offsetof(URGIFriendsNoOpDataStore, AliasList) == 0x03F0);
static_assert(offsetof(URGIFriendsFriendRequestNotificationData, PlayerName) == 0x0030);
static_assert(offsetof(URGIFriendsFriendRequestNotificationData, PlayerTag) == 0x0040);
static_assert(offsetof(URGIFriendsFriendRequestNotificationData, Puuid) == 0x0050);
static_assert(offsetof(URGIFriendsFriendRequestNotificationData, Platform) == 0x0060);
static_assert(offsetof(URGIFriendsSubsystem, NotificationCollection) == 0x0310);
static_assert(offsetof(URGIFriendsSubsystem, FriendRequestCollectionViewModel) == 0x0480);
static_assert(offsetof(URGIFriendsSubsystem, FriendsCollectionViewModel) == 0x0488);
static_assert(offsetof(URGIFriendsSubsystem, PartyCollectionViewModel) == 0x0490);
static_assert(offsetof(FRGIFriendsGameNameAndTag, GameName) == 0x0000);
static_assert(offsetof(FRGIFriendsGameNameAndTag, Tag) == 0x0010);
static_assert(offsetof(FRGIFriendsGameNameAndTag, FirstPartyAAlias) == 0x0020);
static_assert(offsetof(FRGIFriendsGameNameAndTag, FirstPartyBAlias) == 0x0030);
static_assert(offsetof(FRGIFriendsGameNameAndTag, FirstPartyBSuffix) == 0x0040);
static_assert(offsetof(FRGIFriendsPuuidGameNameAndTagMapping, MapOfPuuidsToGameNameAndTag) == 0x0000);
static_assert(offsetof(FRGIFriendsPartyInvite, InviteId) == 0x0000);
static_assert(offsetof(FRGIFriendsPartyInvite, Description) == 0x0010);
static_assert(offsetof(FRGIFriendsPartyInvite, Puuid) == 0x0028);
static_assert(offsetof(FRGIFriendsPartyInvite, InviteType) == 0x0038);
static_assert(offsetof(FRGIFriendsPartyInvite, InviteState) == 0x0039);
static_assert(offsetof(FRGIFriendsPartyInvite, InviteSpawnTime) == 0x0048);
static_assert(offsetof(FRGIFriendsPartyInvite, InviteExpiryTime) == 0x0050);
static_assert(offsetof(FRGIFriendsPartyInvite, FolderName) == 0x0058);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, ID) == 0x0000);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, Description) == 0x0010);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, InviteTargetPlayer) == 0x0028);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, InviteType) == 0x0030);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, InviteState) == 0x0031);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, InviteSpawnTime) == 0x0040);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, InviteExpiryTime) == 0x0048);
static_assert(offsetof(FRGIFriendsPartyInviteWithPlayer, FolderName) == 0x0050);
static_assert(offsetof(FRGIFriendsActivityProgress, Type) == 0x0000);
static_assert(offsetof(FRGIFriendsActivityProgress, Value) == 0x0008);
static_assert(offsetof(FRGIFriendsPresenceActivity, Actors) == 0x0000);
static_assert(offsetof(FRGIFriendsPresenceActivity, Location) == 0x0010);
static_assert(offsetof(FRGIFriendsPresenceActivity, Mode) == 0x0020);
static_assert(offsetof(FRGIFriendsPresenceActivity, Progress) == 0x0030);
static_assert(offsetof(FRGIFriendsPresenceActivity, Spectate) == 0x0048);
