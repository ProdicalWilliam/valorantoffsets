
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: RGIFriends
/// dependency: RGIPermissions

#pragma pack(push, 0x1)

/// Class /Script/RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore
/// Size: 0x05A0 (1440 bytes) (0x000030 - 0x0005A0) align 8 MaxSize: 0x05A0
class URGIFriendsRiotGamesApiDataStore : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x300];                                     // 0x0030   (0x0300)  MISSED
	FRGIFriendsFriendRequests                          FriendRequests;                                             // 0x0330   (0x0050)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0380   (0x0038)  MISSED
	FRGIFriendsPlayers                                 FriendList;                                                 // 0x03B8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0408   (0x0028)  MISSED
	FRGIFriendsPlayers                                 BlockedList;                                                // 0x0430   (0x0050)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0480   (0x0028)  MISSED
	FRGIFriendsConnectionState                         ConnectionState;                                            // 0x04A8   (0x0002)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x04AA   (0x0006)  MISSED
	class URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel;                       // 0x04B0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x70];                                      // 0x04B8   (0x0070)  MISSED
	class URGIFriendsPlayer*                           LoggedPlayer;                                               // 0x0528   (0x0008)  
	FRGIFriendsPresenceLocalizedContent                LoggedPlayerPresenceLocalizedContent;                       // 0x0530   (0x0040)  
	class UObject*                                     CustomPrivateDataObject;                                    // 0x0570   (0x0008)  
	unsigned char                                      UnknownData06_7[0x28];                                      // 0x0578   (0x0028)  MISSED


	/// Functions
	// Function /Script/RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SubscribeToSocialPluginEvents
	// void SubscribeToSocialPluginEvents(int32_t Code, FString Message);                                                       // [0x5245530] Final|Native|Public  
	// Function /Script/RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SendPresenceRepeatingFunction
	// void SendPresenceRepeatingFunction();                                                                                    // [0x52453e0] Final|Native|Protected 
	// Function /Script/RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.OnCustomPrivateDataUpdated
	// void OnCustomPrivateDataUpdated(FString SerializedData);                                                                 // [0x5245400] Final|Native|Public  
};

#pragma pack(pop)


static_assert(sizeof(URGIFriendsRiotGamesApiDataStore) == 0x05A0); // 1440 bytes (0x000030 - 0x0005A0)
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, FriendRequests) == 0x0330);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, FriendList) == 0x03B8);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, BlockedList) == 0x0430);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, ConnectionState) == 0x04A8);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, LoggedPlayerPermissionsViewModel) == 0x04B0);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, LoggedPlayer) == 0x0528);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, LoggedPlayerPresenceLocalizedContent) == 0x0530);
static_assert(offsetof(URGIFriendsRiotGamesApiDataStore, CustomPrivateDataObject) == 0x0570);
