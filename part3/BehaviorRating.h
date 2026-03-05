
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame

#pragma pack(push, 0x1)

/// Class /Game/BehaviorRating/BehaviorScoreTrackerBase.BehaviorScoreTrackerBase_C
/// Size: 0x04E0 (1248 bytes) (0x0004E0 - 0x0004E0) align 8 MaxSize: 0x04E0
class ABehaviorScoreTrackerBase_C : public ABehaviorScoreTracker
{ 
public:
};

/// Class /Game/BehaviorRating/AFKTracker.AFKTracker_C
/// Size: 0x04F0 (1264 bytes) (0x0004E0 - 0x0004F0) align 8 MaxSize: 0x04F0
class AAFKTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	int32_t                                            NumAFKRounds;                                               // 0x04E8   (0x0004)  
	int32_t                                            NumStayedInSpawnRounds;                                     // 0x04EC   (0x0004)  


	/// Functions
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.CalculateFactorForPlatform
	// double CalculateFactorForPlatform(FString& OverrideFactorName);                                                          // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.OnRoundEnd_Event
	// void OnRoundEnd_Event(int32_t RoundNumberEnding);                                                                        // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/AFKTracker.AFKTracker_C.ExecuteUbergraph_AFKTracker
	// void ExecuteUbergraph_AFKTracker(int32_t EntryPoint);                                                                    // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C
/// Size: 0x04F0 (1264 bytes) (0x0004E0 - 0x0004F0) align 8 MaxSize: 0x04F0
class AStayedInSpawnTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	int32_t                                            NumAFKRounds;                                               // 0x04E8   (0x0004)  
	int32_t                                            NumStayedInSpawnRounds;                                     // 0x04EC   (0x0004)  


	/// Functions
	// Function /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C.OnRoundEnd_Event
	// void OnRoundEnd_Event(int32_t RoundNumberEnding);                                                                        // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/StayedInSpawnTracker.StayedInSpawnTracker_C.ExecuteUbergraph_StayedInSpawnTracker
	// void ExecuteUbergraph_StayedInSpawnTracker(int32_t EntryPoint);                                                          // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/BehaviorRating/SelfDamageTracker.SelfDamageTracker_C
/// Size: 0x04F8 (1272 bytes) (0x0004E0 - 0x0004F8) align 8 MaxSize: 0x04F8
class ASelfDamageTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	double                                             TotalDamageToSelf;                                          // 0x04E8   (0x0008)  
	double                                             TotalDamageToEnemies;                                       // 0x04F0   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/SelfDamageTracker.SelfDamageTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/SelfDamageTracker.SelfDamageTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/SelfDamageTracker.SelfDamageTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/SelfDamageTracker.SelfDamageTracker_C.ExecuteUbergraph_SelfDamageTracker
	// void ExecuteUbergraph_SelfDamageTracker(int32_t EntryPoint);                                                             // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C
/// Size: 0x04F8 (1272 bytes) (0x0004E0 - 0x0004F8) align 8 MaxSize: 0x04F8
class AFriendlyFireIncomingTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	double                                             TotalDamageFromAllies;                                      // 0x04E8   (0x0008)  
	double                                             DamageThreshold;                                            // 0x04F0   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.ExecuteUbergraph_FriendlyFireIncomingTracker
	// void ExecuteUbergraph_FriendlyFireIncomingTracker(int32_t EntryPoint);                                                   // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C
/// Size: 0x04F0 (1264 bytes) (0x0004E0 - 0x0004F0) align 8 MaxSize: 0x04F0
class ADamageParticipationOutgoing_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	double                                             TotalDamageToEnemies;                                       // 0x04E8   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringParticipantInteractions
	// void BuildDebugStringParticipantInteractions(FCharacterCombatReport Report, int32_t Index, FString& CombatReportsDebugString); // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringTotalCombatReports
	// void BuildDebugStringTotalCombatReports(TArray<FCharacterCombatReport>& Reports, int32_t Round, FString& CombatReportsDebugString); // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringTotalDamage
	// void BuildDebugStringTotalDamage(FString& DamageDebugString);                                                            // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringRoundNum
	// void BuildDebugStringRoundNum(FString& RoundNumDebugString);                                                             // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/DamageParticipationOutgoing.DamageParticipationOutgoing_C.ExecuteUbergraph_DamageParticipationOutgoing
	// void ExecuteUbergraph_DamageParticipationOutgoing(int32_t EntryPoint);                                                   // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/CollisionTracker.CollisionTracker_C
/// Size: 0x04F8 (1272 bytes) (0x0004E0 - 0x0004F8) align 8 MaxSize: 0x04F8
class ACollisionTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	class AShooterCharacter*                           ShooterCharacter;                                           // 0x04E8   (0x0008)  
	double                                             NumTimesBlocked;                                            // 0x04F0   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.UpdateShooterCharacter
	// void UpdateShooterCharacter();                                                                                           // [0x1a821d0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.HandleMoveBlocked
	// void HandleMoveBlocked(FHitResult BlockingHit);                                                                          // [0x1a821d0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.SetShooterCharacter
	// void SetShooterCharacter(class AShooterCharacter* NewShooterCharacter);                                                  // [0x1a821d0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.OnCharacterChanged
	// void OnCharacterChanged(class AShooterCharacter* NewValue);                                                              // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/CollisionTracker.CollisionTracker_C.ExecuteUbergraph_CollisionTracker
	// void ExecuteUbergraph_CollisionTracker(int32_t EntryPoint);                                                              // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C
