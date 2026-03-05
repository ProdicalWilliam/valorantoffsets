
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/RGILatencyMarkers.ERGILatencyIntervalType
/// Size: 0x01 (1 bytes)
enum class ERGILatencyIntervalType : uint8_t
{
	ERGILatencyIntervalType__Work                                                    = 0,
	ERGILatencyIntervalType__Slack                                                   = 1,
	ERGILatencyIntervalType__Slop                                                    = 2,
	ERGILatencyIntervalType__Count                                                   = 3
};

/// Enum /Script/RGILatencyMarkers.ERGILatencyMarkerType
/// Size: 0x01 (1 bytes)
enum class ERGILatencyMarkerType : uint8_t
{
	ERGILatencyMarkerType__SimulationStart                                           = 0,
	ERGILatencyMarkerType__SimulationEnd                                             = 1,
	ERGILatencyMarkerType__RenderSubmitStart                                         = 2,
	ERGILatencyMarkerType__RenderSubmitEnd                                           = 3,
	ERGILatencyMarkerType__PresentStart                                              = 4,
	ERGILatencyMarkerType__PresentEnd                                                = 5,
	ERGILatencyMarkerType__InputSample                                               = 6,
	ERGILatencyMarkerType__TriggerFlash                                              = 7,
	ERGILatencyMarkerType__PCLatencyPing                                             = 8,
	ERGILatencyMarkerType__DrawSceneCommandEnqueued                                  = 20,
	ERGILatencyMarkerType__DrawSceneCommandStart                                     = 21,
	ERGILatencyMarkerType__DrawSceneCommandEnd                                       = 22,
	ERGILatencyMarkerType__SlateDrawWindowCommandStart                               = 23,
	ERGILatencyMarkerType__EndDrawingViewportRHICommandEnqueued                      = 24,
	ERGILatencyMarkerType__VALRenderSyncStart                                        = 25,
	ERGILatencyMarkerType__VALRenderSyncEnd                                          = 26,
	ERGILatencyMarkerType__Count                                                     = 27
};

/// Struct /Script/RGILatencyMarkers.RGILatencyInterval
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FRGILatencyInterval
{ 
	ERGILatencyIntervalType                            IntervalType;                                               // 0x0000   (0x0001)  
	ERGILatencyMarkerType                              BeginMarker;                                                // 0x0001   (0x0001)  
	ERGILatencyMarkerType                              EndMarker;                                                  // 0x0002   (0x0001)  
};

/// Class /Script/RGILatencyMarkers.RGILatencyMarkers
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class URGILatencyMarkers : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0030   (0x0050)  MISSED
	uint32_t                                           FrameHistoryLength;                                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FRGILatencyInterval>                        LatencyIntervals;                                           // 0x0088   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FRGILatencyInterval) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(URGILatencyMarkers) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(offsetof(FRGILatencyInterval, IntervalType) == 0x0000);
static_assert(offsetof(FRGILatencyInterval, BeginMarker) == 0x0001);
static_assert(offsetof(FRGILatencyInterval, EndMarker) == 0x0002);
static_assert(offsetof(URGILatencyMarkers, LatencyIntervals) == 0x0088);
