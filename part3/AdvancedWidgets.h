
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0840 (2112 bytes) (0x0001B8 - 0x000840) align 16 MaxSize: 0x0840
class URadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x01B8   (0x0004)  
	SDK_UNDEFINED(20,5055) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x01BC   (0x0014)  
	bool                                               bUseCustomDefaultValue;                                     // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              CustomDefaultValue;                                         // 0x01D4   (0x0004)  
	FRuntimeFloatCurve                                 SliderRange;                                                // 0x01D8   (0x0088)  
	TArray<float>                                      ValueTags;                                                  // 0x0260   (0x0010)  
	float                                              SliderHandleStartAngle;                                     // 0x0270   (0x0004)  
	float                                              SliderHandleEndAngle;                                       // 0x0274   (0x0004)  
	float                                              AngularOffset;                                              // 0x0278   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x027C   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x0280   (0x0010)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0290   (0x0500)  
	FLinearColor                                       SliderBarColor;                                             // 0x0790   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x07A0   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x07B0   (0x0010)  
	FLinearColor                                       CenterBackgroundColor;                                      // 0x07C0   (0x0010)  
	bool                                               Locked;                                                     // 0x07D0   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x07D1   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x07D2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x07D3   (0x0001)  MISSED
	float                                              StepSize;                                                   // 0x07D4   (0x0004)  
	bool                                               IsFocusable;                                                // 0x07D8   (0x0001)  
	bool                                               UseVerticalDrag;                                            // 0x07D9   (0x0001)  
	bool                                               ShowSliderHandle;                                           // 0x07DA   (0x0001)  
	bool                                               ShowSliderHand;                                             // 0x07DB   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x07DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,5056) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x07E0   (0x0010)  
	SDK_UNDEFINED(16,5057) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x07F0   (0x0010)  
	SDK_UNDEFINED(16,5058) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0800   (0x0010)  
	SDK_UNDEFINED(16,5059) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0810   (0x0010)  
	SDK_UNDEFINED(16,5060) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0820   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0830   (0x0010)  MISSED


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0x822b300] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x822b8b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0x822a410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x822ab10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0x822b450] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x822a810] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0x822b1e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0x822b0c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x822a690] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x822a990] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0x822a310] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0x822a210] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x822ac50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0x822ae60] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0x822b740] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x822a510] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0x822afb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0x822bb30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0x822ba20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0x822ba70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(URadialSlider) == 0x0840); // 2112 bytes (0x0001B8 - 0x000840)
static_assert(offsetof(URadialSlider, SliderRange) == 0x01D8);
static_assert(offsetof(URadialSlider, ValueTags) == 0x0260);
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 0x0280);
static_assert(offsetof(URadialSlider, WidgetStyle) == 0x0290);
static_assert(offsetof(URadialSlider, SliderBarColor) == 0x0790);
static_assert(offsetof(URadialSlider, SliderProgressColor) == 0x07A0);
static_assert(offsetof(URadialSlider, SliderHandleColor) == 0x07B0);
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 0x07C0);
