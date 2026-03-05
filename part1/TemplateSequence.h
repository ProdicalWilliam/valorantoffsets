
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00F8 (248 bytes) (0x000070 - 0x0000F8) align 8 MaxSize: 0x00F8
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0078   (0x0030)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00A8   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0960 (2400 bytes) (0x000030 - 0x000960) align 16 MaxSize: 0x0960
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
public:
	float                                              fieldOfView;                                                // 0x0030   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x0800)  
	float                                              PostProcessBlendWeight;                                     // 0x0840   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0844   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0850   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x086C   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0870   (0x0068)  
	float                                              CurrentFocalLength;                                         // 0x08D8   (0x0004)  
	float                                              CurrentAperture;                                            // 0x08DC   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x08E0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x7C];                                      // 0x08E4   (0x007C)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x03A0 (928 bytes) (0x000030 - 0x0003A0) align 8 MaxSize: 0x03A0
class UCameraAnimationSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x270];                                     // 0x0030   (0x0270)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x02A0   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x02A8   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02B0   (0x0088)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0338   (0x0068)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0740 (1856 bytes) (0x000740 - 0x000740) align 8 MaxSize: 0x0740
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 8 MaxSize: 0x0140
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x001C)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x002C   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0030   (0x0110)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0150 (336 bytes) (0x000140 - 0x000150) align 8 MaxSize: 0x0150
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0140   (0x0010)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0030   (0x0008)  
	float                                              PlayRate;                                                   // 0x0038   (0x0004)  
	float                                              Scale;                                                      // 0x003C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0040   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0044   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0048   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0050   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x00A0 (160 bytes) (0x000048 - 0x0000A0) align 8 MaxSize: 0x00A0
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0098 (152 bytes) (0x000048 - 0x000098) align 8 MaxSize: 0x0098
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x04C8 (1224 bytes) (0x000460 - 0x0004C8) align 8 MaxSize: 0x04C8
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0468   (0x0020)  
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0488   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0490   (0x0028)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x04B8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x04C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x5447d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0x5447a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x5447fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x5447ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x5448020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x04D8 (1240 bytes) (0x0004D0 - 0x0004D8) align 8 MaxSize: 0x04D8
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x54496c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	// bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // [0x544a750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	// FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);                                  // [0x544aac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	// FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);                                           // [0x544ad80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x00F8); // 248 bytes (0x000070 - 0x0000F8)
static_assert(sizeof(UCameraAnimationSequence) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UCameraAnimationSequenceCameraStandIn) == 0x0960); // 2400 bytes (0x000030 - 0x000960)
static_assert(sizeof(UCameraAnimationSequencePlayer) == 0x03A0); // 928 bytes (0x000030 - 0x0003A0)
static_assert(sizeof(UCameraAnimationSpawnableSystem) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCameraAnimationBoundObjectInstantiator) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UCameraAnimationEntitySystemLinker) == 0x0740); // 1856 bytes (0x000740 - 0x000740)
static_assert(sizeof(UCameraAnimationSequenceSubsystem) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(UTemplateSequenceSection) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(USequenceCameraShakePattern) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x00A0); // 160 bytes (0x000048 - 0x0000A0)
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x0098); // 152 bytes (0x000048 - 0x000098)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x04C8); // 1224 bytes (0x000460 - 0x0004C8)
static_assert(sizeof(UTemplateSequencePlayer) == 0x04D8); // 1240 bytes (0x0004D0 - 0x0004D8)
static_assert(sizeof(USequenceCameraShakeTestUtil) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UTemplateSequenceTrack) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0070);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0078);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00A8);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessSettings) == 0x0040);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, Filmback) == 0x0844);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, LensSettings) == 0x0850);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FocusSettings) == 0x0870);
static_assert(offsetof(UCameraAnimationSequencePlayer, BoundObjectOverride) == 0x02A0);
static_assert(offsetof(UCameraAnimationSequencePlayer, Sequence) == 0x02A8);
static_assert(offsetof(UCameraAnimationSequencePlayer, RootTemplateInstance) == 0x02B0);
static_assert(offsetof(UCameraAnimationSequenceSubsystem, Linker) == 0x0038);
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x0000);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x0010);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x002C);
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x0030);
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x0140);
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x0030);
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x0050);
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x0058);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0468);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0488);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0490);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x04B8);
