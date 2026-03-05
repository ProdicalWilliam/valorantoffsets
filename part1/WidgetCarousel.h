
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x05B0 (1456 bytes) (0x000008 - 0x0005B0) align 16 MaxSize: 0x05B0
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       InnerButtonStyle;                                           // 0x0010   (0x0400)  
	FSlateBrush                                        NavigationButtonLeftImage;                                  // 0x0410   (0x00D0)  
	FSlateBrush                                        NavigationButtonRightImage;                                 // 0x04E0   (0x00D0)  
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x0CE0 (3296 bytes) (0x000008 - 0x000CE0) align 16 MaxSize: 0x0CE0
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HighlightBrush;                                             // 0x0010   (0x00D0)  
	FButtonStyle                                       LeftButtonStyle;                                            // 0x00E0   (0x0400)  
	FButtonStyle                                       CenterButtonStyle;                                          // 0x04E0   (0x0400)  
	FButtonStyle                                       RightButtonStyle;                                           // 0x08E0   (0x0400)  
};

#pragma pack(pop)


static_assert(sizeof(FWidgetCarouselNavigationButtonStyle) == 0x05B0); // 1456 bytes (0x000008 - 0x0005B0)
static_assert(sizeof(FWidgetCarouselNavigationBarStyle) == 0x0CE0); // 3296 bytes (0x000008 - 0x000CE0)
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 0x0010);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 0x0410);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 0x04E0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 0x0010);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 0x00E0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 0x04E0);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 0x08E0);
