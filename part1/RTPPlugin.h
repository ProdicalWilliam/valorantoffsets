
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Enum /Script/RTPPlugin.ERTPEventFlags
/// Size: 0x01 (1 bytes)
enum class ERTPEventFlags : uint8_t
{
	ERTPEventFlags__None                                                             = 0,
	ERTPEventFlags__CollectClientIpAddress                                           = 1,
	ERTPEventFlags__SendToDatadog                                                    = 2,
	ERTPEventFlags__SendToAp                                                         = 4
};

/// Struct /Script/RTPPlugin.RTPScopeMetadata
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRTPScopeMetadata
{ 
	FString                                            environment;                                                // 0x0000   (0x0010)  
	FString                                            datacenter;                                                 // 0x0010   (0x0010)  
	FString                                            deployment;                                                 // 0x0020   (0x0010)  
	FString                                            Product;                                                    // 0x0030   (0x0010)  
	FString                                            Component;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/RTPPlugin.RTPEventMetadata
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FRTPEventMetadata
{ 
	FString                                            schema;                                                     // 0x0000   (0x0010)  
	FRTPScopeMetadata                                  scope;                                                      // 0x0010   (0x0050)  
	FString                                            Timestamp;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/RTPPlugin.RTPEventMetadataDefault
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FRTPEventMetadataDefault
{ 
	FRTPEventMetadata                                  MetaData;                                                   // 0x0000   (0x0070)  
};

/// Struct /Script/RTPPlugin.RTPClientPlatformDetails
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRTPClientPlatformDetails
{ 
	FString                                            PlatformType;                                               // 0x0000   (0x0010)  
	FString                                            platformMetadata;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/RTPPlugin.RTPClientPlatformMetadata
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRTPClientPlatformMetadata
{ 
	FString                                            PlatformOS;                                                 // 0x0000   (0x0010)  
	FString                                            PlatformOSVersion;                                          // 0x0010   (0x0010)  
	FString                                            PlatformChipset;                                            // 0x0020   (0x0010)  
	FString                                            PlatformType;                                               // 0x0030   (0x0010)  
};

/// Struct /Script/RTPPlugin.RTPClientPlatformDefault
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRTPClientPlatformDefault
{ 
	FRTPClientPlatformDetails                          clientPlatformDetails;                                      // 0x0000   (0x0020)  
};

#pragma pack(pop)


static_assert(sizeof(FRTPScopeMetadata) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRTPEventMetadata) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRTPEventMetadataDefault) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRTPClientPlatformDetails) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRTPClientPlatformMetadata) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRTPClientPlatformDefault) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FRTPScopeMetadata, environment) == 0x0000);
static_assert(offsetof(FRTPScopeMetadata, datacenter) == 0x0010);
static_assert(offsetof(FRTPScopeMetadata, deployment) == 0x0020);
static_assert(offsetof(FRTPScopeMetadata, Product) == 0x0030);
static_assert(offsetof(FRTPScopeMetadata, Component) == 0x0040);
static_assert(offsetof(FRTPEventMetadata, schema) == 0x0000);
static_assert(offsetof(FRTPEventMetadata, scope) == 0x0010);
static_assert(offsetof(FRTPEventMetadata, Timestamp) == 0x0060);
static_assert(offsetof(FRTPEventMetadataDefault, MetaData) == 0x0000);
static_assert(offsetof(FRTPClientPlatformDetails, PlatformType) == 0x0000);
static_assert(offsetof(FRTPClientPlatformDetails, platformMetadata) == 0x0010);
static_assert(offsetof(FRTPClientPlatformMetadata, PlatformOS) == 0x0000);
static_assert(offsetof(FRTPClientPlatformMetadata, PlatformOSVersion) == 0x0010);
static_assert(offsetof(FRTPClientPlatformMetadata, PlatformChipset) == 0x0020);
static_assert(offsetof(FRTPClientPlatformMetadata, PlatformType) == 0x0030);
static_assert(offsetof(FRTPClientPlatformDefault, clientPlatformDetails) == 0x0000);
