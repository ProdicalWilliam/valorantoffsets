
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

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x01 (1 bytes)
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG                                                         = 0,
	EDesiredImageFormat__JPG                                                         = 1,
	EDesiredImageFormat__BMP                                                         = 2,
	EDesiredImageFormat__EXR                                                         = 3
};

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	// void ExportToDisk(class UTexture* Texture, FString Filename, FImageWriteOptions& OPTIONS);                               // [0x27f8310] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FImageWriteOptions
{ 
	EDesiredImageFormat                                Format;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(20,5144) /* FDelegateProperty */     __um(OnComplete);                                           // 0x0004   (0x0014)  
	int32_t                                            CompressionQuality;                                         // 0x0018   (0x0004)  
	bool                                               bOverwriteFile;                                             // 0x001C   (0x0001)  
	bool                                               bAsync;                                                     // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x42];                                      // 0x001E   (0x0042)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UImageWriteBlueprintLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FImageWriteOptions) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FImageWriteOptions, Format) == 0x0000);
