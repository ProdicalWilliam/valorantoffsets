
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeImport.EMaterialXLuminanceMode
/// Size: 0x01 (1 bytes)
enum class EMaterialXLuminanceMode : uint8_t
{
	EMaterialXLuminanceMode__ACEScg                                                  = 0,
	EMaterialXLuminanceMode__Rec709                                                  = 1,
	EMaterialXLuminanceMode__Rec2020                                                 = 2,
	EMaterialXLuminanceMode__Rec2100                                                 = 2,
	EMaterialXLuminanceMode__Custom                                                  = 3
};

/// Enum /Script/InterchangeImport.EMaterialXTextureSampleBlurFilter
/// Size: 0x01 (1 bytes)
enum class EMaterialXTextureSampleBlurFilter : uint8_t
{
	EMaterialXTextureSampleBlurFilter__Box                                           = 0,
	EMaterialXTextureSampleBlurFilter__Gaussian                                      = 1
};

/// Enum /Script/InterchangeImport.EMAterialXTextureSampleBlurKernel
/// Size: 0x04 (4 bytes)
enum class EMAterialXTextureSampleBlurKernel : uint32_t
{
	EMAterialXTextureSampleBlurKernel__Kernel1                                       = 0,
	EMAterialXTextureSampleBlurKernel__Kernel3                                       = 1,
	EMAterialXTextureSampleBlurKernel__Kernel5                                       = 2,
	EMAterialXTextureSampleBlurKernel__Kernel7                                       = 3
};

/// Class /Script/InterchangeImport.InterchangeAnimationPayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeAnimationPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeAnimationTrackSetFactory
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeAnimationTrackSetFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeBlockedTexturePayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeBlockedTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeActorFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeLightActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeLightActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeMeshPayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeMeshPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSceneImportAssetFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSceneVariantSetsFactory
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeSlicedTexturePayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeSlicedTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeTextureLightProfilePayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeTextureLightProfilePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeTexturePayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeVariantSetPayloadInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeVariantSetPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRamp4
/// Size: 0x01B0 (432 bytes) (0x0000B8 - 0x0001B0) align 8 MaxSize: 0x01B0
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   A;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x0118   (0x0030)  
	FExpressionInput                                   C;                                                          // 0x0148   (0x0030)  
	FExpressionInput                                   D;                                                          // 0x0178   (0x0030)  
	char                                               ConstCoordinate;                                            // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01A9   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeAnimSequenceFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeFbxTranslator
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeGLTFTranslator
/// Size: 0x0280 (640 bytes) (0x000040 - 0x000280) align 8 MaxSize: 0x0280
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x240];                                     // 0x0040   (0x0240)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeMaterialXTranslator
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend3Vector
/// Size: 0x0148 (328 bytes) (0x0000B8 - 0x000148) align 8 MaxSize: 0x0148
class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   C;                                                          // 0x0118   (0x0030)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend4Vector
/// Size: 0x0178 (376 bytes) (0x0000B8 - 0x000178) align 8 MaxSize: 0x0178
class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   C;                                                          // 0x0118   (0x0030)  
	FExpressionInput                                   D;                                                          // 0x0148   (0x0030)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXBurn
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDifference
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDisjointOver
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDodge
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXFractal3D
/// Size: 0x01D8 (472 bytes) (0x0000B8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Position;                                                   // 0x00B8   (0x0030)  
	FExpressionInput                                   Amplitude;                                                  // 0x00E8   (0x0030)  
	float                                              ConstAmplitude;                                             // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FExpressionInput                                   Octaves;                                                    // 0x0120   (0x0030)  
	int32_t                                            ConstOctaves;                                               // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FExpressionInput                                   Lacunarity;                                                 // 0x0158   (0x0030)  
	float                                              ConstLacunarity;                                            // 0x0188   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	FExpressionInput                                   Diminish;                                                   // 0x0190   (0x0030)  
	float                                              ConstDiminish;                                              // 0x01C0   (0x0004)  
	float                                              Scale;                                                      // 0x01C4   (0x0004)  
	bool                                               bTurbulence;                                                // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x01C9   (0x0003)  MISSED
	int32_t                                            Levels;                                                     // 0x01CC   (0x0004)  
	float                                              OutputMin;                                                  // 0x01D0   (0x0004)  
	float                                              OutputMax;                                                  // 0x01D4   (0x0004)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXIn
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXIn : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXLuminance
/// Size: 0x0100 (256 bytes) (0x0000B8 - 0x000100) align 8 MaxSize: 0x0100
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
	FLinearColor                                       LuminanceFactors;                                           // 0x00E8   (0x0010)  
	EMaterialXLuminanceMode                            LuminanceMode;                                              // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMask
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXMask : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMatte
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMinus
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOut
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXOut : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOver
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXOver : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOverlay
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlace2D
/// Size: 0x01B0 (432 bytes) (0x0000B8 - 0x0001B0) align 8 MaxSize: 0x01B0
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   Pivot;                                                      // 0x00E8   (0x0030)  
	FExpressionInput                                   Scale;                                                      // 0x0118   (0x0030)  
	FExpressionInput                                   Offset;                                                     // 0x0148   (0x0030)  
	FExpressionInput                                   RotationAngle;                                              // 0x0178   (0x0030)  
	float                                              ConstRotationAngle;                                         // 0x01A8   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x01AD   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlus
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPremult
/// Size: 0x00E8 (232 bytes) (0x0000B8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampLeftRight
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   A;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x0118   (0x0030)  
	char                                               ConstCoordinate;                                            // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0149   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampTopBottom
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   A;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x0118   (0x0030)  
	char                                               ConstCoordinate;                                            // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0149   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRemap
/// Size: 0x01B8 (440 bytes) (0x0000B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
	FExpressionInput                                   InputLow;                                                   // 0x00E8   (0x0030)  
	FExpressionInput                                   InputHigh;                                                  // 0x0118   (0x0030)  
	FExpressionInput                                   TargetLow;                                                  // 0x0148   (0x0030)  
	FExpressionInput                                   TargetHigh;                                                 // 0x0178   (0x0030)  
	float                                              InputLowDefault;                                            // 0x01A8   (0x0004)  
	float                                              InputHighDefault;                                           // 0x01AC   (0x0004)  
	float                                              TargetLowDefault;                                           // 0x01B0   (0x0004)  
	float                                              TargetHighDefault;                                          // 0x01B4   (0x0004)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRotate2D
/// Size: 0x0120 (288 bytes) (0x0000B8 - 0x000120) align 8 MaxSize: 0x0120
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
	FExpressionInput                                   RotationAngle;                                              // 0x00E8   (0x0030)  
	float                                              ConstRotationAngle;                                         // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXScreen
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   Alpha;                                                      // 0x0118   (0x0030)  
	float                                              ConstAlpha;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
/// Size: 0x0180 (384 bytes) (0x0000B8 - 0x000180) align 8 MaxSize: 0x0180
class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   A;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x0118   (0x0030)  
	FExpressionInput                                   Center;                                                     // 0x0148   (0x0030)  
	float                                              ConstCenter;                                                // 0x0178   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x017C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x017D   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
/// Size: 0x0180 (384 bytes) (0x0000B8 - 0x000180) align 8 MaxSize: 0x0180
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B8   (0x0030)  
	FExpressionInput                                   A;                                                          // 0x00E8   (0x0030)  
	FExpressionInput                                   B;                                                          // 0x0118   (0x0030)  
	FExpressionInput                                   Center;                                                     // 0x0148   (0x0030)  
	float                                              ConstCenter;                                                // 0x0178   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x017C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x017D   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSwizzle
/// Size: 0x00F8 (248 bytes) (0x0000B8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
	FString                                            Channels;                                                   // 0x00E8   (0x0010)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
/// Size: 0x0290 (656 bytes) (0x000280 - 0x000290) align 8 MaxSize: 0x0290
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{ 
public:
	EMAterialXTextureSampleBlurKernel                  KernelSize;                                                 // 0x0280   (0x0004)  
	float                                              FilterSize;                                                 // 0x0284   (0x0004)  
	float                                              FilterOffset;                                               // 0x0288   (0x0004)  
	EMaterialXTextureSampleBlurFilter                  Filter;                                                     // 0x028C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x028D   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXUnpremult
/// Size: 0x00E8 (232 bytes) (0x0000B8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B8   (0x0030)  
};

