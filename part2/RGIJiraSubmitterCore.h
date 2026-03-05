
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/RGIJiraSubmitterCore.RGIJiraSubmitterConfig
/// Size: 0x0110 (272 bytes) (0x000048 - 0x000110) align 8 MaxSize: 0x0110
class URGIJiraSubmitterConfig : public UDeveloperSettings
{ 
public:
	FString                                            HostName;                                                   // 0x0048   (0x0010)  
	FString                                            CloudClientId;                                              // 0x0058   (0x0010)  
	FString                                            CloudScope;                                                 // 0x0068   (0x0010)  
	FString                                            CloudRedirectUri;                                           // 0x0078   (0x0010)  
	int32_t                                            CloudRedirectUriPort;                                       // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FString                                            Project;                                                    // 0x0090   (0x0010)  
	FString                                            FixVersion;                                                 // 0x00A0   (0x0010)  
	FString                                            AffectsVersion;                                             // 0x00B0   (0x0010)  
	FString                                            SummaryPrefix;                                              // 0x00C0   (0x0010)  
	FString                                            BasicAuthUser;                                              // 0x00D0   (0x0010)  
	FString                                            BasicAuthToken;                                             // 0x00E0   (0x0010)  
	TArray<FString>                                    Labels;                                                     // 0x00F0   (0x0010)  
	FString                                            CloudClientSecret;                                          // 0x0100   (0x0010)  
};

/// Class /Script/RGIJiraSubmitterCore.RGIJiraSubmitterPerProjectUser
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class URGIJiraSubmitterPerProjectUser : public UObject
{ 
public:
	FString                                            CloudAccessToken;                                           // 0x0030   (0x0010)  
	int64_t                                            CloudAccessTokenExpiration;                                 // 0x0040   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(URGIJiraSubmitterConfig) == 0x0110); // 272 bytes (0x000048 - 0x000110)
static_assert(sizeof(URGIJiraSubmitterPerProjectUser) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(offsetof(URGIJiraSubmitterConfig, HostName) == 0x0048);
static_assert(offsetof(URGIJiraSubmitterConfig, CloudClientId) == 0x0058);
static_assert(offsetof(URGIJiraSubmitterConfig, CloudScope) == 0x0068);
static_assert(offsetof(URGIJiraSubmitterConfig, CloudRedirectUri) == 0x0078);
static_assert(offsetof(URGIJiraSubmitterConfig, Project) == 0x0090);
static_assert(offsetof(URGIJiraSubmitterConfig, FixVersion) == 0x00A0);
static_assert(offsetof(URGIJiraSubmitterConfig, AffectsVersion) == 0x00B0);
static_assert(offsetof(URGIJiraSubmitterConfig, SummaryPrefix) == 0x00C0);
static_assert(offsetof(URGIJiraSubmitterConfig, BasicAuthUser) == 0x00D0);
static_assert(offsetof(URGIJiraSubmitterConfig, BasicAuthToken) == 0x00E0);
static_assert(offsetof(URGIJiraSubmitterConfig, Labels) == 0x00F0);
static_assert(offsetof(URGIJiraSubmitterConfig, CloudClientSecret) == 0x0100);
static_assert(offsetof(URGIJiraSubmitterPerProjectUser, CloudAccessToken) == 0x0030);
