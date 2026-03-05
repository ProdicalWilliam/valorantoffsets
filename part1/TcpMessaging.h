
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UTcpMessagingSettings : public UObject
{ 
public:
	bool                                               EnableTransport;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            ListenEndpoint;                                             // 0x0038   (0x0010)  
	TArray<FString>                                    ConnectToEndpoints;                                         // 0x0048   (0x0010)  
	int32_t                                            ConnectionRetryDelay;                                       // 0x0058   (0x0004)  
	int32_t                                            ConnectionRetryPeriod;                                      // 0x005C   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UTcpMessagingSettings) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(offsetof(UTcpMessagingSettings, ListenEndpoint) == 0x0038);
static_assert(offsetof(UTcpMessagingSettings, ConnectToEndpoints) == 0x0048);
