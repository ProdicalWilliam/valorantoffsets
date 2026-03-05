
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeEngine.EInterchangePipelineConfigurationDialogResult
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineConfigurationDialogResult : uint8_t
{
	EInterchangePipelineConfigurationDialogResult__Cancel                            = 0,
	EInterchangePipelineConfigurationDialogResult__Import                            = 1,
	EInterchangePipelineConfigurationDialogResult__ImportAll                         = 2
};

/// Class /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInterchangeBlueprintPipelineBase : public UBlueprint
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangeFilePickerBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeFilePickerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
	// bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0x78a2570] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
	// bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0x78a2910] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/InterchangeEngine.InterchangePipelineConfigurationBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangePipelineConfigurationBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData); // [0x78a3450] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData); // [0x78a30f0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData); // [0x78a37b0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInterchangeTranslatorPipelines
{ 
	TSoftObjectPtr<class UClass*>                      Translator;                                                 // 0x0000   (0x0030)  
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInterchangePipelineStack
{ 
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0000   (0x0010)  
	TArray<FInterchangeTranslatorPipelines>            PerTranslatorPipelines;                                     // 0x0010   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FInterchangeImportSettings
{ 
	TMap<FName, FInterchangePipelineStack>             PipelineStacks;                                             // 0x0000   (0x0050)  
	FName                                              DefaultPipelineStack;                                       // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TSoftObjectPtr<class UClass*>                      PipelineConfigurationDialogClass;                           // 0x0060   (0x0030)  
	bool                                               bShowPipelineStacksConfigurationDialog;                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x0138 (312 bytes) (0x000098 - 0x000138) align 8 MaxSize: 0x0138
struct FInterchangeContentImportSettings : FInterchangeImportSettings
{ 
	TMap<EInterchangeTranslatorAssetType, FName>       DefaultPipelineStackOverride;                               // 0x0098   (0x0050)  
	TMap<EInterchangeTranslatorAssetType, bool>        ShowPipelineStacksConfigurationDialogOverride;              // 0x00E8   (0x0050)  
};

/// Class /Script/InterchangeEngine.InterchangeProjectSettings
/// Size: 0x0280 (640 bytes) (0x000048 - 0x000280) align 8 MaxSize: 0x0280
class UInterchangeProjectSettings : public UDeveloperSettings
{ 
public:
	FInterchangeContentImportSettings                  ContentImportSettings;                                      // 0x0048   (0x0138)  
	FInterchangeImportSettings                         SceneImportSettings;                                        // 0x0180   (0x0098)  
	TSoftObjectPtr<class UClass*>                      FilePickerClass;                                            // 0x0218   (0x0030)  
	bool                                               bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;   // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0249   (0x0007)  MISSED
	TSoftObjectPtr<class UClass*>                      GenericPipelineClass;                                       // 0x0250   (0x0030)  
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineBase
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineAsset
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UInterchangePythonPipelineAsset : public UObject
{ 
public:
	TSoftObjectPtr<class UClass*>                      PythonClass;                                                // 0x0030   (0x0030)  
	class UInterchangePythonPipelineBase*              GeneratedPipeline;                                          // 0x0060   (0x0008)  
	FString                                            JsonDefaultProperties;                                      // 0x0068   (0x0010)  
};

/// Class /Script/InterchangeEngine.InterchangeSceneImportAsset
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeSceneImportAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportData
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UInterchangeAssetImportData : public UAssetImportData
{ 
public:
	FSoftObjectPath                                    SceneImportAsset;                                           // 0x0030   (0x0028)  
	FString                                            NodeUniqueID;                                               // 0x0058   (0x0010)  
	class UInterchangeBaseNodeContainer*               NodeContainer;                                              // 0x0068   (0x0008)  
	TArray<class UObject*>                             Pipelines;                                                  // 0x0070   (0x0010)  
	class UInterchangeBaseNodeContainer*               TransientNodeContainer;                                     // 0x0080   (0x0008)  
	TArray<class UObject*>                             TransientPipelines;                                         // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0098   (0x0028)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetPipelines
	// void SetPipelines(TArray<UObject*>& InPipelines);                                                                        // [0x78a5970] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
	// void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);                                             // [0x78a5c10] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
	// FString ScriptGetFirstFilename();                                                                                        // [0x4358320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
	// TArray<FString> ScriptExtractFilenames();                                                                                // [0x3bd33e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
	// TArray<FString> ScriptExtractDisplayLabels();                                                                            // [0x3bd33e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredNode
	// class UInterchangeBaseNode* GetStoredNode(FString InNodeUniqueId);                                                       // [0x78a5730] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
	// class UInterchangeFactoryBaseNode* GetStoredFactoryNode(FString InNodeUniqueId);                                         // [0x78a55e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetPipelines
	// TArray<UObject*> GetPipelines();                                                                                         // [0x78a5ae0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
	// int32_t GetNumberOfPipelines();                                                                                          // [0x78a5aa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
	// class UInterchangeBaseNodeContainer* GetNodeContainer();                                                                 // [0x78a5f60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangePipelineStackOverride : public UObject
{ 
public:
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
	// void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);                                              // [0x78a8a60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
	// void AddPipeline(class UInterchangePipelineBase* PipelineBase);                                                          // [0x78a8a60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
	// void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);                                        // [0x78a8a60] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x01F0 (496 bytes) (0x000030 - 0x0001F0) align 16 MaxSize: 0x01F0
class UInterchangeManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0030   (0x00A8)  MISSED
	SDK_UNDEFINED(80,5177) /* TSet<UClass*> */         __um(RegisteredTranslatorsClass);                           // 0x00D8   (0x0050)  
	TMap<class UClass*, class UClass*>                 RegisteredFactoryClasses;                                   // 0x0128   (0x0050)  
	TMap<class UClass*, class UInterchangeWriterBase*> RegisteredWriters;                                          // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x01C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeManager.ImportScene
	// bool ImportScene(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0x78a9360] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ImportAsset
	// bool ImportAsset(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0x78a9830] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
	// class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);                                                      // [0x78a8fb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
	// class UInterchangeManager* GetInterchangeManagerScripted();                                                              // [0x78a9bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportScene
	// bool ExportScene(class UObject* World, bool bIsAutomated);                                                               // [0x78a91e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportAsset
	// bool ExportAsset(class UObject* Asset, bool bIsAutomated);                                                               // [0x78a91e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.CreateSourceData
	// class UInterchangeSourceData* CreateSourceData(FString InFilename);                                                      // [0x78a90b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeMeshUtilities : public UObject
{ 
public:
};

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInterchangeFilePickerParameters
{ 
	bool                                               bAllowMultipleFiles;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              Title;                                                      // 0x0008   (0x0018)  
	FString                                            DefaultPath;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInterchangeStackInfo
{ 
	FName                                              StackName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<class UInterchangePipelineBase*>            Pipelines;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPropertyData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FImportAssetParameters
{ 
	class UObject*                                     ReimportAsset;                                              // 0x0000   (0x0008)  
	int32_t                                            ReimportSourceIndex;                                        // 0x0008   (0x0004)  
	bool                                               bIsAutomated;                                               // 0x000C   (0x0001)  
	bool                                               bFollowRedirectors;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(20,5178) /* FDelegateProperty */     __um(OnAssetDone);                                          // 0x0020   (0x0014)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0034   (0x0014)  MISSED
	SDK_UNDEFINED(20,5179) /* FDelegateProperty */     __um(OnAssetsImportDone);                                   // 0x0048   (0x0014)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x005C   (0x0014)  MISSED
	SDK_UNDEFINED(20,5180) /* FDelegateProperty */     __um(OnSceneObjectDone);                                    // 0x0070   (0x0014)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x0084   (0x0014)  MISSED
	SDK_UNDEFINED(20,5181) /* FDelegateProperty */     __um(OnSceneImportDone);                                    // 0x0098   (0x0014)  
	unsigned char                                      UnknownData04_7[0x14];                                      // 0x00AC   (0x0014)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInterchangeBlueprintPipelineBase) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UInterchangeFilePickerBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UInterchangePipelineConfigurationBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FInterchangeTranslatorPipelines) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInterchangePipelineStack) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterchangeImportSettings) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FInterchangeContentImportSettings) == 0x0138); // 312 bytes (0x000098 - 0x000138)
static_assert(sizeof(UInterchangeProjectSettings) == 0x0280); // 640 bytes (0x000048 - 0x000280)
static_assert(sizeof(UInterchangePythonPipelineBase) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UInterchangePythonPipelineAsset) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UInterchangeSceneImportAsset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UInterchangeAssetImportData) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UInterchangePipelineStackOverride) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UInterchangeManager) == 0x01F0); // 496 bytes (0x000030 - 0x0001F0)
static_assert(sizeof(UInterchangeMeshUtilities) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FInterchangeFilePickerParameters) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInterchangeStackInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPropertyData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FImportAssetParameters) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(offsetof(FInterchangeTranslatorPipelines, Translator) == 0x0000);
static_assert(offsetof(FInterchangeTranslatorPipelines, Pipelines) == 0x0030);
static_assert(offsetof(FInterchangePipelineStack, Pipelines) == 0x0000);
static_assert(offsetof(FInterchangePipelineStack, PerTranslatorPipelines) == 0x0010);
static_assert(offsetof(FInterchangeImportSettings, PipelineStacks) == 0x0000);
static_assert(offsetof(FInterchangeImportSettings, DefaultPipelineStack) == 0x0050);
static_assert(offsetof(FInterchangeImportSettings, PipelineConfigurationDialogClass) == 0x0060);
static_assert(offsetof(FInterchangeContentImportSettings, DefaultPipelineStackOverride) == 0x0098);
static_assert(offsetof(FInterchangeContentImportSettings, ShowPipelineStacksConfigurationDialogOverride) == 0x00E8);
static_assert(offsetof(UInterchangeProjectSettings, ContentImportSettings) == 0x0048);
static_assert(offsetof(UInterchangeProjectSettings, SceneImportSettings) == 0x0180);
static_assert(offsetof(UInterchangeProjectSettings, FilePickerClass) == 0x0218);
static_assert(offsetof(UInterchangeProjectSettings, GenericPipelineClass) == 0x0250);
static_assert(offsetof(UInterchangePythonPipelineAsset, PythonClass) == 0x0030);
static_assert(offsetof(UInterchangePythonPipelineAsset, GeneratedPipeline) == 0x0060);
static_assert(offsetof(UInterchangePythonPipelineAsset, JsonDefaultProperties) == 0x0068);
static_assert(offsetof(UInterchangeAssetImportData, SceneImportAsset) == 0x0030);
static_assert(offsetof(UInterchangeAssetImportData, NodeUniqueID) == 0x0058);
static_assert(offsetof(UInterchangeAssetImportData, NodeContainer) == 0x0068);
static_assert(offsetof(UInterchangeAssetImportData, Pipelines) == 0x0070);
static_assert(offsetof(UInterchangeAssetImportData, TransientNodeContainer) == 0x0080);
static_assert(offsetof(UInterchangeAssetImportData, TransientPipelines) == 0x0088);
static_assert(offsetof(UInterchangePipelineStackOverride, OverridePipelines) == 0x0030);
static_assert(offsetof(UInterchangeManager, RegisteredFactoryClasses) == 0x0128);
static_assert(offsetof(UInterchangeManager, RegisteredWriters) == 0x0178);
static_assert(offsetof(FInterchangeFilePickerParameters, Title) == 0x0008);
static_assert(offsetof(FInterchangeFilePickerParameters, DefaultPath) == 0x0020);
static_assert(offsetof(FInterchangeStackInfo, StackName) == 0x0000);
static_assert(offsetof(FInterchangeStackInfo, Pipelines) == 0x0010);
static_assert(offsetof(FImportAssetParameters, ReimportAsset) == 0x0000);
static_assert(offsetof(FImportAssetParameters, OverridePipelines) == 0x0010);
