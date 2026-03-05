
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AudioLinkCore
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/Wwise.WwiseAudioLinkComponent
/// Size: 0x0530 (1328 bytes) (0x000500 - 0x000530) align 16 MaxSize: 0x0530
class UWwiseAudioLinkComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0500   (0x0008)  MISSED
	class UWwiseAudioLinkSettings*                     Settings;                                                   // 0x0508   (0x0008)  
	class USoundBase*                                  Sound;                                                      // 0x0510   (0x0008)  
	bool                                               bAutoPlay;                                                  // 0x0518   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0519   (0x0007)  MISSED
	class UAudioComponent*                             AudioComponent;                                             // 0x0520   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0528   (0x0008)  MISSED
};

/// Class /Script/Wwise.WwiseAudioLinkSettings
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract
{ 
public:
	TWeakObjectPtr<class UAkAudioEvent*>               StartEvent;                                                 // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	bool                                               bShouldClearBufferOnReceipt;                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              ProducerToConsumerBufferRatio;                              // 0x0074   (0x0004)  
	float                                              InitialSilenceFillRatio;                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x007C   (0x0014)  MISSED
	class UAkAudioEvent*                               StartEventResolved;                                         // 0x0090   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UWwiseAudioLinkComponent) == 0x0530); // 1328 bytes (0x000500 - 0x000530)
static_assert(sizeof(UWwiseAudioLinkSettings) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(offsetof(UWwiseAudioLinkComponent, Settings) == 0x0508);
static_assert(offsetof(UWwiseAudioLinkComponent, Sound) == 0x0510);
static_assert(offsetof(UWwiseAudioLinkComponent, AudioComponent) == 0x0520);
static_assert(offsetof(UWwiseAudioLinkSettings, StartEvent) == 0x0040);
static_assert(offsetof(UWwiseAudioLinkSettings, StartEventResolved) == 0x0090);
