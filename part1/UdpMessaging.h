
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x01 (1 bytes)
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUdpMessagingSettings : public UObject
{ 
public:
	bool                                               EnabledByDefault;                                           // 0x0030   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0031   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              MaxSendRate;                                                // 0x0034   (0x0004)  
	uint32_t                                           AutoRepairAttemptLimit;                                     // 0x0038   (0x0004)  
	uint16_t                                           WorkQueueSize;                                              // 0x003C   (0x0002)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x003E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x003F   (0x0001)  MISSED
	FString                                            UnicastEndpoint;                                            // 0x0040   (0x0010)  
	FString                                            MulticastEndpoint;                                          // 0x0050   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0060   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<FString>                                    StaticEndpoints;                                            // 0x0068   (0x0010)  
	TArray<FString>                                    ExcludedEndpoints;                                          // 0x0078   (0x0010)  
	bool                                               bShareKnownNodesWithActiveConnections;                      // 0x0088   (0x0001)  
	bool                                               EnableTunnel;                                               // 0x0089   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x008A   (0x0006)  MISSED
	FString                                            TunnelUnicastEndpoint;                                      // 0x0090   (0x0010)  
	FString                                            TunnelMulticastEndpoint;                                    // 0x00A0   (0x0010)  
	TArray<FString>                                    RemoteTunnelEndpoints;                                      // 0x00B0   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UUdpMessagingSettings) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0040);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0050);
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x0060);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0068);
static_assert(offsetof(UUdpMessagingSettings, ExcludedEndpoints) == 0x0078);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0090);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x00A0);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x00B0);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);
