
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/DataflowEnginePlugin.DataflowActor
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class ADataflowActor : public AActor
{ 
public:
	class UDataflowComponent*                          DataflowComponent;                                          // 0x0460   (0x0008)  
};

/// Class /Script/DataflowEnginePlugin.DataflowComponent
/// Size: 0x07D0 (2000 bytes) (0x000688 - 0x0007D0) align 16 MaxSize: 0x07D0
class UDataflowComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0688   (0x0148)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ADataflowActor) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(UDataflowComponent) == 0x07D0); // 2000 bytes (0x000688 - 0x0007D0)
static_assert(offsetof(ADataflowActor, DataflowComponent) == 0x0460);
