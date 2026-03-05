
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x03A0 (928 bytes) (0x000330 - 0x0003A0) align 16 MaxSize: 0x03A0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,5193) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0330   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0340   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0341   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0342   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0343   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0348   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0358   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0368   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0380   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0388   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x1a821d0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x3b18ba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x3b18c90] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0238 (568 bytes) (0x000030 - 0x000238) align 8 MaxSize: 0x0238
class UMRMeshBodyHolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0038   (0x0008)  
	FBodyInstance                                      BodyInstance;                                               // 0x0040   (0x0190)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x01D0   (0x0068)  MISSED
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0710 (1808 bytes) (0x000688 - 0x000710) align 16 MaxSize: 0x0710
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0688   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0690   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0698   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x06A0   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x06A1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x06A2   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x06A3   (0x0001)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x06A4   (0x0044)  MISSED
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                                // 0x06E8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x06F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x3b1ba80] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x3b1b680] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x3b1b790] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x3b1b8c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                             // [0x3b1bbb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x3b1bc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x3b1b650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x3b1b770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x3b1b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x3b1bbf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x3b1bb80] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x3b20670] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x3b206a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x27ec750] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x3b20630] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x3961d10] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x27ec4f0] RequiredAPI|Native|Public 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x3b20530] RequiredAPI|Native|Public 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x03A0); // 928 bytes (0x000330 - 0x0003A0)
static_assert(sizeof(UMRMeshBodyHolder) == 0x0238); // 568 bytes (0x000030 - 0x000238)
static_assert(sizeof(UMRMeshComponent) == 0x0710); // 1808 bytes (0x000688 - 0x000710)
static_assert(sizeof(UMeshReconstructorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x0343);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0348);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0358);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0368);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0380);
static_assert(offsetof(UMRMeshBodyHolder, BodySetup) == 0x0038);
static_assert(offsetof(UMRMeshBodyHolder, BodyInstance) == 0x0040);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0690);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0698);
static_assert(offsetof(UMRMeshComponent, BodyHolders) == 0x06E8);
