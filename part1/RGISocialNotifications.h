
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel

#pragma pack(push, 0x1)

/// Enum /Script/RGISocialNotifications.ENotificationType
/// Size: 0x04 (4 bytes)
enum class ENotificationType : uint32_t
{
	ENotificationType__Unknown                                                       = 0,
	ENotificationType__FriendRequest                                                 = 1,
	ENotificationType__PartyInvite                                                   = 2
};

/// Enum /Script/RGISocialNotifications.NotificationCounterType
/// Size: 0x01 (1 bytes)
enum class NotificationCounterType : uint8_t
{
	NotificationCounterType__Simple                                                  = 0,
	NotificationCounterType__Aggregate                                               = 1,
	NotificationCounterType__Composite                                               = 2,
	NotificationCounterType__All                                                     = 3,
	NotificationCounterType__None                                                    = 4
};

/// Class /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x0000D0) align 8 MaxSize: 0x00D0
class URGISocialNotificationsNotificationCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class URGISocialNotificationsNotificationViewModel*> Notifications;                                     // 0x0070   (0x0010)  
	SDK_UNDEFINED(80,5214) /* TSet<URGISocialNotificationsNotificationViewModel*> */ __um(NotificationsSet);       // 0x0080   (0x0050)  


	/// Functions
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.RemoveNotificationFromCollection
	// void RemoveNotificationFromCollection(class URGISocialNotificationsNotificationViewModel* NotificationViewModel);        // [0x52059a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotifications
	// TArray<URGISocialNotificationsNotificationViewModel*> GetNotifications();                                                // [0x52055c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotificationCount
	// int32_t GetNotificationCount();                                                                                          // [0x5205980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.DeclineAllNotifications
	// void DeclineAllNotifications();                                                                                          // [0x5205650] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.ClearNotificationsByType
	// void ClearNotificationsByType(ENotificationType& InType);                                                                // [0x5205780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.AddNotificationToCollection
	// void AddNotificationToCollection(class URGISocialNotificationsNotificationViewModel* NotificationViewModel);             // [0x5205a90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel
/// Size: 0x0120 (288 bytes) (0x000070 - 0x000120) align 8 MaxSize: 0x0120
class URGISocialNotificationsNotificationViewModel : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0070   (0x0030)  MISSED
	ENotificationType                                  Type;                                                       // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x00A8   (0x0018)  
	FText                                              Message;                                                    // 0x00C0   (0x0018)  
	FText                                              AcknowledgeText;                                            // 0x00D8   (0x0018)  
	FText                                              DeclineText;                                                // 0x00F0   (0x0018)  
	class UObject*                                     Data;                                                       // 0x0108   (0x0008)  
	bool                                               bIsRead;                                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	FDateTime                                          NotificationTimestamp;                                      // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetType
	// void SetType(ENotificationType& InType);                                                                                 // [0x5206890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetTitle
	// void SetTitle(FText& InTitle);                                                                                           // [0x5206770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetMessage
	// void SetMessage(FText& InMessage);                                                                                       // [0x5206650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetIsRead
	// void SetIsRead(bool InIsRead);                                                                                           // [0x5206530] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetDeclineText
	// void SetDeclineText(FText& InDeclineText);                                                                               // [0x52062f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetData
	// void SetData(class UObject* InData);                                                                                     // [0x52061d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetAcknowledgeText
	// void SetAcknowledgeText(FText& InAcknowledgeText);                                                                       // [0x5206410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetType
	// ENotificationType GetType();                                                                                             // [0x5206b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetTitle
	// FText GetTitle();                                                                                                        // [0x5206b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetMessage
	// FText GetMessage();                                                                                                      // [0x5206aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetIsRead
	// bool GetIsRead();                                                                                                        // [0x5206a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetDeclineText
	// FText GetDeclineText();                                                                                                  // [0x52069a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetData
	// class UObject* GetData();                                                                                                // [0x5206980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetAcknowledgeText
	// FText GetAcknowledgeText();                                                                                              // [0x5206a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RGISocialNotifications.RGISocialCounter
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class URGISocialCounter : public UObject
{ 
public:
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	bool                                               bIncludeInAll;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x13];                                      // 0x0035   (0x0013)  MISSED
};

/// Class /Script/RGISocialNotifications.SubTaggedCounterMap
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class USubTaggedCounterMap : public UObject
{ 
public:
	class URGISocialCounter*                           AggregateCounter;                                           // 0x0030   (0x0008)  
	TMap<FString, class URGISocialCounter*>            SubTagToCounterMap;                                         // 0x0038   (0x0050)  
};

