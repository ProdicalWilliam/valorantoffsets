
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

#pragma pack(push, 0x1)

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Tracker                                                    = 3,
	EXRTrackedDeviceType__Other                                                      = 4,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                   // [0x3178c70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0810 (2064 bytes) (0x000688 - 0x000810) align 16 MaxSize: 0x0810
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0688   (0x0004)  
	FName                                              MotionSource;                                               // 0x068C   (0x000C)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0698:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0699   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x069C   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x069D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x069E   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x06A0   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x06AC   (0x0004)  MISSED
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x06B0   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x06B8   (0x0010)  
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x06C8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x140];                                     // 0x06D0   (0x0140)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x317f040] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x317ee90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x317f3f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x317f2d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                            // [0x317f150] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x317ed50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x1a821d0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x317f130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x317efe0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x317eb20] Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
	// bool GetLinearVelocity(FVector& OutLinearVelocity);                                                                      // [0x317e800] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
	// bool GetLinearAcceleration(FVector& OutLinearAcceleration);                                                              // [0x317e600] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x317e900] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
	// bool GetAngularVelocity(FRotator& OutAngularVelocity);                                                                   // [0x317e700] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FVector                                            Position;                                                   // 0x0028   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x0040   (0x0020)  
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 16 MaxSize: 0x0120
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x0020   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x0021   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0023   (0x0005)  MISSED
	FVector                                            GripPosition;                                               // 0x0028   (0x0018)  
	FQuat                                              GripRotation;                                               // 0x0040   (0x0020)  
	FVector                                            AimPosition;                                                // 0x0060   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              AimRotation;                                                // 0x0080   (0x0020)  
	FVector                                            PalmPosition;                                               // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              PalmRotation;                                               // 0x00C0   (0x0020)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x00E0   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x00F0   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0100   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData04_7[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x000C)  
	int32_t                                            DeviceID;                                                   // 0x000C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UHandKeypointConversion) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMotionControllerComponent) == 0x0810); // 2064 bytes (0x000688 - 0x000810)
static_assert(sizeof(FXRHMDData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FXRMotionControllerData) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FXRGestureConfig) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FXRDeviceId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x068C);
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x069C);
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x06A0);
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x06B0);
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x06B8);
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x06C8);
static_assert(offsetof(FXRHMDData, DeviceName) == 0x0004);
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x0010);
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x0020);
static_assert(offsetof(FXRHMDData, Position) == 0x0028);
static_assert(offsetof(FXRHMDData, Rotation) == 0x0040);
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x0004);
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x0010);
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x0020);
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x0021);
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x0022);
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x0028);
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x0040);
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x0060);
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x0080);
static_assert(offsetof(FXRMotionControllerData, PalmPosition) == 0x00A0);
static_assert(offsetof(FXRMotionControllerData, PalmRotation) == 0x00C0);
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x00E0);
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x00F0);
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x0100);
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x0002);
static_assert(offsetof(FXRDeviceId, SystemName) == 0x0000);
