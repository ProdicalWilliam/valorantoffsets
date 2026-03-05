
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RemoteControlCommon
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControl.ERCTransactionMode
/// Size: 0x01 (1 bytes)
enum class ERCTransactionMode : uint8_t
{
	ERCTransactionMode__NONE                                                         = 0,
	ERCTransactionMode__AUTOMATIC                                                    = 1,
	ERCTransactionMode__MANUAL                                                       = 2
};

/// Enum /Script/RemoteControl.ERCAccess
/// Size: 0x01 (1 bytes)
enum class ERCAccess : uint8_t
{
	ERCAccess__NO_ACCESS                                                             = 0,
	ERCAccess__READ_ACCESS                                                           = 1,
	ERCAccess__WRITE_ACCESS                                                          = 2,
	ERCAccess__WRITE_TRANSACTION_ACCESS                                              = 3,
	ERCAccess__WRITE_MANUAL_TRANSACTION_ACCESS                                       = 4
};

/// Enum /Script/RemoteControl.ERCModifyOperation
/// Size: 0x01 (1 bytes)
enum class ERCModifyOperation : uint8_t
{
	ERCModifyOperation__EQUAL                                                        = 0,
	ERCModifyOperation__ADD                                                          = 1,
	ERCModifyOperation__SUBTRACT                                                     = 2,
	ERCModifyOperation__MULTIPLY                                                     = 3,
	ERCModifyOperation__DIVIDE                                                       = 4
};

/// Enum /Script/RemoteControl.EExposedFieldType
/// Size: 0x01 (1 bytes)
enum class EExposedFieldType : uint8_t
{
	EExposedFieldType__Invalid                                                       = 0,
	EExposedFieldType__Property                                                      = 1,
	EExposedFieldType__Function                                                      = 2
};

/// Enum /Script/RemoteControl.ERemoteControlEnumClass
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEnumClass : uint8_t
{
	ERemoteControlEnumClass__E_One                                                   = 0,
	ERemoteControlEnumClass__E_Two                                                   = 1,
	ERemoteControlEnumClass__E_Three                                                 = 2
};

/// Enum /Script/RemoteControl.ERemoteControlEnum
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEnum : uint8_t
{
	ERemoteControlEnum__E_One                                                        = 0,
	ERemoteControlEnum__E_Two                                                        = 1,
	ERemoteControlEnum__E_Three                                                      = 2
};

/// Enum /Script/RemoteControl.ERCBindingStatus
/// Size: 0x01 (1 bytes)
enum class ERCBindingStatus : uint8_t
{
	ERCBindingStatus__Unassigned                                                     = 0,
	ERCBindingStatus__Awaiting                                                       = 1,
	ERCBindingStatus__Bound                                                          = 2
};

