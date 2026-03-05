
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ShooterGame
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/Currencies/CurrencyItem.CurrencyItem_C
/// Size: 0x033C (828 bytes) (0x000318 - 0x00033C) align 8 MaxSize: 0x033C
class UCurrencyItem_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UTextBlock*                                  Amount;                                                     // 0x0320   (0x0008)  
	class UImage*                                      Icon;                                                       // 0x0328   (0x0008)  
	class UCurrencyDataAsset*                          CurrencyDataAsset;                                          // 0x0330   (0x0008)  
	int32_t                                            Quantity;                                                   // 0x0338   (0x0004)  


	/// Functions
	// Function /Game/Currencies/CurrencyItem.CurrencyItem_C.OnHandleLoaded
	// void OnHandleLoaded(class UCurrencyHandle* Handle);                                                                      // [0x1a821d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyItem.CurrencyItem_C.SetCurrency
	// void SetCurrency(class UCurrencyDataAsset* DataAsset, int32_t Quantity);                                                 // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyItem.CurrencyItem_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/CurrencyItem.CurrencyItem_C.ExecuteUbergraph_CurrencyItem
	// void ExecuteUbergraph_CurrencyItem(int32_t EntryPoint);                                                                  // [0x1a821d0] Final                
};

/// Class /Game/Currencies/Currency_RecruitmentToken_DataAsset.Currency_RecruitmentToken_DataAsset_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UCurrency_RecruitmentToken_DataAsset_C : public UCurrencyDataAsset
{ 
public:
};

/// Class /Game/Currencies/Currency_UpgradeToken_DataAsset.Currency_UpgradeToken_DataAsset_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UCurrency_UpgradeToken_DataAsset_C : public UCurrencyDataAsset
{ 
public:
};

/// Class /Game/Currencies/Currency_AresPoints_DataAsset.Currency_AresPoints_DataAsset_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UCurrency_AresPoints_DataAsset_C : public UCurrencyDataAsset
{ 
public:
};

/// Class /Game/Currencies/Currency_Dough_DataAsset.Currency_Dough_DataAsset_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UCurrency_Dough_DataAsset_C : public UCurrencyDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_5_DataAsset.StorefrontItem_AresPoints_5_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_5_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_4_DataAsset.StorefrontItem_AresPoints_4_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_4_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_3_DataAsset.StorefrontItem_AresPoints_3_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_3_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_2_DataAsset.StorefrontItem_AresPoints_2_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_2_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_6_DataAsset.StorefrontItem_AresPoints_6_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_6_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_AresPoints_DataAsset.StorefrontItem_AresPoints_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_AresPoints_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_UpgradeTokens_Medium_DataAsset.StorefrontItem_UpgradeTokens_Medium_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_UpgradeTokens_Medium_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_UpgradeTokens_Large_DataAsset.StorefrontItem_UpgradeTokens_Large_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_UpgradeTokens_Large_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_UpgradeTokens_Small_DataAsset.StorefrontItem_UpgradeTokens_Small_DataAsset_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStorefrontItem_UpgradeTokens_Small_DataAsset_C : public UStorefrontItemDataAsset
{ 
public:
};

