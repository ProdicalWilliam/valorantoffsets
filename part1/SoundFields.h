
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioExtensions
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/SoundFields.AmbisonicsEncodingSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{ 
public:
	int32_t                                            AmbisonicsOrder;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x0038); // 56 bytes (0x000030 - 0x000038)
