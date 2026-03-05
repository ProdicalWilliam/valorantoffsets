
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x01 (1 bytes)
enum class EAudioParameterType : uint8_t
{
	EAudioParameterType__None                                                        = 0,
	EAudioParameterType__Boolean                                                     = 1,
	EAudioParameterType__Integer                                                     = 2,
	EAudioParameterType__Float                                                       = 3,
	EAudioParameterType__String                                                      = 4,
	EAudioParameterType__Object                                                      = 5,
	EAudioParameterType__NoneArray                                                   = 6,
	EAudioParameterType__BooleanArray                                                = 7,
	EAudioParameterType__IntegerArray                                                = 8,
	EAudioParameterType__FloatArray                                                  = 9,
	EAudioParameterType__StringArray                                                 = 10,
	EAudioParameterType__ObjectArray                                                 = 11,
	EAudioParameterType__Trigger                                                     = 12,
	EAudioParameterType__COUNT                                                       = 13
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioParameterControllerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	// void SetTriggerParameter(FName InName);                                                                                  // [0x2634140] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	// void SetStringParameter(FName InName, FString InValue);                                                                  // [0x2633420] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	// void SetStringArrayParameter(FName InName, TArray<FString>& InValue);                                                    // [0x2633220] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	// void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters);                                                     // [0x2632d00] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	// void SetObjectParameter(FName InName, class UObject* InValue);                                                           // [0x2633060] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	// void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue);                                                   // [0x2632e60] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	// void SetIntParameter(FName InName, int32_t inInt);                                                                       // [0x2633bc0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	// void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue);                                                       // [0x26339e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	// void SetFloatParameter(FName InName, float InFloat);                                                                     // [0x2633820] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	// void SetFloatArrayParameter(FName InName, TArray<float>& InValue);                                                       // [0x2633620] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	// void SetBoolParameter(FName InName, bool InBool);                                                                        // [0x2633f80] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	// void SetBoolArrayParameter(FName InName, TArray<bool>& InValue);                                                         // [0x2633d80] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters
	// void ResetParameters();                                                                                                  // [0x2634250] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioExtensions.AudioCodecEncoderSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAudioCodecEncoderSettings : public UObject
{ 
public:
	int32_t                                            Version;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USoundModulatorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USoundfieldEffectBase : public UObject
{ 
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWaveformTransformationBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UWaveformTransformationChain : public UObject
{ 
public:
	TArray<class UWaveformTransformationBase*>         Transformations;                                            // 0x0030   (0x0010)  
};

/// Struct /Script/AudioExtensions.SoundGeneratorOutput
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSoundGeneratorOutput
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FAudioParameter
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x000C)  
	float                                              FloatParam;                                                 // 0x000C   (0x0004)  
	bool                                               BoolParam;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            IntParam;                                                   // 0x0014   (0x0004)  
	class UObject*                                     ObjectParam;                                                // 0x0018   (0x0008)  
	FString                                            StringParam;                                                // 0x0020   (0x0010)  
	TArray<float>                                      ArrayFloatParam;                                            // 0x0030   (0x0010)  
	TArray<bool>                                       ArrayBoolParam;                                             // 0x0040   (0x0010)  
	TArray<int32_t>                                    ArrayIntParam;                                              // 0x0050   (0x0010)  
	TArray<class UObject*>                             ArrayObjectParam;                                           // 0x0060   (0x0010)  
	TArray<FString>                                    ArrayStringParam;                                           // 0x0070   (0x0010)  
	EAudioParameterType                                ParamType;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              TypeName;                                                   // 0x0084   (0x000C)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USourceDataOverridePluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioParameterControllerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAudioCodecEncoderSettings) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDummyEndpointSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundModulatorBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USoundfieldEffectBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UWaveformTransformationBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWaveformTransformationChain) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FSoundGeneratorOutput) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAudioParameter) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x0030);
static_assert(offsetof(UWaveformTransformationChain, Transformations) == 0x0030);
static_assert(offsetof(FSoundGeneratorOutput, Name) == 0x0000);
static_assert(offsetof(FAudioParameter, ParamName) == 0x0000);
static_assert(offsetof(FAudioParameter, ObjectParam) == 0x0018);
static_assert(offsetof(FAudioParameter, StringParam) == 0x0020);
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 0x0030);
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 0x0040);
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 0x0050);
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 0x0060);
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 0x0070);
static_assert(offsetof(FAudioParameter, ParamType) == 0x0080);
static_assert(offsetof(FAudioParameter, TypeName) == 0x0084);