/// Class /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C
/// Size: 0x03D4 (980 bytes) (0x000318 - 0x0003D4) align 8 MaxSize: 0x03D4
class UCurrencyAmountWidget_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            HoverDough;                                                 // 0x0320   (0x0008)  
	class UWidgetAnimation*                            hover;                                                      // 0x0328   (0x0008)  
	class UTextBlock*                                  AmountText;                                                 // 0x0330   (0x0008)  
	class UImage*                                      CurrencyIcon;                                               // 0x0338   (0x0008)  
	class UImage*                                      CurrencyIconHoverBg;                                        // 0x0340   (0x0008)  
	class UImage*                                      DoughHoverBg;                                               // 0x0348   (0x0008)  
	class UHorizontalBox*                              HorizontalBox;                                              // 0x0350   (0x0008)  
	class UTelemetryButton*                            TButton;                                                    // 0x0358   (0x0008)  
	FSlateColor                                        TextColor;                                                  // 0x0360   (0x0014)  
	bool                                               DisplayTooltip;                                             // 0x0374   (0x0001)  
	TEnumAsByte<EHorizontalAlignment>                  Alignment;                                                  // 0x0375   (0x0001)  
	bool                                               Clickable;                                                  // 0x0376   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0377   (0x0001)  MISSED
	SDK_UNDEFINED(16,3452) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0378   (0x0010)  
	bool                                               SendTelemetry;                                              // 0x0388   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0389   (0x0007)  MISSED
	FString                                            Telemetry_Action_Target;                                    // 0x0390   (0x0010)  
	bool                                               ShouldSurfaceCap;                                           // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x03A1   (0x0007)  MISSED
	class UWidgetAnimation*                            ActiveAnimation;                                            // 0x03A8   (0x0008)  
	FSlateColor                                        NegativeTextColor;                                          // 0x03B0   (0x0014)  
	FGuid                                              NewVar;                                                     // 0x03C4   (0x0010)  


	/// Functions
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.SetClickable
	// void SetClickable(bool Clickable);                                                                                       // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.UpdateAmountAndClearIcon
	// void UpdateAmountAndClearIcon(int32_t Amount, FGuid& CurrencyID);                                                        // [0x1a821d0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.SetCurrencyByID
	// void SetCurrencyByID(FGuid CurrencyID, int32_t Amount);                                                                  // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.OnCurrencyLoaded
	// void OnCurrencyLoaded(class UCurrencyHandle* CurrencyHandle);                                                            // [0x1a821d0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.SetCurrency
	// void SetCurrency(class UCurrencyDataAsset* Currency, int32_t Amount);                                                    // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.Construct
	// void Construct();                                                                                                        // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.HandleClick
	// void HandleClick();                                                                                                      // [0x1a821d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.BndEvt__TelemetryButton_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__TelemetryButton_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();                    // [0x1a821d0] BlueprintEvent       
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();                               // [0x1a821d0] BlueprintEvent       
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.ExecuteUbergraph_CurrencyAmountWidget
	// void ExecuteUbergraph_CurrencyAmountWidget(int32_t EntryPoint);                                                          // [0x1a821d0] Final                
	// Function /Game/Currencies/CurrencyAmountWidget.CurrencyAmountWidget_C.OnClicked__DelegateSignature
	// void OnClicked__DelegateSignature();                                                                                     // [0x1a821d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C
/// Size: 0x0345 (837 bytes) (0x000318 - 0x000345) align 8 MaxSize: 0x0345
class UCurrencyAmountWidgetMid_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UTextBlock*                                  AmountText;                                                 // 0x0320   (0x0008)  
	class UImage*                                      CurrencyIcon;                                               // 0x0328   (0x0008)  
	FSlateColor                                        TextColor;                                                  // 0x0330   (0x0014)  
	bool                                               DisplayTooltip;                                             // 0x0344   (0x0001)  


	/// Functions
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.UpdateAmountAndClearIcon
	// void UpdateAmountAndClearIcon(int32_t Amount);                                                                           // [0x1a821d0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.SetCurrencyByID
	// void SetCurrencyByID(FGuid CurrencyID, int32_t Amount);                                                                  // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.OnCurrencyLoaded
	// void OnCurrencyLoaded(class UCurrencyHandle* CurrencyHandle);                                                            // [0x1a821d0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.SetCurrency
	// void SetCurrency(class UCurrencyDataAsset* Currency, int32_t Amount);                                                    // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.ExecuteUbergraph_CurrencyAmountWidgetMid
	// void ExecuteUbergraph_CurrencyAmountWidgetMid(int32_t EntryPoint);                                                       // [0x1a821d0] Final                
};

