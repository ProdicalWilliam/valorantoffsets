
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

#pragma pack(push, 0x1)

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x01 (1 bytes)
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x01 (1 bytes)
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0030   (0x0028)  MISSED
	EMovieSceneCaptureProtocolState                    State;                                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// bool IsCapturing();                                                                                                      // [0x3ab9710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// EMovieSceneCaptureProtocolState GetState();                                                                              // [0x3ab9750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0098 (152 bytes) (0x000060 - 0x000098) align 8 MaxSize: 0x0098
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
	FString                                            Filename;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCompositionGraphCapturePasses
{ 
	TArray<FString>                                    Value;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x00D8 (216 bytes) (0x000060 - 0x0000D8) align 8 MaxSize: 0x00D8
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0060   (0x0010)  
	bool                                               bCaptureFramesInHDR;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            HDRCompressionQuality;                                      // 0x0074   (0x0004)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0080   (0x0028)  
	bool                                               bDisableScreenPercentage;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                  // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x00E0 (224 bytes) (0x000070 - 0x0000E0) align 8 MaxSize: 0x00E0
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0070   (0x0070)  MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
	int32_t                                            CompressionQuality;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x00F0 (240 bytes) (0x0000E0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
	bool                                               bCompressed;                                                // 0x00E0   (0x0001)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCaptureResolution
{ 
	int32_t                                            ResX;                                                       // 0x0000   (0x0004)  
	int32_t                                            ResY;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FMovieSceneCaptureSettings
{ 
	FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)  
	class UClass*                                      GameModeOverride;                                           // 0x0010   (0x0008)  
	FString                                            OutputFormat;                                               // 0x0018   (0x0010)  
	bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)  
	bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)  
	FString                                            MovieExtension;                                             // 0x0030   (0x0010)  
	char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)  
	FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)  
	bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)  
	bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)  
	bool                                               bCinematicMode;                                             // 0x0062   (0x0001)  
	bool                                               bAllowMovement;                                             // 0x0063   (0x0001)  
	bool                                               bAllowTurning;                                              // 0x0064   (0x0001)  
	bool                                               bShowPlayer;                                                // 0x0065   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x0066   (0x0001)  
	bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)  
	int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0250 (592 bytes) (0x000030 - 0x000250) align 8 MaxSize: 0x0250
class UMovieSceneCapture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0040   (0x0028)  
	FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0068   (0x0028)  
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                       // 0x0090   (0x0008)  
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                       // 0x0098   (0x0008)  
	FMovieSceneCaptureSettings                         Settings;                                                   // 0x00A0   (0x0070)  
	bool                                               bUseSeparateProcess;                                        // 0x0110   (0x0001)  
	bool                                               bCloseEditorWhenCaptureStarts;                              // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0112   (0x0006)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x0118   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0128   (0x0010)  
	unsigned char                                      UnknownData02_7[0x118];                                     // 0x0138   (0x0118)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// void SetImageCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3ab2450] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// void SetAudioCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3ab2360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                         // [0x3ab2560] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                         // [0x3ab2540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0270 (624 bytes) (0x000250 - 0x000270) align 8 MaxSize: 0x0270
class ULevelCapture : public UMovieSceneCapture
{ 
public:
	bool                                               bAutoStartCapture;                                          // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0251   (0x000B)  MISSED
	FGuid                                              PrerequisiteActorId;                                        // 0x025C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x026C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// bool IsCaptureInProgress();                                                                                              // [0x3ab78a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// int32_t GetCaptureFrameNumber();                                                                                         // [0x3ab7970] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// float GetCaptureElapsedTime();                                                                                           // [0x3ab78f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();                                                   // [0x3ab7800] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();                                                   // [0x3ab7760] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x00E0 (224 bytes) (0x000060 - 0x0000E0) align 8 MaxSize: 0x00E0
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	class UWorld*                                      World;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0068   (0x0078)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// void StopCapturingFinalPixels();                                                                                         // [0x3abab30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                             // [0x3abab70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// void ResolveBuffer(class UTexture* Buffer, FCapturedPixelsID& BufferID);                                                 // [0x3abadd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// void OnWarmUp();                                                                                                         // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// void OnTick();                                                                                                           // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// void OnStartCapture();                                                                                                   // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// bool OnSetup();                                                                                                          // [0x3abb0d0] RequiredAPI|Native|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// void OnPreTick();                                                                                                        // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                       // [0x1a821d0] RequiredAPI|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// void OnPauseCapture();                                                                                                   // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// void OnFinalize();                                                                                                       // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// void OnCaptureFrame();                                                                                                   // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// bool OnCanFinalize();                                                                                                    // [0x3abb090] RequiredAPI|Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// void OnBeginFinalize();                                                                                                  // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// FFrameMetrics GetCurrentFrameMetrics();                                                                                  // [0x3aba990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                                 // [0x3aba9b0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x00E8 (232 bytes) (0x0000E0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
	EDesiredImageFormat                                Format;                                                     // 0x00E0   (0x0001)  
	bool                                               bEnableCompression;                                         // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            CompressionQuality;                                         // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x3abb870] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// FString GenerateFilenameForCurrentFrame();                                                                               // [0x3abbce0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// FString GenerateFilenameForBuffer(class UTexture* Buffer, FCapturedPixelsID& StreamID);                                  // [0x3abbda0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
	bool                                               bUseCompression;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              CompressionQuality;                                         // 0x0074   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFrameMetrics
{ 
	float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)  
	float                                              FrameDelta;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)  
	int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FCapturedPixelsID
{ 
	TMap<FName, FName>                                 Identifiers;                                                // 0x0000   (0x0050)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCapturedPixels
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x0098); // 152 bytes (0x000060 - 0x000098)
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x00D8); // 216 bytes (0x000060 - 0x0000D8)
static_assert(sizeof(UMovieSceneCaptureInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UFrameGrabberProtocol) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UImageSequenceProtocol) == 0x00E0); // 224 bytes (0x000070 - 0x0000E0)
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(FCaptureResolution) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UMovieSceneCapture) == 0x0250); // 592 bytes (0x000030 - 0x000250)
static_assert(sizeof(ULevelCapture) == 0x0270); // 624 bytes (0x000250 - 0x000270)
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x00E0); // 224 bytes (0x000060 - 0x0000E0)
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x00E8); // 232 bytes (0x0000E0 - 0x0000E8)
static_assert(sizeof(UVideoCaptureProtocol) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FFrameMetrics) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixelsID) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCapturedPixels) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 0x0058);
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 0x0060);
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x0000);
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x0060);
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 0x0078);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x0080);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x00B0);
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 0x00E1);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x0000);
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x0010);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x0018);
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x0030);
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x0044);
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x0050);
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x0058);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x0040);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x0068);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x0090);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x0098);
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x00A0);
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x0118);
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x0128);
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x025C);
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x0060);
static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 0x00E0);
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x0000);
