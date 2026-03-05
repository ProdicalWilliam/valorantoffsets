
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
/// dependency: GameplayTags
/// dependency: ModelViewViewModel

#pragma pack(push, 0x1)

/// Enum /Script/RGISocialShared.EAudioEventID
/// Size: 0x01 (1 bytes)
enum class EAudioEventID : uint8_t
{
	EAudioEventID__None                                                              = 0,
	EAudioEventID__FriendsListOpen                                                   = 1,
	EAudioEventID__FriendsListClosed                                                 = 2,
	EAudioEventID__FriendsListBack                                                   = 3,
	EAudioEventID__TabNavigateLeft                                                   = 4,
	EAudioEventID__TabNavigateRight                                                  = 5,
	EAudioEventID__TabNavigateClick                                                  = 6,
	EAudioEventID__TabNavigateHovered                                                = 7,
	EAudioEventID__ShowLocalPlayerProfile                                            = 8,
	EAudioEventID__FriendsListItemHovered                                            = 9,
	EAudioEventID__FriendsListItemFocused                                            = 10,
	EAudioEventID__FriendsListItemClicked                                            = 11,
	EAudioEventID__FriendsRequestListItemClickedAccept                               = 12,
	EAudioEventID__FriendsRequestListItemClickedDecline                              = 13,
	EAudioEventID__AddFriendButtonClicked                                            = 14,
	EAudioEventID__AddFriendButtonFocused                                            = 15,
	EAudioEventID__AddFriendButtonHovered                                            = 16,
	EAudioEventID__AddFriendTextCommitted                                            = 17,
	EAudioEventID__ContextListItemHovered                                            = 18,
	EAudioEventID__ContextListItemFocused                                            = 19,
	EAudioEventID__ContextListItemClicked                                            = 20,
	EAudioEventID__ConversationListItemHovered                                       = 21,
	EAudioEventID__ConversationListItemFocused                                       = 22,
	EAudioEventID__ConversationListItemClicked                                       = 23,
	EAudioEventID__ConversationInputTextClicked                                      = 24,
	EAudioEventID__ConversationInputTextComitted                                     = 25,
	EAudioEventID__NotificationOnlineFriendCountIncreased                            = 26,
	EAudioEventID__NotificationMessagesCountIncreased                                = 27,
	EAudioEventID__NotificationFriendRequestCountIncreased                           = 28,
	EAudioEventID__NotificationPlayInviteCountIncreased                              = 29
};

/// Enum /Script/RGISocialShared.EAudioLockID
/// Size: 0x01 (1 bytes)
enum class EAudioLockID : uint8_t
{
	EAudioLockID__None                                                               = 0,
	EAudioLockID__MainPanelLoading                                                   = 1,
	EAudioLockID__PanelLoading                                                       = 2,
	EAudioLockID__PanelUnloading                                                     = 3,
	EAudioLockID__PanelCovering                                                      = 4,
	EAudioLockID__WidgetSwitcherMain                                                 = 5,
	EAudioLockID__WidgetSwitcherSubPanels                                            = 6,
	EAudioLockID__ContextMenuLoading                                                 = 7,
	EAudioLockID__DiscordModalLoading                                                = 8,
	EAudioLockID__ConversationsTabPanelLoading                                       = 9,
	EAudioLockID__SearchPanelLoading                                                 = 10,
	EAudioLockID__ListItemScrolling                                                  = 11,
	EAudioLockID__ConversationsInputTextFocused                                      = 12
};

/// Enum /Script/RGISocialShared.ERGISocialSharedPlatform
/// Size: 0x01 (1 bytes)
enum class ERGISocialSharedPlatform : uint8_t
{
	ERGISocialSharedPlatform__FirstPartyA                                            = 0,
	ERGISocialSharedPlatform__FirstPartyB                                            = 1,
	ERGISocialSharedPlatform__FirstPartyC                                            = 2,
	ERGISocialSharedPlatform__NotFirstParty                                          = 3,
	ERGISocialSharedPlatform__Windows                                                = 4,
	ERGISocialSharedPlatform__Mac                                                    = 5,
	ERGISocialSharedPlatform__Ios                                                    = 6,
	ERGISocialSharedPlatform__Android                                                = 7,
	ERGISocialSharedPlatform__Web                                                    = 8,
	ERGISocialSharedPlatform__Riot                                                   = 9,
	ERGISocialSharedPlatform__Unknown                                                = 10
};

/// Enum /Script/RGISocialShared.EToastState
/// Size: 0x01 (1 bytes)
enum class EToastState : uint8_t
{
	EToastState__Success                                                             = 0,
	EToastState__Error                                                               = 1,
	EToastState__Other                                                               = 2
};

