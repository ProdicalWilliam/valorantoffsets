
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/RGIEngine.RGIActorUtilLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIActorUtilLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RGIEngine.RGIActorUtilLibrary.GetTopActor
	// class AActor* GetTopActor(class AActor* Owner);                                                                          // [0x542ac50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGIActorUtilLibrary.FindOwnerActor
	// class AActor* FindOwnerActor(class UObject* Obj);                                                                        // [0x542ad40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RGIEngine.RGIArrayLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGIArrayLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RGIEngine.RGIArrayLibrary.StableSortObjectArrayByPredicate
	// void StableSortObjectArrayByPredicate(class UObject* WorldContextObject, TArray<UObject*>& ArrayToSort, FDelegateProperty Predicate); // [0x542b2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIEngine.RGIArrayLibrary.SortStringArray
	// void SortStringArray(TArray<FString>& StringArray, bool Reversed, TEnumAsByte<ESearchCase> SearchCase);                  // [0x542b050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RGIEngine.RGIArrayLibrary.SortObjectArrayByPredicate
	// void SortObjectArrayByPredicate(class UObject* WorldContextObject, TArray<UObject*>& ArrayToSort, FDelegateProperty Predicate); // [0x542b5a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RGIEngine.RGICompositionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URGICompositionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RGIEngine.RGICompositionLibrary.IsChildOfClass
	// bool IsChildOfClass(class UObject* Object, TSoftObjectPtr<UClass*> Class);                                               // [0x542bbc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.HasDefaultComponent
	// bool HasDefaultComponent(class UClass* ActorClass, class UClass* ComponentClass);                                        // [0x542c3d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.GetFirstDefaultComponent
	// class UActorComponent* GetFirstDefaultComponent(class UClass* ActorClass, class UClass* ComponentClass);                 // [0x542c950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.GetDefaultComponents
	// TArray<UActorComponent*> GetDefaultComponents(class UClass* ActorClass, class UClass* ComponentClass);                   // [0x542c5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.GetClassDefaultObject
	// class UObject* GetClassDefaultObject(class UClass* Class);                                                               // [0x542cdc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.FindOrLoadClassByName
	// class UClass* FindOrLoadClassByName(FString ClassName, class UObject* OuterObject, bool bWarnIfPackageLoaded);           // [0x542cb50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.FindFirstComponentInOwnershipChain
	// class UActorComponent* FindFirstComponentInOwnershipChain(class AActor* Actor, class UClass* ComponentClass);            // [0x542c790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RGIEngine.RGICompositionLibrary.DoesObjectPassClassFilter
	// bool DoesObjectPassClassFilter(FClassInclusionExclusionFilter& Filter, class UObject* TestObject);                       // [0x542bfd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RGIEngine.ClassInclusionExclusionFilter
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FClassInclusionExclusionFilter
{ 
	SDK_UNDEFINED(16,565) /* TArray<TSoftObjectPtr<UClass*>> */ __um(IncludedClasses);                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,566) /* TArray<TSoftObjectPtr<UClass*>> */ __um(ExcludedClasses);                             // 0x0010   (0x0010)  
	TSoftObjectPtr<class UClass*>                      MustHaveComponent;                                          // 0x0020   (0x0030)  
};

#pragma pack(pop)


static_assert(sizeof(URGIActorUtilLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGIArrayLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(URGICompositionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FClassInclusionExclusionFilter) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FClassInclusionExclusionFilter, MustHaveComponent) == 0x0020);
