
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/Globals/Globals.Globals_C
/// Size: 0x08B8 (2232 bytes) (0x0008A0 - 0x0008B8) align 8 MaxSize: 0x08B8
class UGlobals_C : public UShooterGameGlobals
{ 
public:
	double                                             HealAssistMoneyPerHP;                                       // 0x08A0   (0x0008)  
	SDK_UNDEFINED(16,5123) /* FMulticastInlineDelegate */ __um(NewEventDispatcher);                                // 0x08A8   (0x0010)  


	/// Functions
	// Function /Game/Globals/Globals.Globals_C.NewEventDispatcher_0__DelegateSignature
	// void NewEventDispatcher_0__DelegateSignature();                                                                          // [0x1a821d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Globals/WallPenGlobals.WallPenGlobals_C
/// Size: 0x0948 (2376 bytes) (0x000948 - 0x000948) align 8 MaxSize: 0x0948
class UWallPenGlobals_C : public UAresWallPenetrationGlobals
{ 
public:
};

/// Class /Game/Globals/BPAresSettingsManager.BPAresSettingsManager_C
/// Size: 0x08A0 (2208 bytes) (0x0008A0 - 0x0008A0) align 8 MaxSize: 0x08A0
class UBPAresSettingsManager_C : public UAresSettingsManager
{ 
public:
};

/// Class /Game/Globals/BPAresClientGameInstance.BPAresClientGameInstance_C
/// Size: 0x09A8 (2472 bytes) (0x0009A8 - 0x0009A8) align 8 MaxSize: 0x09A8
class UBPAresClientGameInstance_C : public UAresClientGameInstance
{ 
public:
};

/// Class /Game/Globals/DefaultValueDisagreementTimerTuning.DefaultValueDisagreementTimerTuning_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDefaultValueDisagreementTimerTuning_C : public UValueDisagreementTimer
{ 
public:
};

/// Class /Game/Globals/EquippableGlobals.EquippableGlobals_C
/// Size: 0x0148 (328 bytes) (0x000148 - 0x000148) align 8 MaxSize: 0x0148
class UEquippableGlobals_C : public UAresEquippableGlobals
{ 
public:
};

/// Class /Game/Globals/NetworkingGlobals.NetworkingGlobals_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNetworkingGlobals_C : public UAresNetworkingGlobals
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UGlobals_C) == 0x08B8); // 2232 bytes (0x0008A0 - 0x0008B8)
static_assert(sizeof(UWallPenGlobals_C) == 0x0948); // 2376 bytes (0x000948 - 0x000948)
static_assert(sizeof(UBPAresSettingsManager_C) == 0x08A0); // 2208 bytes (0x0008A0 - 0x0008A0)
static_assert(sizeof(UBPAresClientGameInstance_C) == 0x09A8); // 2472 bytes (0x0009A8 - 0x0009A8)
static_assert(sizeof(UDefaultValueDisagreementTimerTuning_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UEquippableGlobals_C) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UNetworkingGlobals_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
