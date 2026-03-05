
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

/// Class /Script/RGISentryEventSubmitter.RGIBaseSentryEvent
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class URGIBaseSentryEvent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	FString                                            ProjectID;                                                  // 0x0040   (0x0010)  
	FString                                            SentryPublicKey;                                            // 0x0050   (0x0010)  
	FString                                            SentrySecretKey;                                            // 0x0060   (0x0010)  
	TArray<FString>                                    ListOfFilesToUpload;                                        // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Class /Script/RGISentryEventSubmitter.RGISubmitLogsToSentryEvent
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class URGISubmitLogsToSentryEvent : public URGIBaseSentryEvent
{ 
public:
};

/// Class /Script/RGISentryEventSubmitter.RGISentryEventSubmitter
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class URGISentryEventSubmitter : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/RGISentryEventSubmitter.RGISentryEventSubmitter.SubmitEventToSentry
	// void SubmitEventToSentry(class UClass* EventToSubmit);                                                                   // [0x53f1780] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RGISentryEventSubmitter.RGISentryEventSubmitterSettings
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class URGISentryEventSubmitterSettings : public UDeveloperSettings
{ 
public:
	double                                             SubmissionDelaySeconds;                                     // 0x0048   (0x0008)  
};

/// Struct /Script/RGISentryEventSubmitter.SentryCreateEventResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSentryCreateEventResponse
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URGIBaseSentryEvent) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(URGISubmitLogsToSentryEvent) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(URGISentryEventSubmitter) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(URGISentryEventSubmitterSettings) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FSentryCreateEventResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(URGIBaseSentryEvent, ProjectID) == 0x0040);
static_assert(offsetof(URGIBaseSentryEvent, SentryPublicKey) == 0x0050);
static_assert(offsetof(URGIBaseSentryEvent, SentrySecretKey) == 0x0060);
static_assert(offsetof(URGIBaseSentryEvent, ListOfFilesToUpload) == 0x0070);
static_assert(offsetof(FSentryCreateEventResponse, ID) == 0x0000);