/// Class /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C
/// Size: 0x0345 (837 bytes) (0x000318 - 0x000345) align 8 MaxSize: 0x0345
class UCurrencyAmountWidgetLarge_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UTextBlock*                                  AmountText;                                                 // 0x0320   (0x0008)  
	class UImage*                                      CurrencyIcon;                                               // 0x0328   (0x0008)  
	FSlateColor                                        TextColor;                                                  // 0x0330   (0x0014)  
	bool                                               DisplayTooltip;                                             // 0x0344   (0x0001)  


	/// Functions
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.UpdateAmountAndClearIcon
	// void UpdateAmountAndClearIcon(int32_t Amount);                                                                           // [0x1a821d0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.SetCurrencyByID
	// void SetCurrencyByID(FGuid CurrencyID, int32_t Amount);                                                                  // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.OnCurrencyLoaded
	// void OnCurrencyLoaded(class UCurrencyHandle* CurrencyHandle);                                                            // [0x1a821d0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.SetCurrency
	// void SetCurrency(class UCurrencyDataAsset* Currency, int32_t Amount);                                                    // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.ExecuteUbergraph_CurrencyAmountWidgetLarge
	// void ExecuteUbergraph_CurrencyAmountWidgetLarge(int32_t EntryPoint);                                                     // [0x1a821d0] Final                
};

/// Class /Game/Currencies/CurrencyDecorator.CurrencyDecorator_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UCurrencyDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/Currencies/StorefrontItem_UpgradeTokens_Medium_UIData.StorefrontItem_UpgradeTokens_Medium_UIData_C
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UStorefrontItem_UpgradeTokens_Medium_UIData_C : public UStorefrontItemUIData
{ 
public:
};

/// Class /Game/Currencies/DoughEOGDecorator.DoughEOGDecorator_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UDoughEOGDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/Currencies/DoughDecorator.DoughDecorator_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UDoughDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/Currencies/DoughDescriptionTooltip.DoughDescriptionTooltip_C
/// Size: 0x0350 (848 bytes) (0x000318 - 0x000350) align 8 MaxSize: 0x0350
class UDoughDescriptionTooltip_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class UWidgetAnimation*                            Delay;                                                      // 0x0320   (0x0008)  
	class URichTextBlock*                              TooltipDescription;                                         // 0x0328   (0x0008)  
	class URichTextBlock*                              TooltipDescriptionParagraph2;                               // 0x0330   (0x0008)  
	FText                                              Description;                                                // 0x0338   (0x0018)  


	/// Functions
	// Function /Game/Currencies/DoughDescriptionTooltip.DoughDescriptionTooltip_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/DoughDescriptionTooltip.DoughDescriptionTooltip_C.Construct
	// void Construct();                                                                                                        // [0x1a821d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Currencies/DoughDescriptionTooltip.DoughDescriptionTooltip_C.ExecuteUbergraph_DoughDescriptionTooltip
	// void ExecuteUbergraph_DoughDescriptionTooltip(int32_t EntryPoint);                                                       // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Currencies/Currency_AresPoints_UIData.Currency_AresPoints_UIData_C
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UCurrency_AresPoints_UIData_C : public UCurrencyUIData
{ 
public:
};

/// Class /Game/Currencies/Currency_UpgradeToken_UIData.Currency_UpgradeToken_UIData_C
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UCurrency_UpgradeToken_UIData_C : public UCurrencyUIData
{ 
public:
};

