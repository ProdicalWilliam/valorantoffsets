
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

/// Class /Script/RGIMetrics.RGIMetricsRegistrySubsystem
/// Size: 0x0178 (376 bytes) (0x000038 - 0x000178) align 8 MaxSize: 0x0178
class URGIMetricsRegistrySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0038   (0x0140)  MISSED


	/// Functions
	// Function /Script/RGIMetrics.RGIMetricsRegistrySubsystem.SetReplicatedMetricNames
	// void SetReplicatedMetricNames(FName& InSubsystemName, TArray<FName>& InMetricNames);                                     // [0x54344b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIMetrics.RGIMetricsRegistrySubsystem.GetReplicatedMetricNames
	// TArray<FName> GetReplicatedMetricNames(FName& InSubsystemName);                                                          // [0x54346b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIMetrics.RGIMetricsRegistrySubsystem.CreateMetric
	// void CreateMetric(FName& Name);                                                                                          // [0x5434820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIMetrics.RGIMetricsRegistrySubsystem.ClearReplicatedMetricNames
	// void ClearReplicatedMetricNames(FName& InSubsystemName);                                                                 // [0x54343b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIMetrics.RGIMetricsRegistrySubsystem.AddSampleToMetric
	// void AddSampleToMetric(FName& Name, double Value);                                                                       // [0x5434970] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RGIMetrics.RGINameEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRGINameEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
};

/// Class /Script/RGIMetrics.RGIMetricsReplicationComponent
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class URGIMetricsReplicationComponent : public UActorComponent
{ 
public:
	TArray<FRGINameEntry>                              ReplicatedMetricNames;                                      // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ServerSetReplicatedMetricNames
	// void ServerSetReplicatedMetricNames(TArray<FName> InMetricNames);                                                        // [0x54391b0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ServerFindMetricNamesWithRegex
	// void ServerFindMetricNamesWithRegex(TArray<FString> InStrings);                                                          // [0x5438eb0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ServerFindMetricNames
	// void ServerFindMetricNames(TArray<FString> InStrings);                                                                   // [0x5438fe0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ClientUpdateServerMetricsUnreliable
	// void ClientUpdateServerMetricsUnreliable(TArray<FRGIMetricReplicatedData> InMetrics);                                    // [0x5438bd0] Final|Net|Native|Event|Private|NetClient 
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ClientUpdateServerMetricsReliable
	// void ClientUpdateServerMetricsReliable(TArray<FRGIMetricReplicatedData> InMetrics);                                      // [0x5438bd0] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/RGIMetrics.RGIMetricsReplicationComponent.ClientSendFoundMetricNames
	// void ClientSendFoundMetricNames(TArray<FName> InNames);                                                                  // [0x5438d00] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/RGIMetrics.RGIMetricsReplicationSubsystem
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class URGIMetricsReplicationSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0038   (0x0070)  MISSED


	/// Functions
	// Function /Script/RGIMetrics.RGIMetricsReplicationSubsystem.HandlePawnControllerChanged
	// void HandlePawnControllerChanged(class APawn* Pawn, class AController* NewController);                                   // [0x543a490] Final|Native|Private 
};

/// Class /Script/RGIMetrics.RGIMetricsSettings
/// Size: 0x0080 (128 bytes) (0x000048 - 0x000080) align 8 MaxSize: 0x0080
class URGIMetricsSettings : public UDeveloperSettings
{ 
public:
	TWeakObjectPtr<class UStringTable*>                MetricNameStringTableAsset;                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
	bool                                               bUseReliableReplication;                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/RGIMetrics.RGIMetricsSettings.GetMetricNames
	// TArray<FName> GetMetricNames();                                                                                          // [0x543baf0] Final|Native|Static|Public 
};

/// Struct /Script/RGIMetrics.RGIMetricReplicatedData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRGIMetricReplicatedData
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             Time;                                                       // 0x0008   (0x0008)  
	double                                             Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/RGIMetrics.RGIMetricTelemetryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRGIMetricTelemetryData
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             Min;                                                        // 0x0010   (0x0008)  
	double                                             Max;                                                        // 0x0018   (0x0008)  
	double                                             Avg;                                                        // 0x0020   (0x0008)  
	double                                             P90;                                                        // 0x0028   (0x0008)  
	double                                             P99;                                                        // 0x0030   (0x0008)  
	double                                             P999;                                                       // 0x0038   (0x0008)  
	double                                             P9999;                                                      // 0x0040   (0x0008)  
	uint32_t                                           NumSamples;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URGIMetricsRegistrySubsystem) == 0x0178); // 376 bytes (0x000038 - 0x000178)
static_assert(sizeof(FRGINameEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(URGIMetricsReplicationComponent) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(URGIMetricsReplicationSubsystem) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(URGIMetricsSettings) == 0x0080); // 128 bytes (0x000048 - 0x000080)
static_assert(sizeof(FRGIMetricReplicatedData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRGIMetricTelemetryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FRGINameEntry, Name) == 0x0000);
static_assert(offsetof(URGIMetricsReplicationComponent, ReplicatedMetricNames) == 0x00D8);
static_assert(offsetof(URGIMetricsSettings, MetricNameStringTableAsset) == 0x0048);
static_assert(offsetof(FRGIMetricTelemetryData, Name) == 0x0000);