/// Class /Script/RemoteControl.RCVirtualPropertyBase
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class URCVirtualPropertyBase : public UObject
{ 
public:
	FName                                              PropertyName;                                               // 0x0030   (0x000C)  
	FGuid                                              ID;                                                         // 0x003C   (0x0010)  
	FName                                              FieldId;                                                    // 0x004C   (0x000C)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0058   (0x0008)  
	FName                                              DisplayName;                                                // 0x0060   (0x000C)  
	int32_t                                            DisplayIndex;                                               // 0x006C   (0x0004)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0070   (0x0050)  


	/// Functions
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueVector
	// bool SetValueVector(FVector& InVector);                                                                                  // [0x6dadf40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUint64
	// bool SetValueUint64(uint64_t InUInt64);                                                                                  // [0x6dae870] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUInt32
	// bool SetValueUInt32(uint32_t InUInt32);                                                                                  // [0x6daeaf0] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUint16
	// bool SetValueUint16(uint16_t InUInt16);                                                                                  // [0x6daed70] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueText
	// bool SetValueText(FText& InTextValue);                                                                                   // [0x6dae1b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueString
	// bool SetValueString(FString InStringValue);                                                                              // [0x6dae4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueRotator
	// bool SetValueRotator(FRotator& InRotator);                                                                               // [0x6dade40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueNumericInteger
	// bool SetValueNumericInteger(int64_t InInt64Value);                                                                       // [0x6dae040] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueName
	// bool SetValueName(FName& InNameValue);                                                                                   // [0x6dae330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt8
	// bool SetValueInt8(int8_t InInt8);                                                                                        // [0x6daf130] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt64
	// bool SetValueInt64(int64_t InInt64);                                                                                     // [0x6dae9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt32
	// bool SetValueInt32(int32_t InInt32);                                                                                     // [0x6daec30] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt16
	// bool SetValueInt16(int16_t InInt16);                                                                                     // [0x6daeeb0] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueFloat
	// bool SetValueFloat(float InFloat);                                                                                       // [0x6dae770] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueDouble
	// bool SetValueDouble(double InDouble);                                                                                    // [0x6dae670] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueColor
	// bool SetValueColor(FColor& InColor);                                                                                     // [0x6dadd40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueByte
	// bool SetValueByte(char InByte);                                                                                          // [0x6daeff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueBool
	// bool SetValueBool(bool InBoolValue);                                                                                     // [0x6daf270] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueVector
	// bool GetValueVector(FVector& OutVector);                                                                                 // [0x6daf6c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUint64
	// bool GetValueUint64(uint64_t& OuyUInt64);                                                                                // [0x6dafe90] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUInt32
	// bool GetValueUInt32(uint32_t& OutUInt32);                                                                                // [0x6db0130] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUint16
	// bool GetValueUint16(uint16_t& OutUInt16);                                                                                // [0x6db0380] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueText
	// bool GetValueText(FText& OutTextValue);                                                                                  // [0x6daf920] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueString
	// bool GetValueString(FString& OutStringValue);                                                                            // [0x6dafb50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueRotator
	// bool GetValueRotator(FRotator& OutRotator);                                                                              // [0x6daf5c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueObject
	// class UObject* GetValueObject();                                                                                         // [0x6daf410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueNumericInteger
	// bool GetValueNumericInteger(int64_t& OutInt64Value);                                                                     // [0x6daf7c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueName
	// bool GetValueName(FName& OutNameValue);                                                                                  // [0x6dafa50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt8
	// bool GetValueInt8(int8_t& OutInt8);                                                                                      // [0x6db0720] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt64
	// bool GetValueInt64(int64_t& OuyInt64);                                                                                   // [0x6daffe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt32
	// bool GetValueInt32(int32_t& OutInt32);                                                                                   // [0x6db0280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt16
	// bool GetValueInt16(int16_t& OutInt16);                                                                                   // [0x6db04d0] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueFloat
	// bool GetValueFloat(float& OutFloat);                                                                                     // [0x6dafd90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueDouble
	// bool GetValueDouble(double& OutDouble);                                                                                  // [0x6dafc90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueColor
	// bool GetValueColor(FColor& OutColor);                                                                                    // [0x6daf4c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueByte
	// bool GetValueByte(char& OutByte);                                                                                        // [0x6db0620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueBool
	// bool GetValueBool(bool& OutBoolValue);                                                                                   // [0x6db0870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetPropertyName
	// FName GetPropertyName();                                                                                                 // [0x4aab900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetDisplayValueAsString
	// FString GetDisplayValueAsString();                                                                                       // [0x6daf370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RemoteControl.RCVirtualPropertyInContainer
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align 8 MaxSize: 0x00C8
class URCVirtualPropertyInContainer : public URCVirtualPropertyBase
{ 
public:
	TWeakObjectPtr<class URCVirtualPropertyContainerBase*> ContainerWeakPtr;                                       // 0x00C0   (0x0008)  
};

/// Class /Script/RemoteControl.RCVirtualPropertySelfContainer
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URCVirtualPropertySelfContainer : public URCVirtualPropertyBase
{ 
public:
	FInstancedPropertyBag                              Bag;                                                        // 0x00C0   (0x0010)  
};

/// Class /Script/RemoteControl.RCVirtualPropertyContainerBase
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class URCVirtualPropertyContainerBase : public UObject
{ 
public:
	FInstancedPropertyBag                              Bag;                                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,5196) /* TSet<URCVirtualPropertyBase*> */ __um(VirtualProperties);                            // 0x0040   (0x0050)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0098   (0x0018)  MISSED
};

/// Class /Script/RemoteControl.RemoteControlBinding
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class URemoteControlBinding : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FSoftObjectPath                                    LastBoundObjectPath;                                        // 0x0040   (0x0028)  
};

