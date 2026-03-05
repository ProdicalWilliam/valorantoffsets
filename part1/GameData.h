
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameObjects
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C
/// Size: 0x05D9 (1497 bytes) (0x0005D0 - 0x0005D9) align 8 MaxSize: 0x05D9
class UBombGameStateDataModel_C : public UShooterGameStateDataModel
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05D0   (0x0008)  
	TEnumAsByte<EAresBombStates>                       BombState;                                                  // 0x05D8   (0x0001)  


	/// Functions
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStart
	// void OnBombDefuseStart(class AShooterCharacter* Defuser);                                                                // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStop
	// void OnBombDefuseStop();                                                                                                 // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantStart
	// void OnBombPlantStart(class AShooterCharacter* Planter, TEnumAsByte<BombSiteEnum> PlantSite);                            // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantCancelled
	// void OnBombPlantCancelled(TEnumAsByte<BombSiteEnum> PlantSite);                                                          // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlanted
	// void OnBombPlanted(FVector PlantLocation, class AShooterCharacter* BombPlanter, TEnumAsByte<BombSiteEnum> PlantSite);    // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombCheckpointReached
	// void OnBombCheckpointReached(class AShooterCharacter* Defuser, int32_t CheckpointNumber, double DefuseProgress);         // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnOrbPickedUp
	// void OnOrbPickedUp(class AShooterCharacter* OrbGatherer, class ABaseCollectableOrb_C* CollectableOrb);                   // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnOrbSpawned
	// void OnOrbSpawned(class ABaseCollectableOrb_C* CollectableOrb);                                                          // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnOrbUseStarted
	// void OnOrbUseStarted(class AShooterCharacter* OrbGatherer, class ABaseCollectableOrb_C* CollectableOrb);                 // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnOrbUseCancelled
	// void OnOrbUseCancelled(class AShooterCharacter* OrbGatherer, class ABaseCollectableOrb_C* CollectableOrb);               // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnBombStateChanged
	// void OnBombStateChanged(TEnumAsByte<EAresBombStates> BombState);                                                         // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.InitializeModel
	// void InitializeModel(class AShooterGameState* InGameState);                                                              // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnOrbDespawned
	// void OnOrbDespawned(class ABaseCollectableOrb_C* CollectableOrb);                                                        // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnPlasmaArmorRegenPoolUpdated
	// void OnPlasmaArmorRegenPoolUpdated(class AShooterCharacter* OwningPlayer, double NewValue);                              // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.OnPlasmaArmorMaxRegenPoolUpdated
	// void OnPlasmaArmorMaxRegenPoolUpdated(class AShooterCharacter* OwningPlayer, double NewValue);                           // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameData/BombGameStateDataModel.BombGameStateDataModel_C.ExecuteUbergraph_BombGameStateDataModel
	// void ExecuteUbergraph_BombGameStateDataModel(int32_t EntryPoint);                                                        // [0x1a821d0] Final                
};

#pragma pack(pop)


static_assert(sizeof(UBombGameStateDataModel_C) == 0x05D9); // 1497 bytes (0x0005D0 - 0x0005D9)
static_assert(offsetof(UBombGameStateDataModel_C, UberGraphFrame) == 0x05D0);
static_assert(offsetof(UBombGameStateDataModel_C, BombState) == 0x05D8);
