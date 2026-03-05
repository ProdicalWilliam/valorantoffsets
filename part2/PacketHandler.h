
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/PacketHandler.HandlerComponentFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UHandlerComponentFactory : public UObject
{ 
public:
};

/// Class /Script/PacketHandler.PacketHandlerProfileConfig
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPacketHandlerProfileConfig : public UObject
{ 
public:
	TArray<FString>                                    Components;                                                 // 0x0030   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UHandlerComponentFactory) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UPacketHandlerProfileConfig) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(offsetof(UPacketHandlerProfileConfig, Components) == 0x0030);
