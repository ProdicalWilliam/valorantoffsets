
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore

#pragma pack(push, 0x1)

/// Enum /Script/DynamicVolume.EGroundVolumeFragmentStatus
/// Size: 0x01 (1 bytes)
enum class EGroundVolumeFragmentStatus : uint8_t
{
	EGroundVolumeFragmentStatus__AllInside                                           = 0,
	EGroundVolumeFragmentStatus__PartiallyOutside                                    = 1,
	EGroundVolumeFragmentStatus__PartiallyBlocked                                    = 2,
	EGroundVolumeFragmentStatus__Invalid                                             = 3,
	EGroundVolumeFragmentStatus__Count                                               = 4
};

/// Enum /Script/DynamicVolume.EDynamicVolumeBuildStatus
/// Size: 0x01 (1 bytes)
enum class EDynamicVolumeBuildStatus : uint8_t
{
	EDynamicVolumeBuildStatus__BuildNotStarted                                       = 0,
	EDynamicVolumeBuildStatus__BuildInProgress                                       = 1,
	EDynamicVolumeBuildStatus__BuildComplete                                         = 2,
	EDynamicVolumeBuildStatus__BuildError                                            = 3,
	EDynamicVolumeBuildStatus__Count                                                 = 4
};

/// Enum /Script/DynamicVolume.GroundVolumeDrawPriority
/// Size: 0x01 (1 bytes)
enum class GroundVolumeDrawPriority : uint8_t
{
	GroundVolumeDrawPriority__AlwaysLayerOnBottom                                    = 0,
	GroundVolumeDrawPriority__DefaultLayer                                           = 10,
	GroundVolumeDrawPriority__AlwaysLayerOnTop                                       = 20,
	GroundVolumeDrawPriority__Custom                                                 = 30
};

/// Class /Script/DynamicVolume.DynamicVolumeBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDynamicVolumeBuilder : public UObject
{ 
public:
};

/// Class /Script/DynamicVolume.DynamicVolumeComponent
/// Size: 0x0440 (1088 bytes) (0x000330 - 0x000440) align 16 MaxSize: 0x0440
class UDynamicVolumeComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnVolumeInitialized);                                // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnVolumeFinishedBuilding);                           // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnActorsBeginOverlap);                               // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(OnActorsEndOverlap);                                 // 0x0360   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0370   (0x0060)  MISSED
	float                                              DebugDrawFadeTime;                                          // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UPrimitiveComponent*                         VolumeMaxExtentShape;                                       // 0x03D8   (0x0008)  
	float                                              VolumeResolution;                                           // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x03E4   (0x0004)  MISSED
	double                                             BuilderTimeLimitPerTick;                                    // 0x03E8   (0x0008)  
	double                                             OverlapTimeLimitPerTick;                                    // 0x03F0   (0x0008)  
	bool                                               bAxisAligned;                                               // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x27];                                      // 0x03F9   (0x0027)  MISSED
	TArray<class AActor*>                              ActorsThatBeganOverlapSinceLastTick;                        // 0x0420   (0x0010)  
	TArray<class AActor*>                              ActorsThatEndedOverlapSinceLastTick;                        // 0x0430   (0x0010)  


	/// Functions
	// Function /Script/DynamicVolume.DynamicVolumeComponent.SetCollisionEnabled
	// void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);                                                        // [0x52759f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.OnBoundingShapeEndOverlap
	// void OnBoundingShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5274e90] Final|Native|Private 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.OnBoundingShapeBeginOverlap
	// void OnBoundingShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5275220] Final|Native|Private|HasOutParms 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.IsFinishedBuilding
	// bool IsFinishedBuilding();                                                                                               // [0x5275690] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.IsActorInsideVolume
	// bool IsActorInsideVolume(class AActor* ActorToTest);                                                                     // [0x52756d0] Native|Public|BlueprintCallable 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.GetVolumeTransform
	// FTransform GetVolumeTransform();                                                                                         // [0x5275970] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.GetVolumeResolution
	// float GetVolumeResolution();                                                                                             // [0x52759d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.GetVolumeBuilderPriorToBuild
	// class UDynamicVolumeBuilder* GetVolumeBuilderPriorToBuild();                                                             // [0x5275820] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.GetBuildSpreadDistance
	// float GetBuildSpreadDistance();                                                                                          // [0x52757e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.DynamicVolumeComponent.DrawDebugLines
	// void DrawDebugLines(TArray<FBatchedLine> DebugLine);                                                                     // [0x5274d60] Final|Net|NetReliableNative|Event|NetMulticast|Private|Const 
};

