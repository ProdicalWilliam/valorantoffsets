
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldNotification
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x01 (1 bytes)
enum class EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate                                                    = 0,
	EMVVMExecutionMode__Delayed                                                      = 1,
	EMVVMExecutionMode__Tick                                                         = 2,
	EMVVMExecutionMode__DelayedWhenSharedElseImmediate                               = 3
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x01 (1 bytes)
enum class EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination                                           = 0,
	EMVVMBindingMode__OneWayToDestination                                            = 1,
	EMVVMBindingMode__TwoWay                                                         = 2,
	EMVVMBindingMode__OneTimeToSource                                                = 3,
	EMVVMBindingMode__OneWayToSource                                                 = 4
};

/// Class /Script/ModelViewViewModel.MVVMConversionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x51e3800] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelContextResolver
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMVVMViewModelContextResolver : public UObject
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
	// TScriptInterface<Class> K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);                    // [0x1a821d0] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ModelViewViewModel.MVVMGameSubsystem
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{ 
public:
	class UMVVMViewModelCollectionObject*              ViewModelCollection;                                        // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
	// class UMVVMViewModelCollectionObject* GetViewModelCollection();                                                          // [0x3e7e930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UMVVMSubsystem : public UEngineSubsystem
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	// class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);                                                // [0x51e8210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	// TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);                      // [0x51e7cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	// FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, FMVVMBindingName BindingName, class UClass* Accessor); // [0x51e79d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	// class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                    // [0x42e31f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	// bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);                            // [0x51e7fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UMVVMViewModelBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	// bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue);                                                          // [0x51ea0b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x51e9300] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x51e9130] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x51e9600] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMVVMViewModelContext
{ 
	class UClass*                                      ContextClass;                                               // 0x0000   (0x0008)  
	FName                                              ContextName;                                                // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMVVMViewModelContextInstance
{ 
	FMVVMViewModelContext                              Context;                                                    // 0x0000   (0x0018)  
	class UMVVMViewModelBase*                          Instance;                                                   // 0x0018   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMVVMViewModelCollection
{ 
	TArray<FMVVMViewModelContextInstance>              ViewModelInstances;                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0010   (0x0018)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UMVVMViewModelCollectionObject : public UObject
{ 
public:
	FMVVMViewModelCollection                           ViewModelCollection;                                        // 0x0030   (0x0028)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.Reset
	// void Reset();                                                                                                            // [0x51ea800] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	// bool RemoveViewModel(FMVVMViewModelContext Context);                                                                     // [0x51eaa40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	// int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);                                                 // [0x51ea850] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	// class UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                          // [0x51eaf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	// class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass);                               // [0x51eade0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	// bool AddViewModelInstance(FMVVMViewModelContext Context, class UMVVMViewModelBase* ViewModel);                           // [0x51eac10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Class /Script/ModelViewViewModel.MVVMBindingSubsystem
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UMVVMBindingSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0038   (0x0060)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMVVMViewSource
{ 
	class UObject*                                     Source;                                                     // 0x0000   (0x0008)  
	FName                                              SourceName;                                                 // 0x0008   (0x000C)  
	int32_t                                            RegisteredCount;                                            // 0x0014   (0x0004)  
	bool                                               bCreatedSource;                                             // 0x0018   (0x0001)  
	bool                                               bSetManually;                                               // 0x0019   (0x0001)  
	bool                                               bAssignedToUserWidgetProperty;                              // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMVVMView : public UUserWidgetExtension
{ 
public:
	class UMVVMViewClass*                              ClassExtension;                                             // 0x0030   (0x0008)  
	TArray<FMVVMViewSource>                            Sources;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
	bool                                               bLogBinding;                                                // 0x0058   (0x0001)  
	bool                                               bConstructed;                                               // 0x0059   (0x0001)  
	bool                                               bSourcesInitialized;                                        // 0x005A   (0x0001)  
	bool                                               bBindingsInitialized;                                       // 0x005B   (0x0001)  
	bool                                               bHasEveryTickBinding;                                       // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x005D   (0x0003)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeSources
	// void UninitializeSources();                                                                                              // [0x51ecca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeBindings
	// void UninitializeBindings();                                                                                             // [0x51ecc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModelByClass
	// bool SetViewModelByClass(TScriptInterface<Class> NewValue);                                                              // [0x51ec7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	// bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                               // [0x51ec8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeSources
	// void InitializeSources();                                                                                                // [0x51eccd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeBindings
	// void InitializeBindings();                                                                                               // [0x51ecc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.GetViewModel
	// TScriptInterface<Class> GetViewModel(FName ViewModelName);                                                               // [0x51ecac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreSourcesInitialized
	// bool AreSourcesInitialized();                                                                                            // [0x51ecc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreBindingsInitialized
	// bool AreBindingsInitialized();                                                                                           // [0x51ecc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FMVVMVCompiledFieldPath
{ 
	int16_t                                            StartIndex;                                                 // 0x0000   (0x0002)  
	int16_t                                            Num;                                                        // 0x0002   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMVVMViewClass_SourceCreator
{ 
	class UClass*                                      ExpectedSourceType;                                         // 0x0000   (0x0008)  
	class UMVVMViewModelContextResolver*               Resolver;                                                   // 0x0008   (0x0008)  
	FMVVMViewModelContext                              GlobalViewModelInstance;                                    // 0x0010   (0x0018)  
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0028   (0x0004)  
	FName                                              PropertyName;                                               // 0x002C   (0x000C)  
	FName                                              ParentSourceName;                                           // 0x0038   (0x000C)  
	char                                               Flags;                                                      // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FMVVMVCompiledFieldId
{ 
	int16_t                                            FieldIdIndex;                                               // 0x0000   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000E (14 bytes) (0x000000 - 0x00000E) align 2 MaxSize: 0x000E
struct FMVVMVCompiledBinding
{ 
	FMVVMVCompiledFieldPath                            SourceFieldPath;                                            // 0x0000   (0x0004)  
	FMVVMVCompiledFieldPath                            DestinationFieldPath;                                       // 0x0004   (0x0004)  
	FMVVMVCompiledFieldPath                            ConversionFunctionFieldPath;                                // 0x0008   (0x0004)  
	char                                               Flags;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000D   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FMVVMViewClass_CompiledBinding
{ 
	FMVVMVCompiledFieldId                              FieldId;                                                    // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              SourcePropertyName;                                         // 0x0004   (0x000C)  
	FMVVMVCompiledBinding                              Binding;                                                    // 0x0010   (0x000E)  
	EMVVMExecutionMode                                 ExecutionMode;                                              // 0x001E   (0x0001)  
	int8_t                                             EvaluateSourceCreatorIndex;                                 // 0x001F   (0x0001)  
	char                                               Flags;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{ 
	int16_t                                            Index;                                                      // 0x0000   (0x0002)  
	bool                                               bIsObjectProperty : 1;                                      // 0x0002:0 (0x0001)  
	bool                                               bIsScriptStructProperty : 1;                                // 0x0002:1 (0x0001)  
	bool                                               bIsProperty : 1;                                            // 0x0002:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0003   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMVVMVCompiledFields
{ 
	class UStruct*                                     ClassOrScriptStruct;                                        // 0x0000   (0x0008)  
	int16_t                                            LibraryStartIndex;                                          // 0x0008   (0x0002)  
	int16_t                                            NumberOfProperties;                                         // 0x000A   (0x0002)  
	int16_t                                            NumberOfFunctions;                                          // 0x000C   (0x0002)  
	int16_t                                            NumberOfFieldIds;                                           // 0x000E   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMVVMCompiledBindingLibrary
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<class UFunction*>                           LoadedFunctions;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0020   (0x0010)  MISSED
	TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                                 // 0x0030   (0x0010)  
	TArray<FMVVMVCompiledFields>                       CompiledFields;                                             // 0x0040   (0x0010)  
	TArray<FName>                                      CompiledFieldNames;                                         // 0x0050   (0x0010)  
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
public:
	TArray<FMVVMViewClass_SourceCreator>               SourceCreators;                                             // 0x0030   (0x0010)  
	TArray<FMVVMViewClass_CompiledBinding>             CompiledBindings;                                           // 0x0040   (0x0010)  
	FMVVMCompiledBindingLibrary                        BindingLibrary;                                             // 0x0050   (0x0060)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B0   (0x0004)  MISSED
	bool                                               bInitializeSourcesOnConstruct;                              // 0x00B4   (0x0001)  
	bool                                               bInitializeBindingsOnConstruct;                             // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00B6   (0x0002)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMVVMBindingName
{ 
	FName                                              BindingName;                                                // 0x0000   (0x000C)  
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMVVMAvailableBinding
{ 
	FMVVMBindingName                                   BindingName;                                                // 0x0000   (0x000C)  
	bool                                               bIsReadable;                                                // 0x000C   (0x0001)  
	bool                                               bIsWritable;                                                // 0x000D   (0x0001)  
	bool                                               bHasNotify;                                                 // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000F   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMVVMEventField
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMVVMConversionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMVVMViewModelContextResolver) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMVVMGameSubsystem) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UMVVMSubsystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UMVVMViewModelBase) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FMVVMViewModelContext) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMVVMViewModelContextInstance) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMVVMViewModelCollection) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMVVMViewModelCollectionObject) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UMVVMViewModelBlueprintGeneratedClass) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(UMVVMBindingSubsystem) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(FMVVMViewSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMVVMView) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FMVVMVCompiledFieldPath) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMVVMViewClass_SourceCreator) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMVVMVCompiledFieldId) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FMVVMVCompiledBinding) == 0x000E); // 14 bytes (0x000000 - 0x00000E)
static_assert(sizeof(FMVVMViewClass_CompiledBinding) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMVVMVCompiledFields) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMVVMCompiledBindingLibrary) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UMVVMViewClass) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FMVVMBindingName) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMVVMAvailableBinding) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMVVMEventField) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMVVMGameSubsystem, ViewModelCollection) == 0x0038);
static_assert(offsetof(FMVVMViewModelContext, ContextClass) == 0x0000);
static_assert(offsetof(FMVVMViewModelContext, ContextName) == 0x0008);
static_assert(offsetof(FMVVMViewModelContextInstance, Context) == 0x0000);
static_assert(offsetof(FMVVMViewModelContextInstance, Instance) == 0x0018);
static_assert(offsetof(FMVVMViewModelCollection, ViewModelInstances) == 0x0000);
static_assert(offsetof(UMVVMViewModelCollectionObject, ViewModelCollection) == 0x0030);
static_assert(offsetof(FMVVMViewSource, Source) == 0x0000);
static_assert(offsetof(FMVVMViewSource, SourceName) == 0x0008);
static_assert(offsetof(UMVVMView, ClassExtension) == 0x0030);
static_assert(offsetof(UMVVMView, Sources) == 0x0038);
static_assert(offsetof(FMVVMViewClass_SourceCreator, ExpectedSourceType) == 0x0000);
static_assert(offsetof(FMVVMViewClass_SourceCreator, Resolver) == 0x0008);
static_assert(offsetof(FMVVMViewClass_SourceCreator, GlobalViewModelInstance) == 0x0010);
static_assert(offsetof(FMVVMViewClass_SourceCreator, FieldPath) == 0x0028);
static_assert(offsetof(FMVVMViewClass_SourceCreator, PropertyName) == 0x002C);
static_assert(offsetof(FMVVMViewClass_SourceCreator, ParentSourceName) == 0x0038);
static_assert(offsetof(FMVVMVCompiledBinding, SourceFieldPath) == 0x0000);
static_assert(offsetof(FMVVMVCompiledBinding, DestinationFieldPath) == 0x0004);
static_assert(offsetof(FMVVMVCompiledBinding, ConversionFunctionFieldPath) == 0x0008);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, FieldId) == 0x0000);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, SourcePropertyName) == 0x0004);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Binding) == 0x0010);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, ExecutionMode) == 0x001E);
static_assert(offsetof(FMVVMVCompiledFields, ClassOrScriptStruct) == 0x0000);
static_assert(offsetof(FMVVMCompiledBindingLibrary, LoadedFunctions) == 0x0010);
static_assert(offsetof(FMVVMCompiledBindingLibrary, FieldPaths) == 0x0030);
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFields) == 0x0040);
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFieldNames) == 0x0050);
static_assert(offsetof(UMVVMViewClass, SourceCreators) == 0x0030);
static_assert(offsetof(UMVVMViewClass, CompiledBindings) == 0x0040);
static_assert(offsetof(UMVVMViewClass, BindingLibrary) == 0x0050);
static_assert(offsetof(FMVVMBindingName, BindingName) == 0x0000);
static_assert(offsetof(FMVVMAvailableBinding, BindingName) == 0x0000);