/// Class /Game/Currencies/Currency_Dough_UIData.Currency_Dough_UIData_C
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UCurrency_Dough_UIData_C : public UCurrencyUIData
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UCurrencyItem_C) == 0x033C); // 828 bytes (0x000318 - 0x00033C)
static_assert(sizeof(UCurrency_RecruitmentToken_DataAsset_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UCurrency_UpgradeToken_DataAsset_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UCurrency_AresPoints_DataAsset_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UCurrency_Dough_DataAsset_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UStorefrontItem_AresPoints_5_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_AresPoints_4_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_AresPoints_3_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_AresPoints_2_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_AresPoints_6_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_AresPoints_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_UpgradeTokens_Medium_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_UpgradeTokens_Large_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UStorefrontItem_UpgradeTokens_Small_DataAsset_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UCurrencyAmountWidget_C) == 0x03D4); // 980 bytes (0x000318 - 0x0003D4)
static_assert(sizeof(UCurrencyAmountWidgetMid_C) == 0x0345); // 837 bytes (0x000318 - 0x000345)
static_assert(sizeof(UCurrencyAmountWidgetLarge_C) == 0x0345); // 837 bytes (0x000318 - 0x000345)
static_assert(sizeof(UCurrencyDecorator_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UStorefrontItem_UpgradeTokens_Medium_UIData_C) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UDoughEOGDecorator_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UDoughDecorator_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UDoughDescriptionTooltip_C) == 0x0350); // 848 bytes (0x000318 - 0x000350)
static_assert(sizeof(UCurrency_AresPoints_UIData_C) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UCurrency_UpgradeToken_UIData_C) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UCurrency_Dough_UIData_C) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(offsetof(UCurrencyItem_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCurrencyItem_C, Amount) == 0x0320);
static_assert(offsetof(UCurrencyItem_C, Icon) == 0x0328);
static_assert(offsetof(UCurrencyItem_C, CurrencyDataAsset) == 0x0330);
static_assert(offsetof(UCurrencyAmountWidget_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCurrencyAmountWidget_C, HoverDough) == 0x0320);
static_assert(offsetof(UCurrencyAmountWidget_C, hover) == 0x0328);
static_assert(offsetof(UCurrencyAmountWidget_C, AmountText) == 0x0330);
static_assert(offsetof(UCurrencyAmountWidget_C, CurrencyIcon) == 0x0338);
static_assert(offsetof(UCurrencyAmountWidget_C, CurrencyIconHoverBg) == 0x0340);
static_assert(offsetof(UCurrencyAmountWidget_C, DoughHoverBg) == 0x0348);
static_assert(offsetof(UCurrencyAmountWidget_C, HorizontalBox) == 0x0350);
static_assert(offsetof(UCurrencyAmountWidget_C, TButton) == 0x0358);
static_assert(offsetof(UCurrencyAmountWidget_C, TextColor) == 0x0360);
static_assert(offsetof(UCurrencyAmountWidget_C, Alignment) == 0x0375);
static_assert(offsetof(UCurrencyAmountWidget_C, Telemetry_Action_Target) == 0x0390);
static_assert(offsetof(UCurrencyAmountWidget_C, ActiveAnimation) == 0x03A8);
static_assert(offsetof(UCurrencyAmountWidget_C, NegativeTextColor) == 0x03B0);
static_assert(offsetof(UCurrencyAmountWidget_C, NewVar) == 0x03C4);
static_assert(offsetof(UCurrencyAmountWidgetMid_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCurrencyAmountWidgetMid_C, AmountText) == 0x0320);
static_assert(offsetof(UCurrencyAmountWidgetMid_C, CurrencyIcon) == 0x0328);
static_assert(offsetof(UCurrencyAmountWidgetMid_C, TextColor) == 0x0330);
static_assert(offsetof(UCurrencyAmountWidgetLarge_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UCurrencyAmountWidgetLarge_C, AmountText) == 0x0320);
static_assert(offsetof(UCurrencyAmountWidgetLarge_C, CurrencyIcon) == 0x0328);
static_assert(offsetof(UCurrencyAmountWidgetLarge_C, TextColor) == 0x0330);
static_assert(offsetof(UDoughDescriptionTooltip_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(UDoughDescriptionTooltip_C, Delay) == 0x0320);
static_assert(offsetof(UDoughDescriptionTooltip_C, TooltipDescription) == 0x0328);
static_assert(offsetof(UDoughDescriptionTooltip_C, TooltipDescriptionParagraph2) == 0x0330);
static_assert(offsetof(UDoughDescriptionTooltip_C, Description) == 0x0338);