/// Class /Script/InterchangeImport.InterchangeMaterialFactory
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeMaterialFunctionFactory
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeOBJTranslator
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePhysicsAssetFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshFactory
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeSkeletonFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshFactory
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeCineCameraActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeCameraActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshActorFactory
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeDDSTranslator
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeIESTranslator
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeImageWrapperTranslator
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeJPGTranslator
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePCXTranslator
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePSDTranslator
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeTextureFactory
/// Size: 0x00C8 (200 bytes) (0x000038 - 0x0000C8) align 8 MaxSize: 0x00C8
class UInterchangeTextureFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0038   (0x0090)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInterchangeAnimationPayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeAnimationTrackSetFactory) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UInterchangeBlockedTexturePayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeLightActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeMeshPayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeSceneImportAssetFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeSceneVariantSetsFactory) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UInterchangeSlicedTexturePayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeTextureLightProfilePayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeTexturePayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangeVariantSetPayloadInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMaterialExpressionMaterialXRamp4) == 0x01B0); // 432 bytes (0x0000B8 - 0x0001B0)
static_assert(sizeof(UInterchangeAnimSequenceFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeFbxTranslator) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UInterchangeGLTFTranslator) == 0x0280); // 640 bytes (0x000040 - 0x000280)
static_assert(sizeof(UInterchangeMaterialXTranslator) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionMaterialXAppend3Vector) == 0x0148); // 328 bytes (0x0000B8 - 0x000148)
static_assert(sizeof(UMaterialExpressionMaterialXAppend4Vector) == 0x0178); // 376 bytes (0x0000B8 - 0x000178)
static_assert(sizeof(UMaterialExpressionMaterialXBurn) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXDifference) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXDisjointOver) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXDodge) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXFractal3D) == 0x01D8); // 472 bytes (0x0000B8 - 0x0001D8)
static_assert(sizeof(UMaterialExpressionMaterialXIn) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXLuminance) == 0x0100); // 256 bytes (0x0000B8 - 0x000100)
static_assert(sizeof(UMaterialExpressionMaterialXMask) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXMatte) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXMinus) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXOut) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXOver) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXOverlay) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXPlace2D) == 0x01B0); // 432 bytes (0x0000B8 - 0x0001B0)
static_assert(sizeof(UMaterialExpressionMaterialXPlus) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXPremult) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(sizeof(UMaterialExpressionMaterialXRampLeftRight) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXRampTopBottom) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXRemap) == 0x01B8); // 440 bytes (0x0000B8 - 0x0001B8)
static_assert(sizeof(UMaterialExpressionMaterialXRotate2D) == 0x0120); // 288 bytes (0x0000B8 - 0x000120)
static_assert(sizeof(UMaterialExpressionMaterialXScreen) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UMaterialExpressionMaterialXSplitLeftRight) == 0x0180); // 384 bytes (0x0000B8 - 0x000180)
static_assert(sizeof(UMaterialExpressionMaterialXSplitTopBottom) == 0x0180); // 384 bytes (0x0000B8 - 0x000180)
static_assert(sizeof(UMaterialExpressionMaterialXSwizzle) == 0x00F8); // 248 bytes (0x0000B8 - 0x0000F8)
static_assert(sizeof(UMaterialExpressionMaterialXTextureSampleParameterBlur) == 0x0290); // 656 bytes (0x000280 - 0x000290)
static_assert(sizeof(UMaterialExpressionMaterialXUnpremult) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(sizeof(UInterchangeMaterialFactory) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UInterchangeMaterialFunctionFactory) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UInterchangeOBJTranslator) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UInterchangePhysicsAssetFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeSkeletalMeshFactory) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UInterchangeSkeletonFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeStaticMeshFactory) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UInterchangeCineCameraActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeCameraActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeSkeletalMeshActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeStaticMeshActorFactory) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterchangeDDSTranslator) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UInterchangeIESTranslator) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInterchangeImageWrapperTranslator) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UInterchangeJPGTranslator) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInterchangePCXTranslator) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInterchangePSDTranslator) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInterchangeTextureFactory) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, A) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, B) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, C) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, D) == 0x0178);
static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, C) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, C) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, D) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXBurn, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXBurn, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXBurn, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXDifference, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXDifference, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXDifference, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXDodge, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXDodge, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXDodge, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXFractal3D, Position) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXFractal3D, Amplitude) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXFractal3D, Octaves) == 0x0120);
static_assert(offsetof(UMaterialExpressionMaterialXFractal3D, Lacunarity) == 0x0158);
static_assert(offsetof(UMaterialExpressionMaterialXFractal3D, Diminish) == 0x0190);
static_assert(offsetof(UMaterialExpressionMaterialXIn, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXIn, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXIn, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXLuminance, Input) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXLuminance, LuminanceFactors) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXLuminance, LuminanceMode) == 0x00F8);
static_assert(offsetof(UMaterialExpressionMaterialXMask, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXMask, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXMask, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXMatte, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXMatte, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXMatte, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXMinus, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXMinus, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXMinus, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXOut, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXOut, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXOut, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXOver, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXOver, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXOver, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Pivot) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Scale) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Offset) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, RotationAngle) == 0x0178);
static_assert(offsetof(UMaterialExpressionMaterialXPlus, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXPlus, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXPlus, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXPremult, Input) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, A) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, B) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, A) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, B) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXRemap, Input) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputLow) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputHigh) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetLow) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetHigh) == 0x0178);
static_assert(offsetof(UMaterialExpressionMaterialXRotate2D, Input) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXRotate2D, RotationAngle) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXScreen, A) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXScreen, B) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXScreen, Alpha) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, A) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, B) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, Center) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, Coordinates) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, A) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, B) == 0x0118);
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, Center) == 0x0148);
static_assert(offsetof(UMaterialExpressionMaterialXSwizzle, Input) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMaterialXSwizzle, Channels) == 0x00E8);
static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, KernelSize) == 0x0280);
static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, Filter) == 0x028C);
static_assert(offsetof(UMaterialExpressionMaterialXUnpremult, Input) == 0x00B8);