/// Size: 0x0540 (1344 bytes) (0x0004E0 - 0x000540) align 8 MaxSize: 0x0540
class AMouseMovementTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	FRotator                                           PrevRotator;                                                // 0x04E8   (0x0018)  
	TArray<double>                                     PitchDeltas;                                                // 0x0500   (0x0010)  
	TArray<double>                                     YawDeltas;                                                  // 0x0510   (0x0010)  
	int32_t                                            CheckCount;                                                 // 0x0520   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0524   (0x0004)  MISSED
	double                                             PitchTotal;                                                 // 0x0528   (0x0008)  
	double                                             YawTotal;                                                   // 0x0530   (0x0008)  
	FTimerHandle                                       CheckCameraPositionTimerHandle;                             // 0x0538   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.CalculateSD
	// void CalculateSD(TArray<double>& Values, double Total, int32_t N, double& StandardDeviation);                            // [0x1a821d0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.CheckCameraPosition
	// void CheckCameraPosition();                                                                                              // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/MouseMovementTracker.MouseMovementTracker_C.ExecuteUbergraph_MouseMovementTracker
	// void ExecuteUbergraph_MouseMovementTracker(int32_t EntryPoint);                                                          // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/BehaviorRating/FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C
/// Size: 0x04F8 (1272 bytes) (0x0004E0 - 0x0004F8) align 8 MaxSize: 0x04F8
class AFriendlyFireOutgoingTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04E0   (0x0008)  
	double                                             TotalDamageToAllies;                                        // 0x04E8   (0x0008)  
	double                                             TotalDamageToEnemies;                                       // 0x04F0   (0x0008)  


	/// Functions
	// Function /Game/BehaviorRating/FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.BeginTracking
	// void BeginTracking();                                                                                                    // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.EndTracking
	// void EndTracking();                                                                                                      // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/BehaviorRating/FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.ExecuteUbergraph_FriendlyFireOutgoingTracker
	// void ExecuteUbergraph_FriendlyFireOutgoingTracker(int32_t EntryPoint);                                                   // [0x1a821d0] Final                
};

/// Class /Game/BehaviorRating/CommsTracker.CommsTracker_C
/// Size: 0x04E0 (1248 bytes) (0x0004E0 - 0x0004E0) align 8 MaxSize: 0x04E0
class ACommsTracker_C : public ABehaviorScoreTrackerBase_C
{ 
public:


	/// Functions
	// Function /Game/BehaviorRating/CommsTracker.CommsTracker_C.CalculateFactor
	// double CalculateFactor(EMatchCompletionState CompletionState, FString& OverrideFactorName);                              // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(ABehaviorScoreTrackerBase_C) == 0x04E0); // 1248 bytes (0x0004E0 - 0x0004E0)
static_assert(sizeof(AAFKTracker_C) == 0x04F0); // 1264 bytes (0x0004E0 - 0x0004F0)
static_assert(sizeof(AStayedInSpawnTracker_C) == 0x04F0); // 1264 bytes (0x0004E0 - 0x0004F0)
static_assert(sizeof(ASelfDamageTracker_C) == 0x04F8); // 1272 bytes (0x0004E0 - 0x0004F8)
static_assert(sizeof(AFriendlyFireIncomingTracker_C) == 0x04F8); // 1272 bytes (0x0004E0 - 0x0004F8)
static_assert(sizeof(ADamageParticipationOutgoing_C) == 0x04F0); // 1264 bytes (0x0004E0 - 0x0004F0)
static_assert(sizeof(ACollisionTracker_C) == 0x04F8); // 1272 bytes (0x0004E0 - 0x0004F8)
static_assert(sizeof(AMouseMovementTracker_C) == 0x0540); // 1344 bytes (0x0004E0 - 0x000540)
static_assert(sizeof(AFriendlyFireOutgoingTracker_C) == 0x04F8); // 1272 bytes (0x0004E0 - 0x0004F8)
static_assert(sizeof(ACommsTracker_C) == 0x04E0); // 1248 bytes (0x0004E0 - 0x0004E0)
static_assert(offsetof(AAFKTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(AStayedInSpawnTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(ASelfDamageTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(AFriendlyFireIncomingTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(ADamageParticipationOutgoing_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(ACollisionTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(ACollisionTracker_C, ShooterCharacter) == 0x04E8);
static_assert(offsetof(AMouseMovementTracker_C, UberGraphFrame) == 0x04E0);
static_assert(offsetof(AMouseMovementTracker_C, PrevRotator) == 0x04E8);
static_assert(offsetof(AMouseMovementTracker_C, PitchDeltas) == 0x0500);
static_assert(offsetof(AMouseMovementTracker_C, YawDeltas) == 0x0510);
static_assert(offsetof(AMouseMovementTracker_C, CheckCameraPositionTimerHandle) == 0x0538);
static_assert(offsetof(AFriendlyFireOutgoingTracker_C, UberGraphFrame) == 0x04E0);
