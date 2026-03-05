
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Script/EsportsEvents.EsportsGameDataEventReceiver
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UEsportsGameDataEventReceiver : public UBaseGameDataEventReceiver
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UGameDataExporter*                           GameDataExporter;                                           // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UEsportsGameDataEventReceiver) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(offsetof(UEsportsGameDataEventReceiver, GameDataExporter) == 0x0048);
