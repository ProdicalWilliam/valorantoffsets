
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                               // [0x76eaaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                              // [0x76eab50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                                 // [0x76eaaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                        // [0x76eabb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                               // [0x76eae90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	// void GetAvailableAudioInputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);          // [0x76eb500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
	// FString Conv_AudioInputDeviceInfoToString(FAudioInputDeviceInfo& Info);                                                  // [0x76eb6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x0A60 (2656 bytes) (0x0009A0 - 0x000A60) align 16 MaxSize: 0x0A60
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x09A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xBC];                                      // 0x09A4   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioInputDeviceInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAudioInputDeviceInfo
{ 
	FString                                            DeviceName;                                                 // 0x0000   (0x0010)  
	FString                                            DeviceID;                                                   // 0x0010   (0x0010)  
	int32_t                                            InputChannels;                                              // 0x0020   (0x0004)  
	int32_t                                            PreferredSampleRate;                                        // 0x0024   (0x0004)  
	bool                                               bSupportsHardwareAEC : 1;                                   // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x000C)  
	int32_t                                            NumInputChannels;                                           // 0x000C   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0010   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UAudioCapture) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioCaptureBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioCaptureComponent) == 0x0A60); // 2656 bytes (0x0009A0 - 0x000A60)
static_assert(sizeof(FAudioInputDeviceInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(FAudioInputDeviceInfo, DeviceName) == 0x0000);
static_assert(offsetof(FAudioInputDeviceInfo, DeviceID) == 0x0010);
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x0000);