/// Class /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent
/// Size: 0x03D0 (976 bytes) (0x000330 - 0x0003D0) align 16 MaxSize: 0x03D0
class UGroundVolumeAreaVisualizationComponent : public USceneComponent
{ 
public:
	FFloatInterval                                     HorizontalFadeOut;                                          // 0x0330   (0x0008)  
	float                                              VolumeExpansionAmountForOutsideNodes;                       // 0x0338   (0x0004)  
	float                                              UVBorderScale;                                              // 0x033C   (0x0004)  
	FFloatInterval                                     VerticalFadeOut;                                            // 0x0340   (0x0008)  
	FName                                              GroundVolumeComponentName;                                  // 0x0348   (0x000C)  
	float                                              MaskPixelDensity;                                           // 0x0354   (0x0004)  
	float                                              HeightTolerance;                                            // 0x0358   (0x0004)  
	float                                              SplitPlaneTolerance;                                        // 0x035C   (0x0004)  
	bool                                               bLimitPerFrameFragmentProcessing;                           // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0361   (0x0001)  MISSED
	uint16_t                                           PerFrameFragmentProcessingLimit;                            // 0x0362   (0x0002)  
	GroundVolumeDrawPriority                           DrawPriority;                                               // 0x0364   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0365   (0x0003)  MISSED
	int32_t                                            CustomDrawPriority;                                         // 0x0368   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x036C   (0x0004)  MISSED
	class UGroundVolumeComponent*                      GroundVolumeComponent;                                      // 0x0370   (0x0008)  
	class USceneCaptureComponent2D*                    DepthCapture;                                               // 0x0378   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0380   (0x0008)  MISSED
	class UTexture2D*                                  AreaTexture;                                                // 0x0388   (0x0008)  
	unsigned char                                      UnknownData04_7[0x40];                                      // 0x0390   (0x0040)  MISSED


	/// Functions
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.OnGroundVolumeInitialized
	// void OnGroundVolumeInitialized();                                                                                        // [0x52767d0] Final|Native|Private 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.IsFinishedBuilding
	// bool IsFinishedBuilding();                                                                                               // [0x52768f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetVisualRadiusTexAligned
	// float GetVisualRadiusTexAligned();                                                                                       // [0x5276820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetVisualRadius
	// float GetVisualRadius();                                                                                                 // [0x52767f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetDepthVisualizationTexture
	// class UTexture* GetDepthVisualizationTexture();                                                                          // [0x52768c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetDepthCaptureHeight
	// float GetDepthCaptureHeight();                                                                                           // [0x52768a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetCosmeticBoxes
	// TArray<FBox> GetCosmeticBoxes();                                                                                         // [0x5276850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeAreaVisualizationComponent.GetAreaVisualizationTexture
	// class UTexture* GetAreaVisualizationTexture();                                                                           // [0x5276880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DynamicVolume.GroundVolumeBuilderLineMethodBase
/// Size: 0x0200 (512 bytes) (0x000030 - 0x000200) align 16 MaxSize: 0x0200
class UGroundVolumeBuilderLineMethodBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0030   (0x01D0)  MISSED
};

/// Class /Script/DynamicVolume.GroundVolumeBuilderLineMethodV1
/// Size: 0x0240 (576 bytes) (0x000200 - 0x000240) align 16 MaxSize: 0x0240
class UGroundVolumeBuilderLineMethodV1 : public UGroundVolumeBuilderLineMethodBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0200   (0x0040)  MISSED
};

