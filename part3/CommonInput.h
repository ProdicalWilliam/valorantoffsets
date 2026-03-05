
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
/// dependency: EnhancedInput
/// dependency: InputCore
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Enum /Script/CommonInput.ECommonInputType
/// Size: 0x01 (1 bytes)
enum class ECommonInputType : uint8_t
{
	ECommonInputType__MouseAndKeyboard                                               = 0,
	ECommonInputType__Gamepad                                                        = 1,
	ECommonInputType__Touch                                                          = 2,
	ECommonInputType__Count                                                          = 3
};

/// Enum /Script/CommonInput.ECommonInputMode
/// Size: 0x01 (1 bytes)
enum class ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu                                                           = 0,
	ECommonInputMode__Game                                                           = 1,
	ECommonInputMode__All                                                            = 2
};

/// Enum /Script/CommonInput.ECommonInputEventFlowBehavior
/// Size: 0x04 (4 bytes)
enum class ECommonInputEventFlowBehavior : uint32_t
{
	ECommonInputEventFlowBehavior__BlockIfActive                                     = 0,
	ECommonInputEventFlowBehavior__BlockIfHandled                                    = 1,
	ECommonInputEventFlowBehavior__NeverBlock                                        = 2
};

/// Class /Script/CommonInput.CommonInputActionDomain
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UCommonInputActionDomain : public UDataAsset
{ 
public:
	ECommonInputEventFlowBehavior                      Behavior;                                                   // 0x0038   (0x0004)  
	ECommonInputEventFlowBehavior                      InnerBehavior;                                              // 0x003C   (0x0004)  
	bool                                               bUseActionDomainDesiredInputConfig;                         // 0x0040   (0x0001)  
	ECommonInputMode                                   InputMode;                                                  // 0x0041   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/CommonInput.CommonInputActionDomainTable
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UCommonInputActionDomainTable : public UDataAsset
{ 
public:
	TArray<class UCommonInputActionDomain*>            ActionDomains;                                              // 0x0038   (0x0010)  
	ECommonInputMode                                   InputMode;                                                  // 0x0048   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UCommonUIInputData : public UObject
{ 
public:
	FDataTableRowHandle                                DefaultClickAction;                                         // 0x0030   (0x0018)  
	FDataTableRowHandle                                DefaultBackAction;                                          // 0x0048   (0x0018)  
	TSoftObjectPtr<class UClass*>                      DefaultHoldData;                                            // 0x0060   (0x0030)  
	class UInputAction*                                EnhancedInputClickAction;                                   // 0x0090   (0x0008)  
	class UInputAction*                                EnhancedInputBackAction;                                    // 0x0098   (0x0008)  
};

/// Struct /Script/CommonInput.InputHoldData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInputHoldData
{ 
	float                                              HoldTime;                                                   // 0x0000   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x0004   (0x0004)  
};

/// Class /Script/CommonInput.CommonUIHoldData
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCommonUIHoldData : public UObject
{ 
public:
	FInputHoldData                                     KeyboardAndMouse;                                           // 0x0030   (0x0008)  
	FInputHoldData                                     Gamepad;                                                    // 0x0038   (0x0008)  
	FInputHoldData                                     Touch;                                                      // 0x0040   (0x0008)  
};

/// Struct /Script/CommonInput.InputDeviceIdentifierPair
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInputDeviceIdentifierPair
{ 
	FName                                              InputDeviceName;                                            // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            HardwareDeviceIdentifier;                                   // 0x0010   (0x0010)  
};

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FCommonInputKeyBrushConfiguration
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0020)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0020   (0x00D0)  
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FCommonInputKeySetBrushConfiguration
{ 
	TArray<FKey>                                       Keys;                                                       // 0x0000   (0x0010)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0010   (0x00D0)  
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UCommonInputBaseControllerData : public UObject
{ 
public:
	ECommonInputType                                   InputType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              GamepadName;                                                // 0x0034   (0x000C)  
	FText                                              GamepadDisplayName;                                         // 0x0040   (0x0018)  
	FText                                              GamepadCategory;                                            // 0x0058   (0x0018)  
	FText                                              GamepadPlatformName;                                        // 0x0070   (0x0018)  
	TArray<FInputDeviceIdentifierPair>                 GamepadHardwareIdMapping;                                   // 0x0088   (0x0010)  
	TWeakObjectPtr<class UTexture2D*>                  ControllerTexture;                                          // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00A0   (0x0028)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  ControllerButtonMaskTexture;                                // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x00D0   (0x0028)  MISSED
	TArray<FCommonInputKeyBrushConfiguration>          InputBrushDataMap;                                          // 0x00F8   (0x0010)  
	TArray<FCommonInputKeySetBrushConfiguration>       InputBrushKeySets;                                          // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	// TArray<FName> GetRegisteredGamepads();                                                                                   // [0x4ead940] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputPlatformSettings
/// Size: 0x0088 (136 bytes) (0x000050 - 0x000088) align 8 MaxSize: 0x0088
class UCommonInputPlatformSettings : public UPlatformSettings
{ 
public:
	ECommonInputType                                   DefaultInputType;                                           // 0x0050   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0051   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0052   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x0053   (0x0001)  
	FName                                              DefaultGamepadName;                                         // 0x0054   (0x000C)  
	bool                                               bCanChangeGamepadType;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(16,412) /* TArray<TSoftObjectPtr<UClass*>> */ __um(ControllerData);                              // 0x0068   (0x0010)  
	TArray<class UClass*>                              ControllerDataClasses;                                      // 0x0078   (0x0010)  
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FCommonInputPlatformBaseData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	ECommonInputType                                   DefaultInputType;                                           // 0x0008   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0009   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000B   (0x0001)  MISSED
	FName                                              DefaultGamepadName;                                         // 0x000C   (0x000C)  
	bool                                               bCanChangeGamepadType;                                      // 0x0018   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	SDK_UNDEFINED(16,413) /* TArray<TSoftObjectPtr<UClass*>> */ __um(ControllerData);                              // 0x0020   (0x0010)  
	TArray<class UClass*>                              ControllerDataClasses;                                      // 0x0030   (0x0010)  
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x0140 (320 bytes) (0x000048 - 0x000140) align 8 MaxSize: 0x0140
class UCommonInputSettings : public UDeveloperSettings
{ 
public:
	TSoftObjectPtr<class UClass*>                      InputData;                                                  // 0x0048   (0x0030)  
	FPerPlatformSettings                               PlatformInput;                                              // 0x0078   (0x0010)  
	TMap<FName, FCommonInputPlatformBaseData>          CommonInputPlatformData;                                    // 0x0088   (0x0050)  
	bool                                               bEnableInputMethodThrashingProtection;                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            InputMethodThrashingLimit;                                  // 0x00DC   (0x0004)  
	double                                             InputMethodThrashingWindowInSeconds;                        // 0x00E0   (0x0008)  
	double                                             InputMethodThrashingCooldownInSeconds;                      // 0x00E8   (0x0008)  
	bool                                               bAllowOutOfFocusDeviceInput;                                // 0x00F0   (0x0001)  
	bool                                               bEnableDefaultInputConfig;                                  // 0x00F1   (0x0001)  
	bool                                               bEnableEnhancedInputSupport;                                // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00F3   (0x0005)  MISSED
	TWeakObjectPtr<class UCommonInputActionDomainTable*> ActionDomainTable;                                        // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0100   (0x0030)  MISSED
	class UClass*                                      InputDataClass;                                             // 0x0130   (0x0008)  
	class UCommonInputActionDomainTable*               ActionDomainTablePtr;                                       // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
	// bool IsEnhancedInputSupportEnabled();                                                                                    // [0x4eb0a00] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x0120 (288 bytes) (0x000038 - 0x000120) align 8 MaxSize: 0x0120
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0038   (0x0038)  MISSED
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                               // 0x0070   (0x0010)  
	int32_t                                            NumberOfInputMethodChangesRecently;                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	double                                             LastInputMethodChangeTime;                                  // 0x0088   (0x0008)  
	double                                             LastTimeInputMethodThrashingBegan;                          // 0x0090   (0x0008)  
	ECommonInputType                                   LastInputType;                                              // 0x0098   (0x0001)  
	ECommonInputType                                   CurrentInputType;                                           // 0x0099   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	FName                                              GamepadInputType;                                           // 0x009C   (0x000C)  
	TMap<FName, ECommonInputType>                      CurrentInputLocks;                                          // 0x00A8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	class UCommonInputActionDomainTable*               ActionDomainTable;                                          // 0x0100   (0x0008)  
	bool                                               bIsGamepadSimulatedClick;                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData04_7[0x17];                                      // 0x0109   (0x0017)  MISSED


	/// Functions
	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	// bool ShouldShowInputKeys();                                                                                              // [0x4eb1ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType
	// void SetGamepadInputType(FName InGamepadInputType);                                                                      // [0x4eb2060] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType
	// void SetCurrentInputType(ECommonInputType NewInputType);                                                                 // [0x4eb21e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput
	// bool IsUsingPointerInput();                                                                                              // [0x4eb2020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive
	// bool IsInputMethodActive(ECommonInputType InputMethod);                                                                  // [0x4eb2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType
	// ECommonInputType GetDefaultInputType();                                                                                  // [0x4eb22d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType
	// ECommonInputType GetCurrentInputType();                                                                                  // [0x4eb2340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	// FName GetCurrentGamepadName();                                                                                           // [0x4eb21b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged
	// void BroadcastInputMethodChanged();                                                                                      // [0x4eb1fd0] Final|Native|Protected 
};

#pragma pack(pop)


static_assert(sizeof(UCommonInputActionDomain) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UCommonInputActionDomainTable) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UCommonUIInputData) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FInputHoldData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UCommonUIHoldData) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FInputDeviceIdentifierPair) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCommonInputKeyBrushConfiguration) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FCommonInputKeySetBrushConfiguration) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(UCommonInputBaseControllerData) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UCommonInputPlatformSettings) == 0x0088); // 136 bytes (0x000050 - 0x000088)
static_assert(sizeof(FCommonInputPlatformBaseData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UCommonInputSettings) == 0x0140); // 320 bytes (0x000048 - 0x000140)
static_assert(sizeof(UCommonInputSubsystem) == 0x0120); // 288 bytes (0x000038 - 0x000120)
static_assert(offsetof(UCommonInputActionDomain, Behavior) == 0x0038);
static_assert(offsetof(UCommonInputActionDomain, InnerBehavior) == 0x003C);
static_assert(offsetof(UCommonInputActionDomain, InputMode) == 0x0041);
static_assert(offsetof(UCommonInputActionDomain, MouseCaptureMode) == 0x0042);
static_assert(offsetof(UCommonInputActionDomainTable, ActionDomains) == 0x0038);
static_assert(offsetof(UCommonInputActionDomainTable, InputMode) == 0x0048);
static_assert(offsetof(UCommonInputActionDomainTable, MouseCaptureMode) == 0x0049);
static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 0x0030);
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 0x0048);
static_assert(offsetof(UCommonUIInputData, DefaultHoldData) == 0x0060);
static_assert(offsetof(UCommonUIInputData, EnhancedInputClickAction) == 0x0090);
static_assert(offsetof(UCommonUIInputData, EnhancedInputBackAction) == 0x0098);
static_assert(offsetof(UCommonUIHoldData, KeyboardAndMouse) == 0x0030);
static_assert(offsetof(UCommonUIHoldData, Gamepad) == 0x0038);
static_assert(offsetof(UCommonUIHoldData, Touch) == 0x0040);
static_assert(offsetof(FInputDeviceIdentifierPair, InputDeviceName) == 0x0000);
static_assert(offsetof(FInputDeviceIdentifierPair, HardwareDeviceIdentifier) == 0x0010);
static_assert(offsetof(FCommonInputKeyBrushConfiguration, Key) == 0x0000);
static_assert(offsetof(FCommonInputKeyBrushConfiguration, KeyBrush) == 0x0020);
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, Keys) == 0x0000);
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, KeyBrush) == 0x0010);
static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 0x0030);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 0x0034);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadDisplayName) == 0x0040);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadCategory) == 0x0058);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadPlatformName) == 0x0070);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadHardwareIdMapping) == 0x0088);
static_assert(offsetof(UCommonInputBaseControllerData, ControllerTexture) == 0x0098);
static_assert(offsetof(UCommonInputBaseControllerData, ControllerButtonMaskTexture) == 0x00C8);
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 0x00F8);
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 0x0108);
static_assert(offsetof(UCommonInputPlatformSettings, DefaultInputType) == 0x0050);
static_assert(offsetof(UCommonInputPlatformSettings, DefaultGamepadName) == 0x0054);
static_assert(offsetof(UCommonInputPlatformSettings, ControllerDataClasses) == 0x0078);
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultInputType) == 0x0008);
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultGamepadName) == 0x000C);
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerDataClasses) == 0x0030);
static_assert(offsetof(UCommonInputSettings, InputData) == 0x0048);
static_assert(offsetof(UCommonInputSettings, PlatformInput) == 0x0078);
static_assert(offsetof(UCommonInputSettings, CommonInputPlatformData) == 0x0088);
static_assert(offsetof(UCommonInputSettings, ActionDomainTable) == 0x00F8);
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 0x0130);
static_assert(offsetof(UCommonInputSettings, ActionDomainTablePtr) == 0x0138);
static_assert(offsetof(UCommonInputSubsystem, LastInputType) == 0x0098);
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 0x0099);
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 0x009C);
static_assert(offsetof(UCommonInputSubsystem, CurrentInputLocks) == 0x00A8);
static_assert(offsetof(UCommonInputSubsystem, ActionDomainTable) == 0x0100);
