
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMovieSceneGeometryCollectionParams
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FSoftObjectPath                                    GeometryCollectionCache;                                    // 0x0008   (0x0028)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x0030   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0034   (0x0004)  
	float                                              PlayRate;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0138 (312 bytes) (0x0000F8 - 0x000138) align 8 MaxSize: 0x0138
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCollectionParams                Params;                                                     // 0x00F8   (0x0040)  
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A0   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A8   (0x0010)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0044   (0x0004)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0068 (104 bytes) (0x000020 - 0x000068) align 8 MaxSize: 0x0068
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                 // 0x0020   (0x0048)  
};

#pragma pack(pop)


static_assert(sizeof(FMovieSceneGeometryCollectionParams) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x0138); // 312 bytes (0x0000F8 - 0x000138)
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x00B8); // 184 bytes (0x0000A0 - 0x0000B8)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplate) == 0x0068); // 104 bytes (0x000020 - 0x000068)
static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 0x0030);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 0x0034);
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x00F8);
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x00A8);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 0x0044);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 0x0020);
