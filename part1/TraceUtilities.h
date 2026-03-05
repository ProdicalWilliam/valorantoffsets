
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

/// Class /Script/TraceUtilities.TraceUtilLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
	// void TraceMarkRegionStart(FString Name);                                                                                 // [0x46cffb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
	// void TraceMarkRegionEnd(FString Name);                                                                                   // [0x46cffb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceBookmark
	// void TraceBookmark(FString Name);                                                                                        // [0x46cffb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.ToggleChannel
	// bool ToggleChannel(FString ChannelName, bool Enabled);                                                                   // [0x82d4780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StopTracing
	// bool StopTracing();                                                                                                      // [0x3b9c6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceToFile
	// bool StartTraceToFile(FString Filename, TArray<FString>& Channels);                                                      // [0x82d4940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceSendTo
	// bool StartTraceSendTo(FString Target, TArray<FString>& Channels);                                                        // [0x82d4940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.ResumeTracing
	// bool ResumeTracing();                                                                                                    // [0x3a82ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.PauseTracing
	// bool PauseTracing();                                                                                                     // [0x3a82ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.IsTracing
	// bool IsTracing();                                                                                                        // [0x3b9c6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.IsChannelEnabled
	// bool IsChannelEnabled(FString ChannelName);                                                                              // [0x82d4660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.GetEnabledChannels
	// TArray<FString> GetEnabledChannels();                                                                                    // [0x82d4480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.GetAllChannels
	// TArray<FString> GetAllChannels();                                                                                        // [0x3bd33e0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UTraceUtilLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
