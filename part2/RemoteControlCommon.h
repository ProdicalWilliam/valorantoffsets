
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

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControlCommon.ERCProtocolBinding
/// Size: 0x01 (1 bytes)
enum class ERCProtocolBinding : uint8_t
{
	ERCProtocolBinding__Added                                                        = 0,
	ERCProtocolBinding__Removed                                                      = 1
};

/// Enum /Script/RemoteControlCommon.ERCMask
/// Size: 0x01 (1 bytes)
enum class ERCMask : uint8_t
{
	ERCMask__NoMask                                                                  = 0,
	ERCMask__MaskA                                                                   = 1,
	ERCMask__MaskB                                                                   = 2,
	ERCMask__MaskC                                                                   = 4,
	ERCMask__MaskD                                                                   = 8
};

/// Class /Script/RemoteControlCommon.RCPropertyContainerBase
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URCPropertyContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Struct /Script/RemoteControlCommon.RCPropertyContainerKey
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRCPropertyContainerKey
{ 
	FName                                              ValueTypeName;                                              // 0x0000   (0x000C)  
};

/// Class /Script/RemoteControlCommon.RCPropertyContainerRegistry
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class URCPropertyContainerRegistry : public UEngineSubsystem
{ 
public:
	TMap<FRCPropertyContainerKey, class UClass*>       CachedContainerClasses;                                     // 0x0038   (0x0050)  
};

/// Class /Script/RemoteControlCommon.PropertyContainerTestObject
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPropertyContainerTestObject : public UObject
{ 
public:
	bool                                               bSomeBool;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           SomeUInt32;                                                 // 0x0034   (0x0004)  
	float                                              SomeFloat;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            SomeVector;                                                 // 0x0040   (0x0018)  
	FRotator                                           SomeRotator;                                                // 0x0058   (0x0018)  
	int32_t                                            SomeClampedInt;                                             // 0x0070   (0x0004)  
	int32_t                                            SomeClampedInt2;                                            // 0x0074   (0x0004)  
	int32_t                                            SomeUIClampedInt;                                           // 0x0078   (0x0004)  
	float                                              SomeClampedFloat;                                           // 0x007C   (0x0004)  
	float                                              SomeUIClampedFloat;                                         // 0x0080   (0x0004)  
	float                                              SomeClampedFloat2;                                          // 0x0084   (0x0004)  
	FString                                            SomeString;                                                 // 0x0088   (0x0010)  
	FText                                              SomeText;                                                   // 0x0098   (0x0018)  
	TArray<float>                                      SomeFloatArray;                                             // 0x00B0   (0x0010)  
};

/// Struct /Script/RemoteControlCommon.RCPassphrase
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCPassphrase
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            Passphrase;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/RemoteControlCommon.RemoteControlSettings
/// Size: 0x0118 (280 bytes) (0x000048 - 0x000118) align 8 MaxSize: 0x0118
class URemoteControlSettings : public UDeveloperSettings
{ 
public:
	bool                                               bProtocolsGenerateTransactions;                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            RemoteControlWebInterfaceBindAddress;                       // 0x0050   (0x0010)  
	uint32_t                                           RemoteControlWebInterfacePort;                              // 0x0060   (0x0004)  
	bool                                               bForceWebAppBuildAtStartup;                                 // 0x0064   (0x0001)  
	bool                                               bWebAppLogRequestDuration;                                  // 0x0065   (0x0001)  
	bool                                               bAutoStartWebServer;                                        // 0x0066   (0x0001)  
	bool                                               bAutoStartWebSocketServer;                                  // 0x0067   (0x0001)  
	uint32_t                                           RemoteControlHttpServerPort;                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            RemoteControlWebsocketServerBindAddress;                    // 0x0070   (0x0010)  
	uint32_t                                           RemoteControlWebSocketServerPort;                           // 0x0080   (0x0004)  
	bool                                               bDisplayInEditorOnlyWarnings;                               // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              TreeBindingSplitRatio;                                      // 0x0088   (0x0004)  
	bool                                               bUseRebindingContext;                                       // 0x008C   (0x0001)  
	bool                                               bIgnoreProtectedCheck;                                      // 0x008D   (0x0001)  
	bool                                               bIgnoreGetterSetterCheck;                                   // 0x008E   (0x0001)  
	bool                                               bIgnoreWarnings;                                            // 0x008F   (0x0001)  
	bool                                               bRestrictServerAccess;                                      // 0x0090   (0x0001)  
	bool                                               bEnableRemotePythonExecution;                               // 0x0091   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0092   (0x0006)  MISSED
	SDK_UNDEFINED(80,5195) /* TSet<FRCNetworkAddressRange> */ __um(AllowlistedClients);                            // 0x0098   (0x0050)  
	FString                                            AllowedOrigin;                                              // 0x00E8   (0x0010)  
	bool                                               bEnforcePassphraseForRemoteClients;                         // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<FRCPassphrase>                              Passphrases;                                                // 0x0100   (0x0010)  
	bool                                               bShowPassphraseDisabledWarning;                             // 0x0110   (0x0001)  
	bool                                               bSecuritySettingsReviewed;                                  // 0x0111   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x0112   (0x0006)  MISSED
};

/// Struct /Script/RemoteControlCommon.RCNetworkAddress
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FRCNetworkAddress
{ 
	char                                               ClassA;                                                     // 0x0000   (0x0001)  
	char                                               ClassB;                                                     // 0x0001   (0x0001)  
	char                                               ClassC;                                                     // 0x0002   (0x0001)  
	char                                               ClassD;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/RemoteControlCommon.RCNetworkAddressRange
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FRCNetworkAddressRange
{ 
	FRCNetworkAddress                                  LowerBound;                                                 // 0x0000   (0x0004)  
	FRCNetworkAddress                                  UpperBound;                                                 // 0x0004   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(URCPropertyContainerBase) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FRCPropertyContainerKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(URCPropertyContainerRegistry) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UPropertyContainerTestObject) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(FRCPassphrase) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(URemoteControlSettings) == 0x0118); // 280 bytes (0x000048 - 0x000118)
static_assert(sizeof(FRCNetworkAddress) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRCNetworkAddressRange) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FRCPropertyContainerKey, ValueTypeName) == 0x0000);
static_assert(offsetof(URCPropertyContainerRegistry, CachedContainerClasses) == 0x0038);
static_assert(offsetof(UPropertyContainerTestObject, SomeVector) == 0x0040);
static_assert(offsetof(UPropertyContainerTestObject, SomeRotator) == 0x0058);
static_assert(offsetof(UPropertyContainerTestObject, SomeString) == 0x0088);
static_assert(offsetof(UPropertyContainerTestObject, SomeText) == 0x0098);
static_assert(offsetof(UPropertyContainerTestObject, SomeFloatArray) == 0x00B0);
static_assert(offsetof(FRCPassphrase, Identifier) == 0x0000);
static_assert(offsetof(FRCPassphrase, Passphrase) == 0x0010);
static_assert(offsetof(URemoteControlSettings, RemoteControlWebInterfaceBindAddress) == 0x0050);
static_assert(offsetof(URemoteControlSettings, RemoteControlWebsocketServerBindAddress) == 0x0070);
static_assert(offsetof(URemoteControlSettings, AllowedOrigin) == 0x00E8);
static_assert(offsetof(URemoteControlSettings, Passphrases) == 0x0100);
static_assert(offsetof(FRCNetworkAddressRange, LowerBound) == 0x0000);
static_assert(offsetof(FRCNetworkAddressRange, UpperBound) == 0x0004);
