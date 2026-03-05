
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
/// Size: 0x01 (1 bytes)
enum class EInterchangeFactoryAssetType : uint8_t
{
	EInterchangeFactoryAssetType__None                                               = 0,
	EInterchangeFactoryAssetType__Textures                                           = 1,
	EInterchangeFactoryAssetType__Materials                                          = 2,
	EInterchangeFactoryAssetType__Meshes                                             = 3,
	EInterchangeFactoryAssetType__Animations                                         = 4,
	EInterchangeFactoryAssetType__Physics                                            = 5
};

/// Enum /Script/InterchangeCore.EInterchangePipelineTask
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineTask : uint8_t
{
	EInterchangePipelineTask__PostTranslator                                         = 0,
	EInterchangePipelineTask__PostFactory                                            = 1,
	EInterchangePipelineTask__PostImport                                             = 2,
	EInterchangePipelineTask__Export                                                 = 3
};

/// Enum /Script/InterchangeCore.EInterchangePipelineContext
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineContext : uint8_t
{
	EInterchangePipelineContext__None                                                = 0,
	EInterchangePipelineContext__AssetImport                                         = 1,
	EInterchangePipelineContext__AssetReimport                                       = 2,
	EInterchangePipelineContext__SceneImport                                         = 3,
	EInterchangePipelineContext__SceneReimport                                       = 4,
	EInterchangePipelineContext__AssetCustomLODImport                                = 5,
	EInterchangePipelineContext__AssetCustomLODReimport                              = 6,
	EInterchangePipelineContext__AssetAlternateSkinningImport                        = 7,
	EInterchangePipelineContext__AssetAlternateSkinningReimport                      = 8
};

