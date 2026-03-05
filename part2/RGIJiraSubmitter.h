
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/RGIJiraSubmitter.RGIJiraSubmitterLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIJiraSubmitterLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RGIJiraSubmitter.RGIJiraSubmitterLibrary.SubmitJiraIssueLatent
	// void SubmitJiraIssueLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& OutIssueId, int32_t& OutIssueCode, FString& Summary, FString Type, FString Description, bool bIncludeScreenshot, bool bIncludeServerLog); // [0x54031c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIJiraSubmitter.RGIJiraSubmitterLibrary.SubmitJiraIssue
	// void SubmitJiraIssue(class UObject* WorldContextObject, FString& Summary, FString Type, FString Description, bool bIncludeScreenshot, bool bIncludeServerLog); // [0x54039d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGIJiraSubmitter.RGIJiraSubmitterSubsystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class URGIJiraSubmitterSubsystem : public UEngineSubsystem
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(URGIJiraSubmitterLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGIJiraSubmitterSubsystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
