
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

/// Class /Script/AudioAnalyzer.AudioAnalyzerAssetBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioAnalyzerAssetBase : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzer
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UAudioAnalyzer : public UObject
{ 
public:
	class UAudioBus*                                   AudioBus;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UAudioAnalyzerSubsystem*                     AudioAnalyzerSubsystem;                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	// void StopAnalyzing(class UObject* WorldContextObject);                                                                   // [0x821a4d0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	// void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);                              // [0x821a5c0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{ 
public:
	class USoundWave*                                  Sound;                                                      // 0x0030   (0x0008)  
	float                                              DurationInSeconds;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x44];                                      // 0x003C   (0x0044)  MISSED
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
public:
	TArray<class UAudioAnalyzer*>                      AudioAnalyzers;                                             // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioAnalyzerAssetBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioAnalyzerSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioAnalyzer) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioAnalyzerNRT) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UAudioAnalyzerSubsystem) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(offsetof(UAudioAnalyzer, AudioBus) == 0x0030);
static_assert(offsetof(UAudioAnalyzer, AudioAnalyzerSubsystem) == 0x0040);
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x0030);
static_assert(offsetof(UAudioAnalyzerSubsystem, AudioAnalyzers) == 0x0038);
