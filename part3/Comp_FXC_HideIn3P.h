
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

#pragma pack(push, 0x1)

/// Class /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C
/// Size: 0x0104 (260 bytes) (0x0000E8 - 0x000104) align 8 MaxSize: 0x0104
class UComp_FXC_HideIn3P_C : public UEffectComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00E8   (0x0008)  
	class AActor*                                      Target;                                                     // 0x00F0   (0x0008)  
	FName                                              Tag;                                                        // 0x00F8   (0x000C)  


	/// Functions
	// Function /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C.GetTag
	// void GetTag(FName& Tag);                                                                                                 // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C.StartEffect
	// void StartEffect(class AActor* Target, class UObject* Context, float StartTime, bool FirstPerson);                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C.StopEffect
	// void StopEffect(EStopEffectType StopEffectType);                                                                         // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C.UpdateEffectPerspective
	// void UpdateEffectPerspective(float CurrentTime, bool FirstPerson);                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Comp_FXC_HideIn3P.Comp_FXC_HideIn3P_C.ExecuteUbergraph_Comp_FXC_HideIn3P
	// void ExecuteUbergraph_Comp_FXC_HideIn3P(int32_t EntryPoint);                                                             // [0x1a821d0] Final                
};

#pragma pack(pop)


static_assert(sizeof(UComp_FXC_HideIn3P_C) == 0x0104); // 260 bytes (0x0000E8 - 0x000104)
static_assert(offsetof(UComp_FXC_HideIn3P_C, UberGraphFrame) == 0x00E8);
static_assert(offsetof(UComp_FXC_HideIn3P_C, Target) == 0x00F0);
static_assert(offsetof(UComp_FXC_HideIn3P_C, Tag) == 0x00F8);
