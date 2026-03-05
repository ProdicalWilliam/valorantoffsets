
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

/// Enum /Script/PlayerFeedbackToolModule.EPlayerFeedbackQuestionType
/// Size: 0x01 (1 bytes)
enum class EPlayerFeedbackQuestionType : uint8_t
{
	EPlayerFeedbackQuestionType__UNKNOWN                                             = 0,
	EPlayerFeedbackQuestionType__LIKERT                                              = 1,
	EPlayerFeedbackQuestionType__FREE_RESPONSE                                       = 2
};

/// Class /Script/PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPlayerFeedbackToolFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary.GetPlayerFeedbackToolManager
	// class UPlayerFeedbackToolManager* GetPlayerFeedbackToolManager();                                                        // [0x5475d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 16 MaxSize: 0x0120
class UPlayerFeedbackToolManager : public UObject
{ 
public:
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(OnSurveyReceivedEvent);                              // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0040   (0x00E0)  MISSED


	/// Functions
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.SetQuestionResponse
	// void SetQuestionResponse(int32_t questionId, FString Key, FString Value);                                                // [0x5477660] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.SendSurveyResults
	// void SendSurveyResults(bool didOptOutOfSurvey);                                                                          // [0x5477560] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurveyForEvent
	// void RequestSurveyForEvent(class UPlayerFeedbackToolManager* pftManager, FString EventType, anyStruct anyStruct);        // [0x54770b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurvey
	// void RequestSurvey(FString EventType);                                                                                   // [0x5477c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.HasActiveSurvey
	// bool HasActiveSurvey();                                                                                                  // [0x5477530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.GetActiveSurvey
	// FPlayerFeedbackSurvey GetActiveSurvey();                                                                                 // [0x5477500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddMetadataField
	// void AddMetadataField(FString Key, FString Value);                                                                       // [0x54779f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddExpandedSurveyAction
	// void AddExpandedSurveyAction();                                                                                          // [0x5477c10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PlayerFeedbackToolModule.PlayerFeedbackQuestion
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPlayerFeedbackQuestion
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	EPlayerFeedbackQuestionType                        Type;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FString                                            Question;                                                   // 0x0008   (0x0010)  
	FString                                            ResponseKey;                                                // 0x0018   (0x0010)  
	FString                                            ResponseValue;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/PlayerFeedbackToolModule.PlayerFeedbackSurvey
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPlayerFeedbackSurvey
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Caption;                                                    // 0x0018   (0x0010)  
	FString                                            URL;                                                        // 0x0028   (0x0010)  
	TArray<FPlayerFeedbackQuestion>                    Questions;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0048   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPlayerFeedbackToolFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UPlayerFeedbackToolManager) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(FPlayerFeedbackQuestion) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPlayerFeedbackSurvey) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(FPlayerFeedbackQuestion, Type) == 0x0004);
static_assert(offsetof(FPlayerFeedbackQuestion, Question) == 0x0008);
static_assert(offsetof(FPlayerFeedbackQuestion, ResponseKey) == 0x0018);
static_assert(offsetof(FPlayerFeedbackQuestion, ResponseValue) == 0x0028);
static_assert(offsetof(FPlayerFeedbackSurvey, Title) == 0x0008);
static_assert(offsetof(FPlayerFeedbackSurvey, Caption) == 0x0018);
static_assert(offsetof(FPlayerFeedbackSurvey, URL) == 0x0028);
static_assert(offsetof(FPlayerFeedbackSurvey, Questions) == 0x0038);