/// Enum /Script/InterchangeCore.EInterchangeResultType
/// Size: 0x01 (1 bytes)
enum class EInterchangeResultType : uint8_t
{
	EInterchangeResultType__Success                                                  = 0,
	EInterchangeResultType__Warning                                                  = 1,
	EInterchangeResultType__Error                                                    = 2
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorType
/// Size: 0x01 (1 bytes)
enum class EInterchangeTranslatorType : uint8_t
{
	EInterchangeTranslatorType__Invalid                                              = 0,
	EInterchangeTranslatorType__Assets                                               = 2,
	EInterchangeTranslatorType__Actors                                               = 4,
	EInterchangeTranslatorType__Scenes                                               = 6
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
/// Size: 0x01 (1 bytes)
enum class EInterchangeTranslatorAssetType : uint8_t
{
	EInterchangeTranslatorAssetType__None                                            = 0,
	EInterchangeTranslatorAssetType__Textures                                        = 1,
	EInterchangeTranslatorAssetType__Materials                                       = 2,
	EInterchangeTranslatorAssetType__Meshes                                          = 4,
	EInterchangeTranslatorAssetType__Animations                                      = 8
};

/// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
/// Size: 0x01 (1 bytes)
enum class EInterchangeNodeContainerType : uint8_t
{
	EInterchangeNodeContainerType__None                                              = 0,
	EInterchangeNodeContainerType__TranslatedScene                                   = 1,
	EInterchangeNodeContainerType__TranslatedAsset                                   = 2,
	EInterchangeNodeContainerType__FactoryData                                       = 3
};

/// Enum /Script/InterchangeCore.EReimportStrategyFlags
/// Size: 0x01 (1 bytes)
enum class EReimportStrategyFlags : uint8_t
{
	EReimportStrategyFlags__ApplyNoProperties                                        = 0,
	EReimportStrategyFlags__ApplyPipelineProperties                                  = 1,
	EReimportStrategyFlags__ApplyEditorChangedProperties                             = 2
};

/// Class /Script/InterchangeCore.InterchangeFactoryBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeFactoryBase : public UObject
{ 
public:
	class UInterchangeResultsContainer*                Results;                                                    // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBase.GetFactoryClass
	// class UClass* GetFactoryClass();                                                                                         // [0x3d0bde0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeSourceData
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UInterchangeSourceData : public UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceData.SetFilename
	// bool SetFilename(FString InFilename);                                                                                    // [0x7818860] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceData.GetFilename
	// FString GetFilename();                                                                                                   // [0x58bee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeWriterBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeWriterBase : public UObject
{ 
public:
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FInterchangePipelinePropertyStatePerContext
{ 
	bool                                               bVisible;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStates
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FInterchangePipelinePropertyStates
{ 
	bool                                               bLocked;                                                    // 0x0000   (0x0001)  
	FInterchangePipelinePropertyStatePerContext        ImportStates;                                               // 0x0001   (0x0001)  
	FInterchangePipelinePropertyStatePerContext        ReimportStates;                                             // 0x0002   (0x0001)  
};

/// Class /Script/InterchangeCore.InterchangePipelineBase
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 8 MaxSize: 0x00F0
class UInterchangePipelineBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UInterchangeResultsContainer*                Results;                                                    // 0x0038   (0x0008)  
	TMap<FName, FInterchangePipelinePropertyStates>    PropertiesStates;                                           // 0x0040   (0x0050)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0090   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
	// void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32_t SourceFileIndex);                         // [0x78197a0] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline
	// void ScriptedExecutePreImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas); // [0x781a250] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
	// void ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0x7819a50] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
	// void ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0x7819d60] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
	// void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas); // [0x781a070] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
	// void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);                              // [0x3eae780] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread
	// bool ScriptedCanExecuteOnAnyThread(EInterchangePipelineTask PipelineTask);                                               // [0x7819940] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
	// FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath);                                          // [0x7819460] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
	// bool DoesPropertyStatesExist(FName PropertyPath);                                                                        // [0x7819630] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeResult
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResult : public UObject
{ 
public:
	FString                                            SourceAssetName;                                            // 0x0030   (0x0010)  
	FString                                            DestinationAssetName;                                       // 0x0040   (0x0010)  
	class UClass*                                      AssetType;                                                  // 0x0050   (0x0008)  
	FString                                            InterchangeKey;                                             // 0x0058   (0x0010)  
};

/// Class /Script/InterchangeCore.InterchangeResultSuccess
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResultSuccess : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResultWarning : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultError
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResultError : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning_Generic
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{ 
public:
	FText                                              Text;                                                       // 0x0068   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultError_Generic
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultError_Generic : public UInterchangeResultError
{ 
public:
	FText                                              Text;                                                       // 0x0068   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultError_ReimportFail
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultDisplay_Generic
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{ 
public:
	FText                                              Text;                                                       // 0x0068   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultsContainer
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeResultsContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0030   (0x0028)  MISSED
	TArray<class UInterchangeResult*>                  Results;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/InterchangeCore.InterchangeTranslatorBase
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeTranslatorBase : public UObject
{ 
public:
	class UInterchangeResultsContainer*                Results;                                                    // 0x0030   (0x0008)  
	class UInterchangeSourceData*                      SourceData;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/InterchangeCore.InterchangeBaseNode
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangeBaseNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetParentUid
	// bool SetParentUid(FString ParentUid);                                                                                    // [0x781fad0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetEnabled
	// bool SetEnabled(bool bIsEnabled);                                                                                        // [0x781f5c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetDisplayLabel
	// bool SetDisplayLabel(FString DisplayName);                                                                               // [0x781fcb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetAssetName
	// bool SetAssetName(FString AssetName);                                                                                    // [0x781f390] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
	// bool RemoveTargetNodeUid(FString AssetUid);                                                                              // [0x781f6f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveAttribute
	// bool RemoveAttribute(FString NodeAttributeKey);                                                                          // [0x78221b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x781f6c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.InitializeNode
	// void InitializeNode(FString UniqueId, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType);            // [0x78222f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetVector2Attribute
	// bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue);                                                 // [0x7820070] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetUniqueID
	// FString GetUniqueID();                                                                                                   // [0x781ff30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
	// void GetTargetNodeUids(TArray<FString>& OutTargetAssets);                                                                // [0x781f970] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
	// int32_t GetTargetNodeCount();                                                                                            // [0x781faa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetStringAttribute
	// bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue);                                                    // [0x7820cf0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetParentUid
	// FString GetParentUid();                                                                                                  // [0x781fc10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetNodeContainerType
	// EInterchangeNodeContainerType GetNodeContainerType();                                                                    // [0x781f590] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
	// bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue);                                          // [0x7820530] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetInt32Attribute
	// bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue);                                                     // [0x78219f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetGuidAttribute
	// bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue);                                                        // [0x7820910] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetFloatAttribute
	// bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue);                                                       // [0x7821610] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
	// bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue);                                                     // [0x7821150] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDisplayLabel
	// FString GetDisplayLabel();                                                                                               // [0x781fdf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
	// bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue);                                                      // [0x7821dd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetAssetName
	// FString GetAssetName();                                                                                                  // [0x781f4e0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddVector2Attribute
	// bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value);                                                    // [0x7820260] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
	// bool AddTargetNodeUid(FString AssetUid);                                                                                 // [0x781f830] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddStringAttribute
	// bool AddStringAttribute(FString NodeAttributeKey, FString Value);                                                        // [0x7820f20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
	// bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value);                                             // [0x7820720] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddInt32Attribute
	// bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value);                                                        // [0x7821be0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddGuidAttribute
	// bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value);                                                           // [0x7820b00] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddFloatAttribute
	// bool AddFloatAttribute(FString NodeAttributeKey, float& Value);                                                          // [0x7821800] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
	// bool AddDoubleAttribute(FString NodeAttributeKey, double& Value);                                                        // [0x7821340] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
	// bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value);                                                         // [0x7821fc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeBaseNodeContainer
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UInterchangeBaseNodeContainer : public UObject
{ 
public:
	TMap<FString, class UInterchangeBaseNode*>         Nodes;                                                      // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0080   (0x0050)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
	// bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);                                                   // [0x7827040] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
	// void SaveToFile(FString Filename);                                                                                       // [0x7826a10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
	// void ResetChildrenCache();                                                                                               // [0x78268a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
	// void ReplaceNode(FString NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);                                      // [0x7827b10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
	// void LoadFromFile(FString Filename);                                                                                     // [0x78268e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
	// bool IsNodeUidValid(FString NodeUniqueID);                                                                               // [0x7827920] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetRoots
	// void GetRoots(TArray<FString>& RootNodes);                                                                               // [0x78277b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodes
	// void GetNodes(class UClass* ClassNode, TArray<FString>& OutNodes);                                                       // [0x78275e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
	// TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);                                                               // [0x7826d30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
	// int32_t GetNodeChildrenCount(FString NodeUniqueID);                                                                      // [0x7826f00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
	// class UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex);                                   // [0x7826b40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNode
	// class UInterchangeBaseNode* GetNode(FString NodeUniqueID);                                                               // [0x78273b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
	// class UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);                                                 // [0x7827270] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
	// void ComputeChildrenCache();                                                                                             // [0x78268c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.AddNode
	// FString AddNode(class UInterchangeBaseNode* Node);                                                                       // [0x7827d30] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeFactoryBaseNode
/// Size: 0x0148 (328 bytes) (0x000068 - 0x000148) align 8 MaxSize: 0x0148
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0068   (0x00E0)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
	// bool UnsetSkipNodeImport();                                                                                              // [0x782b500] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
	// bool UnsetForceNodeReimport();                                                                                           // [0x782a8c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
	// bool ShouldSkipNodeImport();                                                                                             // [0x782b650] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
	// bool ShouldForceNodeReimport();                                                                                          // [0x782aa10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
	// bool SetSkipNodeImport();                                                                                                // [0x782b620] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
	// bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags);                                            // [0x782b680] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
	// bool SetForceNodeReimport();                                                                                             // [0x782a9e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
	// bool SetCustomSubPath(FString AttributeValue);                                                                           // [0x782b280] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
	// bool SetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0x782aa40] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
	// bool RemoveFactoryDependencyUid(FString DependencyUid);                                                                  // [0x782acc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
	// EReimportStrategyFlags GetReimportStrategyFlags();                                                                       // [0x782b780] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
	// void GetFactoryDependency(int32_t Index, FString& OutDependency);                                                        // [0x782af40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
	// int32_t GetFactoryDependenciesCount();                                                                                   // [0x782b250] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
	// void GetFactoryDependencies(TArray<FString>& OutDependencies);                                                           // [0x782b120] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
	// bool GetCustomSubPath(FString& AttributeValue);                                                                          // [0x782b3c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
	// bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0x782ab80] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
	// bool AddFactoryDependencyUid(FString DependencyUid);                                                                     // [0x782ae00] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeSourceNode
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class UInterchangeSourceNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0068   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
	// bool SetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0x782e230] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
	// bool SetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0x782e030] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
	// bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0x782e630] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
	// bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0x782e430] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
	// bool SetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0x782da30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
	// bool SetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0x782de30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
	// bool SetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0x782dc30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.InitializeSourceNode
	// void InitializeSourceNode(FString UniqueId, FString DisplayLabel);                                                       // [0x782e830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
	// bool GetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0x782e330] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
	// bool GetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0x782e130] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
	// bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0x782e730] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
	// bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0x782e530] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
	// bool GetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0x782db30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
	// bool GetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0x782df30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
	// bool GetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0x782dd30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeUserDefinedAttributesAPI : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
	// bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName);          // [0x7832110] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
	// void GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // [0x7830b60] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
	// bool GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // [0x78311d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
	// bool GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // [0x7830dc0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
	// bool GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // [0x7831970] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
	// bool GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // [0x78315a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
	// bool GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // [0x7831d40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
	// void DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // [0x7830940] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
	// bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey); // [0x7832700] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
	// bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey); // [0x78322e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
	// bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey); // [0x7832ef0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
	// bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey); // [0x7832af0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
	// bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey); // [0x78332f0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInterchangeUserDefinedAttributeInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInterchangeFactoryBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UInterchangeSourceData) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UInterchangeWriterBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FInterchangePipelinePropertyStatePerContext) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInterchangePipelinePropertyStates) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(UInterchangePipelineBase) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UInterchangeResult) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UInterchangeResultSuccess) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UInterchangeResultWarning) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UInterchangeResultError) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UInterchangeResultWarning_Generic) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UInterchangeResultError_Generic) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UInterchangeResultError_ReimportFail) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UInterchangeResultDisplay_Generic) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UInterchangeResultsContainer) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UInterchangeTranslatorBase) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UInterchangeBaseNode) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UInterchangeBaseNodeContainer) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UInterchangeFactoryBaseNode) == 0x0148); // 328 bytes (0x000068 - 0x000148)
static_assert(sizeof(UInterchangeSourceNode) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(UInterchangeUserDefinedAttributesAPI) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FInterchangeUserDefinedAttributeInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UInterchangeFactoryBase, Results) == 0x0030);
static_assert(offsetof(UInterchangeSourceData, Filename) == 0x0030);
static_assert(offsetof(FInterchangePipelinePropertyStates, ImportStates) == 0x0001);
static_assert(offsetof(FInterchangePipelinePropertyStates, ReimportStates) == 0x0002);
static_assert(offsetof(UInterchangePipelineBase, Results) == 0x0038);
static_assert(offsetof(UInterchangePipelineBase, PropertiesStates) == 0x0040);
static_assert(offsetof(UInterchangeResult, SourceAssetName) == 0x0030);
static_assert(offsetof(UInterchangeResult, DestinationAssetName) == 0x0040);
static_assert(offsetof(UInterchangeResult, AssetType) == 0x0050);
static_assert(offsetof(UInterchangeResult, InterchangeKey) == 0x0058);
static_assert(offsetof(UInterchangeResultWarning_Generic, Text) == 0x0068);
static_assert(offsetof(UInterchangeResultError_Generic, Text) == 0x0068);
static_assert(offsetof(UInterchangeResultDisplay_Generic, Text) == 0x0068);
static_assert(offsetof(UInterchangeResultsContainer, Results) == 0x0058);
static_assert(offsetof(UInterchangeTranslatorBase, Results) == 0x0030);
static_assert(offsetof(UInterchangeTranslatorBase, SourceData) == 0x0038);
static_assert(offsetof(UInterchangeBaseNodeContainer, Nodes) == 0x0030);
static_assert(offsetof(FInterchangeUserDefinedAttributeInfo, Name) == 0x0000);
