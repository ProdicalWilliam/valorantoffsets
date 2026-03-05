
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Characters
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/Interactable/RespawningDestructible.RespawningDestructible_C
/// Size: 0x0558 (1368 bytes) (0x0004B0 - 0x000558) align 8 MaxSize: 0x0558
class ARespawningDestructible_C : public AGameObject
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  
	class UUsableComponent*                            Usable;                                                     // 0x04B8   (0x0008)  
	class UComp_NavLinkManager_C*                      NavLinkManager;                                             // 0x04C0   (0x0008)  
	class USimpleReplicationSleepComponent*            SimpleReplicationSleep;                                     // 0x04C8   (0x0008)  
	class UParticleSystem*                             DeathVFX;                                                   // 0x04D0   (0x0008)  
	SDK_UNDEFINED(16,5145) /* FMulticastInlineDelegate */ __um(ServerDeathEvent);                                  // 0x04D8   (0x0010)  
	bool                                               IsAlive;                                                    // 0x04E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04E9   (0x0007)  MISSED
	class UAkAudioEvent*                               Ak_Event_Destruction;                                       // 0x04F0   (0x0008)  
	class UChildDamageSectionComponent*                CurrentHealthSection;                                       // 0x04F8   (0x0008)  
	bool                                               ShouldBreakOnOverlap;                                       // 0x0500   (0x0001)  
	bool                                               CanBeCrushed;                                               // 0x0501   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0502   (0x0002)  MISSED
	FName                                              DoNotBreakTag;                                              // 0x0504   (0x000C)  
	SDK_UNDEFINED(16,5146) /* FMulticastInlineDelegate */ __um(OnDeath);                                           // 0x0510   (0x0010)  
	bool                                               bHasKnownGoodDamageSectionState;                            // 0x0520   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0521   (0x0007)  MISSED
	TWeakObjectPtr<class AAkAcousticPortal*>           AcousticPortal;                                             // 0x0528   (0x0008)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x0530   (0x0028)  MISSED


	/// Functions
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnCrushed
	// bool OnCrushed(class AActor* CrushingObject, float CrushDamage);                                                         // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.GetExplosionLocation
	// FTransform GetExplosionLocation();                                                                                       // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnLoaded_E0F8D2844B39C28D49548A8403768B9F
	// void OnLoaded_E0F8D2844B39C28D49548A8403768B9F(class UObject* Loaded);                                                   // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnLoaded_7390D6704B9D7501029B03934CFFB931
	// void OnLoaded_7390D6704B9D7501029B03934CFFB931(class UObject* Loaded);                                                   // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnLoaded_211FCF6149208D3F57F42CBDF64ED734
	// void OnLoaded_211FCF6149208D3F57F42CBDF64ED734(class UObject* Loaded);                                                   // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnAuthRoundBegin
	// void OnAuthRoundBegin();                                                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnDie
	// void OnDie(class AActor* DamageCauser);                                                                                  // [0x1a821d0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.RoundBeginBroadcast
	// void RoundBeginBroadcast();                                                                                              // [0x1a821d0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature
	// void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature(class UDamageResponse* Response); // [0x1a821d0] BlueprintEvent       
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.Event Respawn
	// void EventRespawn();                                                                                                     // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.BndEvt__RespawningDestructible_DamageHandler_K2Node_ComponentBoundEvent_0_OnDamageSectionDirtiedSignature__DelegateSignature
	// void BndEvt__RespawningDestructible_DamageHandler_K2Node_ComponentBoundEvent_0_OnDamageSectionDirtiedSignature__DelegateSignature(); // [0x1a821d0] BlueprintEvent       
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnAudioGraphGenerated
	// void OnAudioGraphGenerated();                                                                                            // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnGameStateSet
	// void OnGameStateSet(class UObject* TargetObject, class AGameStateBase* GameState);                                       // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.BndEvt__RespawningDestructible_Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature
	// void BndEvt__RespawningDestructible_Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature(class UInteractableUserComponent* User); // [0x1a821d0] BlueprintEvent       
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.ExecuteUbergraph_RespawningDestructible
	// void ExecuteUbergraph_RespawningDestructible(int32_t EntryPoint);                                                        // [0x1a821d0] Final|HasDefaults    
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.OnDeath__DelegateSignature
	// void OnDeath__DelegateSignature();                                                                                       // [0x1a821d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/RespawningDestructible.RespawningDestructible_C.ServerDeathEvent__DelegateSignature
	// void ServerDeathEvent__DelegateSignature();                                                                              // [0x1a821d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Interactable/Interface_CrushableByDoorOverrides.Interface_CrushableByDoorOverrides_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterface_CrushableByDoorOverrides_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Interactable/Interface_CrushableByDoorOverrides.Interface_CrushableByDoorOverrides_C.GetRadiusAgainstDoorCrushBox
	// double GetRadiusAgainstDoorCrushBox();                                                                                   // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C