/// Class /Script/DynamicVolume.GroundVolumeBuilder
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGroundVolumeBuilder : public UDynamicVolumeBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/DynamicVolume.GroundVolumeBuilderLineMethod
/// Size: 0x0110 (272 bytes) (0x000040 - 0x000110) align 8 MaxSize: 0x0110
class UGroundVolumeBuilderLineMethod : public UGroundVolumeBuilder
{ 
public:
	bool                                               bDilateHeights;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              WallPadding;                                                // 0x0044   (0x0004)  
	bool                                               bUseMaximumVolumeConstraint;                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	double                                             MaximumVolumeConstraint;                                    // 0x0050   (0x0008)  
	int32_t                                            RaycastMaxNodesPerWalk;                                     // 0x0058   (0x0004)  
	bool                                               bUseGoalPosition;                                           // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FVector                                            GoalPosition;                                               // 0x0060   (0x0018)  
	float                                              TravelDistanceConstraintScale;                              // 0x0078   (0x0004)  
	float                                              WalkHeight;                                                 // 0x007C   (0x0004)  
	bool                                               bExtendCeilingAboveWalkHeight;                              // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	double                                             ExtendCeilingAboveWalkHeight;                               // 0x0088   (0x0008)  
	bool                                               bExtendFloorBelowWalkHeight;                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	double                                             ExtendFloorBelowWalkHeight;                                 // 0x0098   (0x0008)  
	float                                              MaximumFallHeight;                                          // 0x00A0   (0x0004)  
	float                                              PopUpHeight;                                                // 0x00A4   (0x0004)  
	int32_t                                            MaximumPopUpEnergy;                                         // 0x00A8   (0x0004)  
	bool                                               bUseFallHeightStop;                                         // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              FallHeightStopFalloffSize;                                  // 0x00B0   (0x0004)  
	float                                              ZLayerHeightTolerance;                                      // 0x00B4   (0x0004)  
	float                                              RampAngleTolerance;                                         // 0x00B8   (0x0004)  
	float                                              FloorPushDownTolerance;                                     // 0x00BC   (0x0004)  
	float                                              WallPushOffTolerance;                                       // 0x00C0   (0x0004)  
	float                                              FallOffHeightReRaycastTolerance;                            // 0x00C4   (0x0004)  
	float                                              DownwardRampReRaycastHeightTolerance;                       // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      IgnoreObjectsWithTag;                                       // 0x00D0   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     RaycastCollisionChannel;                                    // 0x00E0   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     PreciseRaycastCollisionChannel;                             // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x00E2   (0x0006)  MISSED
	SDK_UNDEFINED(16,458) /* TArray<TEnumAsByte<ECollisionChannel>> */ __um(RaycastObjectFilterWithinChannel);     // 0x00E8   (0x0010)  
	class UClass*                                      ImplClass;                                                  // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x0100   (0x0008)  MISSED
	class UGroundVolumeBuilderLineMethodBase*          Impl;                                                       // 0x0108   (0x0008)  
};

/// Class /Script/DynamicVolume.GroundVolumeBuilderLineMethodV2
/// Size: 0x02B0 (688 bytes) (0x000200 - 0x0002B0) align 16 MaxSize: 0x02B0
class UGroundVolumeBuilderLineMethodV2 : public UGroundVolumeBuilderLineMethodBase
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0200   (0x00B0)  MISSED
};

/// Struct /Script/DynamicVolume.GroundVolumeExteriorLineSegment
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FGroundVolumeExteriorLineSegment
{ 
	char                                               Begin;                                                      // 0x0000   (0x0001)  
	char                                               End;                                                        // 0x0001   (0x0001)  
};

