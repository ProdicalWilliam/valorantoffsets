
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FClothConstraintSetupNv
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x01A8 (424 bytes) (0x000030 - 0x0001A8) align 8 MaxSize: 0x01A8
class UClothConfigNv : public UClothConfigCommon
{ 
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x0034   (0x0010)  
	FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x0044   (0x0010)  
	FClothConstraintSetupNv                            BendConstraint;                                             // 0x0054   (0x0010)  
	FClothConstraintSetupNv                            ShearConstraint;                                            // 0x0064   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x0074   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0078   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x007C   (0x0004)  
	FVector                                            Damping;                                                    // 0x0080   (0x0018)  
	float                                              Friction;                                                   // 0x0098   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x009C   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            LinearDrag;                                                 // 0x00A8   (0x0018)  
	FVector                                            AngularDrag;                                                // 0x00C0   (0x0018)  
	FVector                                            LinearInertiaScale;                                         // 0x00D8   (0x0018)  
	FVector                                            AngularInertiaScale;                                        // 0x00F0   (0x0018)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x0108   (0x0018)  
	float                                              SolverFrequency;                                            // 0x0120   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x0124   (0x0004)  
	float                                              GravityScale;                                               // 0x0128   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FVector                                            GravityOverride;                                            // 0x0130   (0x0018)  
	bool                                               bUseGravityOverride;                                        // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x014C   (0x0004)  
	float                                              TetherLimit;                                                // 0x0150   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0154   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x0158   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x015C   (0x0004)  
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0160   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0164   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0174   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0184   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0194   (0x0010)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x01A4   (0x0004)  MISSED
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:


	/// Functions
	// Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                     // [0x3df0ac0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0128 (296 bytes) (0x0000E8 - 0x000128) align 8 MaxSize: 0x0128
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
	TArray<float>                                      MaxDistances;                                               // 0x00E8   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00F8   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x0108   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x0118   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FClothConstraintSetupNv) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UClothConfigNv) == 0x01A8); // 424 bytes (0x000030 - 0x0001A8)
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x0030);
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x0034);
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x0044);
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x0054);
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x0064);
static_assert(offsetof(UClothConfigNv, Damping) == 0x0080);
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x00A8);
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x00C0);
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x00D8);
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x00F0);
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x0108);
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x0130);
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x0160);
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x0164);
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x0174);
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x0184);
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x0194);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x00E8);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x00F8);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x0108);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x0118);
