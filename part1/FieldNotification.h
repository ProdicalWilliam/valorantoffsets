
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/FieldNotification.NotifyFieldValueChanged
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNotifyFieldValueChanged : public UInterface
{ 
public:
};

/// Struct /Script/FieldNotification.FieldNotificationId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFieldNotificationId
{ 
	FName                                              FieldName;                                                  // 0x0000   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(UNotifyFieldValueChanged) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FFieldNotificationId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(FFieldNotificationId, FieldName) == 0x0000);
