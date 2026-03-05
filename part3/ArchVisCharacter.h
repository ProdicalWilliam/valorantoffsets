
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

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x08C0 (2240 bytes) (0x000858 - 0x0008C0) align 16 MaxSize: 0x08C0
class AArchVisCharacter : public ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x0858   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x0868   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x0878   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x0888   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x0898   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x08A8   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x08B8   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x08BC   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x1110 (4368 bytes) (0x001078 - 0x001110) align 16 MaxSize: 0x1110
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x1078   (0x0018)  
	FRotator                                           RotationalDeceleration;                                     // 0x1090   (0x0018)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x10A8   (0x0018)  
	float                                              MinPitch;                                                   // 0x10C0   (0x0004)  
	float                                              MaxPitch;                                                   // 0x10C4   (0x0004)  
	float                                              WalkingFriction;                                            // 0x10C8   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x10CC   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x10D0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x10D4   (0x003C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AArchVisCharacter) == 0x08C0); // 2240 bytes (0x000858 - 0x0008C0)
static_assert(sizeof(UArchVisCharMovementComponent) == 0x1110); // 4368 bytes (0x001078 - 0x001110)
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x0858);
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x0868);
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x0878);
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0888);
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x0898);
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x08A8);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x1078);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x1090);
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x10A8);