/// Size: 0x05B8 (1464 bytes) (0x000558 - 0x0005B8) align 8 MaxSize: 0x05B8
class ARespawningWallPlate_C : public ARespawningDestructible_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0558   (0x0008)  
	class UComp_AITarget_C*                            Comp_AITarget2;                                             // 0x0560   (0x0008)  
	class UComp_AITarget_C*                            Comp_AITarget1;                                             // 0x0568   (0x0008)  
	class UChildActorComponent*                        ChildActor;                                                 // 0x0570   (0x0008)  
	class UBoxComponent*                               OverlapBoxAbilities;                                        // 0x0578   (0x0008)  
	class UAresAbilitySystemComponent*                 AresAbilitySystem;                                          // 0x0580   (0x0008)  
	class UMinimapVisionConesBlockerLineComponent*     MinimapVisionConesBlockerLine;                              // 0x0588   (0x0008)  
	class USceneComponent*                             ExplosionAnchor;                                            // 0x0590   (0x0008)  
	int32_t                                            HealthMaterialIndex;                                        // 0x0598   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x059C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    HealthDynamicMaterial;                                      // 0x05A0   (0x0008)  
	int32_t                                            HealthMaterialIndex2;                                       // 0x05A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x05AC   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    HealthDynamicMaterial2;                                     // 0x05B0   (0x0008)  


	/// Functions
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.DestroyAITargets
	// void DestroyAITargets();                                                                                                 // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.SpawnAITargets
	// void SpawnAITargets();                                                                                                   // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.OnCrushed
	// bool OnCrushed(class AActor* CrushingObject, float CrushDamage);                                                         // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.GetExplosionLocation
	// FTransform GetExplosionLocation();                                                                                       // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.Event Update Health Material
	// void EventUpdateHealthMaterial();                                                                                        // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.Event Respawn
	// void EventRespawn();                                                                                                     // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_1_OnDamageSectionDirtiedSignature__DelegateSignature
	// void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_1_OnDamageSectionDirtiedSignature__DelegateSignature();            // [0x1a821d0] BlueprintEvent       
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.OnDie
	// void OnDie(class AActor* DamageCauser);                                                                                  // [0x1a821d0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.RoundBeginBroadcast
	// void RoundBeginBroadcast();                                                                                              // [0x1a821d0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.OnPhaseChangeEvent
	// void OnPhaseChangeEvent(EAresGamePhase NewPhase);                                                                        // [0x1a821d0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Interactable/WallPlates/RespawningWallPlate.RespawningWallPlate_C.ExecuteUbergraph_RespawningWallPlate
	// void ExecuteUbergraph_RespawningWallPlate(int32_t EntryPoint);                                                           // [0x1a821d0] Final                
};

#pragma pack(pop)


static_assert(sizeof(ARespawningDestructible_C) == 0x0558); // 1368 bytes (0x0004B0 - 0x000558)
static_assert(sizeof(UInterface_CrushableByDoorOverrides_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ARespawningWallPlate_C) == 0x05B8); // 1464 bytes (0x000558 - 0x0005B8)
static_assert(offsetof(ARespawningDestructible_C, UberGraphFrame) == 0x04B0);
static_assert(offsetof(ARespawningDestructible_C, Usable) == 0x04B8);
static_assert(offsetof(ARespawningDestructible_C, NavLinkManager) == 0x04C0);
static_assert(offsetof(ARespawningDestructible_C, SimpleReplicationSleep) == 0x04C8);
static_assert(offsetof(ARespawningDestructible_C, DeathVFX) == 0x04D0);
static_assert(offsetof(ARespawningDestructible_C, Ak_Event_Destruction) == 0x04F0);
static_assert(offsetof(ARespawningDestructible_C, CurrentHealthSection) == 0x04F8);
static_assert(offsetof(ARespawningDestructible_C, DoNotBreakTag) == 0x0504);
static_assert(offsetof(ARespawningDestructible_C, AcousticPortal) == 0x0528);
static_assert(offsetof(ARespawningWallPlate_C, UberGraphFrame) == 0x0558);
static_assert(offsetof(ARespawningWallPlate_C, Comp_AITarget2) == 0x0560);
static_assert(offsetof(ARespawningWallPlate_C, Comp_AITarget1) == 0x0568);
static_assert(offsetof(ARespawningWallPlate_C, ChildActor) == 0x0570);
static_assert(offsetof(ARespawningWallPlate_C, OverlapBoxAbilities) == 0x0578);
static_assert(offsetof(ARespawningWallPlate_C, AresAbilitySystem) == 0x0580);
static_assert(offsetof(ARespawningWallPlate_C, MinimapVisionConesBlockerLine) == 0x0588);
static_assert(offsetof(ARespawningWallPlate_C, ExplosionAnchor) == 0x0590);
static_assert(offsetof(ARespawningWallPlate_C, HealthDynamicMaterial) == 0x05A0);
static_assert(offsetof(ARespawningWallPlate_C, HealthDynamicMaterial2) == 0x05B0);