/// Class /Script/RGISocialNotifications.RGISocialNotificationsSubsystem
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class URGISocialNotificationsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	TMap<FString, class URGISocialCounter*>            SimpleCounterMap;                                           // 0x0050   (0x0050)  
	TMap<FString, class USubTaggedCounterMap*>         AggregateCounterMap;                                        // 0x00A0   (0x0050)  
	class URGISocialNotificationsNotificationCollectionViewModel* NotificationCollectionViewModel;                 // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.SetSimpleCount
	// void SetSimpleCount(FString Tag, int32_t Count, bool IncludeInAll);                                                      // [0x5209570] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.SetLoadingState
	// void SetLoadingState(bool IsLoading);                                                                                    // [0x5207730] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.SetCompositeCount
	// void SetCompositeCount(FString Tag, FString SubTag, int32_t Count, bool IncludeInAll);                                   // [0x5208680] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.ResetAggregateCounter
	// void ResetAggregateCounter(FString Tag);                                                                                 // [0x52089b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.HasSimpleCounter
	// bool HasSimpleCounter(FString Tag);                                                                                      // [0x5208e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.HasCompositeCounter
	// bool HasCompositeCounter(FString Tag, FString SubTag);                                                                   // [0x5207830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.HasAggregateCounter
	// bool HasAggregateCounter(FString Tag);                                                                                   // [0x5207a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCounter
	// class URGISocialCounter* GetSimpleCounter(FString Tag);                                                                  // [0x5208fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCount
	// int32_t GetSimpleCount(FString Tag);                                                                                     // [0x5209100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeSimpleCounter
	// class URGISocialCounter* GetOrInitializeSimpleCounter(FString Tag);                                                      // [0x52097e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeCompositeCounter
	// class URGISocialCounter* GetOrInitializeCompositeCounter(FString Tag, FString SubTag);                                   // [0x5208ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeAggregateCounter
	// class URGISocialCounter* GetOrInitializeAggregateCounter(FString Tag);                                                   // [0x5208d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetIsLoading
	// bool GetIsLoading();                                                                                                     // [0x5207710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCounter
	// class URGISocialCounter* GetCompositeCounter(FString Tag, FString SubTag);                                               // [0x5207ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCount
	// int32_t GetCompositeCount(FString Tag, FString SubTag);                                                                  // [0x5207f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetAllCount
	// int32_t GetAllCount();                                                                                                   // [0x41e7f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCounter
	// class URGISocialCounter* GetAggregateCounter(FString Tag);                                                               // [0x5207dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCount
	// int32_t GetAggregateCount(FString Tag);                                                                                  // [0x5208140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.AddSimpleCount
	// void AddSimpleCount(FString Tag, int32_t Count, bool IncludeInAll);                                                      // [0x5209300] Final|Native|Public|BlueprintCallable 
	// Function /Script/RGISocialNotifications.RGISocialNotificationsSubsystem.AddCompositeCount
	// void AddCompositeCount(FString Tag, FString SubTag, int32_t Count, bool IncludeInAll);                                   // [0x5208350] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(URGISocialNotificationsNotificationCollectionViewModel) == 0x00D0); // 208 bytes (0x000070 - 0x0000D0)
static_assert(sizeof(URGISocialNotificationsNotificationViewModel) == 0x0120); // 288 bytes (0x000070 - 0x000120)
static_assert(sizeof(URGISocialCounter) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(USubTaggedCounterMap) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(URGISocialNotificationsSubsystem) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(offsetof(URGISocialNotificationsNotificationCollectionViewModel, Notifications) == 0x0070);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, Type) == 0x00A0);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, Title) == 0x00A8);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, Message) == 0x00C0);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, AcknowledgeText) == 0x00D8);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, DeclineText) == 0x00F0);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, Data) == 0x0108);
static_assert(offsetof(URGISocialNotificationsNotificationViewModel, NotificationTimestamp) == 0x0118);
static_assert(offsetof(USubTaggedCounterMap, AggregateCounter) == 0x0030);
static_assert(offsetof(USubTaggedCounterMap, SubTagToCounterMap) == 0x0038);
static_assert(offsetof(URGISocialNotificationsSubsystem, SimpleCounterMap) == 0x0050);
static_assert(offsetof(URGISocialNotificationsSubsystem, AggregateCounterMap) == 0x00A0);
static_assert(offsetof(URGISocialNotificationsSubsystem, NotificationCollectionViewModel) == 0x00F0);
