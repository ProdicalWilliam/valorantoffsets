
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame
/// dependency: UI
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C
/// Size: 0x0398 (920 bytes) (0x000318 - 0x000398) align 8 MaxSize: 0x0398
class UXboxGamePass_DeactivationPane_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            Hover_LearnMore;                                            // 0x0320   (0x0008)  
	class UImage*                                      CenterDeco;                                                 // 0x0328   (0x0008)  
	class UImage*                                      CenterDeco0;                                                // 0x0330   (0x0008)  
	class UTelemetryButton*                            LearnMoreButton;                                            // 0x0338   (0x0008)  
	class UImage*                                      Line;                                                       // 0x0340   (0x0008)  
	class UImage*                                      Line1;                                                      // 0x0348   (0x0008)  
	class UImage*                                      LineLeft;                                                   // 0x0350   (0x0008)  
	class UImage*                                      LineLeft2;                                                  // 0x0358   (0x0008)  
	class UImage*                                      LineRight;                                                  // 0x0360   (0x0008)  
	class UImage*                                      LineRight3;                                                 // 0x0368   (0x0008)  
	class UImage*                                      LinkIcon;                                                   // 0x0370   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x0378   (0x0008)  
	class UWBP_MenuButtonSecondary_C*                  WBP_MenuButtonSecondary;                                    // 0x0380   (0x0008)  
	class UClass*                                      XGPSubscriptionClass;                                       // 0x0388   (0x0008)  
	class USubscriptionHandle*                         XboxSubscriptionHandle;                                     // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x1a821d0] BlueprintEvent       
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.OnAllSubscriptionsLoaded
	// void OnAllSubscriptionsLoaded(FSubscriptionHandles& SubscriptionHandles);                                                // [0x1a821d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature
	// void BndEvt__XboxGamePass_DeactivationPane_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // [0x1a821d0] BlueprintEvent       
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // [0x1a821d0] BlueprintEvent       
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // [0x1a821d0] BlueprintEvent       
	// Function /Game/XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.ExecuteUbergraph_XboxGamePass_DeactivationPane
	// void ExecuteUbergraph_XboxGamePass_DeactivationPane(int32_t EntryPoint);                                                 // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UXboxGamePass_DeactivationPane_C) == 0x0398); // 920 bytes (0x000318 - 0x000398)
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, Hover_LearnMore) == 0x0320);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, CenterDeco) == 0x0328);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, CenterDeco0) == 0x0330);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LearnMoreButton) == 0x0338);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, Line) == 0x0340);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, Line1) == 0x0348);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LineLeft) == 0x0350);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LineLeft2) == 0x0358);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LineRight) == 0x0360);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LineRight3) == 0x0368);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, LinkIcon) == 0x0370);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, TextBlock) == 0x0378);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, WBP_MenuButtonSecondary) == 0x0380);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, XGPSubscriptionClass) == 0x0388);
static_assert(offsetof(UXboxGamePass_DeactivationPane_C, XboxSubscriptionHandle) == 0x0390);
