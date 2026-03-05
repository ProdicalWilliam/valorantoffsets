
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

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x01 (1 bytes)
enum class ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R                                                             = 0,
	ESVTPA_AttributesA_G                                                             = 1,
	ESVTPA_AttributesA_B                                                             = 2,
	ESVTPA_AttributesA_A                                                             = 3,
	ESVTPA_AttributesB_R                                                             = 4,
	ESVTPA_AttributesB_G                                                             = 5,
	ESVTPA_AttributesB_B                                                             = 6,
	ESVTPA_AttributesB_A                                                             = 7
};

/// Class /Script/Renderer.AresLightMapPolicyBase
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UAresLightMapPolicyBase : public UObject
{ 
public:
	TArray<FString>                                    ShouldCompileWithVertexFactory;                             // 0x0030   (0x0010)  
	TMap<FString, FString>                             CompilationEnvironment;                                     // 0x0040   (0x0050)  
};

/// Class /Script/Renderer.AresEnvironmentLightMapPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresEnvironmentLightMapPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresEnvironmentFallbackPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresEnvironmentFallbackPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresEnvironmentCachedLightingPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresEnvironmentCachedLightingPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresCharacterPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresCharacterPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresFirstPersonPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresFirstPersonPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresFirstPersonFallbackPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresFirstPersonFallbackPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresFirstPersonCsmPolicy
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UAresFirstPersonCsmPolicy : public UAresLightMapPolicyBase
{ 
public:
};

/// Class /Script/Renderer.AresOutlineRendering
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAresOutlineRendering : public UObject
{ 
public:


	/// Functions
	// Function /Script/Renderer.AresOutlineRendering.SetOutlineColorsForRender
	// void SetOutlineColorsForRender(class UObject* WorldContextObject, FLinearColor& AllyColor, FLinearColor& EnemyColor);    // [0x2806d00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x06D0 (1744 bytes) (0x000688 - 0x0006D0) align 16 MaxSize: 0x06D0
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                                 // 0x0688   (0x0008)  
	bool                                               bAnimate : 1;                                               // 0x0690:0 (0x0001)  
	bool                                               bReversePlayback : 1;                                       // 0x0690:1 (0x0001)  
	bool                                               bBlockingStreamingRequests : 1;                             // 0x0690:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0691   (0x0003)  MISSED
	float                                              AnimationFrame;                                             // 0x0694   (0x0004)  
	float                                              FrameRate;                                                  // 0x0698   (0x0004)  
	float                                              AnimationTime;                                              // 0x069C   (0x0004)  
	TEnumAsByte<ESparseVolumeTexturePreviewAttribute>  PreviewAttribute;                                           // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x06A1   (0x0003)  MISSED
	int32_t                                            MipLevel;                                                   // 0x06A4   (0x0004)  
	float                                              Extinction;                                                 // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x24];                                      // 0x06AC   (0x0024)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class ASparseVolumeTextureViewer : public AInfo
{ 
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                         // 0x0460   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UAresLightMapPolicyBase) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UAresEnvironmentLightMapPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresEnvironmentFallbackPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresEnvironmentCachedLightingPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresCharacterPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresFirstPersonPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresFirstPersonFallbackPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresFirstPersonCsmPolicy) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UAresOutlineRendering) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USparseVolumeTextureViewerComponent) == 0x06D0); // 1744 bytes (0x000688 - 0x0006D0)
static_assert(sizeof(ASparseVolumeTextureViewer) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(offsetof(UAresLightMapPolicyBase, ShouldCompileWithVertexFactory) == 0x0030);
static_assert(offsetof(UAresLightMapPolicyBase, CompilationEnvironment) == 0x0040);
static_assert(offsetof(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview) == 0x0688);
static_assert(offsetof(USparseVolumeTextureViewerComponent, PreviewAttribute) == 0x06A0);
static_assert(offsetof(ASparseVolumeTextureViewer, SparseVolumeTextureViewerComponent) == 0x0460);