/// Struct /Script/DynamicVolume.GroundVolumeFragment
/// Size: 0x00E8 (232 bytes) (0x00000C - 0x0000E8) align 8 MaxSize: 0x00E8
struct FGroundVolumeFragment : FFastArraySerializerItem
{ 
	bool                                               bIsActive;                                                  // 0x000C   (0x0001)  
	EGroundVolumeFragmentStatus                        Status;                                                     // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FGroundVolumeExteriorLineSegment>           ExteriorSegments;                                           // 0x0010   (0x0010)  
	TArray<FVector>                                    ConvexHullPoints;                                           // 0x0020   (0x0010)  
	TArray<float>                                      ConvexHullCeilings;                                         // 0x0030   (0x0010)  
	TArray<float>                                      ConvexHullTravelDistances;                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FIntPoint                                          GridPos;                                                    // 0x0060   (0x0008)  
	float                                              TravelDistance;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBox                                               InsideBoundingBox;                                          // 0x0070   (0x0038)  
	FVector                                            Center;                                                     // 0x00A8   (0x0018)  
	FVector                                            Normal;                                                     // 0x00C0   (0x0018)  
	float                                              Ceiling;                                                    // 0x00D8   (0x0004)  
	float                                              Floor;                                                      // 0x00DC   (0x0004)  
	float                                              Area;                                                       // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/DynamicVolume.GroundVolumeFragmentArray
/// Size: 0x0170 (368 bytes) (0x000108 - 0x000170) align 8 MaxSize: 0x0170
struct FGroundVolumeFragmentArray : FFastArraySerializer
{ 
	TArray<FGroundVolumeFragment>                      Items;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0118   (0x0058)  MISSED
};

/// Class /Script/DynamicVolume.GroundVolumeComponent
/// Size: 0x0640 (1600 bytes) (0x000440 - 0x000640) align 16 MaxSize: 0x0640
class UGroundVolumeComponent : public UDynamicVolumeComponent
{ 
public:
	float                                              PlayerJumpOverlapMaxHeight;                                 // 0x0440   (0x0004)  
	bool                                               bEstimateJumpFromHeightUponEnterVolume;                     // 0x0444   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0445   (0x0003)  MISSED
	float                                              CeilingBelowObjectAngle;                                    // 0x0448   (0x0004)  
	float                                              CeilingBelowObjectIgnoreHeight;                             // 0x044C   (0x0004)  
	bool                                               bActivateFragmentsOnCreate;                                 // 0x0450   (0x0001)  
	bool                                               bUsePreciseHeights;                                         // 0x0451   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0452   (0x0006)  MISSED
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnGroundVolumeFragmentActivated);                    // 0x0458   (0x0010)  
	class UGroundVolumeBuilder*                        GroundVolumeBuilder;                                        // 0x0468   (0x0008)  
	int32_t                                            FinalCount;                                                 // 0x0470   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0474   (0x0004)  MISSED
	FGroundVolumeFragmentArray                         FragmentInfo;                                               // 0x0478   (0x0170)  
	unsigned char                                      UnknownData03_7[0x58];                                      // 0x05E8   (0x0058)  MISSED


	/// Functions
	// Function /Script/DynamicVolume.GroundVolumeComponent.SetFragmentActive
	// void SetFragmentActive(int32_t SparseFragmentIndex);                                                                     // [0x5278e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetTravelDistance
	// float GetTravelDistance(FVector& WorldPosition);                                                                         // [0x52793d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetHeightBounds
	// bool GetHeightBounds(FVector& WorldPosition, FFloatInterval& Heights);                                                   // [0x52794d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentsAtGridPos
	// TArray<int32_t> GetFragmentsAtGridPos(FIntPoint& GridPos);                                                               // [0x5279250] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentGridLocation
	// FVector GetFragmentGridLocation(FIntPoint GridPos);                                                                      // [0x5278340] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentCount
	// int32_t GetFragmentCount();                                                                                              // [0x52793b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentAtWorldPositionIfInside
	// bool GetFragmentAtWorldPositionIfInside(FVector& WorldPosition, float Height, bool FindInactiveFragments, FGroundVolumeFragment& OutFragment); // [0x52785b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentAtSparseIndex
	// bool GetFragmentAtSparseIndex(int32_t SparseFragmentIndex, FGroundVolumeFragment& OutFragment);                          // [0x5278f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetFragmentAtFragmentIndex
	// bool GetFragmentAtFragmentIndex(FIntPoint& GridPos, int32_t FragmentIndex, FGroundVolumeFragment& OutFragment);          // [0x5278a40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.GetDistanceToEdge
	// float GetDistanceToEdge(FVector& Location);                                                                              // [0x5279690] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/DynamicVolume.GroundVolumeComponent.DebugDrawText
	// void DebugDrawText();                                                                                                    // [0x39273b0] Final|Native|Public  
};

