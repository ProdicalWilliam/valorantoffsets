
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Struct /Script/DataflowCore.NodeColors
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNodeColors
{ 
	FLinearColor                                       NodeTitleColor;                                             // 0x0000   (0x0010)  
	FLinearColor                                       NodeBodyTintColor;                                          // 0x0010   (0x0010)  
};

/// Class /Script/DataflowCore.DataflowSettings
/// Size: 0x00F0 (240 bytes) (0x000048 - 0x0000F0) align 8 MaxSize: 0x00F0
class UDataflowSettings : public UDeveloperSettings
{ 
public:
	FLinearColor                                       ArrayPinTypeColor;                                          // 0x0048   (0x0010)  
	FLinearColor                                       ManagedArrayCollectionPinTypeColor;                         // 0x0058   (0x0010)  
	FLinearColor                                       BoxPinTypeColor;                                            // 0x0068   (0x0010)  
	FLinearColor                                       SpherePinTypeColor;                                         // 0x0078   (0x0010)  
	TMap<FName, FNodeColors>                           NodeColorsMap;                                              // 0x0088   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00D8   (0x0018)  MISSED
};

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FDataflowConnection
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FDataflowInput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align 8 MaxSize: 0x0070
struct FDataflowOutput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0048   (0x0028)  MISSED
};

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FDataflowNode
{ 
	unsigned char                                      UnknownData00_7[0xD0];                                      // 0x0000   (0x00D0)  MISSED
	bool                                               bActive;                                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x00D1   (0x001F)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOverrideNode
/// Size: 0x0118 (280 bytes) (0x0000F0 - 0x000118) align 8 MaxSize: 0x0118
struct FDataflowOverrideNode : FDataflowNode
{ 
	FName                                              Key;                                                        // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FString                                            Default;                                                    // 0x0100   (0x0010)  
	bool                                               IsOverriden;                                                // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/DataflowCore.DataflowSelection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDataflowSelection
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DataflowCore.DataflowTransformSelection
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FDataflowTransformSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowVertexSelection
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FDataflowVertexSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowFaceSelection
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FDataflowFaceSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowTerminalNode
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FDataflowTerminalNode : FDataflowNode
{ 
};

#pragma pack(pop)


static_assert(sizeof(FNodeColors) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UDataflowSettings) == 0x00F0); // 240 bytes (0x000048 - 0x0000F0)
static_assert(sizeof(FDataflowConnection) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FDataflowInput) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FDataflowOutput) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(FDataflowNode) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FDataflowOverrideNode) == 0x0118); // 280 bytes (0x0000F0 - 0x000118)
static_assert(sizeof(FDataflowSelection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDataflowTransformSelection) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FDataflowVertexSelection) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FDataflowFaceSelection) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FDataflowTerminalNode) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(offsetof(FNodeColors, NodeTitleColor) == 0x0000);
static_assert(offsetof(FNodeColors, NodeBodyTintColor) == 0x0010);
static_assert(offsetof(UDataflowSettings, ArrayPinTypeColor) == 0x0048);
static_assert(offsetof(UDataflowSettings, ManagedArrayCollectionPinTypeColor) == 0x0058);
static_assert(offsetof(UDataflowSettings, BoxPinTypeColor) == 0x0068);
static_assert(offsetof(UDataflowSettings, SpherePinTypeColor) == 0x0078);
static_assert(offsetof(UDataflowSettings, NodeColorsMap) == 0x0088);
static_assert(offsetof(FDataflowOverrideNode, Key) == 0x00F0);
static_assert(offsetof(FDataflowOverrideNode, Default) == 0x0100);
