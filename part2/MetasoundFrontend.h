
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x01 (1 bytes)
enum class ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded                                                       = 0,
	ESetParamResult__Failed                                                          = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04 (4 bytes)
enum class EMetasoundFrontendVertexAccessType : uint32_t
{
	EMetasoundFrontendVertexAccessType__Reference                                    = 0,
	EMetasoundFrontendVertexAccessType__Value                                        = 1,
	EMetasoundFrontendVertexAccessType__Unset                                        = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External                                            = 0,
	EMetasoundFrontendClassType__Graph                                               = 1,
	EMetasoundFrontendClassType__Input                                               = 2,
	EMetasoundFrontendClassType__Output                                              = 3,
	EMetasoundFrontendClassType__Literal                                             = 4,
	EMetasoundFrontendClassType__Variable                                            = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor                            = 6,
	EMetasoundFrontendClassType__VariableAccessor                                    = 7,
	EMetasoundFrontendClassType__VariableMutator                                     = 8,
	EMetasoundFrontendClassType__Template                                            = 9,
	EMetasoundFrontendClassType__Invalid                                             = 10
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible                            = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden                             = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None                                              = 0,
	EMetasoundFrontendLiteralType__Boolean                                           = 1,
	EMetasoundFrontendLiteralType__Integer                                           = 2,
	EMetasoundFrontendLiteralType__Float                                             = 3,
	EMetasoundFrontendLiteralType__String                                            = 4,
	EMetasoundFrontendLiteralType__UObject                                           = 5,
	EMetasoundFrontendLiteralType__NoneArray                                         = 6,
	EMetasoundFrontendLiteralType__BooleanArray                                      = 7,
	EMetasoundFrontendLiteralType__IntegerArray                                      = 8,
	EMetasoundFrontendLiteralType__FloatArray                                        = 9,
	EMetasoundFrontendLiteralType__StringArray                                       = 10,
	EMetasoundFrontendLiteralType__UObjectArray                                      = 11,
	EMetasoundFrontendLiteralType__Invalid                                           = 12
};