#pragma pack(pop)


static_assert(sizeof(UDynamicVolumeBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDynamicVolumeComponent) == 0x0440); // 1088 bytes (0x000330 - 0x000440)
static_assert(sizeof(UGroundVolumeAreaVisualizationComponent) == 0x03D0); // 976 bytes (0x000330 - 0x0003D0)
static_assert(sizeof(UGroundVolumeBuilderLineMethodBase) == 0x0200); // 512 bytes (0x000030 - 0x000200)
static_assert(sizeof(UGroundVolumeBuilderLineMethodV1) == 0x0240); // 576 bytes (0x000200 - 0x000240)
static_assert(sizeof(UGroundVolumeBuilder) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UGroundVolumeBuilderLineMethod) == 0x0110); // 272 bytes (0x000040 - 0x000110)
static_assert(sizeof(UGroundVolumeBuilderLineMethodV2) == 0x02B0); // 688 bytes (0x000200 - 0x0002B0)
static_assert(sizeof(FGroundVolumeExteriorLineSegment) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FGroundVolumeFragment) == 0x00E8); // 232 bytes (0x00000C - 0x0000E8)
static_assert(sizeof(FGroundVolumeFragmentArray) == 0x0170); // 368 bytes (0x000108 - 0x000170)
static_assert(sizeof(UGroundVolumeComponent) == 0x0640); // 1600 bytes (0x000440 - 0x000640)
static_assert(offsetof(UDynamicVolumeComponent, VolumeMaxExtentShape) == 0x03D8);
static_assert(offsetof(UDynamicVolumeComponent, ActorsThatBeganOverlapSinceLastTick) == 0x0420);
static_assert(offsetof(UDynamicVolumeComponent, ActorsThatEndedOverlapSinceLastTick) == 0x0430);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, HorizontalFadeOut) == 0x0330);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, VerticalFadeOut) == 0x0340);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, GroundVolumeComponentName) == 0x0348);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, DrawPriority) == 0x0364);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, GroundVolumeComponent) == 0x0370);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, DepthCapture) == 0x0378);
static_assert(offsetof(UGroundVolumeAreaVisualizationComponent, AreaTexture) == 0x0388);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, GoalPosition) == 0x0060);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, IgnoreObjectsWithTag) == 0x00D0);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, RaycastCollisionChannel) == 0x00E0);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, PreciseRaycastCollisionChannel) == 0x00E1);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, ImplClass) == 0x00F8);
static_assert(offsetof(UGroundVolumeBuilderLineMethod, Impl) == 0x0108);
static_assert(offsetof(FGroundVolumeFragment, Status) == 0x000D);
static_assert(offsetof(FGroundVolumeFragment, ExteriorSegments) == 0x0010);
static_assert(offsetof(FGroundVolumeFragment, ConvexHullPoints) == 0x0020);
static_assert(offsetof(FGroundVolumeFragment, ConvexHullCeilings) == 0x0030);
static_assert(offsetof(FGroundVolumeFragment, ConvexHullTravelDistances) == 0x0040);
static_assert(offsetof(FGroundVolumeFragment, GridPos) == 0x0060);
static_assert(offsetof(FGroundVolumeFragment, InsideBoundingBox) == 0x0070);
static_assert(offsetof(FGroundVolumeFragment, Center) == 0x00A8);
static_assert(offsetof(FGroundVolumeFragment, Normal) == 0x00C0);
static_assert(offsetof(FGroundVolumeFragmentArray, Items) == 0x0108);
static_assert(offsetof(UGroundVolumeComponent, GroundVolumeBuilder) == 0x0468);
static_assert(offsetof(UGroundVolumeComponent, FragmentInfo) == 0x0478);
