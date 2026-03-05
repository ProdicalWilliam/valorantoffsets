
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

/// Class /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCoreSDKUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsPlatformIOS
	// bool IsPlatformIOS();                                                                                                    // [0x3b9c6d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsPlatformAndroid
	// bool IsPlatformAndroid();                                                                                                // [0x3b9c6d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsMobile
	// bool IsMobile();                                                                                                         // [0x5416d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsBuildFromCI
	// bool IsBuildFromCI();                                                                                                    // [0x5417180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsAutomationWorker
	// bool IsAutomationWorker();                                                                                               // [0x5416d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsAutomationMonitor
	// bool IsAutomationMonitor();                                                                                              // [0x5416d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetProjectVersionString
	// FString GetProjectVersionString();                                                                                       // [0x54173b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0x437e1d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetPatchline
	// FString GetPatchline();                                                                                                  // [0x5416da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetFullVersionString
	// FString GetFullVersionString();                                                                                          // [0x5417500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetCoreSDKVersionString
	// FString GetCoreSDKVersionString();                                                                                       // [0x5417270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetClientPatchline
	// FString GetClientPatchline();                                                                                            // [0x5416e70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildTime
	// FDateTime GetBuildTime();                                                                                                // [0x54170e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildTargetType
	// FString GetBuildTargetType();                                                                                            // [0x5416f40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildNumber
	// int32_t GetBuildNumber();                                                                                                // [0x5417130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildConfiguration
	// FString GetBuildConfiguration();                                                                                         // [0x437e310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildCompatibleChangelist
	// int32_t GetBuildCompatibleChangelist();                                                                                  // [0x5417040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildChangelist
	// int32_t GetBuildChangelist();                                                                                            // [0x5417090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildBranch
	// FString GetBuildBranch();                                                                                                // [0x54171d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CoreSDKUtils.CoreSDKUtilsConfig
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UCoreSDKUtilsConfig : public UObject
{ 
public:
	FString                                            CoreSDKVersion;                                             // 0x0030   (0x0010)  
	int32_t                                            BuildNumber;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            BuildTime;                                                  // 0x0048   (0x0010)  
	int32_t                                            Change;                                                     // 0x0058   (0x0004)  
	int32_t                                            CodeChange;                                                 // 0x005C   (0x0004)  
	FString                                            Branch;                                                     // 0x0060   (0x0010)  
	FString                                            TeamName;                                                   // 0x0070   (0x0010)  
	bool                                               bManageCrashData;                                           // 0x0080   (0x0001)  
	bool                                               bCrashDataIncludesBuildInfo;                                // 0x0081   (0x0001)  
	bool                                               bCrashDataIncludesUserIdentification;                       // 0x0082   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0083   (0x0005)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UCoreSDKUtilsBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCoreSDKUtilsConfig) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(offsetof(UCoreSDKUtilsConfig, CoreSDKVersion) == 0x0030);
static_assert(offsetof(UCoreSDKUtilsConfig, BuildTime) == 0x0048);
static_assert(offsetof(UCoreSDKUtilsConfig, Branch) == 0x0060);
static_assert(offsetof(UCoreSDKUtilsConfig, TeamName) == 0x0070);