/// Class /Script/MetasoundFrontend.MetaSoundDocumentInterface
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMetaSoundDocumentInterface : public UInterface
{ 
public:
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UMetasoundParameterPack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetTrigger
	// ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);                                                      // [0x7a81e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetString
	// ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);                                      // [0x7a82010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetInt
	// ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists);                                         // [0x7a825d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetFloat
	// ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);                                         // [0x7a82310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetBool
	// ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);                                           // [0x7a82860] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	// class UMetasoundParameterPack* MakeMetasoundParameterPack();                                                             // [0x7a82b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasTrigger
	// bool HasTrigger(FName ParameterName);                                                                                    // [0x7a80dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasString
	// bool HasString(FName ParameterName);                                                                                     // [0x7a80f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasInt
	// bool HasInt(FName ParameterName);                                                                                        // [0x7a81160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasFloat
	// bool HasFloat(FName ParameterName);                                                                                      // [0x7a81030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasBool
	// bool HasBool(FName ParameterName);                                                                                       // [0x7a81290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetTrigger
	// bool GetTrigger(FName ParameterName, ESetParamResult& Result);                                                           // [0x7a813c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetString
	// FString GetString(FName ParameterName, ESetParamResult& Result);                                                         // [0x7a815b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetInt
	// int32_t GetInt(FName ParameterName, ESetParamResult& Result);                                                            // [0x7a81a30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetFloat
	// float GetFloat(FName ParameterName, ESetParamResult& Result);                                                            // [0x7a81840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetBool
	// bool GetBool(FName ParameterName, ESetParamResult& Result);                                                              // [0x7a81c20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMetasoundFrontendVersionNumber
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMetasoundFrontendVersion
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FMetasoundFrontendVersionNumber                    Number;                                                     // 0x000C   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMetasoundFrontendDocumentMetadata
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0000   (0x0014)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FMetasoundFrontendClassName
{ 
	FName                                              Namespace;                                                  // 0x0000   (0x000C)  
	FName                                              Name;                                                       // 0x000C   (0x000C)  
	FName                                              Variant;                                                    // 0x0018   (0x000C)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMetasoundFrontendClassMetadata
{ 
	FMetasoundFrontendClassName                        ClassName;                                                  // 0x0000   (0x0024)  
	FMetasoundFrontendVersionNumber                    Version;                                                    // 0x0024   (0x0008)  
	EMetasoundFrontendClassType                        Type;                                                       // 0x002C   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x002D   (0x0001)  
	bool                                               bAutoUpdateManagesInterface;                                // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
	FGuid                                              ChangeId;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FMetasoundFrontendVertex
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              TypeName;                                                   // 0x000C   (0x000C)  
	FGuid                                              VertexID;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x003C (60 bytes) (0x000028 - 0x00003C) align 4 MaxSize: 0x003C
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{ 
	FGuid                                              NodeId;                                                     // 0x0028   (0x0010)  
	EMetasoundFrontendVertexAccessType                 AccessType;                                                 // 0x0038   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendLiteral
{ 
	EMetasoundFrontendLiteralType                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AsNumDefault;                                               // 0x0004   (0x0004)  
	TArray<bool>                                       AsBoolean;                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    AsInteger;                                                  // 0x0018   (0x0010)  
	TArray<float>                                      AsFloat;                                                    // 0x0028   (0x0010)  
	TArray<FString>                                    AsString;                                                   // 0x0038   (0x0010)  
	TArray<class UObject*>                             AsUObject;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x0098 (152 bytes) (0x00003C - 0x000098) align 8 MaxSize: 0x0098
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x003C   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0040   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x003C (60 bytes) (0x00003C - 0x00003C) align 4 MaxSize: 0x003C
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{ 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMetasoundFrontendClassEnvironmentVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              TypeName;                                                   // 0x000C   (0x000C)  
	bool                                               bIsRequired;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMetasoundFrontendClassInterface
{ 
	TArray<FMetasoundFrontendClassInput>               Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendClassOutput>              Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendClassEnvironmentVariable> environment;                                                // 0x0020   (0x0010)  
	FGuid                                              ChangeId;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FMetasoundFrontendClass
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FMetasoundFrontendClassMetadata                    MetaData;                                                   // 0x0018   (0x0040)  
	FMetasoundFrontendClassInterface                   Interface;                                                  // 0x0058   (0x0040)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendNodeInterface
{ 
	TArray<FMetasoundFrontendVertex>                   Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   environment;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendVertexLiteral
{ 
	FGuid                                              VertexID;                                                   // 0x0000   (0x0010)  
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0010   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FMetasoundFrontendNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ClassID;                                                    // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FMetasoundFrontendNodeInterface                    Interface;                                                  // 0x0030   (0x0030)  
	TArray<FMetasoundFrontendVertexLiteral>            InputLiterals;                                              // 0x0060   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMetasoundFrontendEdge
{ 
	FGuid                                              FromNodeID;                                                 // 0x0000   (0x0010)  
	FGuid                                              FromVertexID;                                               // 0x0010   (0x0010)  
	FGuid                                              ToNodeID;                                                   // 0x0020   (0x0010)  
	FGuid                                              ToVertexID;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FMetasoundFrontendVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              TypeName;                                                   // 0x000C   (0x000C)  
	FMetasoundFrontendLiteral                          Literal;                                                    // 0x0018   (0x0058)  
	FGuid                                              ID;                                                         // 0x0070   (0x0010)  
	FGuid                                              VariableNodeID;                                             // 0x0080   (0x0010)  
	FGuid                                              MutatorNodeID;                                              // 0x0090   (0x0010)  
	TArray<FGuid>                                      AccessorNodeIDs;                                            // 0x00A0   (0x0010)  
	TArray<FGuid>                                      DeferredAccessorNodeIDs;                                    // 0x00B0   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendGraph
{ 
	TArray<FMetasoundFrontendNode>                     Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendEdge>                     Edges;                                                      // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVariable>                 Variables;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendGraphClassPresetOptions
{ 
	bool                                               bIsPreset;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,5182) /* TSet<FName> */           __um(InputsInheritingDefault);                              // 0x0008   (0x0050)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0120 (288 bytes) (0x000098 - 0x000120) align 8 MaxSize: 0x0120
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{ 
	FMetasoundFrontendGraph                            Graph;                                                      // 0x0098   (0x0030)  
	FMetasoundFrontendGraphClassPresetOptions          PresetOptions;                                              // 0x00C8   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01E0 (480 bytes) (0x000000 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FMetasoundFrontendDocument
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FMetasoundFrontendDocumentMetadata                 MetaData;                                                   // 0x0010   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(80,5183) /* TSet<FMetasoundFrontendVersion> */ __um(Interfaces);                                 // 0x0028   (0x0050)  
	FMetasoundFrontendGraphClass                       RootGraph;                                                  // 0x0078   (0x0120)  
	TArray<FMetasoundFrontendGraphClass>               Subgraphs;                                                  // 0x0198   (0x0010)  
	TArray<FMetasoundFrontendClass>                    Dependencies;                                               // 0x01A8   (0x0010)  
	FMetasoundFrontendVersion                          ArchetypeVersion;                                           // 0x01B8   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
	TArray<FMetasoundFrontendVersion>                  InterfaceVersions;                                          // 0x01D0   (0x0010)  
};

/// Class /Script/MetasoundFrontend.MetaSoundBuilderDocument
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000220) align 8 MaxSize: 0x0220
class UMetaSoundBuilderDocument : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FMetasoundFrontendDocument                         Document;                                                   // 0x0038   (0x01E0)  
	class UClass*                                      MetaSoundUClass;                                            // 0x0218   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMetasoundFrontendVertexHandle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{ 
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0000   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendEdgeStyle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
	FName                                              OutputName;                                                 // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMetasoundFrontendGraphStyle
{ 
	bool                                               bIsGraphEditable;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMetasoundFrontendEdgeStyle>                EdgeStyles;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendVertexMetadata
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x0098 (152 bytes) (0x00003C - 0x000098) align 8 MaxSize: 0x0098
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x003C   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0040   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendInterfaceStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FMetasoundFrontendInterfaceVertexBinding
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x000C)  
	FName                                              InputName;                                                  // 0x000C   (0x000C)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMetasoundFrontendInterfaceBinding
{ 
	FMetasoundFrontendVersion                          OutputInterfaceVersion;                                     // 0x0000   (0x0014)  
	FMetasoundFrontendVersion                          InputInterfaceVersion;                                      // 0x0014   (0x0014)  
	int32_t                                            BindingPriority;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FMetasoundFrontendInterfaceVertexBinding>   VertexBindings;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMetasoundFrontendInterfaceUClassOptions
{ 
	FTopLevelAssetPath                                 ClassPath;                                                  // 0x0000   (0x0018)  
	bool                                               bIsModifiable;                                              // 0x0018   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0040   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FMetasoundFrontendInterfaceUClassOptions>   UClassOptions;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetaSoundFrontendDocumentBuilder
{ 
	SDK_UNDEFINED(16,5184) /* TScriptInterface<Class> */ __um(DocumentInterface);                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMetaSoundDocumentInterface) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMetasoundParameterPack) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FMetasoundFrontendVersionNumber) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMetasoundFrontendVersion) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMetasoundFrontendDocumentMetadata) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMetasoundFrontendClassName) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMetasoundFrontendClassMetadata) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendVertex) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMetasoundFrontendClassVertex) == 0x003C); // 60 bytes (0x000028 - 0x00003C)
static_assert(sizeof(FMetasoundFrontendLiteral) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMetasoundFrontendClassInput) == 0x0098); // 152 bytes (0x00003C - 0x000098)
static_assert(sizeof(FMetasoundFrontendClassOutput) == 0x003C); // 60 bytes (0x00003C - 0x00003C)
static_assert(sizeof(FMetasoundFrontendClassEnvironmentVariable) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMetasoundFrontendClassInterface) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendClass) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FMetasoundFrontendNodeInterface) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMetasoundFrontendVertexLiteral) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMetasoundFrontendNode) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FMetasoundFrontendEdge) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendVariable) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FMetasoundFrontendGraph) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMetasoundFrontendGraphClassPresetOptions) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMetasoundFrontendGraphClass) == 0x0120); // 288 bytes (0x000098 - 0x000120)
static_assert(sizeof(FMetasoundFrontendDocument) == 0x01E0); // 480 bytes (0x000000 - 0x0001E0)
static_assert(sizeof(UMetaSoundBuilderDocument) == 0x0220); // 544 bytes (0x000030 - 0x000220)
static_assert(sizeof(FMetasoundFrontendVertexHandle) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMetasoundFrontendNodeStyleDisplay) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendNodeStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendEdgeStyleLiteralColorPair) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMetasoundFrontendEdgeStyle) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMetasoundFrontendGraphStyle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMetasoundFrontendVertexMetadata) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClassStyleDisplay) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClassVariable) == 0x0098); // 152 bytes (0x00003C - 0x000098)
static_assert(sizeof(FMetasoundFrontendInterfaceStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendInterfaceVertexBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMetasoundFrontendInterfaceBinding) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendInterfaceUClassOptions) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMetasoundFrontendInterface) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(FMetasoundFrontendClassStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetaSoundFrontendDocumentBuilder) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMetasoundFrontendVersion, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVersion, Number) == 0x000C);
static_assert(offsetof(FMetasoundFrontendDocumentMetadata, Version) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassName, Namespace) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassName, Name) == 0x000C);
static_assert(offsetof(FMetasoundFrontendClassName, Variant) == 0x0018);
static_assert(offsetof(FMetasoundFrontendClassMetadata, ClassName) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassMetadata, Version) == 0x0024);
static_assert(offsetof(FMetasoundFrontendClassMetadata, Type) == 0x002C);
static_assert(offsetof(FMetasoundFrontendClassMetadata, ChangeId) == 0x0030);
static_assert(offsetof(FMetasoundFrontendVertex, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVertex, TypeName) == 0x000C);
static_assert(offsetof(FMetasoundFrontendVertex, VertexID) == 0x0018);
static_assert(offsetof(FMetasoundFrontendClassVertex, NodeId) == 0x0028);
static_assert(offsetof(FMetasoundFrontendClassVertex, AccessType) == 0x0038);
static_assert(offsetof(FMetasoundFrontendLiteral, Type) == 0x0000);
static_assert(offsetof(FMetasoundFrontendLiteral, AsBoolean) == 0x0008);
static_assert(offsetof(FMetasoundFrontendLiteral, AsInteger) == 0x0018);
static_assert(offsetof(FMetasoundFrontendLiteral, AsFloat) == 0x0028);
static_assert(offsetof(FMetasoundFrontendLiteral, AsString) == 0x0038);
static_assert(offsetof(FMetasoundFrontendLiteral, AsUObject) == 0x0048);
static_assert(offsetof(FMetasoundFrontendClassInput, DefaultLiteral) == 0x0040);
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, TypeName) == 0x000C);
static_assert(offsetof(FMetasoundFrontendClassInterface, Inputs) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassInterface, Outputs) == 0x0010);
static_assert(offsetof(FMetasoundFrontendClassInterface, environment) == 0x0020);
static_assert(offsetof(FMetasoundFrontendClassInterface, ChangeId) == 0x0030);
static_assert(offsetof(FMetasoundFrontendClass, ID) == 0x0008);
static_assert(offsetof(FMetasoundFrontendClass, MetaData) == 0x0018);
static_assert(offsetof(FMetasoundFrontendClass, Interface) == 0x0058);
static_assert(offsetof(FMetasoundFrontendNodeInterface, Inputs) == 0x0000);
static_assert(offsetof(FMetasoundFrontendNodeInterface, Outputs) == 0x0010);
static_assert(offsetof(FMetasoundFrontendNodeInterface, environment) == 0x0020);
static_assert(offsetof(FMetasoundFrontendVertexLiteral, VertexID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVertexLiteral, Value) == 0x0010);
static_assert(offsetof(FMetasoundFrontendNode, ID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendNode, ClassID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendNode, Name) == 0x0020);
static_assert(offsetof(FMetasoundFrontendNode, Interface) == 0x0030);
static_assert(offsetof(FMetasoundFrontendNode, InputLiterals) == 0x0060);
static_assert(offsetof(FMetasoundFrontendEdge, FromNodeID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdge, FromVertexID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendEdge, ToNodeID) == 0x0020);
static_assert(offsetof(FMetasoundFrontendEdge, ToVertexID) == 0x0030);
static_assert(offsetof(FMetasoundFrontendVariable, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVariable, TypeName) == 0x000C);
static_assert(offsetof(FMetasoundFrontendVariable, Literal) == 0x0018);
static_assert(offsetof(FMetasoundFrontendVariable, ID) == 0x0070);
static_assert(offsetof(FMetasoundFrontendVariable, VariableNodeID) == 0x0080);
static_assert(offsetof(FMetasoundFrontendVariable, MutatorNodeID) == 0x0090);
static_assert(offsetof(FMetasoundFrontendVariable, AccessorNodeIDs) == 0x00A0);
static_assert(offsetof(FMetasoundFrontendVariable, DeferredAccessorNodeIDs) == 0x00B0);
static_assert(offsetof(FMetasoundFrontendGraph, Nodes) == 0x0000);
static_assert(offsetof(FMetasoundFrontendGraph, Edges) == 0x0010);
static_assert(offsetof(FMetasoundFrontendGraph, Variables) == 0x0020);
static_assert(offsetof(FMetasoundFrontendGraphClass, Graph) == 0x0098);
static_assert(offsetof(FMetasoundFrontendGraphClass, PresetOptions) == 0x00C8);
static_assert(offsetof(FMetasoundFrontendDocument, MetaData) == 0x0010);
static_assert(offsetof(FMetasoundFrontendDocument, RootGraph) == 0x0078);
static_assert(offsetof(FMetasoundFrontendDocument, Subgraphs) == 0x0198);
static_assert(offsetof(FMetasoundFrontendDocument, Dependencies) == 0x01A8);
static_assert(offsetof(FMetasoundFrontendDocument, ArchetypeVersion) == 0x01B8);
static_assert(offsetof(FMetasoundFrontendDocument, InterfaceVersions) == 0x01D0);
static_assert(offsetof(UMetaSoundBuilderDocument, Document) == 0x0038);
static_assert(offsetof(UMetaSoundBuilderDocument, MetaSoundUClass) == 0x0218);
static_assert(offsetof(FMetasoundFrontendVertexHandle, NodeId) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVertexHandle, VertexID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Value) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Color) == 0x0058);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, NodeId) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, OutputName) == 0x0010);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, LiteralColorPairs) == 0x0020);
static_assert(offsetof(FMetasoundFrontendGraphStyle, EdgeStyles) == 0x0008);
static_assert(offsetof(FMetasoundFrontendClassVariable, DefaultLiteral) == 0x0040);
static_assert(offsetof(FMetasoundFrontendInterfaceVertexBinding, OutputName) == 0x0000);
static_assert(offsetof(FMetasoundFrontendInterfaceVertexBinding, InputName) == 0x000C);
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, OutputInterfaceVersion) == 0x0000);
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, InputInterfaceVersion) == 0x0014);
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, VertexBindings) == 0x0030);
static_assert(offsetof(FMetasoundFrontendInterfaceUClassOptions, ClassPath) == 0x0000);
static_assert(offsetof(FMetasoundFrontendInterface, Version) == 0x0040);
static_assert(offsetof(FMetasoundFrontendInterface, UClassOptions) == 0x0058);
