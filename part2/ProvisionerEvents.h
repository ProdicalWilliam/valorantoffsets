
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Script/ProvisionerEvents.ProvisionerGameDataEventReceiver
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UProvisionerGameDataEventReceiver : public UBaseGameDataEventReceiver
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UGameDataExporter*                           GameDataExporter;                                           // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UProvisionerGameDataEventReceiver) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(offsetof(UProvisionerGameDataEventReceiver, GameDataExporter) == 0x0040);
