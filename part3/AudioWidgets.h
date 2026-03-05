
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x01 (1 bytes)
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x04D0 (1232 bytes) (0x000008 - 0x0004D0) align 16 MaxSize: 0x04D0
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0280   (0x00D0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0350   (0x00D0)  
	FVector2D                                          MeterSize;                                                  // 0x0420   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x0430   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x0440   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x0444   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x0448   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0458   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0459   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x045C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0460   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0464   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0468   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x046C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0470   (0x0060)  
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0740 (1856 bytes) (0x0001B8 - 0x000740) align 16 MaxSize: 0x0740
class UAudioMeter : public UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x01B8   (0x0010)  
	SDK_UNDEFINED(20,5075) /* FDelegateProperty */     __um(MeterChannelInfoDelegate);                             // 0x01C8   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x01E0   (0x04D0)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x06B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x06B1   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x06B4   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x06C4   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x06D4   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x06E4   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x06F4   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x0704   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x0714   (0x0010)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x0724   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x824b920] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x824b320] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x824b4a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x824b7a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x824b620] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x824bda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x824baa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x824bc20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x1a821d0] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x824bed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x03E0 (992 bytes) (0x0001B8 - 0x0003E0) align 16 MaxSize: 0x03E0
class UAudioRadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x01B8   (0x0004)  
	SDK_UNDEFINED(20,5076) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x01BC   (0x0014)  
	TEnumAsByte<EAudioRadialSliderLayout>              WidgetLayout;                                               // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D1   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x01D4   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x01E4   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01F4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0204   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x0208   (0x0010)  
	FText                                              UnitsText;                                                  // 0x0218   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0230   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x0240   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x0241   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x0242   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x0243   (0x0001)  
	float                                              SliderThickness;                                            // 0x0244   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,5077) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0258   (0x0010)  
	unsigned char                                      UnknownData02_7[0x178];                                     // 0x0268   (0x0178)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x824e940] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x824e010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x824e140] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x824e250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x824e390] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0x824dcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x824e720] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x824e610] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x824ddf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x824df00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x824dbc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x824e510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x824e830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x824ea40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x824eb50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x03E0 (992 bytes) (0x0003E0 - 0x0003E0) align 16 MaxSize: 0x03E0
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x03E0 (992 bytes) (0x0003E0 - 0x0003E0) align 16 MaxSize: 0x03E0
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x0A20 (2592 bytes) (0x0001B8 - 0x000A20) align 16 MaxSize: 0x0A20
class UAudioSliderBase : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FText                                              UnitsText;                                                  // 0x01C0   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01D8   (0x0010)  
	SDK_UNDEFINED(20,5078) /* FDelegateProperty */     __um(TextLabelBackgroundColorDelegate);                     // 0x01E8   (0x0014)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01FC   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01FD   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01FE   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01FF   (0x0001)  
	SDK_UNDEFINED(20,5079) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0200   (0x0014)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x0214   (0x0010)  
	SDK_UNDEFINED(20,5080) /* FDelegateProperty */     __um(SliderBackgroundColorDelegate);                        // 0x0224   (0x0014)  
	FLinearColor                                       SliderBarColor;                                             // 0x0238   (0x0010)  
	SDK_UNDEFINED(20,5081) /* FDelegateProperty */     __um(SliderBarColorDelegate);                               // 0x0248   (0x0014)  
	FLinearColor                                       SliderThumbColor;                                           // 0x025C   (0x0010)  
	SDK_UNDEFINED(20,5082) /* FDelegateProperty */     __um(SliderThumbColorDelegate);                             // 0x026C   (0x0014)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0280   (0x0010)  
	SDK_UNDEFINED(20,5083) /* FDelegateProperty */     __um(WidgetBackgroundColorDelegate);                        // 0x0290   (0x0014)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02A5   (0x0003)  MISSED
	SDK_UNDEFINED(16,5084) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x768];                                     // 0x02B8   (0x0768)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x8252150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x82527b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x82528e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x82529f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x8252b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x8252260] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x8252370] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x8252480] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x8252590] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x82526a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x8252cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x8252dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0x8252cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0A30 (2608 bytes) (0x000A20 - 0x000A30) align 16 MaxSize: 0x0A30
