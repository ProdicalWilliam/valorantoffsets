
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

#pragma pack(push, 0x1)

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x01 (1 bytes)
enum class EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play                                                      = 0,
	EMediaPlateEventState__Open                                                      = 1,
	EMediaPlateEventState__Close                                                     = 2,
	EMediaPlateEventState__Pause                                                     = 3,
	EMediaPlateEventState__Reverse                                                   = 4,
	EMediaPlateEventState__Forward                                                   = 5,
	EMediaPlateEventState__Rewind                                                    = 6
};

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0470 (1136 bytes) (0x000460 - 0x000470) align 8 MaxSize: 0x0470
class AMediaPlate : public AActor
{ 
public:
	class UMediaPlateComponent*                        MediaPlateComponent;                                        // 0x0460   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0468   (0x0008)  
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMediaPlateAssetUserData : public UAssetUserData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x01A0 (416 bytes) (0x0000D8 - 0x0001A0) align 8 MaxSize: 0x01A0
class UMediaPlateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00D8   (0x0008)  MISSED
	bool                                               bPlayOnOpen;                                                // 0x00E0   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x00E1   (0x0001)  
	bool                                               bEnableAudio;                                               // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00E3   (0x0001)  MISSED
	float                                              StartTime;                                                  // 0x00E4   (0x0004)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x00E8   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x00F0   (0x0008)  
	TArray<class UStaticMeshComponent*>                Letterboxes;                                                // 0x00F8   (0x0010)  
	class UMediaPlaylist*                              MediaPlaylist;                                              // 0x0108   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x0110   (0x0004)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x0114   (0x0008)  
	bool                                               bIsMediaPlatePlaying;                                       // 0x011C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x011D   (0x0007)  MISSED
	bool                                               bPlayOnlyWhenVisible;                                       // 0x0124   (0x0001)  
	bool                                               bLoop;                                                      // 0x0125   (0x0001)  
	EMediaTextureVisibleMipsTiles                      VisibleMipsTilesCalculations;                               // 0x0126   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0127   (0x0001)  MISSED
	float                                              MipMapBias;                                                 // 0x0128   (0x0004)  
	bool                                               bIsAspectRatioAuto;                                         // 0x012C   (0x0001)  
	bool                                               bEnableMipMapUpscaling;                                     // 0x012D   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x012E   (0x0002)  MISSED
	int32_t                                            MipLevelToUpscale;                                          // 0x0130   (0x0004)  
	float                                              LetterboxAspectRatio;                                       // 0x0134   (0x0004)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FVector2D                                          MeshRange;                                                  // 0x0140   (0x0010)  
	TArray<class UMediaTexture*>                       MediaTextures;                                              // 0x0150   (0x0010)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0160   (0x0008)  
	unsigned char                                      UnknownData06_7[0x38];                                      // 0x0168   (0x0038)  MISSED


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0x79f8f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                                // [0x79f9060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                              // [0x79f9160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0x79f8ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0x79f8e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x79f9310] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                           // [0x79f9430] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                             // [0x79f94e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                            // [0x79f9490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                             // [0x79f9530] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                   // [0x79f8b50] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0x79f8b30] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                              // [0x79f9290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                                // [0x58c7cd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture(int32_t Index);                                                                     // [0x79f9550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x584ce30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                          // [0x79f9270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                         // [0x58d6d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                             // [0x56d2030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                            // [0x79f92b0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(AMediaPlate) == 0x0470); // 1136 bytes (0x000460 - 0x000470)
static_assert(sizeof(UMediaPlateAssetUserData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UMediaPlateComponent) == 0x01A0); // 416 bytes (0x0000D8 - 0x0001A0)
static_assert(offsetof(AMediaPlate, MediaPlateComponent) == 0x0460);
static_assert(offsetof(AMediaPlate, StaticMeshComponent) == 0x0468);
static_assert(offsetof(UMediaPlateComponent, SoundComponent) == 0x00E8);
static_assert(offsetof(UMediaPlateComponent, StaticMeshComponent) == 0x00F0);
static_assert(offsetof(UMediaPlateComponent, Letterboxes) == 0x00F8);
static_assert(offsetof(UMediaPlateComponent, MediaPlaylist) == 0x0108);
static_assert(offsetof(UMediaPlateComponent, CacheSettings) == 0x0114);
static_assert(offsetof(UMediaPlateComponent, VisibleMipsTilesCalculations) == 0x0126);
static_assert(offsetof(UMediaPlateComponent, MeshRange) == 0x0140);
static_assert(offsetof(UMediaPlateComponent, MediaTextures) == 0x0150);
static_assert(offsetof(UMediaPlateComponent, MediaPlayer) == 0x0160);
