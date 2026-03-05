
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: MediaAssets
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x01 (1 bytes)
enum class ECommonNumericType : uint8_t
{
	ECommonNumericType__Number                                                       = 0,
	ECommonNumericType__Percentage                                                   = 1,
	ECommonNumericType__Seconds                                                      = 2,
	ECommonNumericType__Distance                                                     = 3
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x01 (1 bytes)
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly                                         = 0,
	ERichTextInlineIconDisplayMode__TextOnly                                         = 1,
	ERichTextInlineIconDisplayMode__IconAndText                                      = 2
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x01 (1 bytes)
enum class EInputActionState : uint8_t
{
	EInputActionState__Enabled                                                       = 0,
	EInputActionState__Disabled                                                      = 1,
	EInputActionState__Hidden                                                        = 2,
	EInputActionState__HiddenAndDisabled                                             = 3
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x01 (1 bytes)
enum class ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly                                              = 0,
	ECommonSwitcherTransition__Horizontal                                            = 1,
	ECommonSwitcherTransition__Vertical                                              = 2,
	ECommonSwitcherTransition__Zoom                                                  = 3
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x01 (1 bytes)
enum class ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear                                                         = 0,
	ETransitionCurve__QuadIn                                                         = 1,
	ETransitionCurve__QuadOut                                                        = 2,
	ETransitionCurve__QuadInOut                                                      = 3,
	ETransitionCurve__CubicIn                                                        = 4,
	ETransitionCurve__CubicOut                                                       = 5,
	ETransitionCurve__CubicInOut                                                     = 6
};

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonBoundActionButtonInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0790 (1936 bytes) (0x000770 - 0x000790) align 16 MaxSize: 0x0790
class UAnalogSlider : public USlider
{ 
public:
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnAnalogCapture);                                    // 0x0770   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0780   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonActionHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x04D0 (1232 bytes) (0x0001B8 - 0x0004D0) align 16 MaxSize: 0x04C8
class UCommonActionWidget : public UWidget
{ 
public:
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                               // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C8   (0x0008)  MISSED
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x01D0   (0x00D0)  
	FName                                              ProgressMaterialParam;                                      // 0x02A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FSlateBrush                                        IconRimBrush;                                               // 0x02B0   (0x00D0)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0380   (0x0010)  
	class UInputAction*                                EnhancedInputAction;                                        // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0398   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                    // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x120];                                     // 0x03A8   (0x0120)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x4eba200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x4eba420] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x4eb9ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                          // [0x4eba590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x4eb9fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x4eba820] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x4eba6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class UCommonUserWidget : public UUserWidget
{ 
public:
	bool                                               bDisplayInActionBar;                                        // 0x0318   (0x0001)  
	bool                                               bConsumePointerInput;                                       // 0x0319   (0x0001)  
	unsigned char                                      UnknownData00_7[0x26];                                      // 0x031A   (0x0026)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x4ef35c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0478 (1144 bytes) (0x000340 - 0x000478) align 8 MaxSize: 0x0478
class UCommonActivatableWidget : public UCommonUserWidget
{ 
public:
	bool                                               bIsBackHandler;                                             // 0x0340   (0x0001)  
	bool                                               bIsBackActionDisplayedInActionBar;                          // 0x0341   (0x0001)  
	bool                                               bAutoActivate;                                              // 0x0342   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x0343   (0x0001)  
	bool                                               bIsModal;                                                   // 0x0344   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x0345   (0x0001)  
	bool                                               bOverrideActionDomain;                                      // 0x0346   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0347   (0x0001)  MISSED
	class UInputMappingContext*                        InputMapping;                                               // 0x0348   (0x0008)  
	int32_t                                            InputMappingPriority;                                       // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0354   (0x0004)  MISSED
	TWeakObjectPtr<class UCommonInputActionDomain*>    ActionDomainOverride;                                       // 0x0358   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0360   (0x0028)  MISSED
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(BP_OnWidgetActivated);                               // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(BP_OnWidgetDeactivated);                             // 0x0398   (0x0010)  
	bool                                               bIsActive;                                                  // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x03A9   (0x0007)  MISSED
	SDK_UNDEFINED(16,428) /* TArray<TWeakObjectPtr<UCommonActivatableWidget*>> */ __um(VisibilityBoundWidgets);    // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData04_6[0xB0];                                      // 0x03C0   (0x00B0)  MISSED
	bool                                               bSetVisibilityOnActivated;                                  // 0x0470   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x0471   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x0472   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x0473   (0x0001)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x0474   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	// void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x4ebcb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                      // [0x4ebcdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	// class UWidget* GetDesiredFocusTarget();                                                                                  // [0x4ebc950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x4ebcd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                            // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredInputConfig
	// FUIInputConfig BP_GetDesiredInputConfig();                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	// void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);                                      // [0x4ebc990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x4ebcdc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0258 (600 bytes) (0x0001E8 - 0x000258) align 8 MaxSize: 0x0258
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x01E8   (0x0030)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0218   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0219   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x021A   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x021C   (0x0004)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x0220   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x4ebfc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	// bool IsTransitionPlaying();                                                                                              // [0x4ebfb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x4ebfc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x3936800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x4ebfd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x4ebfe50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0268 (616 bytes) (0x000258 - 0x000268) align 8 MaxSize: 0x0268
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0258   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 16 MaxSize: 0x0100
class UCommonBorderStyle : public UObject
{ 
public:
	FSlateBrush                                        Background;                                                 // 0x0030   (0x00D0)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x4ec1dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x03B0 (944 bytes) (0x000390 - 0x0003B0) align 16 MaxSize: 0x03B0
class UCommonBorder : public UBorder
{ 
public:
	class UClass*                                      Style;                                                      // 0x0390   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x0398   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0399   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x039C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x03AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x4ec2140] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        Sound;                                                      // 0x0008   (0x0020)  
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x07F0 (2032 bytes) (0x000030 - 0x0007F0) align 16 MaxSize: 0x07F0
class UCommonButtonStyle : public UObject
{ 
public:
	bool                                               bSingleMaterial;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0031   (0x000F)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0040   (0x00D0)  
	FSlateBrush                                        NormalBase;                                                 // 0x0110   (0x00D0)  
	FSlateBrush                                        NormalHovered;                                              // 0x01E0   (0x00D0)  
	FSlateBrush                                        NormalPressed;                                              // 0x02B0   (0x00D0)  
	FSlateBrush                                        SelectedBase;                                               // 0x0380   (0x00D0)  
	FSlateBrush                                        SelectedHovered;                                            // 0x0450   (0x00D0)  
	FSlateBrush                                        SelectedPressed;                                            // 0x0520   (0x00D0)  
	FSlateBrush                                        Disabled;                                                   // 0x05F0   (0x00D0)  
	FMargin                                            ButtonPadding;                                              // 0x06C0   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x06D0   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x06E0   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x06E4   (0x0004)  
	class UClass*                                      NormalTextStyle;                                            // 0x06E8   (0x0008)  
	class UClass*                                      NormalHoveredTextStyle;                                     // 0x06F0   (0x0008)  
	class UClass*                                      SelectedTextStyle;                                          // 0x06F8   (0x0008)  
	class UClass*                                      SelectedHoveredTextStyle;                                   // 0x0700   (0x0008)  
	class UClass*                                      DisabledTextStyle;                                          // 0x0708   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0710   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x0730   (0x0028)  
	FCommonButtonStyleOptionalSlateSound               LockedPressedSlateSound;                                    // 0x0758   (0x0028)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0780   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x07A0   (0x0028)  
	FCommonButtonStyleOptionalSlateSound               LockedHoveredSlateSound;                                    // 0x07C8   (0x0028)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                          // [0x4ec2f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x4ec3380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                   // [0x4ec2ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x4ec3570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x4ec3760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                            // [0x4ec2f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x4ec3950] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                     // [0x4ec2f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x4ec3b40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x4ec3d30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x4ec3f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                          // [0x4ec2ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x4ec3190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x4ec2f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x4ec3090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x06D0 (1744 bytes) (0x000658 - 0x0006D0) align 16 MaxSize: 0x06D0
class UCommonButtonInternalBase : public UButton
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0658   (0x0010)  MISSED
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnDoubleClicked);                                    // 0x0668   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0678   (0x0020)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0698   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x069C   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x06A0   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x06A1   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2E];                                      // 0x06A2   (0x002E)  MISSED
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x1670 (5744 bytes) (0x000340 - 0x001670) align 16 MaxSize: 0x1670
class UCommonButtonBase : public UCommonUserWidget
{ 
public:
	FWidgetEventField                                  ClickEvent;                                                 // 0x0340   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0341   (0x0003)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0344   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x0348   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UClass*                                      Style;                                                      // 0x0350   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x0358   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0359   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0360   (0x0020)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0380   (0x0020)  
	FSlateSound                                        SelectedPressedSlateSoundOverride;                          // 0x03A0   (0x0020)  
	FSlateSound                                        SelectedHoveredSlateSoundOverride;                          // 0x03C0   (0x0020)  
	FSlateSound                                        LockedPressedSlateSoundOverride;                            // 0x03E0   (0x0020)  
	FSlateSound                                        LockedHoveredSlateSoundOverride;                            // 0x0400   (0x0020)  
	bool                                               bApplyAlphaOnDisable : 1;                                   // 0x0420:0 (0x0001)  
	bool                                               bLocked : 1;                                                // 0x0420:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x0420:2 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus : 1;                        // 0x0420:3 (0x0001)  
	bool                                               bInteractableWhenSelected : 1;                              // 0x0420:4 (0x0001)  
	bool                                               bToggleable : 1;                                            // 0x0420:5 (0x0001)  
	bool                                               bTriggerClickedAfterSelection : 1;                          // 0x0420:6 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable : 1;                 // 0x0420:7 (0x0001)  
	bool                                               bHideInputActionWithKeyboard : 1;                           // 0x0421:0 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction : 1;                   // 0x0421:1 (0x0001)  
	bool                                               bRequiresHold : 1;                                          // 0x0421:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0422   (0x0006)  MISSED
	class UClass*                                      HoldData;                                                   // 0x0428   (0x0008)  
	bool                                               bSimulateHoverOnTouchInput;                                 // 0x0430   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0431   (0x0001)  MISSED
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0432   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0433   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x0434   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0435   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x0438   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x043C   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x0440   (0x0018)  
	class UInputAction*                                TriggeringEnhancedInputAction;                              // 0x0458   (0x0008)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x0460   (0x0018)  MISSED
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnSelectedChangedBase);                              // 0x0478   (0x0010)  
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                                // 0x0488   (0x0010)  
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                          // 0x0498   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnButtonBaseHovered);                                // 0x04A8   (0x0010)  
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnButtonBaseUnhovered);                              // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData08_6[0x30];                                      // 0x04C8   (0x0030)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x04F8   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x04F9   (0x0001)  
	unsigned char                                      UnknownData09_6[0x36];                                      // 0x04FA   (0x0036)  MISSED
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                     // 0x0530   (0x0008)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0x0538   (0x0008)  MISSED
	FButtonStyle                                       NormalStyle;                                                // 0x0540   (0x0400)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0940   (0x0400)  
	FButtonStyle                                       DisabledStyle;                                              // 0x0D40   (0x0400)  
	FButtonStyle                                       LockedStyle;                                                // 0x1140   (0x0400)  
	bool                                               bStopDoubleClickPropagation : 1;                            // 0x1540:0 (0x0001)  
	unsigned char                                      UnknownData11_5[0x117];                                     // 0x1541   (0x0117)  MISSED
	class UCommonActionWidget*                         InputActionWidget;                                          // 0x1658   (0x0008)  
	bool                                               bHideTriggeringInputActionWhenUnhovered;                    // 0x1660   (0x0001)  
	unsigned char                                      UnknownData12_7[0xF];                                       // 0x1661   (0x000F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.UpdateHoldData
	// void UpdateHoldData(ECommonInputType CurrentInputType);                                                                  // [0x4ec5370] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                       // [0x4ec5160] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x4ec6410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	// void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);                                                // [0x4ec6280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x4ec65f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x4ec79a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x4ec6bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x4ec7410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x4ec6dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	// void SetSelectedPressedSoundOverride(class USoundBase* Sound);                                                           // [0x4ec58a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x4ec4f20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	// void SetSelectedHoveredSoundOverride(class USoundBase* Sound);                                                           // [0x4ec5790] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x4ec7880] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* Sound);                                                                   // [0x4ec5ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x4ec67a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	// void SetLockedPressedSoundOverride(class USoundBase* Sound);                                                             // [0x4ec5680] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	// void SetLockedHoveredSoundOverride(class USoundBase* Sound);                                                             // [0x4ec5570] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x4ec7520] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x4ec7120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x4ec7750] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                      // [0x4ec6f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x4ec7df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x4ec7620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x4ec5f80] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x4ec5bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* Sound);                                                                   // [0x4ec59b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	// void SetHideInputAction(bool bInHideInputAction);                                                                        // [0x4ec7cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x4ec7ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	// void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);                                          // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1a821d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x4ec5470] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgressRollback
	// bool NativeOnHoldProgressRollback(float DeltaTime);                                                                      // [0x4ec4bc0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgress
	// bool NativeOnHoldProgress(float DeltaTime);                                                                              // [0x4ec4cd0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x4ec4de0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x4ec4b90] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x4ec7bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x4ec7c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HoldReset
	// void HoldReset();                                                                                                        // [0x4ec4b60] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x4ec5270] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0x4ec5210] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	// void HandleFocusLost();                                                                                                  // [0x4ec51e0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x4ec5180] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x4ec51b0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x4ec5240] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                    // [0x4ec6bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                             // [0x4ec5f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x4ec6da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                      // [0x4ec6f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	// bool GetLocked();                                                                                                        // [0x4ec6f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                   // [0x4ec5f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x4ec60a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	// class UInputAction* GetEnhancedInputAction();                                                                            // [0x4ec6080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                                // [0x4ec6930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                           // [0x4ec6970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x4ec69a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x4ec6ab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetConvertInputActionToHold
	// bool GetConvertInputActionToHold();                                                                                      // [0x4ec4ee0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.ForceSetSelectedState
	// void ForceSetSelectedState(bool bInSelected);                                                                            // [0x4ec72b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x4ec7ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                   // [0x4ec6ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	// void BP_OnLockedChanged(bool bIsLocked);                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	// void BP_OnLockDoubleClicked();                                                                                           // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	// void BP_OnLockClicked();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.WidgetLockedStateRegistration
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x03B0 (944 bytes) (0x000390 - 0x0003B0) align 16 MaxSize: 0x03B0
class UCommonCustomNavigation : public UBorder
{ 
public:
	SDK_UNDEFINED(20,435) /* FDelegateProperty */      __um(OnNavigationEvent);                                    // 0x0390   (0x0014)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x03A4   (0x000C)  MISSED
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x03E0 (992 bytes) (0x0003B0 - 0x0003E0) align 16 MaxSize: 0x03E0
class UCommonTextBlock : public UTextBlock
{ 
public:
	float                                              MobileFontSizeMultiplier;                                   // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03B4   (0x0004)  MISSED
	class UClass*                                      Style;                                                      // 0x03B8   (0x0008)  
	class UClass*                                      ScrollStyle;                                                // 0x03C0   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x03C8   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x03C9   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x03CA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x15];                                      // 0x03CB   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x4eec4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                      // [0x4eec370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x4eec180] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x4eebd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                      // [0x4eebf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	// void SetMargin(FMargin& InMargin);                                                                                       // [0x4eec050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	// void SetLineHeightPercentage(float InLineHeightPercentage);                                                              // [0x4eec280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x4eebea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	// float GetMobileFontSizeMultiplier();                                                                                     // [0x4eec030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	// FMargin GetMargin();                                                                                                     // [0x4eec150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0440 (1088 bytes) (0x0003E0 - 0x000440) align 16 MaxSize: 0x0440
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x03E0   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x4ed1d80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                                // [0x4ed1ef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x4ed1c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x4ed1c00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0420 (1056 bytes) (0x0003E0 - 0x000420) align 8 MaxSize: 0x0420
class UCommonGameViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x03E0   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0400 (1024 bytes) (0x0003B0 - 0x000400) align 16 MaxSize: 0x0400
class UCommonHardwareVisibilityBorder : public UCommonBorder
{ 
public:
	FGameplayTagQuery                                  VisibilityQuery;                                            // 0x03B0   (0x0048)  
	ESlateVisibility                                   VisibleType;                                                // 0x03F8   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x03F9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x03FA   (0x0006)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0D40 (3392 bytes) (0x000D38 - 0x000D40) align 16 MaxSize: 0x0D40
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0D38   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0450 (1104 bytes) (0x000330 - 0x000450) align 16 MaxSize: 0x0450
class UCommonLazyImage : public UImage
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0330   (0x00D0)  
	FName                                              MaterialTextureParamName;                                   // 0x0400   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x040C   (0x0004)  MISSED
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x0410   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0420   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x4ed6d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x4ed7280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x4ed70d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x4ed6ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x4ed6e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0320 (800 bytes) (0x0001B8 - 0x000320) align 16 MaxSize: 0x0320
class UCommonLazyWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x01C0   (0x00D0)  
	class UUserWidget*                                 Content;                                                    // 0x0290   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0298   (0x0038)  MISSED
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x02D0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x02E0   (0x0040)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TSoftObjectPtr<UClass*> SoftWidget);                                                                 // [0x4ed8c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                        // [0x4ed8c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                         // [0x3c8bfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0CB0 (3248 bytes) (0x000CB0 - 0x000CB0) align 16 MaxSize: 0x0CB0
class UCommonListView : public UListView
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetEntrySpacing
	// void SetEntrySpacing(float InEntrySpacing);                                                                              // [0x4eda310] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class ULoadGuardSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x4eda6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x4eda890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x4eda7a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0340 (832 bytes) (0x0001D0 - 0x000340) align 16 MaxSize: 0x0340
class UCommonLoadGuard : public UContentWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x01D0   (0x00D0)  
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                          // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02A1   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x02A4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
	FText                                              LoadingText;                                                // 0x02B8   (0x0018)  
	class UClass*                                      TextStyle;                                                  // 0x02D0   (0x0008)  
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x02D8   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x02E8   (0x0028)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0310   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x4edaf50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x4edae50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                            // [0x1a821d0] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x4edae10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x4edabc0] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FCommonNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x0480 (1152 bytes) (0x0003E0 - 0x000480) align 16 MaxSize: 0x0480
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
public:
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(OnInterpolationStartedEvent);                        // 0x03E0   (0x0010)  
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(OnInterpolationUpdatedEvent);                        // 0x03F0   (0x0010)  
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnOutroEvent);                                       // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnInterpolationEndedEvent);                          // 0x0410   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x0420   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x0424   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0425   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x0428   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x043C   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x0440   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x0444   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x0448   (0x0001)  
	bool                                               IsPercentage;                                               // 0x0449   (0x0001)  
	unsigned char                                      UnknownData01_7[0x36];                                      // 0x044A   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x4edec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x4edf030] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                        // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                         // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);        // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x4eded40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x4eded70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x4edf140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonPoolableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                                  // [0x40b7090] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x4ee0c10] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0910 (2320 bytes) (0x0008D0 - 0x000910) align 16 MaxSize: 0x0908
class UCommonRichTextBlock : public URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x08D0   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x08D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x08D2   (0x0006)  MISSED
	class UClass*                                      DefaultTextStyleOverrideClass;                              // 0x08D8   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x08E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x08E4   (0x0004)  MISSED
	class UClass*                                      ScrollStyle;                                                // 0x08E8   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x08F0   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x08F1   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x08F2   (0x0001)  
	unsigned char                                      UnknownData02_7[0x15];                                      // 0x08F3   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x4ee0f90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x16C0 (5824 bytes) (0x001670 - 0x0016C0) align 16 MaxSize: 0x16C0
class UCommonRotator : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x1670   (0x0008)  MISSED
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(OnRotated);                                          // 0x1678   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x1688   (0x0018)  MISSED
	class UCommonTextBlock*                            MyText;                                                     // 0x16A0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x16A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x4ee53e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x4ee5400] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x4ee5440] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x4ee5610] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x4ee5540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x4ee5420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UCommonButtonBase*                           TabButton;                                                  // 0x0008   (0x0008)  
	class UWidget*                                     ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x0448 (1096 bytes) (0x000340 - 0x000448) align 8 MaxSize: 0x0448
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnTabSelected);                                      // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnTabButtonCreation);                                // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnTabButtonRemoval);                                 // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnTabListRebuilt);                                   // 0x0370   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x0380   (0x0018)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x0398   (0x0018)  
	class UInputAction*                                NextTabEnhancedInputAction;                                 // 0x03B0   (0x0008)  
	class UInputAction*                                PreviousTabEnhancedInputAction;                             // 0x03B8   (0x0008)  
	bool                                               bAutoListenForInput;                                        // 0x03C0   (0x0001)  
	bool                                               bDeferRebuildingTabList;                                    // 0x03C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x03C2   (0x0002)  MISSED
	TWeakObjectPtr<class UCommonAnimatedSwitcher*>     LinkedSwitcher;                                             // 0x03C4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03CC   (0x0004)  MISSED
	class UCommonButtonGroupBase*                      TabButtonGroup;                                             // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03D8   (0x0008)  MISSED
	TMap<FName, FCommonRegisteredTabInfo>              RegisteredTabsByID;                                         // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0430   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x4ee7460] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x4ee7100] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x4ee72b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x4ee6e20] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                   // [0x3f80dc0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x4ee7760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x4ee7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x4ee7950] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget, int32_t TabIndex);       // [0x4ee7a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	// void OnTabListRebuilt__DelegateSignature();                                                                              // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                             // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                            // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                              // [0x4ee6910] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                             // [0x4ee6ad0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                           // [0x4ee6780] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x4ee6690] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x4ee65a0] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x4ee7610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x4ee7920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                          // [0x4ee6c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x4ee7720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                      // [0x4ee7d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x4ee7dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x4ee6f20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x01C0 (448 bytes) (0x000030 - 0x0001C0) align 16 MaxSize: 0x01B8
class UCommonTextStyle : public UObject
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0030   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0090   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x00A8   (0x0010)  
	FLinearColor                                       ShadowColor;                                                // 0x00B8   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x00E0   (0x00D0)  
	float                                              LineHeightPercentage;                                       // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x01B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x4eeb330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x4eeb610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x4eeb520] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x4eeb720] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x4eeb700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x4eeb910] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x4eeb820] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCommonTextScrollStyle : public UObject
{ 
public:
	float                                              Speed;                                                      // 0x0030   (0x0004)  
	float                                              StartDelay;                                                 // 0x0034   (0x0004)  
	float                                              EndDelay;                                                   // 0x0038   (0x0004)  
	float                                              FadeInDelay;                                                // 0x003C   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0CE0 (3296 bytes) (0x000CE0 - 0x000CE0) align 16 MaxSize: 0x0CE0
class UCommonTileView : public UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0D10 (3344 bytes) (0x000D10 - 0x000D10) align 16 MaxSize: 0x0D10
class UCommonTreeView : public UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UCommonUIEditorSettings : public UObject
{ 
public:
	TSoftObjectPtr<class UClass*>                      TemplateTextStyle;                                          // 0x0030   (0x0030)  
	TSoftObjectPtr<class UClass*>                      TemplateButtonStyle;                                        // 0x0060   (0x0030)  
	TSoftObjectPtr<class UClass*>                      TemplateBorderStyle;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0x4eee190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonUIRichTextData : public UObject
{ 
public:
	class UDataTable*                                  InlineIconSet;                                              // 0x0030   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x01F0 (496 bytes) (0x000030 - 0x0001F0) align 16 MaxSize: 0x01F0
class UCommonUISettings : public UObject
{ 
public:
	bool                                               bAutoLoadData;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TWeakObjectPtr<class UObject*>                     DefaultImageResourceObject;                                 // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0040   (0x0028)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          DefaultThrobberMaterial;                                    // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0070   (0x0028)  MISSED
	TSoftObjectPtr<class UClass*>                      DefaultRichTextDataClass;                                   // 0x0098   (0x0030)  
	TArray<FGameplayTag>                               PlatformTraits;                                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x00D8   (0x0028)  MISSED
	class UObject*                                     DefaultImageResourceObjectInstance;                         // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                            // 0x0108   (0x0008)  
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x0110   (0x00D0)  
	class UCommonUIRichTextData*                       RichTextDataInstance;                                       // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x4ef0b30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
	// FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);          // [0x4ef0920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonInputMetadata : public UObject
{ 
public:
	int32_t                                            NavBarPriority;                                             // 0x0030   (0x0004)  
	bool                                               bIsGenericInputAction;                                      // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonMappingContextMetadataInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UCommonMappingContextMetadata : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UCommonInputMetadata*                        EnhancedInputMetadata;                                      // 0x0040   (0x0008)  
	TMap<class UInputAction*, class UCommonInputMetadata*> PerActionEnhancedInputMetadata;                         // 0x0048   (0x0050)  
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0310 (784 bytes) (0x0001B8 - 0x000310) align 16 MaxSize: 0x0310
class UCommonVideoPlayer : public UWidget
{ 
public:
	class UMediaSource*                                Video;                                                      // 0x01B8   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x01C0   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x01C8   (0x0008)  
	class UMaterial*                                   VideoMaterial;                                              // 0x01D0   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x01D8   (0x0008)  
	FSlateBrush                                        VideoBrush;                                                 // 0x01E0   (0x00D0)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x02B0   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0208 (520 bytes) (0x0001E0 - 0x000208) align 8 MaxSize: 0x0208
class UCommonVisibilitySwitcher : public UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01E1   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x01E4   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x01E8   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x01E9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1E];                                      // 0x01EA   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x4ef6b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x4ef69c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x4ef68b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x4ef6b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x4ef6b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x4ef6790] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                            // [0x4ef6630] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                              // [0x4ef66e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0410 (1040 bytes) (0x0003B0 - 0x000410) align 16 MaxSize: 0x0410
class UUCommonVisibilityWidgetBase : public UCommonBorder
{ 
public:
	TMap<FName, bool>                                  VisibilityControls;                                         // 0x03B0   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x0400   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0401   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x0402   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x0403   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0404   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0405   (0x000B)  MISSED


	/// Functions
	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x4ef7ca0] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0228 (552 bytes) (0x000208 - 0x000228) align 8 MaxSize: 0x0228
class UCommonVisualAttachment : public USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x0208   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0218   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0218 (536 bytes) (0x0001D0 - 0x000218) align 8 MaxSize: 0x0218
class UCommonWidgetCarousel : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnCurrentPageIndexChanged);                          // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x01E8   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x39be790] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x39205a0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x4ef9790] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x4ef97d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x39be660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x4ef9960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x4ef9850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x4ef9870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0200 (512 bytes) (0x0001B8 - 0x000200) align 8 MaxSize: 0x0200
class UCommonWidgetCarouselNavBar : public UWidget
{ 
public:
	class UClass*                                      ButtonWidgetType;                                           // 0x01B8   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01D0   (0x0010)  MISSED
	class UCommonWidgetCarousel*                       LinkedCarousel;                                             // 0x01E0   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup;                                                // 0x01E8   (0x0008)  
	TArray<class UCommonButtonBase*>                   Buttons;                                                    // 0x01F0   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                     // [0x4efb2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                  // [0x4efb100] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                // [0x4efaf20] Final|Native|Protected 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonWidgetGroupBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(class UWidget* InWidget);                                                                              // [0x4efeb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x27ec720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                                 // [0x4efecf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
public:
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnSelectedButtonBaseChanged);                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnHoveredButtonBaseChanged);                         // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0068   (0x0018)  MISSED
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                                // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0090   (0x0018)  MISSED
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                          // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnSelectionCleared);                                 // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x00E0   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1F];                                      // 0x00F9   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x4efc750] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x4efc530] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x4efc630] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                         // [0x4efc3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                                 // [0x4efbf20] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                               // [0x3d04ea0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                     // [0x3b20530] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                         // [0x4efbe20] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                           // [0x3c94fc0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x4efc0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x4a52b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                        // [0x4efc0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                         // [0x4efc380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                                // [0x36d7f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                            // [0x4efc150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                          // [0x4efc280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                      // [0x4efc730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x02C0 (704 bytes) (0x000298 - 0x0002C0) align 8 MaxSize: 0x02C0
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0298   (0x0018)  MISSED
	class UClass*                                      ActionButtonClass;                                          // 0x02B0   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x02B8   (0x0001)  
	bool                                               bIgnoreDuplicateActions;                                    // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x02BA   (0x0006)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x4f01e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x1680 (5760 bytes) (0x001670 - 0x001680) align 16 MaxSize: 0x1680
class UCommonBoundActionButton : public UCommonButtonBase
{ 
public:
	class UCommonTextBlock*                            Text_ActionName;                                            // 0x1670   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x1678   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                              // [0x1a821d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCommonGenericInputActionDataTable : public UDataTable
{ 
public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCommonInputActionDataProcessor : public UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0180 (384 bytes) (0x000038 - 0x000180) align 8 MaxSize: 0x0180
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0038   (0x0148)  MISSED
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x000C (12 bytes) (0x00000C - 0x00000C) align 4 MaxSize: 0x000C
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x000C (12 bytes) (0x00000C - 0x00000C) align 4 MaxSize: 0x000C
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0020)  
	float                                              HoldTime;                                                   // 0x0020   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x0024   (0x0004)  
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              DefaultDisplayName;                                         // 0x0010   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0014   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x0018   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x001C   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UCommonUIInputSettings : public UObject
{ 
public:
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x0034   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0038   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0048   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0058   (0x0024)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x02D8 (728 bytes) (0x0001B8 - 0x0002D8) align 8 MaxSize: 0x02D8
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x01B8   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x01D0   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01D2   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x01D4   (0x0004)  
	TArray<class UCommonActivatableWidget*>            WidgetList;                                                 // 0x01D8   (0x0010)  
	class UCommonActivatableWidget*                    DisplayedWidget;                                            // 0x01E8   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x01F0   (0x0088)  
	unsigned char                                      UnknownData02_7[0x60];                                      // 0x0278   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	// void SetTransitionDuration(float Duration);                                                                              // [0x4f29f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                       // [0x4f29d60] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	// float GetTransitionDuration();                                                                                           // [0x4f29f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                       // [0x4f2a0c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x4f2a0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                      // [0x4f29e60] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x02E8 (744 bytes) (0x0002D8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
public:
	class UClass*                                      RootContentWidgetClass;                                     // 0x02D8   (0x0008)  
	class UCommonActivatableWidget*                    RootContentWidget;                                          // 0x02E0   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x02D8 (728 bytes) (0x0002D8 - 0x0002D8) align 8 MaxSize: 0x02D8
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Struct /Script/CommonUI.UIInputConfig
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FUIInputConfig
{ 
	bool                                               bIgnoreMoveInput;                                           // 0x0000   (0x0001)  
	bool                                               bIgnoreLookInput;                                           // 0x0001   (0x0001)  
	ECommonInputMode                                   InputMode;                                                  // 0x0002   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0003   (0x0001)  
	bool                                               bHideCursorDuringViewportCapture;                           // 0x0004   (0x0001)  
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0018)  
	EInputActionState                                  State;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0019   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRichTextIconData : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	TWeakObjectPtr<class UObject*>                     ResourceObject;                                             // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0028   (0x0028)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 16 MaxSize: 0x0100
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0020)  
	EInputActionState                                  OverrrideState;                                             // 0x0020   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x0024   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSlateBrush                                        OverrideBrush;                                              // 0x0030   (0x00D0)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0390 (912 bytes) (0x000008 - 0x000390) align 16 MaxSize: 0x0390
struct FCommonInputActionDataBase : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              HoldDisplayName;                                            // 0x0020   (0x0018)  
	int32_t                                            NavBarPriority;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0040   (0x0100)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x0140   (0x0100)  
	TMap<FName, FCommonInputTypeInfo>                  GamepadInputOverrides;                                      // 0x0240   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x0290   (0x0100)  
};

#pragma pack(pop)


static_assert(sizeof(UCommonBoundActionButtonInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAnalogSlider) == 0x0790); // 1936 bytes (0x000770 - 0x000790)
static_assert(sizeof(UCommonActionHandlerInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonActionWidget) == 0x04C8); // 1224 bytes (0x0001B8 - 0x0004C8)
static_assert(sizeof(UCommonUserWidget) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(UCommonActivatableWidget) == 0x0478); // 1144 bytes (0x000340 - 0x000478)
static_assert(sizeof(UCommonAnimatedSwitcher) == 0x0258); // 600 bytes (0x0001E8 - 0x000258)
static_assert(sizeof(UCommonActivatableWidgetSwitcher) == 0x0268); // 616 bytes (0x000258 - 0x000268)
static_assert(sizeof(UCommonBorderStyle) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UCommonBorder) == 0x03B0); // 944 bytes (0x000390 - 0x0003B0)
static_assert(sizeof(FCommonButtonStyleOptionalSlateSound) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCommonButtonStyle) == 0x07F0); // 2032 bytes (0x000030 - 0x0007F0)
static_assert(sizeof(UCommonButtonInternalBase) == 0x06D0); // 1744 bytes (0x000658 - 0x0006D0)
static_assert(sizeof(UCommonButtonBase) == 0x1670); // 5744 bytes (0x000340 - 0x001670)
static_assert(sizeof(UWidgetLockedStateRegistration) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonCustomNavigation) == 0x03B0); // 944 bytes (0x000390 - 0x0003B0)
static_assert(sizeof(UCommonTextBlock) == 0x03E0); // 992 bytes (0x0003B0 - 0x0003E0)
static_assert(sizeof(UCommonDateTimeTextBlock) == 0x0440); // 1088 bytes (0x0003E0 - 0x000440)
static_assert(sizeof(UCommonGameViewportClient) == 0x0420); // 1056 bytes (0x0003E0 - 0x000420)
static_assert(sizeof(UCommonHardwareVisibilityBorder) == 0x0400); // 1024 bytes (0x0003B0 - 0x000400)
static_assert(sizeof(UCommonHierarchicalScrollBox) == 0x0D40); // 3392 bytes (0x000D38 - 0x000D40)
static_assert(sizeof(UCommonLazyImage) == 0x0450); // 1104 bytes (0x000330 - 0x000450)
static_assert(sizeof(UCommonLazyWidget) == 0x0320); // 800 bytes (0x0001B8 - 0x000320)
static_assert(sizeof(UCommonListView) == 0x0CB0); // 3248 bytes (0x000CB0 - 0x000CB0)
static_assert(sizeof(ULoadGuardSlot) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UCommonLoadGuard) == 0x0340); // 832 bytes (0x0001D0 - 0x000340)
static_assert(sizeof(FCommonNumberFormattingOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UCommonNumericTextBlock) == 0x0480); // 1152 bytes (0x0003E0 - 0x000480)
static_assert(sizeof(UCommonPoolableWidgetInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonRichTextBlock) == 0x0908); // 2312 bytes (0x0008D0 - 0x000908)
static_assert(sizeof(UCommonRotator) == 0x16C0); // 5824 bytes (0x001670 - 0x0016C0)
static_assert(sizeof(FCommonRegisteredTabInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UCommonTabListWidgetBase) == 0x0448); // 1096 bytes (0x000340 - 0x000448)
static_assert(sizeof(UCommonTextStyle) == 0x01B8); // 440 bytes (0x000030 - 0x0001B8)
static_assert(sizeof(UCommonTextScrollStyle) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UCommonTileView) == 0x0CE0); // 3296 bytes (0x000CE0 - 0x000CE0)
static_assert(sizeof(UCommonTreeView) == 0x0D10); // 3344 bytes (0x000D10 - 0x000D10)
static_assert(sizeof(UCommonUIEditorSettings) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UCommonUILibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonUIRichTextData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonUISettings) == 0x01F0); // 496 bytes (0x000030 - 0x0001F0)
static_assert(sizeof(UCommonUISubsystemBase) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UCommonInputMetadata) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonMappingContextMetadataInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonMappingContextMetadata) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UCommonUIVisibilitySubsystem) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UCommonVideoPlayer) == 0x0310); // 784 bytes (0x0001B8 - 0x000310)
static_assert(sizeof(UCommonVisibilitySwitcher) == 0x0208); // 520 bytes (0x0001E0 - 0x000208)
static_assert(sizeof(UCommonVisibilitySwitcherSlot) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UUCommonVisibilityWidgetBase) == 0x0410); // 1040 bytes (0x0003B0 - 0x000410)
static_assert(sizeof(UCommonVisualAttachment) == 0x0228); // 552 bytes (0x000208 - 0x000228)
static_assert(sizeof(UCommonWidgetCarousel) == 0x0218); // 536 bytes (0x0001D0 - 0x000218)
static_assert(sizeof(UCommonWidgetCarouselNavBar) == 0x0200); // 512 bytes (0x0001B8 - 0x000200)
static_assert(sizeof(UCommonWidgetGroupBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonButtonGroupBase) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UCommonBoundActionBar) == 0x02C0); // 704 bytes (0x000298 - 0x0002C0)
static_assert(sizeof(UCommonBoundActionButton) == 0x1680); // 5760 bytes (0x001670 - 0x001680)
static_assert(sizeof(UCommonGenericInputActionDataTable) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(UCommonInputActionDataProcessor) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UCommonUIActionRouterBase) == 0x0180); // 384 bytes (0x000038 - 0x000180)
static_assert(sizeof(FUITag) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FUIActionTag) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FUIActionKeyMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUIInputAction) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCommonAnalogCursorSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UCommonUIInputSettings) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UCommonActivatableWidgetContainerBase) == 0x02D8); // 728 bytes (0x0001B8 - 0x0002D8)
static_assert(sizeof(UCommonActivatableWidgetStack) == 0x02E8); // 744 bytes (0x0002D8 - 0x0002E8)
static_assert(sizeof(UCommonActivatableWidgetQueue) == 0x02D8); // 728 bytes (0x0002D8 - 0x0002D8)
static_assert(sizeof(FUIInputConfig) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(FCommonInputActionHandlerData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRichTextIconData) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FCommonInputTypeInfo) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FCommonInputActionDataBase) == 0x0390); // 912 bytes (0x000008 - 0x000390)
static_assert(offsetof(UCommonActionWidget, ProgressMaterialBrush) == 0x01D0);
static_assert(offsetof(UCommonActionWidget, ProgressMaterialParam) == 0x02A0);
static_assert(offsetof(UCommonActionWidget, IconRimBrush) == 0x02B0);
static_assert(offsetof(UCommonActionWidget, InputActions) == 0x0380);
static_assert(offsetof(UCommonActionWidget, EnhancedInputAction) == 0x0390);
static_assert(offsetof(UCommonActionWidget, ProgressDynamicMaterial) == 0x03A0);
static_assert(offsetof(UCommonActivatableWidget, InputMapping) == 0x0348);
static_assert(offsetof(UCommonActivatableWidget, ActionDomainOverride) == 0x0358);
static_assert(offsetof(UCommonActivatableWidget, ActivatedVisibility) == 0x0471);
static_assert(offsetof(UCommonActivatableWidget, DeactivatedVisibility) == 0x0473);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionType) == 0x0218);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionCurveType) == 0x0219);
static_assert(offsetof(UCommonBorderStyle, Background) == 0x0030);
static_assert(offsetof(UCommonBorder, Style) == 0x0390);
static_assert(offsetof(UCommonBorder, MinimumPadding) == 0x039C);
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, Sound) == 0x0008);
static_assert(offsetof(UCommonButtonStyle, SingleMaterialBrush) == 0x0040);
static_assert(offsetof(UCommonButtonStyle, NormalBase) == 0x0110);
static_assert(offsetof(UCommonButtonStyle, NormalHovered) == 0x01E0);
static_assert(offsetof(UCommonButtonStyle, NormalPressed) == 0x02B0);
static_assert(offsetof(UCommonButtonStyle, SelectedBase) == 0x0380);
static_assert(offsetof(UCommonButtonStyle, SelectedHovered) == 0x0450);
static_assert(offsetof(UCommonButtonStyle, SelectedPressed) == 0x0520);
static_assert(offsetof(UCommonButtonStyle, Disabled) == 0x05F0);
static_assert(offsetof(UCommonButtonStyle, ButtonPadding) == 0x06C0);
static_assert(offsetof(UCommonButtonStyle, CustomPadding) == 0x06D0);
static_assert(offsetof(UCommonButtonStyle, NormalTextStyle) == 0x06E8);
static_assert(offsetof(UCommonButtonStyle, NormalHoveredTextStyle) == 0x06F0);
static_assert(offsetof(UCommonButtonStyle, SelectedTextStyle) == 0x06F8);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredTextStyle) == 0x0700);
static_assert(offsetof(UCommonButtonStyle, DisabledTextStyle) == 0x0708);
static_assert(offsetof(UCommonButtonStyle, PressedSlateSound) == 0x0710);
static_assert(offsetof(UCommonButtonStyle, SelectedPressedSlateSound) == 0x0730);
static_assert(offsetof(UCommonButtonStyle, LockedPressedSlateSound) == 0x0758);
static_assert(offsetof(UCommonButtonStyle, HoveredSlateSound) == 0x0780);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredSlateSound) == 0x07A0);
static_assert(offsetof(UCommonButtonStyle, LockedHoveredSlateSound) == 0x07C8);
static_assert(offsetof(UCommonButtonBase, ClickEvent) == 0x0340);
static_assert(offsetof(UCommonButtonBase, Style) == 0x0350);
static_assert(offsetof(UCommonButtonBase, PressedSlateSoundOverride) == 0x0360);
static_assert(offsetof(UCommonButtonBase, HoveredSlateSoundOverride) == 0x0380);
static_assert(offsetof(UCommonButtonBase, SelectedPressedSlateSoundOverride) == 0x03A0);
static_assert(offsetof(UCommonButtonBase, SelectedHoveredSlateSoundOverride) == 0x03C0);
static_assert(offsetof(UCommonButtonBase, LockedPressedSlateSoundOverride) == 0x03E0);
static_assert(offsetof(UCommonButtonBase, LockedHoveredSlateSoundOverride) == 0x0400);
static_assert(offsetof(UCommonButtonBase, HoldData) == 0x0428);
static_assert(offsetof(UCommonButtonBase, ClickMethod) == 0x0432);
static_assert(offsetof(UCommonButtonBase, TouchMethod) == 0x0433);
static_assert(offsetof(UCommonButtonBase, PressMethod) == 0x0434);
static_assert(offsetof(UCommonButtonBase, TriggeringInputAction) == 0x0440);
static_assert(offsetof(UCommonButtonBase, TriggeringEnhancedInputAction) == 0x0458);
static_assert(offsetof(UCommonButtonBase, InputModeOverride) == 0x04F9);
static_assert(offsetof(UCommonButtonBase, SingleMaterialStyleMID) == 0x0530);
static_assert(offsetof(UCommonButtonBase, NormalStyle) == 0x0540);
static_assert(offsetof(UCommonButtonBase, SelectedStyle) == 0x0940);
static_assert(offsetof(UCommonButtonBase, DisabledStyle) == 0x0D40);
static_assert(offsetof(UCommonButtonBase, LockedStyle) == 0x1140);
static_assert(offsetof(UCommonButtonBase, InputActionWidget) == 0x1658);
static_assert(offsetof(UCommonTextBlock, Style) == 0x03B8);
static_assert(offsetof(UCommonTextBlock, ScrollStyle) == 0x03C0);
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibilityQuery) == 0x03B0);
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibleType) == 0x03F8);
static_assert(offsetof(UCommonHardwareVisibilityBorder, HiddenType) == 0x03F9);
static_assert(offsetof(UCommonLazyImage, LoadingBackgroundBrush) == 0x0330);
static_assert(offsetof(UCommonLazyImage, MaterialTextureParamName) == 0x0400);
static_assert(offsetof(UCommonLazyWidget, LoadingBackgroundBrush) == 0x01C0);
static_assert(offsetof(UCommonLazyWidget, Content) == 0x0290);
static_assert(offsetof(ULoadGuardSlot, Padding) == 0x0040);
static_assert(offsetof(ULoadGuardSlot, HorizontalAlignment) == 0x0050);
static_assert(offsetof(ULoadGuardSlot, VerticalAlignment) == 0x0051);
static_assert(offsetof(UCommonLoadGuard, LoadingBackgroundBrush) == 0x01D0);
static_assert(offsetof(UCommonLoadGuard, ThrobberAlignment) == 0x02A0);
static_assert(offsetof(UCommonLoadGuard, ThrobberPadding) == 0x02A4);
static_assert(offsetof(UCommonLoadGuard, LoadingText) == 0x02B8);
static_assert(offsetof(UCommonLoadGuard, TextStyle) == 0x02D0);
static_assert(offsetof(UCommonLoadGuard, SpinnerMaterialPath) == 0x02E8);
static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0x0000);
static_assert(offsetof(UCommonNumericTextBlock, NumericType) == 0x0424);
static_assert(offsetof(UCommonNumericTextBlock, FormattingSpecification) == 0x0428);
static_assert(offsetof(UCommonRichTextBlock, InlineIconDisplayMode) == 0x08D0);
static_assert(offsetof(UCommonRichTextBlock, DefaultTextStyleOverrideClass) == 0x08D8);
static_assert(offsetof(UCommonRichTextBlock, ScrollStyle) == 0x08E8);
static_assert(offsetof(UCommonRotator, MyText) == 0x16A0);
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 0x0008);
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 0x0010);
static_assert(offsetof(UCommonTabListWidgetBase, NextTabInputActionData) == 0x0380);
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabInputActionData) == 0x0398);
static_assert(offsetof(UCommonTabListWidgetBase, NextTabEnhancedInputAction) == 0x03B0);
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabEnhancedInputAction) == 0x03B8);
static_assert(offsetof(UCommonTabListWidgetBase, LinkedSwitcher) == 0x03C4);
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonGroup) == 0x03D0);
static_assert(offsetof(UCommonTabListWidgetBase, RegisteredTabsByID) == 0x03E0);
static_assert(offsetof(UCommonTextStyle, Font) == 0x0030);
static_assert(offsetof(UCommonTextStyle, Color) == 0x0090);
static_assert(offsetof(UCommonTextStyle, ShadowOffset) == 0x00A8);
static_assert(offsetof(UCommonTextStyle, ShadowColor) == 0x00B8);
static_assert(offsetof(UCommonTextStyle, Margin) == 0x00C8);
static_assert(offsetof(UCommonTextStyle, StrikeBrush) == 0x00E0);
static_assert(offsetof(UCommonUIEditorSettings, TemplateTextStyle) == 0x0030);
static_assert(offsetof(UCommonUIEditorSettings, TemplateButtonStyle) == 0x0060);
static_assert(offsetof(UCommonUIEditorSettings, TemplateBorderStyle) == 0x0090);
static_assert(offsetof(UCommonUIRichTextData, InlineIconSet) == 0x0030);
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObject) == 0x0038);
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterial) == 0x0068);
static_assert(offsetof(UCommonUISettings, DefaultRichTextDataClass) == 0x0098);
static_assert(offsetof(UCommonUISettings, PlatformTraits) == 0x00C8);
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObjectInstance) == 0x0100);
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterialInstance) == 0x0108);
static_assert(offsetof(UCommonUISettings, DefaultThrobberBrush) == 0x0110);
static_assert(offsetof(UCommonUISettings, RichTextDataInstance) == 0x01E0);
static_assert(offsetof(UCommonMappingContextMetadata, EnhancedInputMetadata) == 0x0040);
static_assert(offsetof(UCommonMappingContextMetadata, PerActionEnhancedInputMetadata) == 0x0048);
static_assert(offsetof(UCommonVideoPlayer, Video) == 0x01B8);
static_assert(offsetof(UCommonVideoPlayer, MediaPlayer) == 0x01C0);
static_assert(offsetof(UCommonVideoPlayer, MediaTexture) == 0x01C8);
static_assert(offsetof(UCommonVideoPlayer, VideoMaterial) == 0x01D0);
static_assert(offsetof(UCommonVideoPlayer, SoundComponent) == 0x01D8);
static_assert(offsetof(UCommonVideoPlayer, VideoBrush) == 0x01E0);
static_assert(offsetof(UCommonVisibilitySwitcher, ShownVisibility) == 0x01E0);
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibilityControls) == 0x03B0);
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibleType) == 0x0403);
static_assert(offsetof(UUCommonVisibilityWidgetBase, HiddenType) == 0x0404);
static_assert(offsetof(UCommonVisualAttachment, ContentAnchor) == 0x0208);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonWidgetType) == 0x01B8);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonPadding) == 0x01C0);
static_assert(offsetof(UCommonWidgetCarouselNavBar, LinkedCarousel) == 0x01E0);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonGroup) == 0x01E8);
static_assert(offsetof(UCommonWidgetCarouselNavBar, Buttons) == 0x01F0);
static_assert(offsetof(UCommonBoundActionBar, ActionButtonClass) == 0x02B0);
static_assert(offsetof(UCommonBoundActionButton, Text_ActionName) == 0x1670);
static_assert(offsetof(FUIActionKeyMapping, Key) == 0x0000);
static_assert(offsetof(FUIInputAction, ActionTag) == 0x0000);
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 0x0010);
static_assert(offsetof(FUIInputAction, KeyMappings) == 0x0028);
static_assert(offsetof(UCommonUIInputSettings, InputActions) == 0x0038);
static_assert(offsetof(UCommonUIInputSettings, ActionOverrides) == 0x0048);
static_assert(offsetof(UCommonUIInputSettings, AnalogCursorSettings) == 0x0058);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionType) == 0x01D0);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionCurveType) == 0x01D1);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, WidgetList) == 0x01D8);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, DisplayedWidget) == 0x01E8);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool) == 0x01F0);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidgetClass) == 0x02D8);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidget) == 0x02E0);
static_assert(offsetof(FUIInputConfig, InputMode) == 0x0002);
static_assert(offsetof(FUIInputConfig, MouseCaptureMode) == 0x0003);
static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0x0000);
static_assert(offsetof(FCommonInputActionHandlerData, State) == 0x0018);
static_assert(offsetof(FRichTextIconData, DisplayName) == 0x0008);
static_assert(offsetof(FRichTextIconData, ResourceObject) == 0x0020);
static_assert(offsetof(FRichTextIconData, ImageSize) == 0x0050);
static_assert(offsetof(FCommonInputTypeInfo, Key) == 0x0000);
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 0x0020);
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 0x0030);
static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 0x0008);
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 0x0020);
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 0x0040);
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 0x0140);
static_assert(offsetof(FCommonInputActionDataBase, GamepadInputOverrides) == 0x0240);
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 0x0290);