/// Struct /Script/RGISocialShared.RGISocialSharedAudioViewModelEventContext
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRGISocialSharedAudioViewModelEventContext
{ 
	class UObject*                                     CallingObject;                                              // 0x0000   (0x0008)  
	EAudioEventID                                      EventId;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UObject*                                     AdditionalContext;                                          // 0x0010   (0x0008)  
};

/// Class /Script/RGISocialShared.RGISocialSharedAudioViewModel
/// Size: 0x00C8 (200 bytes) (0x000070 - 0x0000C8) align 8 MaxSize: 0x00C8
class URGISocialSharedAudioViewModel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(16,5211) /* FMulticastInlineDelegate */ __um(OnAudioEventTriggered);                             // 0x0070   (0x0010)  
	TArray<EAudioLockID>                               LockIDsInUse;                                               // 0x0080   (0x0010)  
	FRGISocialSharedAudioViewModelEventContext         LastEvent;                                                  // 0x0090   (0x0018)  
	TArray<FDateTime>                                  LastEventTimes;                                             // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.UnlockAudio
	// void UnlockAudio(EAudioLockID LockId);                                                                                   // [0x3962410] Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.LockAudio
	// void LockAudio(EAudioLockID LockId, FString ExtraContext);                                                               // [0x51f88f0] Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.IsAudioLocked
	// bool IsAudioLocked(EAudioLockID LockId);                                                                                 // [0x51f87e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.Initialize
	// void Initialize();                                                                                                       // [0x51f8be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.GetLocksFormatted
	// FString GetLocksFormatted();                                                                                             // [0x51f86f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.GetLastEvent
	// FRGISocialSharedAudioViewModelEventContext GetLastEvent();                                                               // [0x51f8790] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedAudioViewModel.BroadcastAudioEvent
	// void BroadcastAudioEvent(FRGISocialSharedAudioViewModelEventContext& EventContext);                                      // [0x51f8ad0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedButtonAction
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class URGISocialSharedButtonAction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0030   (0x0048)  MISSED
	FText                                              ActionText;                                                 // 0x0078   (0x0018)  
	FGameplayTag                                       ActionTag;                                                  // 0x0090   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004)  MISSED


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedButtonAction.SetActionText
	// void SetActionText(FText& InActionText);                                                                                 // [0x51f8fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedButtonAction.GetActionText
	// FText GetActionText();                                                                                                   // [0x51f9100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedButtonAction.Execute
	// void Execute();                                                                                                          // [0x51f8fb0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/RGISocialShared.RGISocialSharedModalAction
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class URGISocialSharedModalAction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	FText                                              ActionText;                                                 // 0x0048   (0x0018)  
	FGameplayTag                                       ActionTag;                                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedModalAction.SetActionText
	// void SetActionText(FText& InActionText);                                                                                 // [0x51f93f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedModalAction.GetActionText
	// FText GetActionText();                                                                                                   // [0x51f9520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedModalAction.Execute
	// void Execute();                                                                                                          // [0x51f8fb0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/RGISocialShared.RGISocialSharedModalManagerViewModel
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class URGISocialSharedModalManagerViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class URGISocialSharedModalViewModelBase*>  ModalStack;                                                 // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.PushSimpleModal
	// void PushSimpleModal(FName ModalType, FText& Title, FText& Message);                                                     // [0x51f9900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.PushModal
	// void PushModal(class URGISocialSharedModalViewModelBase* NewModal);                                                      // [0x51f9cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.PopModal
	// void PopModal();                                                                                                         // [0x51f9c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.HasActiveModal
	// bool HasActiveModal();                                                                                                   // [0x51f9be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.GetTopModal
	// class URGISocialSharedModalViewModelBase* GetTopModal();                                                                 // [0x51f9ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedModalManagerViewModel.ClearModals
	// void ClearModals();                                                                                                      // [0x51f9c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedModalViewModelBase
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class URGISocialSharedModalViewModelBase : public UMVVMViewModelBase
{ 
public:
	TArray<class URGISocialSharedButtonAction*>        ModalActions;                                               // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0080   (0x0018)  MISSED
	FName                                              ModalType;                                                  // 0x0098   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x00A8   (0x0018)  
	FText                                              Message;                                                    // 0x00C0   (0x0018)  


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedModalViewModelBase.SetModel
	// void SetModel(class UObject* Model);                                                                                     // [0x51fa250] Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedModalViewModelBase.OnRequestCloseClicked
	// void OnRequestCloseClicked();                                                                                            // [0x51fa230] Final|Native|Public  
	// Function /Script/RGISocialShared.RGISocialSharedModalViewModelBase.AddDefaultCancelAction
	// void AddDefaultCancelAction(FText& CancelText);                                                                          // [0x51fa350] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedNavigationViewModel
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x0000A0) align 8 MaxSize: 0x00A0
class URGISocialSharedNavigationViewModel : public UMVVMViewModelBase
{ 
public:
	FString                                            NavigationPath;                                             // 0x0070   (0x0010)  
	TArray<FString>                                    NavigationHistory;                                          // 0x0080   (0x0010)  
	class URGIUINavigationModel*                       NavigationModel;                                            // 0x0090   (0x0008)  
	int32_t                                            MaxHistorySize;                                             // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedNavigationViewModel.SetNavigationPath
	// void SetNavigationPath(FString NewPath);                                                                                 // [0x51fab20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedNavigationViewModel.NavigateBack
	// void NavigateBack();                                                                                                     // [0x51fa940] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedNavigationViewModel.Initialize
	// void Initialize(class URGIUINavigationModel* Model);                                                                     // [0x51fad50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedNavigationViewModel.GetNavigationPath
	// FString GetNavigationPath();                                                                                             // [0x51fac50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedNavigationViewModel.AddToNavigationPath
	// void AddToNavigationPath(FString NewPath);                                                                               // [0x51fa960] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedSelectableViewModelInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGISocialSharedSelectableViewModelInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedSelectableViewModelInterface.OnViewModelSelected
	// void OnViewModelSelected();                                                                                              // [0x40b7090] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/RGISocialShared.RGISocialSharedToastCollectionViewModel
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class URGISocialSharedToastCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class URGISocialSharedToastViewModel*>      ToastStack;                                                 // 0x0070   (0x0010)  
	class URGISocialSharedToastViewModel*              LatestToast;                                                // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedToastCollectionViewModel.AddToast
	// class URGISocialSharedToastViewModel* AddToast(FText& Text, int32_t Duration, EToastState State);                        // [0x51fbfa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastCollectionViewModel.AddPartyInviteInboundToast
	// class URGISocialSharedToastViewModel* AddPartyInviteInboundToast(FString Puuid, FString GameName, class URGISocialSharedButtonAction* AcceptAction, class URGISocialSharedButtonAction* CancelAction, int32_t& Duration); // [0x51fb800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastCollectionViewModel.AddFriendRequestInboundToast
	// class URGISocialSharedToastViewModel* AddFriendRequestInboundToast(FString Puuid, FString GameName, class URGISocialSharedButtonAction* AcceptAction, class URGISocialSharedButtonAction* CancelAction, int32_t& Duration); // [0x51fbbd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedToastViewModel
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class URGISocialSharedToastViewModel : public UMVVMViewModelBase
{ 
public:
	FText                                              ToastText;                                                  // 0x0070   (0x0018)  
	bool                                               ToastValid;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            ToastDuration;                                              // 0x008C   (0x0004)  
	EToastState                                        ToastState;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FString                                            ToastPuuid;                                                 // 0x0098   (0x0010)  
	FDateTime                                          ToastArrivalTime;                                           // 0x00A8   (0x0008)  
	TArray<class URGISocialSharedButtonAction*>        ToastActions;                                               // 0x00B0   (0x0010)  
	FName                                              ToastTag;                                                   // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x00CC   (0x000C)  MISSED


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.SetToastValid
	// void SetToastValid(bool Valid);                                                                                          // [0x51fc650] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.SetToastText
	// void SetToastText(FText& Text);                                                                                          // [0x51fcc80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.SetToastState
	// void SetToastState(EToastState State);                                                                                   // [0x51fc9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.SetToastPuuid
	// void SetToastPuuid(FString Puuid);                                                                                       // [0x51fc870] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.SetToastDuration
	// void SetToastDuration(int32_t Duration);                                                                                 // [0x51fcaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.IsToastValid
	// bool IsToastValid();                                                                                                     // [0x51fc5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.Initialize
	// void Initialize(FText& Text, int32_t& Duration, EToastState State, FString Puuid);                                       // [0x51fcdf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.GetToastText
	// FText GetToastText();                                                                                                    // [0x51fcc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.GetToastState
	// EToastState GetToastState();                                                                                             // [0x51fc9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.GetToastPuuid
	// FString GetToastPuuid();                                                                                                 // [0x51fc770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.GetToastDuration
	// int32_t GetToastDuration();                                                                                              // [0x27ec170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedToastViewModel.ForceToastExpire
	// void ForceToastExpire();                                                                                                 // [0x51fc5e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGISocialShared.RGISocialSharedViewModelHelper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGISocialSharedViewModelHelper : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/RGISocialShared.RGISocialSharedSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class URGISocialSharedSettings : public UDeveloperSettings
{ 
public:
	TSoftObjectPtr<class UClass*>                      DefaultAudioViewModel;                                      // 0x0048   (0x0030)  
	TSoftObjectPtr<class UClass*>                      DefaultToastCollectionViewModel;                            // 0x0078   (0x0030)  
	bool                                               bAreAudioEventsEnabled;                                     // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            iMaxSoundEventsPerCooldown;                                 // 0x00AC   (0x0004)  
	float                                              fSoundCooldownSeconds;                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/RGISocialShared.RGISocialSharedSubsystem
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class URGISocialSharedSubsystem : public UGameInstanceSubsystem
{ 
public:
	class URGISocialSharedModalManagerViewModel*       ModalManager;                                               // 0x0038   (0x0008)  
	class URGISocialSharedNavigationViewModel*         NavigationViewModel;                                        // 0x0040   (0x0008)  
	class URGISocialSharedAudioViewModel*              AudioViewModel;                                             // 0x0048   (0x0008)  
	class URGISocialSharedToastCollectionViewModel*    ToastCollectionViewModel;                                   // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.SetupInitialDataAndDelegates
	// void SetupInitialDataAndDelegates();                                                                                     // [0x39273b0] Final|Native|Public  
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.GetMVVMSubsystem
	// class UMVVMSubsystem* GetMVVMSubsystem();                                                                                // [0x51ff1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.GetLocalizedDateTimeString
	// FString GetLocalizedDateTimeString(FDateTime& UtcTimestamp);                                                             // [0x51ff070] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.GetLocal24HourTimeString
	// FString GetLocal24HourTimeString(FDateTime& UtcTimestamp);                                                               // [0x51fed50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.GetAudioViewModel
	// class URGISocialSharedAudioViewModel* GetAudioViewModel();                                                               // [0x3561b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.CreateToastSuccess
	// class URGISocialSharedToastViewModel* CreateToastSuccess(FText& Text, int32_t Duration);                                 // [0x51feb70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.CreateToastError
	// class URGISocialSharedToastViewModel* CreateToastError(FText& Text, int32_t Duration);                                   // [0x51fe990] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.CreateToastDefault
	// class URGISocialSharedToastViewModel* CreateToastDefault(FText& Text, int32_t Duration);                                 // [0x51fe7b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.CreateInboundPartyInviteToast
	// class URGISocialSharedToastViewModel* CreateInboundPartyInviteToast(FString GameName, int32_t Duration, FString Puuid);  // [0x51fe210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialShared.RGISocialSharedSubsystem.CreateInboundFriendRequestToast
	// class URGISocialSharedToastViewModel* CreateInboundFriendRequestToast(FString GameName, int32_t Duration, FString Puuid); // [0x51fe4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGISocialShared.RGIUINavigationModel
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class URGIUINavigationModel : public UMVVMViewModelBase
{ 
public:
	FString                                            NavigationPath;                                             // 0x0070   (0x0010)  
};

/// Struct /Script/RGISocialShared.RGISocialSharedPlayer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRGISocialSharedPlayer
{ 
	FString                                            Puuid;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/RGISocialShared.RGISocialSharedMessage
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRGISocialSharedMessage
{ 
	FString                                            Body;                                                       // 0x0000   (0x0010)  
	FString                                            Channel;                                                    // 0x0010   (0x0010)  
	FString                                            GameName;                                                   // 0x0020   (0x0010)  
	FString                                            GameTag;                                                    // 0x0030   (0x0010)  
	FString                                            Mid;                                                        // 0x0040   (0x0010)  
	FString                                            Name;                                                       // 0x0050   (0x0010)  
	FString                                            Pid;                                                        // 0x0060   (0x0010)  
	FString                                            Puuid;                                                      // 0x0070   (0x0010)  
	bool                                               bRead;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            Region;                                                     // 0x0088   (0x0010)  
	FDateTime                                          Timestamp;                                                  // 0x0098   (0x0008)  
	FString                                            Type;                                                       // 0x00A0   (0x0010)  
	bool                                               bUicEvent;                                                  // 0x00B0   (0x0001)  
	bool                                               bIsInteractionAllowed;                                      // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FRGISocialSharedAudioViewModelEventContext) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(URGISocialSharedAudioViewModel) == 0x00C8); // 200 bytes (0x000070 - 0x0000C8)
static_assert(sizeof(URGISocialSharedButtonAction) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(URGISocialSharedModalAction) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(URGISocialSharedModalManagerViewModel) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(URGISocialSharedModalViewModelBase) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(URGISocialSharedNavigationViewModel) == 0x00A0); // 160 bytes (0x000070 - 0x0000A0)
static_assert(sizeof(URGISocialSharedSelectableViewModelInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGISocialSharedToastCollectionViewModel) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(URGISocialSharedToastViewModel) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(URGISocialSharedViewModelHelper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGISocialSharedSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(URGISocialSharedSubsystem) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(URGIUINavigationModel) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(FRGISocialSharedPlayer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRGISocialSharedMessage) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(offsetof(FRGISocialSharedAudioViewModelEventContext, CallingObject) == 0x0000);
static_assert(offsetof(FRGISocialSharedAudioViewModelEventContext, EventId) == 0x0008);
static_assert(offsetof(FRGISocialSharedAudioViewModelEventContext, AdditionalContext) == 0x0010);
static_assert(offsetof(URGISocialSharedAudioViewModel, LockIDsInUse) == 0x0080);
static_assert(offsetof(URGISocialSharedAudioViewModel, LastEvent) == 0x0090);
static_assert(offsetof(URGISocialSharedAudioViewModel, LastEventTimes) == 0x00A8);
static_assert(offsetof(URGISocialSharedButtonAction, ActionText) == 0x0078);
static_assert(offsetof(URGISocialSharedButtonAction, ActionTag) == 0x0090);
static_assert(offsetof(URGISocialSharedModalAction, ActionText) == 0x0048);
static_assert(offsetof(URGISocialSharedModalAction, ActionTag) == 0x0060);
static_assert(offsetof(URGISocialSharedModalManagerViewModel, ModalStack) == 0x0070);
static_assert(offsetof(URGISocialSharedModalViewModelBase, ModalActions) == 0x0070);
static_assert(offsetof(URGISocialSharedModalViewModelBase, ModalType) == 0x0098);
static_assert(offsetof(URGISocialSharedModalViewModelBase, Title) == 0x00A8);
static_assert(offsetof(URGISocialSharedModalViewModelBase, Message) == 0x00C0);
static_assert(offsetof(URGISocialSharedNavigationViewModel, NavigationPath) == 0x0070);
static_assert(offsetof(URGISocialSharedNavigationViewModel, NavigationHistory) == 0x0080);
static_assert(offsetof(URGISocialSharedNavigationViewModel, NavigationModel) == 0x0090);
static_assert(offsetof(URGISocialSharedToastCollectionViewModel, ToastStack) == 0x0070);
static_assert(offsetof(URGISocialSharedToastCollectionViewModel, LatestToast) == 0x0080);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastText) == 0x0070);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastState) == 0x0090);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastPuuid) == 0x0098);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastArrivalTime) == 0x00A8);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastActions) == 0x00B0);
static_assert(offsetof(URGISocialSharedToastViewModel, ToastTag) == 0x00C0);
static_assert(offsetof(URGISocialSharedSettings, DefaultAudioViewModel) == 0x0048);
static_assert(offsetof(URGISocialSharedSettings, DefaultToastCollectionViewModel) == 0x0078);
static_assert(offsetof(URGISocialSharedSubsystem, ModalManager) == 0x0038);
static_assert(offsetof(URGISocialSharedSubsystem, NavigationViewModel) == 0x0040);
static_assert(offsetof(URGISocialSharedSubsystem, AudioViewModel) == 0x0048);
static_assert(offsetof(URGISocialSharedSubsystem, ToastCollectionViewModel) == 0x0050);
static_assert(offsetof(URGIUINavigationModel, NavigationPath) == 0x0070);
static_assert(offsetof(FRGISocialSharedPlayer, Puuid) == 0x0000);
static_assert(offsetof(FRGISocialSharedMessage, Body) == 0x0000);
static_assert(offsetof(FRGISocialSharedMessage, Channel) == 0x0010);
static_assert(offsetof(FRGISocialSharedMessage, GameName) == 0x0020);
static_assert(offsetof(FRGISocialSharedMessage, GameTag) == 0x0030);
static_assert(offsetof(FRGISocialSharedMessage, Mid) == 0x0040);
static_assert(offsetof(FRGISocialSharedMessage, Name) == 0x0050);
static_assert(offsetof(FRGISocialSharedMessage, Pid) == 0x0060);
static_assert(offsetof(FRGISocialSharedMessage, Puuid) == 0x0070);
static_assert(offsetof(FRGISocialSharedMessage, Region) == 0x0088);
static_assert(offsetof(FRGISocialSharedMessage, Timestamp) == 0x0098);
static_assert(offsetof(FRGISocialSharedMessage, Type) == 0x00A0);
