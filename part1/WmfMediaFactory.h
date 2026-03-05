
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/WmfMediaFactory.WmfMediaSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UWmfMediaSettings : public UObject
{ 
public:
	bool                                               AllowNonStandardCodecs;                                     // 0x0030   (0x0001)  
	bool                                               LowLatency;                                                 // 0x0031   (0x0001)  
	bool                                               NativeAudioOut;                                             // 0x0032   (0x0001)  
	bool                                               HardwareAcceleratedVideoDecoding;                           // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWmfMediaSettings) == 0x0038); // 56 bytes (0x000030 - 0x000038)
