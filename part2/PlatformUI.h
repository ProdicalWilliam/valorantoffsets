
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PlatformUI.LoadingIndicatorType
/// Size: 0x01 (1 bytes)
enum class LoadingIndicatorType : uint8_t
{
	LoadingIndicatorType__INDETERMINATE_LOADER                                       = 0,
	LoadingIndicatorType__PROGRESS_BAR                                               = 1
};

/// Enum /Script/PlatformUI.EPlatformUIHotFixAvailability
/// Size: 0x01 (1 bytes)
enum class EPlatformUIHotFixAvailability : uint8_t
{
	EPlatformUIHotFixAvailability__Unknown                                           = 0,
	EPlatformUIHotFixAvailability__UpdateRequired                                    = 1,
	EPlatformUIHotFixAvailability__Ready                                             = 2
};

/// Class /Script/PlatformUI.BinaryAsset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UBinaryAsset : public UObject
{ 
public:
	TArray<char>                                       Asset;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/PlatformUI.PlatformUI
/// Size: 0x0398 (920 bytes) (0x000318 - 0x000398) align 8 MaxSize: 0x0398
class UPlatformUI : public UUserWidget
{ 
public:
	FString                                            SdkInstanceId;                                              // 0x0318   (0x0010)  
	class UPlatformUIPrimaryDataAsset*                 PrimaryAsset;                                               // 0x0328   (0x0008)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0330   (0x0068)  MISSED
};

/// Class /Script/PlatformUI.PlatformUIFRE
/// Size: 0x0560 (1376 bytes) (0x000398 - 0x000560) align 8 MaxSize: 0x0560
class UPlatformUIFRE : public UPlatformUI
{ 
public:
	FLinearColor                                       AccentColor;                                                // 0x0398   (0x0010)  
	FLinearColor                                       AccentColor2;                                               // 0x03A8   (0x0010)  
	FLinearColor                                       CardOpenGradientStartColor;                                 // 0x03B8   (0x0010)  
	FLinearColor                                       CardOpenGradientEndColor;                                   // 0x03C8   (0x0010)  
	FLinearColor                                       LoadingFillGradientStartColor;                              // 0x03D8   (0x0010)  
	FLinearColor                                       LoadingFillGradientEndColor;                                // 0x03E8   (0x0010)  
	FLinearColor                                       LoadingTextColor;                                           // 0x03F8   (0x0010)  
	class UTexture*                                    BackgroundTexture;                                          // 0x0408   (0x0008)  
	class UXamlAsset*                                  GameLogoBig;                                                // 0x0410   (0x0008)  
	class UXamlAsset*                                  GameLogoSmall;                                              // 0x0418   (0x0008)  
	FString                                            ProductName;                                                // 0x0420   (0x0010)  
	float                                              AuthLoadingTextAnchorX;                                     // 0x0430   (0x0004)  
	float                                              AuthLoadingTextAnchorY;                                     // 0x0434   (0x0004)  
	float                                              AuthLoadingTextPositionX;                                   // 0x0438   (0x0004)  
	float                                              AuthLoadingTextPositionY;                                   // 0x043C   (0x0004)  
	float                                              AuthLoadingIndicatorAnchorX;                                // 0x0440   (0x0004)  
	float                                              AuthLoadingIndicatorAnchorY;                                // 0x0444   (0x0004)  
	float                                              AuthLoadingIndicatorPositionX;                              // 0x0448   (0x0004)  
	float                                              AuthLoadingIndicatorPositionY;                              // 0x044C   (0x0004)  
	LoadingIndicatorType                               AuthLoadingIndicatorType;                                   // 0x0450   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0451   (0x0003)  MISSED
	float                                              AuthLoadingWidth;                                           // 0x0454   (0x0004)  
	float                                              AuthLoadingIndicatorHeight;                                 // 0x0458   (0x0004)  
	bool                                               bDisplayGamepadDisconnectNotifications;                     // 0x045C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x103];                                     // 0x045D   (0x0103)  MISSED


	/// Functions
	// Function /Script/PlatformUI.PlatformUIFRE.SetHotfixAvailability
	// bool SetHotfixAvailability(EPlatformUIHotFixAvailability HotfixAvailability);                                            // [0x6f2d2d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PlatformUI.PlatformUIPrimaryDataAsset
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UPlatformUIPrimaryDataAsset : public UPrimaryDataAsset
{ 
public:
	TMap<FString, class UObject*>                      Assets;                                                     // 0x0038   (0x0050)  
};

/// Class /Script/PlatformUI.XamlAsset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UXamlAsset : public UObject
{ 
public:
	FString                                            String;                                                     // 0x0030   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UBinaryAsset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPlatformUI) == 0x0398); // 920 bytes (0x000318 - 0x000398)
static_assert(sizeof(UPlatformUIFRE) == 0x0560); // 1376 bytes (0x000398 - 0x000560)
static_assert(sizeof(UPlatformUIPrimaryDataAsset) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UXamlAsset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(offsetof(UBinaryAsset, Asset) == 0x0030);
static_assert(offsetof(UPlatformUI, SdkInstanceId) == 0x0318);
static_assert(offsetof(UPlatformUI, PrimaryAsset) == 0x0328);
static_assert(offsetof(UPlatformUIFRE, AccentColor) == 0x0398);
static_assert(offsetof(UPlatformUIFRE, AccentColor2) == 0x03A8);
static_assert(offsetof(UPlatformUIFRE, CardOpenGradientStartColor) == 0x03B8);
static_assert(offsetof(UPlatformUIFRE, CardOpenGradientEndColor) == 0x03C8);
static_assert(offsetof(UPlatformUIFRE, LoadingFillGradientStartColor) == 0x03D8);
static_assert(offsetof(UPlatformUIFRE, LoadingFillGradientEndColor) == 0x03E8);
static_assert(offsetof(UPlatformUIFRE, LoadingTextColor) == 0x03F8);
static_assert(offsetof(UPlatformUIFRE, BackgroundTexture) == 0x0408);
static_assert(offsetof(UPlatformUIFRE, GameLogoBig) == 0x0410);
static_assert(offsetof(UPlatformUIFRE, GameLogoSmall) == 0x0418);
static_assert(offsetof(UPlatformUIFRE, ProductName) == 0x0420);
static_assert(offsetof(UPlatformUIFRE, AuthLoadingIndicatorType) == 0x0450);
static_assert(offsetof(UPlatformUIPrimaryDataAsset, Assets) == 0x0038);
static_assert(offsetof(UXamlAsset, String) == 0x0030);
