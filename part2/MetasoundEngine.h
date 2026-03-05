
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x01 (1 bytes)
enum class EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2
};

/// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
/// Size: 0x01 (1 bytes)
enum class EMetaSoundOutputAudioFormat : uint8_t
{
	EMetaSoundOutputAudioFormat__Mono                                                = 0,
	EMetaSoundOutputAudioFormat__Stereo                                              = 1,
	EMetaSoundOutputAudioFormat__Quad                                                = 2,
	EMetaSoundOutputAudioFormat__FiveDotOne                                          = 3,
	EMetaSoundOutputAudioFormat__SevenDotOne                                         = 4,
	EMetaSoundOutputAudioFormat__COUNT                                               = 5
};

/// Enum /Script/MetasoundEngine.EMetaSoundBuilderResult
/// Size: 0x01 (1 bytes)
enum class EMetaSoundBuilderResult : uint8_t
{
	EMetaSoundBuilderResult__Succeeded                                               = 0,
	EMetaSoundBuilderResult__Failed                                                  = 1
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UMetasoundGeneratorHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0030   (0x00B8)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
	// bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x80ca5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.OnOutputValueChangedMulticast__DelegateSignature
	// void OnOutputValueChangedMulticast__DelegateSignature(FName Name, FMetaSoundOutput& output);                             // [0x1a821d0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                     // [0x80cab60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* Pack);                                                            // [0x80ca910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
	// bool IsTime(FMetaSoundOutput& output);                                                                                   // [0x80cb220] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
	// bool IsString(FMetaSoundOutput& output);                                                                                 // [0x80cb5d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
	// bool IsInt32(FMetaSoundOutput& output);                                                                                  // [0x80cbbe0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
	// bool IsFloat(FMetaSoundOutput& output);                                                                                  // [0x80cbef0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
	// bool IsBool(FMetaSoundOutput& output);                                                                                   // [0x80cb8e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
	// float GetTimeSeconds(FMetaSoundOutput& output, bool& Success);                                                           // [0x80cb030] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
	// FString GetString(FMetaSoundOutput& output, bool& Success);                                                              // [0x80cb340] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
	// int32_t GetInt32(FMetaSoundOutput& output, bool& Success);                                                               // [0x80cba00] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
	// float GetFloat(FMetaSoundOutput& output, bool& Success);                                                                 // [0x80cbd00] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
	// bool GetBool(FMetaSoundOutput& output, bool& Success);                                                                   // [0x80cb6f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<class UMetasoundGeneratorHandle*>           TrackedGenerators;                                          // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
	// bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x80cc440] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FDefaultMetaSoundAssetAutoUpdateSettings
{ 
	FSoftObjectPath                                    Metasound;                                                  // 0x0000   (0x0028)  
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0090 (144 bytes) (0x000048 - 0x000090) align 8 MaxSize: 0x0090
class UMetaSoundSettings : public UDeveloperSettings
{ 
public:
	bool                                               bAutoUpdateEnabled;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FMetasoundFrontendClassName>                AutoUpdateDenylist;                                         // 0x0050   (0x0010)  
	TArray<FDefaultMetaSoundAssetAutoUpdateSettings>   AutoUpdateAssetDenylist;                                    // 0x0060   (0x0010)  
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FDirectoryPath>                             DirectoriesToRegister;                                      // 0x0078   (0x0010)  
	int32_t                                            DenyListCacheChangeID;                                      // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMetasoundEditorGraphBase : public UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0380 (896 bytes) (0x000030 - 0x000380) align 8 MaxSize: 0x0380
class UMetaSoundPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x00A0   (0x01E0)  
	SDK_UNDEFINED(80,5185) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0280   (0x0050)  
	SDK_UNDEFINED(80,5186) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x02D0   (0x0050)  
	SDK_UNDEFINED(80,5187) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0320   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0370   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetaSoundAsyncAssetDependencies
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Metasound;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01E8 (488 bytes) (0x000038 - 0x0001E8) align 8 MaxSize: 0x01E8
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FMetaSoundAsyncAssetDependencies>           LoadingDependencies;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x198];                                     // 0x0050   (0x0198)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x80dbff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x80dc160] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UMetaSoundBuilderBase : public UObject
{ 
public:
	FMetaSoundFrontendDocumentBuilder                  Builder;                                                    // 0x0030   (0x0030)  
	bool                                               bIsAttached;                                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
	// void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // [0x80e0fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
	// void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);      // [0x80e0bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
	// void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);          // [0x80e1370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNode
	// void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);                                   // [0x80e1530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
	// void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                           // [0x80e16f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
	// void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);                                                  // [0x80e18b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
	// void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);                                                   // [0x80e1a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
	// bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle);  // [0x80e21c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
	// bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                             // [0x80e1f40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
	// bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle);                                                // [0x80e2080] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.IsPreset
	// bool IsPreset();                                                                                                         // [0x80e1ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
	// bool InterfaceIsDeclared(FName InterfaceName);                                                                           // [0x80e23e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
	// class UObject* GetReferencedPresetAsset();                                                                               // [0x80e24f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
	// void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x80e2520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
	// FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e2c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
	// void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x80e2f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
	// FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e2890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x80e3c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e3f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
	// FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e3520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
	// FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // [0x80e41a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x80e4400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e4700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
	// FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e3520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
	// FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // [0x80e4950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
	// FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);    // [0x80e32e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);          // [0x80e3720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);           // [0x80e3950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
	// FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);                          // [0x80e4bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
	// FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);                            // [0x80e4df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
	// void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e5030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
	// void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e5610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
	// void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);      // [0x80e5290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
	// void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);         // [0x80e5450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
	// void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);                  // [0x80e1c30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
	// void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);                                                              // [0x80e1df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
	// bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& output);                                                      // [0x80e5940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
	// bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input);                                                         // [0x80e5a80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNode
	// bool ContainsNode(FMetaSoundNodeHandle& Node);                                                                           // [0x80e5bc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
	// void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e6860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
	// void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e6ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
	// void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e5f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
	// TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e6520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
	// void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x80e5cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x80e61d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
	// FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, int32_t MajorVersion, EMetaSoundBuilderResult& OutResult); // [0x80e6d30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNode
	// FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult);                    // [0x80e6fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddInterface
	// void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                              // [0x80e7180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
	// FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // [0x80e7340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
	// FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // [0x80e79d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundPatchBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& OPTIONS);                                 // [0x80e8cc0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetFormat
	// void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);                            // [0x80e8fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
	// bool GetLiveUpdatesEnabled();                                                                                            // [0x80e9160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& OPTIONS);                                 // [0x80e8cc0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Audition
	// void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // [0x80e91f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x00E0 (224 bytes) (0x000038 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TMap<FName, class UMetaSoundBuilderBase*>          NamedBuilders;                                              // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,5188) /* TMap<FName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(AssetBuilders);          // 0x0090   (0x0050)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
	// bool UnregisterSourceBuilder(FName BuilderName);                                                                         // [0x80e9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
	// bool UnregisterPatchBuilder(FName BuilderName);                                                                          // [0x80e9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
	// bool UnregisterBuilder(FName BuilderName);                                                                               // [0x80e9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
	// void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);                                   // [0x80e9ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
	// void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);                                     // [0x80e9ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
	// void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);                                           // [0x80e9ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
	// bool IsInterfaceRegistered(FName InInterfaceName);                                                                       // [0x80e9d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
	// class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);                                                     // [0x80e9e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
	// class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);                                                       // [0x80e9ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
	// class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);                                                             // [0x80ea1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);                                  // [0x80ea8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType);                    // [0x80ea6d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
	// class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // [0x80eb920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
	// class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // [0x80ebe30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
	// class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // [0x80ebbb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
	// class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);                 // [0x80ec360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                            // [0x80eac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                    // [0x80eaaf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                       // [0x80ea340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType);                                     // [0x80eaf50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType);                       // [0x80ead60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);                                     // [0x80eb340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType);                       // [0x80eb130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);                                       // [0x80eb740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType);                         // [0x80eb530] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x08B0 (2224 bytes) (0x000490 - 0x0008B0) align 16 MaxSize: 0x08B0
class UMetaSoundSource : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0490   (0x0070)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0500   (0x01E0)  
	SDK_UNDEFINED(80,5189) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x06E0   (0x0050)  
	SDK_UNDEFINED(80,5190) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x0730   (0x0050)  
	SDK_UNDEFINED(80,5191) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0780   (0x0050)  
	EMetaSoundOutputAudioFormat                        OutputFormat;                                               // 0x07D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x07D1   (0x0003)  MISSED
	FGuid                                              AssetClassID;                                               // 0x07D4   (0x0010)  
	unsigned char                                      UnknownData02_7[0xCC];                                      // 0x07E4   (0x00CC)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundOutput
/// Size: 0x0018 (24 bytes) (0x00000C - 0x000018) align 8 MaxSize: 0x0018
struct FMetaSoundOutput : FSoundGeneratorOutput
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMetaSoundAssetDirectory
{ 
	FDirectoryPath                                     Directory;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 4 MaxSize: 0x0020
struct FMetaSoundBuilderNodeInputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 4 MaxSize: 0x0020
struct FMetaSoundBuilderNodeOutputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundNodeHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetaSoundNodeHandle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMetaSoundBuilderOptions
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	bool                                               bForceUniqueClassName;                                      // 0x000C   (0x0001)  
	bool                                               bAddToRegistry;                                             // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	SDK_UNDEFINED(16,5192) /* TScriptInterface<Class> */ __um(ExistingMetaSound);                                  // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMetasoundGeneratorHandle) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UMetasoundOutputBlueprintAccess) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMetaSoundOutputSubsystem) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMetaSoundSettings) == 0x0090); // 144 bytes (0x000048 - 0x000090)
static_assert(sizeof(UMetasoundEditorGraphBase) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMetaSoundPatch) == 0x0380); // 896 bytes (0x000030 - 0x000380)
static_assert(sizeof(FMetaSoundAsyncAssetDependencies) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMetaSoundAssetSubsystem) == 0x01E8); // 488 bytes (0x000038 - 0x0001E8)
static_assert(sizeof(UMetaSoundBuilderBase) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UMetaSoundPatchBuilder) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMetaSoundSourceBuilder) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UMetaSoundBuilderSubsystem) == 0x00E0); // 224 bytes (0x000038 - 0x0000E0)
static_assert(sizeof(UMetaSoundSource) == 0x08B0); // 2224 bytes (0x000490 - 0x0008B0)
static_assert(sizeof(FMetaSoundOutput) == 0x0018); // 24 bytes (0x00000C - 0x000018)
static_assert(sizeof(FMetaSoundAssetDirectory) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMetaSoundBuilderNodeInputHandle) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMetaSoundBuilderNodeOutputHandle) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMetaSoundNodeHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMetaSoundBuilderOptions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UMetaSoundOutputSubsystem, TrackedGenerators) == 0x0058);
static_assert(offsetof(FDefaultMetaSoundAssetAutoUpdateSettings, Metasound) == 0x0000);
static_assert(offsetof(UMetaSoundSettings, AutoUpdateDenylist) == 0x0050);
static_assert(offsetof(UMetaSoundSettings, AutoUpdateAssetDenylist) == 0x0060);
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 0x0078);
static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 0x00A0);
static_assert(offsetof(UMetaSoundPatch, AssetClassID) == 0x0370);
static_assert(offsetof(FMetaSoundAsyncAssetDependencies, Metasound) == 0x0008);
static_assert(offsetof(UMetaSoundAssetSubsystem, LoadingDependencies) == 0x0040);
static_assert(offsetof(UMetaSoundBuilderBase, Builder) == 0x0030);
static_assert(offsetof(UMetaSoundBuilderSubsystem, NamedBuilders) == 0x0040);
static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 0x0500);
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 0x07D0);
static_assert(offsetof(UMetaSoundSource, AssetClassID) == 0x07D4);
static_assert(offsetof(FMetaSoundAssetDirectory, Directory) == 0x0000);
static_assert(offsetof(FMetaSoundNodeHandle, NodeId) == 0x0000);
static_assert(offsetof(FMetaSoundBuilderOptions, Name) == 0x0000);
