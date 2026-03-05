
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

/// Class /Game/Subscriptions/KRLoyalty/KRLoyalty_DataAsset.KRLoyalty_DataAsset_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UKRLoyalty_DataAsset_C : public USubscriptionDataAsset
{ 
public:
};

/// Class /Game/Subscriptions/XboxGamePass/XboxGamePass_DataAsset.XboxGamePass_DataAsset_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UXboxGamePass_DataAsset_C : public USubscriptionDataAsset
{ 
public:
};

/// Class /Game/Subscriptions/XboxGamePass/XboxGamePass_UIData.XboxGamePass_UIData_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UXboxGamePass_UIData_C : public USubscriptionUIData
{ 
public:
};

/// Class /Game/Subscriptions/KRLoyalty/KRLoyalty_UIData.KRLoyalty_UIData_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UKRLoyalty_UIData_C : public USubscriptionUIData
{ 
public:
};

/// Class /Game/Subscriptions/XboxGamePass/XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C
/// Size: 0x03B0 (944 bytes) (0x000318 - 0x0003B0) align 8 MaxSize: 0x03B0
class UXboxGamePass_ActivationPane_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class USharedButtonMaster_C*                       Accept;                                                     // 0x0320   (0x0008)  
	class UImage*                                      BGColorFill;                                                // 0x0328   (0x0008)  
	class UTextBlock*                                  Description;                                                // 0x0330   (0x0008)  
	class UTextBlock*                                  Description0;                                               // 0x0338   (0x0008)  
	class UTextBlock*                                  Description1;                                               // 0x0340   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0348   (0x0008)  
	class UImage*                                      pubEX_IMage;                                                // 0x0350   (0x0008)  
	class UTextBlock*                                  Subtitle;                                                   // 0x0358   (0x0008)  
	class UTextBlock*                                  Subtitle2;                                                  // 0x0360   (0x0008)  
	class UTextBlock*                                  Subtitle3;                                                  // 0x0368   (0x0008)  
	class UTextBlock*                                  Subtitle4;                                                  // 0x0370   (0x0008)  
	class UTextBlock*                                  Title;                                                      // 0x0378   (0x0008)  
	class UTextBlock*                                  Title5;                                                     // 0x0380   (0x0008)  
	class UTextBlock*                                  Title6;                                                     // 0x0388   (0x0008)  
	class UTextBlock*                                  Title7;                                                     // 0x0390   (0x0008)  
	class UVerticalBox*                                VerticalBox;                                                // 0x0398   (0x0008)  
	class USubscriptionHandle*                         XboxSubscriptionHandle;                                     // 0x03A0   (0x0008)  
	class UClass*                                      XGPSubscriptionClass;                                       // 0x03A8   (0x0008)  


	/// Functions
	// Function /Game/Subscriptions/XboxGamePass/XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Subscriptions/XboxGamePass/XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.OnAllSubscriptionsLoaded
	// void OnAllSubscriptionsLoaded(FSubscriptionHandles& SubscriptionHandles);                                                // [0x1a821d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Subscriptions/XboxGamePass/XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.BndEvt__XboxGamePass_ActivationPane_Accept_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	// void BndEvt__XboxGamePass_ActivationPane_Accept_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();               // [0x1a821d0] BlueprintEvent       
	// Function /Game/Subscriptions/XboxGamePass/XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.ExecuteUbergraph_XboxGamePass_ActivationPane
	// void ExecuteUbergraph_XboxGamePass_ActivationPane(int32_t EntryPoint);                                                   // [0x1a821d0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UKRLoyalty_DataAsset_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UXboxGamePass_DataAsset_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UXboxGamePass_UIData_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UKRLoyalty_UIData_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UXboxGamePass_ActivationPane_C) == 0x03B0); // 944 bytes (0x000318 - 0x0003B0)
static_assert(offsetof(UXboxGamePass_ActivationPane_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Accept) == 0x0320);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, BGColorFill) == 0x0328);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Description) == 0x0330);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Description0) == 0x0338);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Description1) == 0x0340);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Image) == 0x0348);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, pubEX_IMage) == 0x0350);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Subtitle) == 0x0358);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Subtitle2) == 0x0360);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Subtitle3) == 0x0368);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Subtitle4) == 0x0370);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Title) == 0x0378);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Title5) == 0x0380);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Title6) == 0x0388);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, Title7) == 0x0390);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, VerticalBox) == 0x0398);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, XboxSubscriptionHandle) == 0x03A0);
static_assert(offsetof(UXboxGamePass_ActivationPane_C, XGPSubscriptionClass) == 0x03A8);
