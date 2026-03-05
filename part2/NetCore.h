
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/NetCore.ENetworkFailure
/// Size: 0x01 (1 bytes)
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists                                          = 0,
	ENetworkFailure__NetDriverCreateFailure                                          = 1,
	ENetworkFailure__NetDriverListenFailure                                          = 2,
	ENetworkFailure__ConnectionLost                                                  = 3,
	ENetworkFailure__ConnectionTimeout                                               = 4,
	ENetworkFailure__FailureReceived                                                 = 5,
	ENetworkFailure__OutdatedClient                                                  = 6,
	ENetworkFailure__OutdatedServer                                                  = 7,
	ENetworkFailure__PendingConnectionFailure                                        = 8,
	ENetworkFailure__NetGuidMismatch                                                 = 9,
	ENetworkFailure__NetChecksumMismatch                                             = 10
};

/// Enum /Script/NetCore.EPushModelGlobalBehavior
/// Size: 0x04 (4 bytes)
enum class EPushModelGlobalBehavior : uint32_t
{
	EPushModelGlobalBehavior__Disabled                                               = 0,
	EPushModelGlobalBehavior__OptIn                                                  = 1,
	EPushModelGlobalBehavior__EnabledByDefault                                       = 2
};

/// Enum /Script/NetCore.ENetCloseResult
/// Size: 0x01 (1 bytes)
enum class ENetCloseResult : uint8_t
{
	ENetCloseResult__NetDriverAlreadyExists                                          = 0,
	ENetCloseResult__NetDriverCreateFailure                                          = 1,
	ENetCloseResult__NetDriverListenFailure                                          = 2,
	ENetCloseResult__ConnectionLost                                                  = 3,
	ENetCloseResult__ConnectionTimeout                                               = 4,
	ENetCloseResult__FailureReceived                                                 = 5,
	ENetCloseResult__OutdatedClient                                                  = 6,
	ENetCloseResult__OutdatedServer                                                  = 7,
	ENetCloseResult__PendingConnectionFailure                                        = 8,
	ENetCloseResult__NetGuidMismatch                                                 = 9,
	ENetCloseResult__NetChecksumMismatch                                             = 10,
	ENetCloseResult__SecurityMalformedPacket                                         = 11,
	ENetCloseResult__SecurityInvalidData                                             = 12,
	ENetCloseResult__SecurityClosed                                                  = 13,
	ENetCloseResult__SecurityRPCThresholdExceeded                                    = 14,
	ENetCloseResult__Unknown                                                         = 15,
	ENetCloseResult__Success                                                         = 16,
	ENetCloseResult__Extended                                                        = 17,
	ENetCloseResult__HostClosedConnection                                            = 18,
	ENetCloseResult__Disconnect                                                      = 19,
	ENetCloseResult__Upgrade                                                         = 20,
	ENetCloseResult__PreLoginFailure                                                 = 21,
	ENetCloseResult__JoinFailure                                                     = 22,
	ENetCloseResult__JoinSplitFailure                                                = 23,
	ENetCloseResult__AddressResolutionFailed                                         = 24,
	ENetCloseResult__RPCDoS                                                          = 25,
	ENetCloseResult__Cleanup                                                         = 26,
	ENetCloseResult__MissingLevelPackage                                             = 27,
	ENetCloseResult__PacketHandlerIncomingError                                      = 28,
	ENetCloseResult__ZeroLastByte                                                    = 29,
	ENetCloseResult__ZeroSize                                                        = 30,
	ENetCloseResult__ReadHeaderFail                                                  = 31,
	ENetCloseResult__ReadHeaderExtraFail                                             = 32,
	ENetCloseResult__AckSequenceMismatch                                             = 33,
	ENetCloseResult__BunchBadChannelIndex                                            = 34,
	ENetCloseResult__BunchChannelNameFail                                            = 35,
	ENetCloseResult__BunchWrongChannelType                                           = 36,
	ENetCloseResult__BunchHeaderOverflow                                             = 37,
	ENetCloseResult__BunchDataOverflow                                               = 38,
	ENetCloseResult__BunchServerPackageMapExports                                    = 39,
	ENetCloseResult__BunchPrematureControlChannel                                    = 40,
	ENetCloseResult__BunchPrematureChannel                                           = 41,
	ENetCloseResult__BunchPrematureControlClose                                      = 42,
	ENetCloseResult__UnknownChannelType                                              = 43,
	ENetCloseResult__PrematureSend                                                   = 44,
	ENetCloseResult__CorruptData                                                     = 45,
	ENetCloseResult__SocketSendFailure                                               = 46,
	ENetCloseResult__BadChildConnectionIndex                                         = 47,
	ENetCloseResult__LogLimitInstant                                                 = 48,
	ENetCloseResult__LogLimitSustained                                               = 49,
	ENetCloseResult__EncryptionFailure                                               = 50,
	ENetCloseResult__EncryptionTokenMissing                                          = 51,
	ENetCloseResult__ReceivedNetGUIDBunchFail                                        = 52,
	ENetCloseResult__MaxReliableExceeded                                             = 53,
	ENetCloseResult__ReceivedNextBunchFail                                           = 54,
	ENetCloseResult__ReceivedNextBunchQueueFail                                      = 55,
	ENetCloseResult__PartialInitialReliableDestroy                                   = 56,
	ENetCloseResult__PartialMergeReliableDestroy                                     = 57,
	ENetCloseResult__PartialInitialNonByteAligned                                    = 58,
	ENetCloseResult__PartialNonByteAligned                                           = 59,
	ENetCloseResult__PartialFinalPackageMapExports                                   = 60,
	ENetCloseResult__PartialTooLarge                                                 = 61,
	ENetCloseResult__AlreadyOpen                                                     = 62,
	ENetCloseResult__ReliableBeforeOpen                                              = 63,
	ENetCloseResult__ReliableBufferOverflow                                          = 64,
	ENetCloseResult__RPCReliableBufferOverflow                                       = 65,
	ENetCloseResult__ControlChannelClose                                             = 66,
	ENetCloseResult__ControlChannelEndianCheck                                       = 67,
	ENetCloseResult__ControlChannelPlayerChannelFail                                 = 68,
	ENetCloseResult__ControlChannelMessageUnknown                                    = 69,
	ENetCloseResult__ControlChannelMessageFail                                       = 70,
	ENetCloseResult__ControlChannelMessagePayloadFail                                = 71,
	ENetCloseResult__ControlChannelBunchOverflowed                                   = 72,
	ENetCloseResult__ControlChannelQueueBunchOverflowed                              = 73,
	ENetCloseResult__ClientHasMustBeMappedGUIDs                                      = 74,
	ENetCloseResult__ClientSentDestructionInfo                                       = 75,
	ENetCloseResult__UnregisteredMustBeMappedGUID                                    = 76,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail                               = 77,
	ENetCloseResult__ContentBlockFail                                                = 78,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail                                 = 79,
	ENetCloseResult__ContentBlockHeaderIsActorFail                                   = 80,
	ENetCloseResult__ContentBlockHeaderObjFail                                       = 81,
	ENetCloseResult__ContentBlockHeaderPrematureEnd                                  = 82,
	ENetCloseResult__ContentBlockHeaderSubObjectActor                                = 83,
	ENetCloseResult__ContentBlockHeaderBadParent                                     = 84,
	ENetCloseResult__ContentBlockHeaderInvalidCreate                                 = 85,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail                               = 86,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass                              = 87,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject                              = 88,
	ENetCloseResult__ContentBlockHeaderAActorSubObject                               = 89,
	ENetCloseResult__ContentBlockHeaderFail                                          = 90,
	ENetCloseResult__ContentBlockPayloadBitsFail                                     = 91,
	ENetCloseResult__FieldHeaderRepIndex                                             = 92,
	ENetCloseResult__FieldHeaderBadRepIndex                                          = 93,
	ENetCloseResult__FieldHeaderPayloadBitsFail                                      = 94,
	ENetCloseResult__FieldPayloadFail                                                = 95,
	ENetCloseResult__BeaconControlFlowError                                          = 96,
	ENetCloseResult__BeaconUnableToParsePacket                                       = 97,
	ENetCloseResult__BeaconAuthenticationFailure                                     = 98,
	ENetCloseResult__BeaconLoginInvalidIdError                                       = 99,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError                              = 100,
	ENetCloseResult__BeaconAuthError                                                 = 101,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError                          = 102,
	ENetCloseResult__BeaconSpawnExistingActorError                                   = 103,
	ENetCloseResult__BeaconSpawnFailureError                                         = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor                                    = 105,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost                                     = 106,
	ENetCloseResult__BeaconSpawnUnexpectedError                                      = 107,
	ENetCloseResult__FaultDisconnect                                                 = 108,
	ENetCloseResult__NotRecoverable                                                  = 109
};

/// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
/// Size: 0x01 (1 bytes)
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None                                             = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized                                = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested                            = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization                        = 4
};

/// Class /Script/NetCore.PushModelSettings
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UPushModelSettings : public UObject
{ 
public:
	EPushModelGlobalBehavior                           PushModelGlobalBehavior;                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,4) /* TArray<TSoftObjectPtr<UClass*>> */ __um(Allowlist);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5) /* TArray<TSoftObjectPtr<UClass*>> */ __um(Denylist);                                      // 0x0048   (0x0010)  
};

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x000C)  
	bool                                               bEnabled;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0030   (0x0010)  
};

/// Class /Script/NetCore.StatePerObjectConfig
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UStatePerObjectConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0030   (0x0028)  MISSED
	FString                                            PerObjectConfigSection;                                     // 0x0058   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/NetCore.EscalationManagerConfig
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class UEscalationManagerConfig : public UStatePerObjectConfig
{ 
public:
	TArray<FString>                                    EscalationSeverity;                                         // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Struct /Script/NetCore.FastArraySerializerItem
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFastArraySerializerItem
{ 
	int32_t                                            ReplicationID;                                              // 0x0000   (0x0004)  
	int32_t                                            ReplicationKey;                                             // 0x0004   (0x0004)  
	int32_t                                            MostRecentArrayReplicationKey;                              // 0x0008   (0x0004)  
};

/// Struct /Script/NetCore.FastArraySerializer
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0000   (0x0054)  MISSED
	int32_t                                            ArrayReplicationKey;                                        // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0058   (0x00A8)  MISSED
	EFastArraySerializerDeltaFlags                     DeltaFlags;                                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/NetCore.StateStruct
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FStateStruct
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            StateName;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/NetCore.EscalationState
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FEscalationState : FStateStruct
{ 
	bool                                               bLogEscalate;                                               // 0x0018   (0x0001)  
	bool                                               bDormant;                                                   // 0x0019   (0x0001)  
	int16_t                                            CooloffTime;                                                // 0x001A   (0x0002)  
	int16_t                                            AutoEscalateTime;                                           // 0x001C   (0x0002)  
	int8_t                                             HighestTimePeriod;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	TArray<int8_t>                                     AllTimePeriods;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/NetCore.NetFaultState
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
struct FNetFaultState : FEscalationState
{ 
	bool                                               bCloseConnection;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0031   (0x0001)  MISSED
	int16_t                                            EscalateQuotaFaultsPerPeriod;                               // 0x0032   (0x0002)  
	int8_t                                             EscalateQuotaFaultPercentPerPeriod;                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0035   (0x0001)  MISSED
	int16_t                                            DescalateQuotaFaultsPerPeriod;                              // 0x0036   (0x0002)  
	int8_t                                             DescalateQuotaFaultPercentPerPeriod;                        // 0x0038   (0x0001)  
	int8_t                                             EscalateQuotaTimePeriod;                                    // 0x0039   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPushModelSettings) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FNetAnalyticsDataConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UStatePerObjectConfig) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UEscalationManagerConfig) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(FFastArraySerializerItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FFastArraySerializer) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FStateStruct) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEscalationState) == 0x0030); // 48 bytes (0x000018 - 0x000030)
static_assert(sizeof(FNetFaultState) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(offsetof(UPushModelSettings, PushModelGlobalBehavior) == 0x0030);
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x0000);
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x0030);
static_assert(offsetof(UStatePerObjectConfig, PerObjectConfigSection) == 0x0058);
static_assert(offsetof(UEscalationManagerConfig, EscalationSeverity) == 0x0070);
static_assert(offsetof(FFastArraySerializer, DeltaFlags) == 0x0100);
static_assert(offsetof(FStateStruct, StateName) == 0x0008);
static_assert(offsetof(FEscalationState, AllTimePeriods) == 0x0020);
