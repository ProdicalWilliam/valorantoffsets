
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/WebSocketNetworking.WebSocketConnection
/// Size: 0x1E70 (7792 bytes) (0x001E60 - 0x001E70) align 8 MaxSize: 0x1E70
class UWebSocketConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1E60   (0x0010)  MISSED
};

/// Class /Script/WebSocketNetworking.WebSocketNetDriver
/// Size: 0x0860 (2144 bytes) (0x000850 - 0x000860) align 8 MaxSize: 0x0860
class UWebSocketNetDriver : public UNetDriver
{ 
public:
	int32_t                                            WebSocketPort;                                              // 0x0850   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0854   (0x000C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebSocketConnection) == 0x1E70); // 7792 bytes (0x001E60 - 0x001E70)
static_assert(sizeof(UWebSocketNetDriver) == 0x0860); // 2144 bytes (0x000850 - 0x000860)
