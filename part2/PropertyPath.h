
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x01 (1 bytes)
enum class EPropertyPathTestEnum : uint8_t
{
	One                                                                              = 0,
	Two                                                                              = 1,
	Three                                                                            = 2,
	Four                                                                             = 3
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPropertyPathTestInnerStruct
{ 
	float                                              float0;                                                     // 0x0000   (0x0004)  
	bool                                               bool0;                                                      // 0x0004   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0005   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0006   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x0007   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x000C   (0x0004)  
	FString                                            String;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPropertyPathTestStruct
{ 
	bool                                               bool0;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0004   (0x0004)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0008   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0009   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x000A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x000B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0010   (0x0010)  
	float                                              float0;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FPropertyPathTestInnerStruct                       InnerStruct;                                                // 0x0028   (0x0020)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0048   (0x0008)  
};

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0158 (344 bytes) (0x000030 - 0x000158) align 8 MaxSize: 0x0158
class UPropertyPathTestObject : public UObject
{ 
public:
	bool                                               bool0;                                                      // 0x0030   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0031   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0032   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x0033   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0040   (0x0010)  
	float                                              float0;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FPropertyPathTestStruct                            Struct;                                                     // 0x0058   (0x0050)  
	FPropertyPathTestStruct                            StructRef;                                                  // 0x00A8   (0x0050)  
	FPropertyPathTestStruct                            StructConstRef;                                             // 0x00F8   (0x0050)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0148   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0150   (0x0008)  MISSED


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x25eea10] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x25ee870] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x25eebe0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                            // [0x25eed80] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                                  // [0x25ee9e0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x25ee840] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                     // [0x25eeb80] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                        // [0x25eed50] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	int32_t                                            ArrayIndex;                                                 // 0x000C   (0x0004)  
	class UStruct*                                     Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FPropertyPathTestBed
{ 
	class UPropertyPathTestObject*                     Object;                                                     // 0x0000   (0x0008)  
	class UPropertyPathTestObject*                     ModifiedObject;                                             // 0x0008   (0x0008)  
	FPropertyPathTestStruct                            ModifiedStruct;                                             // 0x0010   (0x0050)  
	FPropertyPathTestStruct                            DefaultStruct;                                              // 0x0060   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(FPropertyPathTestInnerStruct) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPropertyPathTestStruct) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UPropertyPathTestObject) == 0x0158); // 344 bytes (0x000030 - 0x000158)
static_assert(sizeof(FPropertyPathSegment) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCachedPropertyPath) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPropertyPathTestBed) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumOne) == 0x0005);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumTwo) == 0x0006);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumThree) == 0x0007);
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumFour) == 0x0008);
static_assert(offsetof(FPropertyPathTestInnerStruct, String) == 0x0010);
static_assert(offsetof(FPropertyPathTestStruct, EnumOne) == 0x0008);
static_assert(offsetof(FPropertyPathTestStruct, EnumTwo) == 0x0009);
static_assert(offsetof(FPropertyPathTestStruct, EnumThree) == 0x000A);
static_assert(offsetof(FPropertyPathTestStruct, EnumFour) == 0x000B);
static_assert(offsetof(FPropertyPathTestStruct, String) == 0x0010);
static_assert(offsetof(FPropertyPathTestStruct, InnerStruct) == 0x0028);
static_assert(offsetof(FPropertyPathTestStruct, InnerObject) == 0x0048);
static_assert(offsetof(UPropertyPathTestObject, EnumOne) == 0x0031);
static_assert(offsetof(UPropertyPathTestObject, EnumTwo) == 0x0032);
static_assert(offsetof(UPropertyPathTestObject, EnumThree) == 0x0033);
static_assert(offsetof(UPropertyPathTestObject, EnumFour) == 0x0034);
static_assert(offsetof(UPropertyPathTestObject, String) == 0x0040);
static_assert(offsetof(UPropertyPathTestObject, Struct) == 0x0058);
static_assert(offsetof(UPropertyPathTestObject, StructRef) == 0x00A8);
static_assert(offsetof(UPropertyPathTestObject, StructConstRef) == 0x00F8);
static_assert(offsetof(UPropertyPathTestObject, InnerObject) == 0x0148);
static_assert(offsetof(FPropertyPathSegment, Name) == 0x0000);
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x0010);
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x0000);
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x0018);
static_assert(offsetof(FPropertyPathTestBed, Object) == 0x0000);
static_assert(offsetof(FPropertyPathTestBed, ModifiedObject) == 0x0008);
static_assert(offsetof(FPropertyPathTestBed, ModifiedStruct) == 0x0010);
static_assert(offsetof(FPropertyPathTestBed, DefaultStruct) == 0x0060);
