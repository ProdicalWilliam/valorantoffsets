
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x01 (1 bytes)
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FActorSequenceObjectReference
{ 
	EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              ActorId;                                                    // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            PathToComponent;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FActorSequenceObjectReferences
{ 
	TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FActorSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UActorSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0078   (0x0020)  
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0108 (264 bytes) (0x0000D8 - 0x000108) align 8 MaxSize: 0x0108
class UActorSequenceComponent : public UActorComponent
{ 
public:
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x00D8   (0x0020)  
	class UActorSequence*                              Sequence;                                                   // 0x00F8   (0x0008)  
	class UActorSequencePlayer*                        SequencePlayer;                                             // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/ActorSequence.ActorSequenceComponent.StopSequence
	// void StopSequence();                                                                                                     // [0x7a46bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PlaySequence
	// void PlaySequence();                                                                                                     // [0x7a46c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PauseSequence
	// void PauseSequence();                                                                                                    // [0x7a46c20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x04D0 (1232 bytes) (0x0004D0 - 0x0004D0) align 8 MaxSize: 0x04D0
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(FActorSequenceObjectReference) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActorSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UActorSequence) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UActorSequenceComponent) == 0x0108); // 264 bytes (0x0000D8 - 0x000108)
static_assert(sizeof(UActorSequencePlayer) == 0x04D0); // 1232 bytes (0x0004D0 - 0x0004D0)
static_assert(offsetof(FActorSequenceObjectReference, Type) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReference, ActorId) == 0x0004);
static_assert(offsetof(FActorSequenceObjectReference, PathToComponent) == 0x0018);
static_assert(offsetof(FActorSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(UActorSequence, MovieScene) == 0x0070);
static_assert(offsetof(UActorSequence, ObjectReferences) == 0x0078);
static_assert(offsetof(UActorSequenceComponent, PlaybackSettings) == 0x00D8);
static_assert(offsetof(UActorSequenceComponent, Sequence) == 0x00F8);
static_assert(offsetof(UActorSequenceComponent, SequencePlayer) == 0x0100);
