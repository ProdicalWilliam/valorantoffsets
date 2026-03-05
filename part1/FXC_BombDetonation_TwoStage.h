
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Audio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameModes
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C
/// Size: 0x06E0 (1760 bytes) (0x0005F8 - 0x0006E0) align 16 MaxSize: 0x06E0
class AFXC_BombDetonation_TwoStage_C : public AEffectContainer
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x05F8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0600   (0x0008)  
	class UComp_FXC_AudioBasic_C*                      ExplosionBlastSound;                                        // 0x0608   (0x0008)  
	class UStaticMeshComponent*                        Sphere;                                                     // 0x0610   (0x0008)  
	class UComp_FXC_AudioBasic_C*                      RadialExplosionSound;                                       // 0x0618   (0x0008)  
	class UParticleSystemComponent*                    ParticleSystem;                                             // 0x0620   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0628   (0x0008)  
	double                                             Explosion_Delay;                                            // 0x0630   (0x0008)  
	double                                             Windup;                                                     // 0x0638   (0x0008)  
	FTimerHandle                                       WindUp_Timer;                                               // 0x0640   (0x0008)  
	FTimerHandle                                       Blow_up_timer;                                              // 0x0648   (0x0008)  
	FTimerHandle                                       Dome_Timer;                                                 // 0x0650   (0x0008)  
	FVector                                            VFX_Scale;                                                  // 0x0658   (0x0018)  
	FVector                                            original_Character_Direction;                               // 0x0670   (0x0018)  
	class ABombDetonationActor_TwoStage_C*             Detonation_Actor;                                           // 0x0688   (0x0008)  
	FVector                                            Bomb_Location;                                              // 0x0690   (0x0018)  
	FTimerHandle                                       Return_timer_handle;                                        // 0x06A8   (0x0008)  
	FVector                                            Current_Sound_Location;                                     // 0x06B0   (0x0018)  
	FVector                                            OriginalCharacter_Location;                                 // 0x06C8   (0x0018)  


	/// Functions
	// Function /Game/FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.StartEffect
	// void StartEffect(class AActor* Target, class UObject* Context, float StartTime, bool FirstPerson);                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ExecuteUbergraph_FXC_BombDetonation_TwoStage
	// void ExecuteUbergraph_FXC_BombDetonation_TwoStage(int32_t EntryPoint);                                                   // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AFXC_BombDetonation_TwoStage_C) == 0x06E0); // 1760 bytes (0x0005F8 - 0x0006E0)
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, UberGraphFrame) == 0x0600);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, ExplosionBlastSound) == 0x0608);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Sphere) == 0x0610);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, RadialExplosionSound) == 0x0618);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, ParticleSystem) == 0x0620);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, DefaultSceneRoot) == 0x0628);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, WindUp_Timer) == 0x0640);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Blow_up_timer) == 0x0648);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Dome_Timer) == 0x0650);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, VFX_Scale) == 0x0658);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, original_Character_Direction) == 0x0670);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Detonation_Actor) == 0x0688);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Bomb_Location) == 0x0690);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Return_timer_handle) == 0x06A8);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, Current_Sound_Location) == 0x06B0);
static_assert(offsetof(AFXC_BombDetonation_TwoStage_C, OriginalCharacter_Location) == 0x06C8);
