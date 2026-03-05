
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InputCore
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x01 (1 bytes)
enum class EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer                                        = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents                                        = 1
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x01 (1 bytes)
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss                               = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept                                = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss                               = 2
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x01 (1 bytes)
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None                                                             = 0,
	ESelectionMode__Single                                                           = 1,
	ESelectionMode__SingleToggle                                                     = 2,
	ESelectionMode__Multi                                                            = 3
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x01 (1 bytes)
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List                                                             = 0,
	ETableViewMode__Tile                                                             = 1,
	ETableViewMode__Tree                                                             = 2
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x01 (1 bytes)
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar                                                           = 0,
	EMultiBoxType__ToolBar                                                           = 1,
	EMultiBoxType__VerticalToolBar                                                   = 2,
	EMultiBoxType__SlimHorizontalToolBar                                             = 3,
	EMultiBoxType__UniformToolBar                                                    = 4,
	EMultiBoxType__Menu                                                              = 5,
	EMultiBoxType__ButtonRow                                                         = 6,
	EMultiBoxType__SlimHorizontalUniformToolBar                                      = 7
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x01 (1 bytes)
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None                                                            = 0,
	EMultiBlockType__ButtonRow                                                       = 1,
	EMultiBlockType__EditableText                                                    = 2,
	EMultiBlockType__Heading                                                         = 3,
	EMultiBlockType__MenuEntry                                                       = 4,
	EMultiBlockType__Separator                                                       = 5,
	EMultiBlockType__ToolBarButton                                                   = 6,
	EMultiBlockType__ToolBarComboButton                                              = 7,
	EMultiBlockType__Widget                                                          = 8
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x01 (1 bytes)
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView                                           = 0,
	EDescendantScrollDestination__TopOrLeft                                          = 1,
	EDescendantScrollDestination__Center                                             = 2,
	EDescendantScrollDestination__BottomOrRight                                      = 3
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x01 (1 bytes)
enum class EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll                                                = 0,
	EScrollWhenFocusChanges__InstantScroll                                           = 1,
	EScrollWhenFocusChanges__AnimatedScroll                                          = 2
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04 (4 bytes)
enum class ECustomizedToolMenuVisibility : uint32_t
{
	ECustomizedToolMenuVisibility__None                                              = 0,
	ECustomizedToolMenuVisibility__Visible                                           = 1,
	ECustomizedToolMenuVisibility__Hidden                                            = 2
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x01 (1 bytes)
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None                                                   = 0,
	EUserInterfaceActionType__Button                                                 = 1,
	EUserInterfaceActionType__ToggleButton                                           = 2,
	EUserInterfaceActionType__RadioButton                                            = 3,
	EUserInterfaceActionType__Check                                                  = 4,
	EUserInterfaceActionType__CollapsedButton                                        = 5
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x01 (1 bytes)
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary                                                = 0,
	EMultipleKeyBindingIndex__Secondary                                              = 1,
	EMultipleKeyBindingIndex__NumChords                                              = 2
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x01 (1 bytes)
enum class ETextJustify : uint8_t
{
	ETextJustify__Left                                                               = 0,
	ETextJustify__Center                                                             = 1,
	ETextJustify__Right                                                              = 2,
	ETextJustify__InvariantLeft                                                      = 3,
	ETextJustify__InvariantRight                                                     = 4
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x01 (1 bytes)
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping                                             = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping                                   = 1
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x01 (1 bytes)
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto                                                         = 0,
	ETextFlowDirection__LeftToRight                                                  = 1,
	ETextFlowDirection__RightToLeft                                                  = 2,
	ETextFlowDirection__Culture                                                      = 3
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x01 (1 bytes)
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both                                                          = 0,
	EStretchDirection__DownOnly                                                      = 1,
	EStretchDirection__UpOnly                                                        = 2
};

/// Enum /Script/Slate.EStretch
/// Size: 0x01 (1 bytes)
enum class EStretch : uint8_t
{
	EStretch__None                                                                   = 0,
	EStretch__Fill                                                                   = 1,
	EStretch__ScaleToFit                                                             = 2,
	EStretch__ScaleToFitX                                                            = 3,
	EStretch__ScaleToFitY                                                            = 4,
	EStretch__ScaleToFill                                                            = 5,
	EStretch__ScaleBySafeZone                                                        = 6,
	EStretch__UserSpecified                                                          = 7,
	EStretch__UserSpecifiedWithClipping                                              = 8
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x01 (1 bytes)
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight                                                = 0,
	EProgressBarFillType__RightToLeft                                                = 1,
	EProgressBarFillType__FillFromCenter                                             = 2,
	EProgressBarFillType__FillFromCenterHorizontal                                   = 3,
	EProgressBarFillType__FillFromCenterVertical                                     = 4,
	EProgressBarFillType__TopToBottom                                                = 5,
	EProgressBarFillType__BottomToTop                                                = 6
};

/// Enum /Script/Slate.EProgressBarFillStyle
/// Size: 0x01 (1 bytes)
enum class EProgressBarFillStyle : uint8_t
{
	EProgressBarFillStyle__Mask                                                      = 0,
	EProgressBarFillStyle__Scale                                                     = 1
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x01 (1 bytes)
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed                                            = 0,
	EListItemAlignment__EvenlySize                                                   = 1,
	EListItemAlignment__EvenlyWide                                                   = 2,
	EListItemAlignment__LeftAligned                                                  = 3,
	EListItemAlignment__RightAligned                                                 = 4,
	EListItemAlignment__CenterAligned                                                = 5,
	EListItemAlignment__Fill                                                         = 6
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UToolMenuBase : public UObject
{ 
public:
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USlateSettings : public UObject
{ 
public:
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x0440 (1088 bytes) (0x000038 - 0x000440) align 16 MaxSize: 0x0440
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FButtonStyle                                       ButtonStyle;                                                // 0x0040   (0x0400)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0B20 (2848 bytes) (0x000038 - 0x000B20) align 16 MaxSize: 0x0B20
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0040   (0x0AE0)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x06C0 (1728 bytes) (0x000038 - 0x0006C0) align 16 MaxSize: 0x06C0
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0040   (0x0680)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x0650 (1616 bytes) (0x000038 - 0x000650) align 16 MaxSize: 0x0650
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0040   (0x0610)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0EC0 (3776 bytes) (0x000038 - 0x000EC0) align 16 MaxSize: 0x0EC0
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0040   (0x0E80)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0330 (816 bytes) (0x000038 - 0x000330) align 16 MaxSize: 0x0330
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0040   (0x02F0)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x02D0 (720 bytes) (0x000038 - 0x0002D0) align 16 MaxSize: 0x02D0
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0040   (0x0290)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x07B0 (1968 bytes) (0x000038 - 0x0007B0) align 16 MaxSize: 0x07B0
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0040   (0x0770)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x03B0 (944 bytes) (0x000038 - 0x0003B0) align 16 MaxSize: 0x03B0
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0040   (0x0370)  
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0640 (1600 bytes) (0x000038 - 0x000640) align 16 MaxSize: 0x0640
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0040   (0x0600)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0380 (896 bytes) (0x000038 - 0x000380) align 16 MaxSize: 0x0380
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0040   (0x0340)  
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0020)  
	bool                                               bShift : 1;                                                 // 0x0020:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0020:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0020:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0020:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0021   (0x0003)  MISSED
	bool                                               bGamepadShift : 1;                                          // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Slate.CharRange
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FCharRange
{ 
	uint16_t                                           First;                                                      // 0x0000   (0x0002)  
	uint16_t                                           Last;                                                       // 0x0002   (0x0002)  
};

/// Struct /Script/Slate.CharRangeList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCharRangeList
{ 
	TArray<FCharRange>                                 Ranges;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FCustomizedToolMenuEntry
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FCustomizedToolMenuSection
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x0208 (520 bytes) (0x000000 - 0x000208) align 8 MaxSize: 0x0208
struct FCustomizedToolMenu
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TMap<FName, FCustomizedToolMenuEntry>              Entries;                                                    // 0x0010   (0x0050)  
	TMap<FName, FCustomizedToolMenuSection>            Sections;                                                   // 0x0060   (0x0050)  
	TMap<FName, FCustomizedToolMenuNameArray>          EntryOrder;                                                 // 0x00B0   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x0100   (0x0010)  
	TArray<FName>                                      SuppressExtenders;                                          // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_7[0xE8];                                      // 0x0120   (0x00E8)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UToolMenuBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USlateSettings) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UButtonWidgetStyle) == 0x0440); // 1088 bytes (0x000038 - 0x000440)
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x0B20); // 2848 bytes (0x000038 - 0x000B20)
static_assert(sizeof(UComboBoxWidgetStyle) == 0x06C0); // 1728 bytes (0x000038 - 0x0006C0)
static_assert(sizeof(UComboButtonWidgetStyle) == 0x0650); // 1616 bytes (0x000038 - 0x000650)
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x0EC0); // 3776 bytes (0x000038 - 0x000EC0)
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0330); // 816 bytes (0x000038 - 0x000330)
static_assert(sizeof(UProgressWidgetStyle) == 0x02D0); // 720 bytes (0x000038 - 0x0002D0)
static_assert(sizeof(UScrollBarWidgetStyle) == 0x07B0); // 1968 bytes (0x000038 - 0x0007B0)
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x03B0); // 944 bytes (0x000038 - 0x0003B0)
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0640); // 1600 bytes (0x000038 - 0x000640)
static_assert(sizeof(UTextBlockWidgetStyle) == 0x0380); // 896 bytes (0x000038 - 0x000380)
static_assert(sizeof(FVirtualKeyboardOptions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInputChord) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnchors) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCharRange) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCharRangeList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuSection) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenu) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x0040);
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x0040);
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x0040);
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x0040);
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x0040);
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x0040);
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x0040);
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x0040);
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x0040);
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x0040);
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x0040);
static_assert(offsetof(FInputChord, Key) == 0x0000);
static_assert(offsetof(FAnchors, Minimum) == 0x0000);
static_assert(offsetof(FAnchors, Maximum) == 0x0010);
static_assert(offsetof(FCharRangeList, Ranges) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Entries) == 0x0010);
static_assert(offsetof(FCustomizedToolMenu, Sections) == 0x0060);
static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 0x00B0);
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x0100);
static_assert(offsetof(FCustomizedToolMenu, SuppressExtenders) == 0x0110);
