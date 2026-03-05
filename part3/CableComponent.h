
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

/// Class /Script/CableComponent.CableActor
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0460   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x07A0 (1952 bytes) (0x0006D0 - 0x0007A0) align 16 MaxSize: 0x07A0
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x06D0   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x06D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x06D2   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x06D8   (0x0030)  
	FName                                              AttachEndToSocketName;                                      // 0x0708   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0714   (0x0004)  MISSED
	FVector                                            EndLocation;                                                // 0x0718   (0x0018)  
	float                                              CableLength;                                                // 0x0730   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x0734   (0x0004)  
	float                                              SubstepTime;                                                // 0x0738   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x073C   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0740   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0741   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x0742   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x0743   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x0744   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0745   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x0748   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x074C   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x0750   (0x0018)  
	float                                              CableGravityScale;                                          // 0x0768   (0x0004)  
	float                                              CableWidth;                                                 // 0x076C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0770   (0x0004)  
	float                                              TileMaterial;                                               // 0x0774   (0x0004)  
	unsigned char                                      UnknownData04_7[0x28];                                      // 0x0778   (0x0028)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x7a52000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x7a51d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x7a51ad0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x7a51c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x7a51d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x0468); // 1128 bytes (0x000460 - 0x000468)
static_assert(sizeof(UCableComponent) == 0x07A0); // 1952 bytes (0x0006D0 - 0x0007A0)
static_assert(offsetof(ACableActor, CableComponent) == 0x0460);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x06D8);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x0708);
static_assert(offsetof(UCableComponent, EndLocation) == 0x0718);
static_assert(offsetof(UCableComponent, CableForce) == 0x0750);