/// Class /Script/RemoteControl.RemoteControlLevelIndependantBinding
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
class URemoteControlLevelIndependantBinding : public URemoteControlBinding
{ 
public:
	TWeakObjectPtr<class UObject*>                     BoundObject;                                                // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlInitialBindingContext
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FRemoteControlInitialBindingContext
{ 
	TSoftObjectPtr<class UClass*>                      SupportedClass;                                             // 0x0000   (0x0030)  
	FName                                              ComponentName;                                              // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            SubObjectPath;                                              // 0x0040   (0x0010)  
	TSoftObjectPtr<class UClass*>                      OwnerActorClass;                                            // 0x0050   (0x0030)  
	FName                                              OwnerActorName;                                             // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/RemoteControl.RemoteControlLevelDependantBinding
/// Size: 0x01C8 (456 bytes) (0x000068 - 0x0001C8) align 8 MaxSize: 0x01C8
class URemoteControlLevelDependantBinding : public URemoteControlBinding
{ 
public:
	SDK_UNDEFINED(80,5197) /* TMap<FSoftObjectPath, TWeakObjectPtr<UObject*>> */ __um(BoundObjectMapByPath);       // 0x0068   (0x0050)  
	SDK_UNDEFINED(80,5198) /* TMap<FSoftObjectPath, TWeakObjectPtr<ULevel*>> */ __um(SubLevelSelectionMapByPath);  // 0x00B8   (0x0050)  
	TWeakObjectPtr<class ULevel*>                      LevelWithLastSuccessfulResolve;                             // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0110   (0x0028)  MISSED
	FRemoteControlInitialBindingContext                BindingContext;                                             // 0x0138   (0x0090)  
};

/// Struct /Script/RemoteControl.RemoteControlDeltaAPITestStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRemoteControlDeltaAPITestStruct
{ 
	FLinearColor                                       ColorValue;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlDeltaAPITestObject
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class URemoteControlDeltaAPITestObject : public UObject
{ 
public:
	int32_t                                            Int32Value;                                                 // 0x0030   (0x0004)  
	float                                              FloatValue;                                                 // 0x0034   (0x0004)  
	FVector                                            VectorValue;                                                // 0x0038   (0x0018)  
	FLinearColor                                       ColorValue;                                                 // 0x0050   (0x0010)  
	FRemoteControlDeltaAPITestStruct                   StructValue;                                                // 0x0060   (0x0010)  
	int32_t                                            Int32WithSetterValue;                                       // 0x0070   (0x0004)  
	float                                              FloatWithSetterValue;                                       // 0x0074   (0x0004)  


	/// Functions
	// Function /Script/RemoteControl.RemoteControlDeltaAPITestObject.SetInt32WithSetterValue
	// void SetInt32WithSetterValue(int32_t NewValue);                                                                          // [0x6db2bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlDeltaAPITestObject.GetInt32WithSetterValue
	// int32_t GetInt32WithSetterValue();                                                                                       // [0x56da750] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RemoteControl.RemoteControlExposeRegistry
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class URemoteControlExposeRegistry : public UObject
{ 
public:
	SDK_UNDEFINED(80,5199) /* TSet<FRCEntityWrapper> */ __um(ExposedEntities);                                     // 0x0030   (0x0050)  
	TMap<FName, FGuid>                                 LabelToIdCache;                                             // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,5200) /* TSet<UScriptStruct*> */  __um(ExposedTypes);                                         // 0x00D0   (0x0050)  
};

/// Class /Script/RemoteControl.RemoteControlFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URemoteControlFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeProperty
	// bool ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, FString Property, FRemoteControlOptionalExposeArgs Args); // [0x6db9680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeFunction
	// bool ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, FString Function, FRemoteControlOptionalExposeArgs Args); // [0x6db9110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeActor
	// bool ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, FRemoteControlOptionalExposeArgs Args);        // [0x6db8ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ApplyColorWheelDelta
	// bool ApplyColorWheelDelta(class UObject* TargetObject, FString PropertyName, FColorWheelColor& DeltaValue, FColorWheelColor& ReferenceColor, bool bIsInteractive); // [0x6db8920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ApplyColorGradingWheelDelta
	// bool ApplyColorGradingWheelDelta(class UObject* TargetObject, FString PropertyName, FColorGradingWheelColor& DeltaValue, FColorGradingWheelColor& ReferenceColor, bool bIsInteractive, float MinValue, float MaxValue); // [0x6db8020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RemoteControl.RemoteControlInterceptionTestStruct
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRemoteControlInterceptionTestStruct
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/RemoteControl.RemoteControlInterceptionFunctionParamStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlInterceptionFunctionParamStruct
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0008   (0x0010)  
	FString                                            IntString;                                                  // 0x0018   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlInterceptionTestObject
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class URemoteControlInterceptionTestObject : public UObject
{ 
public:
	FRemoteControlInterceptionTestStruct               CustomStruct;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FRemoteControlInterceptionFunctionParamStruct      FunctionParamStruct;                                        // 0x0038   (0x0028)  


	/// Functions
	// Function /Script/RemoteControl.RemoteControlInterceptionTestObject.TestFunction
	// FRemoteControlInterceptionFunctionParamStruct TestFunction(FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor); // [0x6dba4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RemoteControl.RemoteControlPresetGroup
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRemoteControlPresetGroup
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FGuid                                              ID;                                                         // 0x000C   (0x0010)  
	FLinearColor                                       TagColor;                                                   // 0x001C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FGuid>                                      Fields;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/RemoteControl.RemoteControlPresetLayout
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FRemoteControlPresetLayout
{ 
	TArray<FRemoteControlPresetGroup>                  Groups;                                                     // 0x0000   (0x0010)  
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0018   (0x00A8)  MISSED
};

/// Struct /Script/RemoteControl.RCCachedFieldData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FRCCachedFieldData
{ 
	FGuid                                              LayoutGroupId;                                              // 0x0000   (0x0010)  
	FName                                              OwnerObjectAlias;                                           // 0x0010   (0x000C)  
};

/// Class /Script/RemoteControl.RemoteControlPreset
/// Size: 0x0558 (1368 bytes) (0x000030 - 0x000558) align 8 MaxSize: 0x0558
class URemoteControlPreset : public UObject
{ 
public:
	FRemoteControlPresetLayout                         Layout;                                                     // 0x0030   (0x00C0)  
	TMap<FString, FString>                             MetaData;                                                   // 0x00F0   (0x0050)  
	TArray<class URemoteControlBinding*>               Bindings;                                                   // 0x0140   (0x0010)  
	class URCVirtualPropertyContainerBase*             ControllerContainer;                                        // 0x0150   (0x0008)  
	FGuid                                              PresetId;                                                   // 0x0158   (0x0010)  
	TMap<FGuid, FRCCachedFieldData>                    FieldCache;                                                 // 0x0168   (0x0050)  
	TMap<FName, FGuid>                                 NameToGuidMap;                                              // 0x01B8   (0x0050)  
	class URemoteControlExposeRegistry*                Registry;                                                   // 0x0208   (0x0008)  
	unsigned char                                      UnknownData00_7[0x348];                                     // 0x0210   (0x0348)  MISSED
};

/// Class /Script/RemoteControl.RemoteControlPresetActor
/// Size: 0x0470 (1136 bytes) (0x000460 - 0x000470) align 8 MaxSize: 0x0470
class ARemoteControlPresetActor : public AActor
{ 
public:
	class URemoteControlPreset*                        Preset;                                                     // 0x0460   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0468   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStructInnerSimple
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRemoteControlTestStructInnerSimple
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/RemoteControl.RemoteControlTestStructInner
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FRemoteControlTestStructInner
{ 
	int8_t                                             Int8Value;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRemoteControlTestStructInnerSimple                InnerSimple;                                                // 0x0004   (0x0004)  
	int32_t                                            Int32Value;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x000C   (0x0010)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStructOuter
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRemoteControlTestStructOuter
{ 
	int8_t                                             Int8Value;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,5201) /* TSet<FRemoteControlTestStructInner> */ __um(StructInnerSet);                         // 0x0008   (0x0050)  
	int32_t                                            Int32Value;                                                 // 0x0058   (0x0004)  
	FRemoteControlTestStructInner                      RemoteControlTestStructInner;                               // 0x005C   (0x001C)  
};

/// Class /Script/RemoteControl.RemoteControlAPITestObject
/// Size: 0x02D0 (720 bytes) (0x000030 - 0x0002D0) align 8 MaxSize: 0x02D0
class URemoteControlAPITestObject : public UObject
{ 
public:
	int32_t                                            CStyleIntArray[3];                                          // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0040   (0x0010)  
	TArray<FRemoteControlTestStructOuter>              StructOuterArray;                                           // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,5202) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0060   (0x0050)  
	TMap<int32_t, int32_t>                             IntMap;                                                     // 0x00B0   (0x0050)  
	TMap<int32_t, FRemoteControlTestStructOuter>       StructOuterMap;                                             // 0x0100   (0x0050)  
	TMap<FString, FColor>                              StringColorMap;                                             // 0x0150   (0x0050)  
	TArray<FVector>                                    ArrayOfVectors;                                             // 0x01A0   (0x0010)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x01B0   (0x0008)  
	int8_t                                             Int8Value;                                                  // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x01B9   (0x0001)  MISSED
	int16_t                                            Int16Value;                                                 // 0x01BA   (0x0002)  
	int32_t                                            Int32Value;                                                 // 0x01BC   (0x0004)  
	float                                              FloatValue;                                                 // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
	double                                             DoubleValue;                                                // 0x01C8   (0x0008)  
	FRemoteControlTestStructOuter                      RemoteControlTestStructOuter;                               // 0x01D0   (0x0078)  
	FString                                            StringValue;                                                // 0x0248   (0x0010)  
	FName                                              NameValue;                                                  // 0x0258   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0264   (0x0004)  MISSED
	FText                                              TextValue;                                                  // 0x0268   (0x0018)  
	bool                                               bValue;                                                     // 0x0280   (0x0001)  
	char                                               ByteValue;                                                  // 0x0281   (0x0001)  
	TEnumAsByte<ERemoteControlEnum>                    RemoteControlEnumByteValue;                                 // 0x0282   (0x0001)  
	ERemoteControlEnumClass                            RemoteControlEnumValue;                                     // 0x0283   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	FVector                                            VectorValue;                                                // 0x0288   (0x0018)  
	FRotator                                           RotatorValue;                                               // 0x02A0   (0x0018)  
	FColor                                             ColorValue;                                                 // 0x02B8   (0x0004)  
	FLinearColor                                       LinearColorValue;                                           // 0x02BC   (0x0010)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestInnerStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlTestInnerStruct
{ 
	FColor                                             Color;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x0008   (0x0010)  
	TArray<FVector>                                    ArrayOfVectors;                                             // 0x0018   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlTestObject
/// Size: 0x01A0 (416 bytes) (0x000030 - 0x0001A0) align 8 MaxSize: 0x01A0
class URemoteControlTestObject : public UObject
{ 
public:
	int32_t                                            CStyleIntArray[3];                                          // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0040   (0x0010)  
	TArray<float>                                      FloatArray;                                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,5203) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0060   (0x0050)  
	TMap<int32_t, int32_t>                             IntMap;                                                     // 0x00B0   (0x0050)  
	TMap<int32_t, FRemoteControlTestInnerStruct>       IntInnerStructMap;                                          // 0x0100   (0x0050)  
	TMap<FString, FColor>                              StringColorMap;                                             // 0x0150   (0x0050)  
};

/// Struct /Script/RemoteControl.RemoteControlEntity
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRemoteControlEntity
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TMap<FName, FString>                               UserMetadata;                                               // 0x0008   (0x0050)  
	SDK_UNDEFINED(16,5204) /* TArray<TWeakObjectPtr<URemoteControlBinding*>> */ __um(Bindings);                    // 0x0058   (0x0010)  
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0068   (0x0008)  
	FName                                              Label;                                                      // 0x0070   (0x000C)  
	FGuid                                              ID;                                                         // 0x007C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x008C   (0x0014)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlActor
/// Size: 0x00C8 (200 bytes) (0x0000A0 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FRemoteControlActor : FRemoteControlEntity
{ 
	FSoftObjectPath                                    Path;                                                       // 0x00A0   (0x0028)  
};

/// Struct /Script/RemoteControl.RCEntityWrapper
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCEntityWrapper
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathSegment
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRCFieldPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	int32_t                                            ArrayIndex;                                                 // 0x000C   (0x0004)  
	FString                                            ValuePropertyName;                                          // 0x0010   (0x0010)  
	FString                                            MapKey;                                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCFieldPathInfo
{ 
	TArray<FRCFieldPathSegment>                        Segments;                                                   // 0x0000   (0x0010)  
	uint32_t                                           PathHash;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlField
/// Size: 0x0148 (328 bytes) (0x0000A0 - 0x000148) align 8 MaxSize: 0x0148
struct FRemoteControlField : FRemoteControlEntity
{ 
	EExposedFieldType                                  FieldType;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FName                                              FieldName;                                                  // 0x00A4   (0x000C)  
	FRCFieldPathInfo                                   FieldPathInfo;                                              // 0x00B0   (0x0018)  
	SDK_UNDEFINED(80,5205) /* TSet<FRemoteControlProtocolBinding> */ __um(ProtocolBindings);                       // 0x00C8   (0x0050)  
	FSoftClassPath                                     OwnerClass;                                                 // 0x0118   (0x0028)  
	bool                                               bIsEditorOnly;                                              // 0x0140   (0x0001)  
	char                                               ActiveMasks;                                                // 0x0141   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0142   (0x0006)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProtocolBinding
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRemoteControlProtocolBinding
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              ProtocolName;                                               // 0x0010   (0x000C)  
	FGuid                                              PropertyID;                                                 // 0x001C   (0x0010)  
	FName                                              MappingPropertyName;                                        // 0x002C   (0x000C)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProperty
/// Size: 0x0150 (336 bytes) (0x000148 - 0x000150) align 8 MaxSize: 0x0150
struct FRemoteControlProperty : FRemoteControlField
{ 
	bool                                               bIsEditableInPackaged;                                      // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0149   (0x0007)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlFunction
/// Size: 0x0190 (400 bytes) (0x000148 - 0x000190) align 8 MaxSize: 0x0190
struct FRemoteControlFunction : FRemoteControlField
{ 
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0148   (0x0010)  MISSED
	bool                                               bIsCallableInPackaged;                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FSoftObjectPath                                    FunctionPath;                                               // 0x0160   (0x0028)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldMetadata
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRCFieldMetadata
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_byte
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_byte : FRCFieldMetadata
{ 
	char                                               Min;                                                        // 0x0008   (0x0001)  
	char                                               Max;                                                        // 0x0009   (0x0001)  
	char                                               DefaultValue;                                               // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint16
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_uint16 : FRCFieldMetadata
{ 
	uint16_t                                           Min;                                                        // 0x0008   (0x0002)  
	uint16_t                                           Max;                                                        // 0x000A   (0x0002)  
	uint16_t                                           DefaultValue;                                               // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint32
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_uint32 : FRCFieldMetadata
{ 
	uint32_t                                           Min;                                                        // 0x0008   (0x0004)  
	uint32_t                                           Max;                                                        // 0x000C   (0x0004)  
	uint32_t                                           DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint64
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_uint64 : FRCFieldMetadata
{ 
	uint64_t                                           Min;                                                        // 0x0008   (0x0008)  
	uint64_t                                           Max;                                                        // 0x0010   (0x0008)  
	uint64_t                                           DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_int8
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_int8 : FRCFieldMetadata
{ 
	int8_t                                             Min;                                                        // 0x0008   (0x0001)  
	int8_t                                             Max;                                                        // 0x0009   (0x0001)  
	int8_t                                             DefaultValue;                                               // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int16
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_int16 : FRCFieldMetadata
{ 
	int16_t                                            Min;                                                        // 0x0008   (0x0002)  
	int16_t                                            Max;                                                        // 0x000A   (0x0002)  
	int16_t                                            DefaultValue;                                               // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int32
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_int32 : FRCFieldMetadata
{ 
	int32_t                                            Min;                                                        // 0x0008   (0x0004)  
	int32_t                                            Max;                                                        // 0x000C   (0x0004)  
	int32_t                                            DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int64
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_int64 : FRCFieldMetadata
{ 
	int64_t                                            Min;                                                        // 0x0008   (0x0008)  
	int64_t                                            Max;                                                        // 0x0010   (0x0008)  
	int64_t                                            DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_float : FRCFieldMetadata
{ 
	float                                              Min;                                                        // 0x0008   (0x0004)  
	float                                              Max;                                                        // 0x000C   (0x0004)  
	float                                              DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_double
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_double : FRCFieldMetadata
{ 
	double                                             Min;                                                        // 0x0008   (0x0008)  
	double                                             Max;                                                        // 0x0010   (0x0008)  
	double                                             DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_FString
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_FString : FRCFieldMetadata
{ 
	FString                                            DefaultValue;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/RemoteControl.RCMetadata_FName
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_FName : FRCFieldMetadata
{ 
	FName                                              DefaultValue;                                               // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_UObject
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRCMetadata_UObject : FRCFieldMetadata
{ 
	TWeakObjectPtr<class UObject*>                     DefaultValue;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0010   (0x0028)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_UClass
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRCMetadata_UClass : FRCFieldMetadata
{ 
	TSoftObjectPtr<class UClass*>                      DefaultValue;                                               // 0x0008   (0x0030)  
};

/// Struct /Script/RemoteControl.RCMetadata_UScriptStruct
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRCMetadata_UScriptStruct : FRCFieldMetadata
{ 
	TWeakObjectPtr<class UScriptStruct*>               DefaultValue;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0010   (0x0028)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_bool
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_bool : FRCFieldMetadata
{ 
	bool                                               DefaultValue;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_FVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRCMetadata_FVector : FRCFieldMetadata
{ 
	FVector                                            DefaultValue;                                               // 0x0008   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0020   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0038   (0x0018)  
};

/// Struct /Script/RemoteControl.RemoteControlOptionalExposeArgs
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRemoteControlOptionalExposeArgs
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	FString                                            GroupName;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/RemoteControl.ColorWheelColorBase
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FColorWheelColorBase
{ 
	FVector2D                                          Position;                                                   // 0x0000   (0x0010)  
	double                                             Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/RemoteControl.ColorWheelColor
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FColorWheelColor : FColorWheelColorBase
{ 
	double                                             Alpha;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.ColorGradingWheelColor
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FColorGradingWheelColor : FColorWheelColorBase
{ 
	double                                             Luminance;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RemoteControlInstanceMaterial
/// Size: 0x01B0 (432 bytes) (0x000150 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FRemoteControlInstanceMaterial : FRemoteControlProperty
{ 
	class UClass*                                      OriginalClass;                                              // 0x0150   (0x0008)  
	FMaterialParameterInfo                             ParameterInfo;                                              // 0x0158   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	FRCFieldPathInfo                                   OriginalFieldPathInfo;                                      // 0x0170   (0x0018)  
	FSoftObjectPath                                    InstancePath;                                               // 0x0188   (0x0028)  
};

/// Struct /Script/RemoteControl.RemoteControlProtocolMapping
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRemoteControlProtocolMapping
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	TArray<char>                                       InterpolationRangePropertyData;                             // 0x0010   (0x0010)  
	TArray<char>                                       InterpolationMappingPropertyData;                           // 0x0020   (0x0010)  
	TArray<char>                                       InterpolationRangePropertyDataCache;                        // 0x0030   (0x0010)  
	TArray<char>                                       InterpolationMappingPropertyDataCache;                      // 0x0040   (0x0010)  
	int32_t                                            InterpolationMappingPropertyElementNum;                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x0054   (0x0024)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProtocolEntity
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FRemoteControlProtocolEntity
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0008   (0x0008)  
	FGuid                                              PropertyID;                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
	SDK_UNDEFINED(80,5206) /* TSet<FRemoteControlProtocolMapping> */ __um(Mappings);                               // 0x0028   (0x0050)  
	ERCMask                                            OverridenMasks;                                             // 0x0078   (0x0001)  
	ERCBindingStatus                                   BindingStatus;                                              // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x007A   (0x0006)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStruct
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRemoteControlTestStruct
{ 
	bool                                               bSomeBool;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           SomeUInt32;                                                 // 0x0004   (0x0004)  
	float                                              SomeFloat;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            SomeVector;                                                 // 0x0010   (0x0018)  
	FRotator                                           SomeRotator;                                                // 0x0028   (0x0018)  
	int32_t                                            SomeClampedInt;                                             // 0x0040   (0x0004)  
	float                                              SomeClampedFloat;                                           // 0x0044   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(URCVirtualPropertyBase) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(URCVirtualPropertyInContainer) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(URCVirtualPropertySelfContainer) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(URCVirtualPropertyContainerBase) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(URemoteControlBinding) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(URemoteControlLevelIndependantBinding) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRemoteControlInitialBindingContext) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(URemoteControlLevelDependantBinding) == 0x01C8); // 456 bytes (0x000068 - 0x0001C8)
static_assert(sizeof(FRemoteControlDeltaAPITestStruct) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(URemoteControlDeltaAPITestObject) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(URemoteControlExposeRegistry) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(URemoteControlFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRemoteControlInterceptionTestStruct) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRemoteControlInterceptionFunctionParamStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(URemoteControlInterceptionTestObject) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FRemoteControlPresetGroup) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRemoteControlPresetLayout) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FRCCachedFieldData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(URemoteControlPreset) == 0x0558); // 1368 bytes (0x000030 - 0x000558)
static_assert(sizeof(ARemoteControlPresetActor) == 0x0470); // 1136 bytes (0x000460 - 0x000470)
static_assert(sizeof(FRemoteControlTestStructInnerSimple) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRemoteControlTestStructInner) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FRemoteControlTestStructOuter) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(URemoteControlAPITestObject) == 0x02D0); // 720 bytes (0x000030 - 0x0002D0)
static_assert(sizeof(FRemoteControlTestInnerStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(URemoteControlTestObject) == 0x01A0); // 416 bytes (0x000030 - 0x0001A0)
static_assert(sizeof(FRemoteControlEntity) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRemoteControlActor) == 0x00C8); // 200 bytes (0x0000A0 - 0x0000C8)
static_assert(sizeof(FRCEntityWrapper) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRCFieldPathSegment) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRCFieldPathInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRemoteControlField) == 0x0148); // 328 bytes (0x0000A0 - 0x000148)
static_assert(sizeof(FRemoteControlProtocolBinding) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRemoteControlProperty) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(FRemoteControlFunction) == 0x0190); // 400 bytes (0x000148 - 0x000190)
static_assert(sizeof(FRCFieldMetadata) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRCMetadata_byte) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRCMetadata_uint16) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRCMetadata_uint32) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRCMetadata_uint64) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRCMetadata_int8) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRCMetadata_int16) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRCMetadata_int32) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRCMetadata_int64) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRCMetadata_float) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRCMetadata_double) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRCMetadata_FString) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRCMetadata_FName) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRCMetadata_UObject) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRCMetadata_UClass) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRCMetadata_UScriptStruct) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRCMetadata_bool) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRCMetadata_FVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRemoteControlOptionalExposeArgs) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FColorWheelColorBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FColorWheelColor) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FColorGradingWheelColor) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FRemoteControlInstanceMaterial) == 0x01B0); // 432 bytes (0x000150 - 0x0001B0)
static_assert(sizeof(FRemoteControlProtocolMapping) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRemoteControlProtocolEntity) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRemoteControlTestStruct) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(URCVirtualPropertyBase, PropertyName) == 0x0030);
static_assert(offsetof(URCVirtualPropertyBase, ID) == 0x003C);
static_assert(offsetof(URCVirtualPropertyBase, FieldId) == 0x004C);
static_assert(offsetof(URCVirtualPropertyBase, PresetWeakPtr) == 0x0058);
static_assert(offsetof(URCVirtualPropertyBase, DisplayName) == 0x0060);
static_assert(offsetof(URCVirtualPropertyBase, MetaData) == 0x0070);
static_assert(offsetof(URCVirtualPropertyInContainer, ContainerWeakPtr) == 0x00C0);
static_assert(offsetof(URCVirtualPropertySelfContainer, Bag) == 0x00C0);
static_assert(offsetof(URCVirtualPropertyContainerBase, Bag) == 0x0030);
static_assert(offsetof(URCVirtualPropertyContainerBase, PresetWeakPtr) == 0x0090);
static_assert(offsetof(URemoteControlBinding, Name) == 0x0030);
static_assert(offsetof(URemoteControlBinding, LastBoundObjectPath) == 0x0040);
static_assert(offsetof(URemoteControlLevelIndependantBinding, BoundObject) == 0x0068);
static_assert(offsetof(FRemoteControlInitialBindingContext, SupportedClass) == 0x0000);
static_assert(offsetof(FRemoteControlInitialBindingContext, ComponentName) == 0x0030);
static_assert(offsetof(FRemoteControlInitialBindingContext, SubObjectPath) == 0x0040);
static_assert(offsetof(FRemoteControlInitialBindingContext, OwnerActorClass) == 0x0050);
static_assert(offsetof(FRemoteControlInitialBindingContext, OwnerActorName) == 0x0080);
static_assert(offsetof(URemoteControlLevelDependantBinding, LevelWithLastSuccessfulResolve) == 0x0108);
static_assert(offsetof(URemoteControlLevelDependantBinding, BindingContext) == 0x0138);
static_assert(offsetof(FRemoteControlDeltaAPITestStruct, ColorValue) == 0x0000);
static_assert(offsetof(URemoteControlDeltaAPITestObject, VectorValue) == 0x0038);
static_assert(offsetof(URemoteControlDeltaAPITestObject, ColorValue) == 0x0050);
static_assert(offsetof(URemoteControlDeltaAPITestObject, StructValue) == 0x0060);
static_assert(offsetof(URemoteControlExposeRegistry, LabelToIdCache) == 0x0080);
static_assert(offsetof(FRemoteControlInterceptionFunctionParamStruct, IntArray) == 0x0008);
static_assert(offsetof(FRemoteControlInterceptionFunctionParamStruct, IntString) == 0x0018);
static_assert(offsetof(URemoteControlInterceptionTestObject, CustomStruct) == 0x0030);
static_assert(offsetof(URemoteControlInterceptionTestObject, FunctionParamStruct) == 0x0038);
static_assert(offsetof(FRemoteControlPresetGroup, Name) == 0x0000);
static_assert(offsetof(FRemoteControlPresetGroup, ID) == 0x000C);
static_assert(offsetof(FRemoteControlPresetGroup, TagColor) == 0x001C);
static_assert(offsetof(FRemoteControlPresetGroup, Fields) == 0x0030);
static_assert(offsetof(FRemoteControlPresetLayout, Groups) == 0x0000);
static_assert(offsetof(FRemoteControlPresetLayout, Owner) == 0x0010);
static_assert(offsetof(FRCCachedFieldData, LayoutGroupId) == 0x0000);
static_assert(offsetof(FRCCachedFieldData, OwnerObjectAlias) == 0x0010);
static_assert(offsetof(URemoteControlPreset, Layout) == 0x0030);
static_assert(offsetof(URemoteControlPreset, MetaData) == 0x00F0);
static_assert(offsetof(URemoteControlPreset, Bindings) == 0x0140);
static_assert(offsetof(URemoteControlPreset, ControllerContainer) == 0x0150);
static_assert(offsetof(URemoteControlPreset, PresetId) == 0x0158);
static_assert(offsetof(URemoteControlPreset, FieldCache) == 0x0168);
static_assert(offsetof(URemoteControlPreset, NameToGuidMap) == 0x01B8);
static_assert(offsetof(URemoteControlPreset, Registry) == 0x0208);
static_assert(offsetof(ARemoteControlPresetActor, Preset) == 0x0460);
static_assert(offsetof(FRemoteControlTestStructInner, InnerSimple) == 0x0004);
static_assert(offsetof(FRemoteControlTestStructOuter, RemoteControlTestStructInner) == 0x005C);
static_assert(offsetof(URemoteControlAPITestObject, IntArray) == 0x0040);
static_assert(offsetof(URemoteControlAPITestObject, StructOuterArray) == 0x0050);
static_assert(offsetof(URemoteControlAPITestObject, IntMap) == 0x00B0);
static_assert(offsetof(URemoteControlAPITestObject, StructOuterMap) == 0x0100);
static_assert(offsetof(URemoteControlAPITestObject, StringColorMap) == 0x0150);
static_assert(offsetof(URemoteControlAPITestObject, ArrayOfVectors) == 0x01A0);
static_assert(offsetof(URemoteControlAPITestObject, StaticMeshComponent) == 0x01B0);
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlTestStructOuter) == 0x01D0);
static_assert(offsetof(URemoteControlAPITestObject, StringValue) == 0x0248);
static_assert(offsetof(URemoteControlAPITestObject, NameValue) == 0x0258);
static_assert(offsetof(URemoteControlAPITestObject, TextValue) == 0x0268);
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlEnumByteValue) == 0x0282);
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlEnumValue) == 0x0283);
static_assert(offsetof(URemoteControlAPITestObject, VectorValue) == 0x0288);
static_assert(offsetof(URemoteControlAPITestObject, RotatorValue) == 0x02A0);
static_assert(offsetof(URemoteControlAPITestObject, ColorValue) == 0x02B8);
static_assert(offsetof(URemoteControlAPITestObject, LinearColorValue) == 0x02BC);
static_assert(offsetof(FRemoteControlTestInnerStruct, Color) == 0x0000);
static_assert(offsetof(FRemoteControlTestInnerStruct, FloatArray) == 0x0008);
static_assert(offsetof(FRemoteControlTestInnerStruct, ArrayOfVectors) == 0x0018);
static_assert(offsetof(URemoteControlTestObject, IntArray) == 0x0040);
static_assert(offsetof(URemoteControlTestObject, FloatArray) == 0x0050);
static_assert(offsetof(URemoteControlTestObject, IntMap) == 0x00B0);
static_assert(offsetof(URemoteControlTestObject, IntInnerStructMap) == 0x0100);
static_assert(offsetof(URemoteControlTestObject, StringColorMap) == 0x0150);
static_assert(offsetof(FRemoteControlEntity, UserMetadata) == 0x0008);
static_assert(offsetof(FRemoteControlEntity, Owner) == 0x0068);
static_assert(offsetof(FRemoteControlEntity, Label) == 0x0070);
static_assert(offsetof(FRemoteControlEntity, ID) == 0x007C);
static_assert(offsetof(FRemoteControlActor, Path) == 0x00A0);
static_assert(offsetof(FRCFieldPathSegment, Name) == 0x0000);
static_assert(offsetof(FRCFieldPathSegment, ValuePropertyName) == 0x0010);
static_assert(offsetof(FRCFieldPathSegment, MapKey) == 0x0020);
static_assert(offsetof(FRCFieldPathInfo, Segments) == 0x0000);
static_assert(offsetof(FRemoteControlField, FieldType) == 0x00A0);
static_assert(offsetof(FRemoteControlField, FieldName) == 0x00A4);
static_assert(offsetof(FRemoteControlField, FieldPathInfo) == 0x00B0);
static_assert(offsetof(FRemoteControlField, OwnerClass) == 0x0118);
static_assert(offsetof(FRemoteControlProtocolBinding, ID) == 0x0000);
static_assert(offsetof(FRemoteControlProtocolBinding, ProtocolName) == 0x0010);
static_assert(offsetof(FRemoteControlProtocolBinding, PropertyID) == 0x001C);
static_assert(offsetof(FRemoteControlProtocolBinding, MappingPropertyName) == 0x002C);
static_assert(offsetof(FRemoteControlFunction, FunctionPath) == 0x0160);
static_assert(offsetof(FRCMetadata_FString, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_FName, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_UObject, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_UClass, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_UScriptStruct, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_FVector, DefaultValue) == 0x0008);
static_assert(offsetof(FRCMetadata_FVector, MinimumValue) == 0x0020);
static_assert(offsetof(FRCMetadata_FVector, MaximumValue) == 0x0038);
static_assert(offsetof(FRemoteControlOptionalExposeArgs, DisplayName) == 0x0000);
static_assert(offsetof(FRemoteControlOptionalExposeArgs, GroupName) == 0x0010);
static_assert(offsetof(FColorWheelColorBase, Position) == 0x0000);
static_assert(offsetof(FRemoteControlInstanceMaterial, OriginalClass) == 0x0150);
static_assert(offsetof(FRemoteControlInstanceMaterial, ParameterInfo) == 0x0158);
static_assert(offsetof(FRemoteControlInstanceMaterial, OriginalFieldPathInfo) == 0x0170);
static_assert(offsetof(FRemoteControlInstanceMaterial, InstancePath) == 0x0188);
static_assert(offsetof(FRemoteControlProtocolMapping, ID) == 0x0000);
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationRangePropertyData) == 0x0010);
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationMappingPropertyData) == 0x0020);
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationRangePropertyDataCache) == 0x0030);
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationMappingPropertyDataCache) == 0x0040);
static_assert(offsetof(FRemoteControlProtocolEntity, Owner) == 0x0008);
static_assert(offsetof(FRemoteControlProtocolEntity, PropertyID) == 0x0010);
static_assert(offsetof(FRemoteControlProtocolEntity, OverridenMasks) == 0x0078);
static_assert(offsetof(FRemoteControlProtocolEntity, BindingStatus) == 0x0079);
static_assert(offsetof(FRemoteControlTestStruct, SomeVector) == 0x0010);
static_assert(offsetof(FRemoteControlTestStruct, SomeRotator) == 0x0028);
