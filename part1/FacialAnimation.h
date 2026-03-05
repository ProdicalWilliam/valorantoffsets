
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

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x0D70 (3440 bytes) (0x000D30 - 0x000D70) align 16 MaxSize: 0x0D70
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0D30   (0x0008)  MISSED
	FName                                              CurveSourceBindingName;                                     // 0x0D38   (0x000C)  
	float                                              CurveSyncOffset;                                            // 0x0D44   (0x0004)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0D48   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCurveSourceComponent) == 0x0D70); // 3440 bytes (0x000D30 - 0x000D70)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x0D38);