class UAudioSlider : public UAudioSliderBase
{ 
public:
	TWeakObjectPtr<class UCurveFloat*>                 LinToOutputCurve;                                           // 0x0A20   (0x0008)  
	TWeakObjectPtr<class UCurveFloat*>                 OutputToLinCurve;                                           // 0x0A28   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0A30 (2608 bytes) (0x000A30 - 0x000A30) align 16 MaxSize: 0x0A30
class UAudioVolumeSlider : public UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0A30 (2608 bytes) (0x000A20 - 0x000A30) align 16 MaxSize: 0x0A30
class UAudioFrequencySlider : public UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x0A20   (0x0010)  
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00E0   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x0750 (1872 bytes) (0x000008 - 0x000750) align 16 MaxSize: 0x0750
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0510   (0x0100)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x0610   (0x00D0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x06E0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x06F8   (0x0010)  
	float                                              LabelPadding;                                               // 0x0708   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x070C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x0720   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x0734   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x0100)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0110   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0124   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0138   (0x0014)  
	float                                              LabelPadding;                                               // 0x014C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FSampledSequenceViewerStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        SequenceColor;                                              // 0x0008   (0x0014)  
	float                                              SequenceLineThickness;                                      // 0x001C   (0x0004)  
	FSlateColor                                        MajorGridLineColor;                                         // 0x0020   (0x0014)  
	FSlateColor                                        MinorGridLineColor;                                         // 0x0034   (0x0014)  
	FSlateColor                                        ZeroCrossingLineColor;                                      // 0x0048   (0x0014)  
	float                                              ZeroCrossingLineThickness;                                  // 0x005C   (0x0004)  
	float                                              SampleMarkersSize;                                          // 0x0060   (0x0004)  
	FSlateColor                                        SequenceBackgroundColor;                                    // 0x0064   (0x0014)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0080   (0x00D0)  
	float                                              DesiredWidth;                                               // 0x0150   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0154   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FPlayheadOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        PlayheadColor;                                              // 0x0008   (0x0014)  
	float                                              PlayheadWidth;                                              // 0x001C   (0x0004)  
	float                                              DesiredWidth;                                               // 0x0020   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0024   (0x0004)  
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0270 (624 bytes) (0x000008 - 0x000270) align 16 MaxSize: 0x0270
struct FFixedSampleSequenceRulerStyle : FSlateWidgetStyle
{ 
	float                                              HandleWidth;                                                // 0x0008   (0x0004)  
	FSlateColor                                        HandleColor;                                                // 0x000C   (0x0014)  
	FSlateBrush                                        HandleBrush;                                                // 0x0020   (0x00D0)  
	FSlateColor                                        TicksColor;                                                 // 0x00F0   (0x0014)  
	FSlateColor                                        TicksTextColor;                                             // 0x0104   (0x0014)  
	FSlateFontInfo                                     TicksTextFont;                                              // 0x0118   (0x0060)  
	float                                              TicksTextOffset;                                            // 0x0178   (0x0004)  
	FSlateColor                                        BackgroundColor;                                            // 0x017C   (0x0014)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0190   (0x00D0)  
	float                                              DesiredWidth;                                               // 0x0260   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0264   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FSampledSequenceValueGridOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        GridColor;                                                  // 0x0008   (0x0014)  
	float                                              GridThickness;                                              // 0x001C   (0x0004)  
	FSlateColor                                        LabelTextColor;                                             // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FSlateFontInfo                                     LabelTextFont;                                              // 0x0038   (0x0060)  
	float                                              DesiredWidth;                                               // 0x0098   (0x0004)  
	float                                              DesiredHeight;                                              // 0x009C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FMeterChannelInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAudioMeterStyle) == 0x04D0); // 1232 bytes (0x000008 - 0x0004D0)
static_assert(sizeof(UAudioMeter) == 0x0740); // 1856 bytes (0x0001B8 - 0x000740)
static_assert(sizeof(UAudioRadialSlider) == 0x03E0); // 992 bytes (0x0001B8 - 0x0003E0)
static_assert(sizeof(UAudioVolumeRadialSlider) == 0x03E0); // 992 bytes (0x0003E0 - 0x0003E0)
static_assert(sizeof(UAudioFrequencyRadialSlider) == 0x03E0); // 992 bytes (0x0003E0 - 0x0003E0)
static_assert(sizeof(UAudioSliderBase) == 0x0A20); // 2592 bytes (0x0001B8 - 0x000A20)
static_assert(sizeof(UAudioSlider) == 0x0A30); // 2608 bytes (0x000A20 - 0x000A30)
static_assert(sizeof(UAudioVolumeSlider) == 0x0A30); // 2608 bytes (0x000A30 - 0x000A30)
static_assert(sizeof(UAudioFrequencySlider) == 0x0A30); // 2608 bytes (0x000A20 - 0x000A30)
static_assert(sizeof(FAudioTextBoxStyle) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FAudioSliderStyle) == 0x0750); // 1872 bytes (0x000008 - 0x000750)
static_assert(sizeof(FAudioRadialSliderStyle) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(sizeof(FSampledSequenceViewerStyle) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(sizeof(FPlayheadOverlayStyle) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FFixedSampleSequenceRulerStyle) == 0x0270); // 624 bytes (0x000008 - 0x000270)
static_assert(sizeof(FSampledSequenceValueGridOverlayStyle) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 0x0010);
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 0x00E0);
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 0x01B0);
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 0x0280);
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 0x0350);
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 0x0420);
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 0x0430);
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 0x0448);
static_assert(offsetof(FAudioMeterStyle, Font) == 0x0470);
static_assert(offsetof(UAudioMeter, MeterChannelInfo) == 0x01B8);
static_assert(offsetof(UAudioMeter, WidgetStyle) == 0x01E0);
static_assert(offsetof(UAudioMeter, Orientation) == 0x06B0);
static_assert(offsetof(UAudioMeter, BackgroundColor) == 0x06B4);
static_assert(offsetof(UAudioMeter, MeterBackgroundColor) == 0x06C4);
static_assert(offsetof(UAudioMeter, MeterValueColor) == 0x06D4);
static_assert(offsetof(UAudioMeter, MeterPeakColor) == 0x06E4);
static_assert(offsetof(UAudioMeter, MeterClippingColor) == 0x06F4);
static_assert(offsetof(UAudioMeter, MeterScaleColor) == 0x0704);
static_assert(offsetof(UAudioMeter, MeterScaleLabelColor) == 0x0714);
static_assert(offsetof(UAudioRadialSlider, WidgetLayout) == 0x01D0);
static_assert(offsetof(UAudioRadialSlider, CenterBackgroundColor) == 0x01D4);
static_assert(offsetof(UAudioRadialSlider, SliderProgressColor) == 0x01E4);
static_assert(offsetof(UAudioRadialSlider, SliderBarColor) == 0x01F4);
static_assert(offsetof(UAudioRadialSlider, HandStartEndRatio) == 0x0208);
static_assert(offsetof(UAudioRadialSlider, UnitsText) == 0x0218);
static_assert(offsetof(UAudioRadialSlider, TextLabelBackgroundColor) == 0x0230);
static_assert(offsetof(UAudioRadialSlider, OutputRange) == 0x0248);
static_assert(offsetof(UAudioSliderBase, UnitsText) == 0x01C0);
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColor) == 0x01D8);
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColor) == 0x0214);
static_assert(offsetof(UAudioSliderBase, SliderBarColor) == 0x0238);
static_assert(offsetof(UAudioSliderBase, SliderThumbColor) == 0x025C);
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColor) == 0x0280);
static_assert(offsetof(UAudioSliderBase, Orientation) == 0x02A4);
static_assert(offsetof(UAudioSlider, LinToOutputCurve) == 0x0A20);
static_assert(offsetof(UAudioSlider, OutputToLinCurve) == 0x0A28);
static_assert(offsetof(UAudioFrequencySlider, OutputRange) == 0x0A20);
static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 0x0010);
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 0x00E0);
static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 0x0010);
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 0x0510);
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 0x0610);
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 0x06E0);
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 0x06F8);
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 0x070C);
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 0x0720);
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 0x0734);
static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 0x0010);
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 0x0110);
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 0x0124);
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 0x0138);
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceColor) == 0x0008);
static_assert(offsetof(FSampledSequenceViewerStyle, MajorGridLineColor) == 0x0020);
static_assert(offsetof(FSampledSequenceViewerStyle, MinorGridLineColor) == 0x0034);
static_assert(offsetof(FSampledSequenceViewerStyle, ZeroCrossingLineColor) == 0x0048);
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceBackgroundColor) == 0x0064);
static_assert(offsetof(FSampledSequenceViewerStyle, BackgroundBrush) == 0x0080);
static_assert(offsetof(FPlayheadOverlayStyle, PlayheadColor) == 0x0008);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleColor) == 0x000C);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleBrush) == 0x0020);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksColor) == 0x00F0);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextColor) == 0x0104);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextFont) == 0x0118);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundColor) == 0x017C);
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundBrush) == 0x0190);
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, GridColor) == 0x0008);
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextColor) == 0x0020);
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextFont) == 0x0038);
