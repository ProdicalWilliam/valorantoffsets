
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: TemplateSequence

#pragma pack(push, 0x1)

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x01 (1 bytes)
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x01 (1 bytes)
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1,
	EOO_OffsetMax                                                                    = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x01 (1 bytes)
enum class ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal                                           = 0,
	ECameraAnimationPlaySpace__World                                                 = 1,
	ECameraAnimationPlaySpace__UserDefined                                           = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x01 (1 bytes)
enum class ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear                                               = 0,
	ECameraAnimationEasingType__Sinusoidal                                           = 1,
	ECameraAnimationEasingType__Quadratic                                            = 2,
	ECameraAnimationEasingType__Cubic                                                = 3,
	ECameraAnimationEasingType__Quartic                                              = 4,
	ECameraAnimationEasingType__Quintic                                              = 5,
	ECameraAnimationEasingType__Exponential                                          = 6,
	ECameraAnimationEasingType__Circular                                             = 7
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x01 (1 bytes)
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                              // 0x0008   (0x0001)  
	EOscillatorWaveform                                Waveform;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FROscillator
{ 
	FFOscillator                                       Pitch;                                                      // 0x0000   (0x000C)  
	FFOscillator                                       Yaw;                                                        // 0x000C   (0x000C)  
	FFOscillator                                       Roll;                                                       // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FVOscillator
{ 
	FFOscillator                                       X;                                                          // 0x0000   (0x000C)  
	FFOscillator                                       Y;                                                          // 0x000C   (0x000C)  
	FFOscillator                                       Z;                                                          // 0x0018   (0x000C)  
};

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x01F0 (496 bytes) (0x0000D8 - 0x0001F0) align 16 MaxSize: 0x01F0
class ULegacyCameraShake : public UCameraShakeBase
{ 
public:
	float                                              OscillationDuration;                                        // 0x00D8   (0x0004)  
	float                                              OscillationBlendInTime;                                     // 0x00DC   (0x0004)  
	float                                              OscillationBlendOutTime;                                    // 0x00E0   (0x0004)  
	FROscillator                                       RotOscillation;                                             // 0x00E4   (0x0024)  
	FVOscillator                                       LocOscillation;                                             // 0x0108   (0x0024)  
	FFOscillator                                       FOVOscillation;                                             // 0x012C   (0x000C)  
	float                                              AnimPlayRate;                                               // 0x0138   (0x0004)  
	float                                              AnimScale;                                                  // 0x013C   (0x0004)  
	float                                              AnimBlendInTime;                                            // 0x0140   (0x0004)  
	float                                              AnimBlendOutTime;                                           // 0x0144   (0x0004)  
	float                                              RandomAnimSegmentDuration;                                  // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UCameraAnimationSequence*                    AnimSequence;                                               // 0x0150   (0x0008)  
	bool                                               bRandomAnimSegment : 1;                                     // 0x0158:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              OscillatorTimeRemaining;                                    // 0x015C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x0160   (0x0070)  MISSED
	class USequenceCameraShakePattern*                 SequenceShakePattern;                                       // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x01D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	// class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // [0x54573a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	// class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace Playspace, FRotator UserPlaySpaceRot); // [0x54577f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0x3aeba60] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x1a821d0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULegacyCameraShakePattern : public UCameraShakePattern
{ 
public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	// class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);                                   // [0x5457e60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FCameraAnimationParams
{ 
	float                                              PlayRate;                                                   // 0x0000   (0x0004)  
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	ECameraAnimationEasingType                         EaseInType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              EaseInDuration;                                             // 0x000C   (0x0004)  
	ECameraAnimationEasingType                         EaseOutType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              EaseOutDuration;                                            // 0x0014   (0x0004)  
	bool                                               bLoop;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            StartOffset;                                                // 0x001C   (0x0004)  
	bool                                               bRandomStartTime;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              DurationOverride;                                           // 0x0024   (0x0004)  
	ECameraAnimationPlaySpace                          Playspace;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRotator                                           UserPlaySpaceRot;                                           // 0x0030   (0x0018)  
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FCameraAnimationHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FActiveCameraAnimationInfo
{ 
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0000   (0x0008)  
	FCameraAnimationParams                             Params;                                                     // 0x0008   (0x0048)  
	FCameraAnimationHandle                             Handle;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0058   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0060   (0x0008)  
	float                                              EaseInCurrentTime;                                          // 0x0068   (0x0004)  
	float                                              EaseOutCurrentTime;                                         // 0x006C   (0x0004)  
	bool                                               bIsEasingIn;                                                // 0x0070   (0x0001)  
	bool                                               bIsEasingOut;                                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UCameraAnimationCameraModifier : public UCameraModifier
{ 
public:
	TArray<FActiveCameraAnimationInfo>                 ActiveAnimations;                                           // 0x0050   (0x0010)  
	uint16_t                                           NextInstanceSerialNumber;                                   // 0x0060   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0062   (0x0006)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	// void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate);                                               // [0x5458f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);                               // [0x5458de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	// void StopAllCameraAnimations(bool bImmediate);                                                                           // [0x41e75f0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);     // [0x5459260] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	// bool IsCameraAnimationActive(FCameraAnimationHandle& Handle);                                                            // [0x5459110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController); // [0x5458930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId); // [0x5458a60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex); // [0x5458c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	// ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);                     // [0x5459d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	// ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);                     // [0x5459d30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager); // [0x5459e60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
public:
	TArray<class UCameraShakePattern*>                 ChildPatterns;                                              // 0x0030   (0x0010)  
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 16 MaxSize: 0x00E0
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayCamerasSubsystem : public UWorldSubsystem
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	// void StopCameraAnimation(class APlayerController* PlayerController, FCameraAnimationHandle& Handle, bool bImmediate);    // [0x545d3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate); // [0x545d190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	// void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);                                // [0x545cfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // [0x545d880] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	// bool IsCameraAnimationActive(class APlayerController* PlayerController, FCameraAnimationHandle& Handle);                 // [0x545d660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
public:
	float                                              Duration;                                                   // 0x0030   (0x0004)  
	float                                              BlendInTime;                                                // 0x0034   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x003C   (0x0024)  MISSED
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPerlinNoiseShaker
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x00E0 (224 bytes) (0x000060 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0060   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x0064   (0x0004)  
	FPerlinNoiseShaker                                 X;                                                          // 0x0068   (0x0008)  
	FPerlinNoiseShaker                                 Y;                                                          // 0x0070   (0x0008)  
	FPerlinNoiseShaker                                 Z;                                                          // 0x0078   (0x0008)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0080   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0084   (0x0004)  
	FPerlinNoiseShaker                                 Pitch;                                                      // 0x0088   (0x0008)  
	FPerlinNoiseShaker                                 Yaw;                                                        // 0x0090   (0x0008)  
	FPerlinNoiseShaker                                 Roll;                                                       // 0x0098   (0x0008)  
	FPerlinNoiseShaker                                 FOV;                                                        // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x00A8   (0x0038)  MISSED
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 16 MaxSize: 0x00E0
class UTestCameraShake : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	FVector                                            LocationOffset;                                             // 0x0060   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0078   (0x0018)  
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWaveOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	EInitialWaveOscillatorOffsetType                   InitialOffsetType;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x0100 (256 bytes) (0x000060 - 0x000100) align 8 MaxSize: 0x0100
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0060   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x0064   (0x0004)  
	FWaveOscillator                                    X;                                                          // 0x0068   (0x000C)  
	FWaveOscillator                                    Y;                                                          // 0x0074   (0x000C)  
	FWaveOscillator                                    Z;                                                          // 0x0080   (0x000C)  
	float                                              RotationAmplitudeMultiplier;                                // 0x008C   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0090   (0x0004)  
	FWaveOscillator                                    Pitch;                                                      // 0x0094   (0x000C)  
	FWaveOscillator                                    Yaw;                                                        // 0x00A0   (0x000C)  
	FWaveOscillator                                    Roll;                                                       // 0x00AC   (0x000C)  
	FWaveOscillator                                    FOV;                                                        // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x00C4   (0x003C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FFOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FROscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FVOscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(ULegacyCameraShake) == 0x01F0); // 496 bytes (0x0000D8 - 0x0001F0)
static_assert(sizeof(ULegacyCameraShakePattern) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULegacyCameraShakeFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FCameraAnimationParams) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FCameraAnimationHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FActiveCameraAnimationInfo) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UCameraAnimationCameraModifier) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UGameplayCamerasFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCompositeCameraShakePattern) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDefaultCameraShakeBase) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UGameplayCamerasSubsystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(USimpleCameraShakePattern) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FPerlinNoiseShaker) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x00E0); // 224 bytes (0x000060 - 0x0000E0)
static_assert(sizeof(UTestCameraShake) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UConstantCameraShakePattern) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(FWaveOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x0100); // 256 bytes (0x000060 - 0x000100)
static_assert(offsetof(FFOscillator, InitialOffset) == 0x0008);
static_assert(offsetof(FFOscillator, Waveform) == 0x0009);
static_assert(offsetof(FROscillator, Pitch) == 0x0000);
static_assert(offsetof(FROscillator, Yaw) == 0x000C);
static_assert(offsetof(FROscillator, Roll) == 0x0018);
static_assert(offsetof(FVOscillator, X) == 0x0000);
static_assert(offsetof(FVOscillator, Y) == 0x000C);
static_assert(offsetof(FVOscillator, Z) == 0x0018);
static_assert(offsetof(ULegacyCameraShake, RotOscillation) == 0x00E4);
static_assert(offsetof(ULegacyCameraShake, LocOscillation) == 0x0108);
static_assert(offsetof(ULegacyCameraShake, FOVOscillation) == 0x012C);
static_assert(offsetof(ULegacyCameraShake, AnimSequence) == 0x0150);
static_assert(offsetof(ULegacyCameraShake, SequenceShakePattern) == 0x01D0);
static_assert(offsetof(FCameraAnimationParams, EaseInType) == 0x0008);
static_assert(offsetof(FCameraAnimationParams, EaseOutType) == 0x0010);
static_assert(offsetof(FCameraAnimationParams, Playspace) == 0x0028);
static_assert(offsetof(FCameraAnimationParams, UserPlaySpaceRot) == 0x0030);
static_assert(offsetof(FActiveCameraAnimationInfo, Sequence) == 0x0000);
static_assert(offsetof(FActiveCameraAnimationInfo, Params) == 0x0008);
static_assert(offsetof(FActiveCameraAnimationInfo, Handle) == 0x0050);
static_assert(offsetof(FActiveCameraAnimationInfo, Player) == 0x0058);
static_assert(offsetof(FActiveCameraAnimationInfo, CameraStandIn) == 0x0060);
static_assert(offsetof(UCameraAnimationCameraModifier, ActiveAnimations) == 0x0050);
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x0030);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x0068);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x0070);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x0078);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x0088);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x0090);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x0098);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x00A0);
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x0060);
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x0078);
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x0008);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x0068);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x0074);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x0080);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x0094);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x00A0);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x00AC);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x00B8);
