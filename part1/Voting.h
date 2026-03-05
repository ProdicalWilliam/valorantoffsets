
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
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Game/Voting/Enum_Vote_Max_Participants.Enum_Vote_Max_Participants
/// Size: 0x01 (1 bytes)
enum class Enum_Vote_Max_Participants : uint8_t
{
	Enum_Vote_Max_Participants__NewEnumerator0                                       = 0,
	Enum_Vote_Max_Participants__NewEnumerator1                                       = 1
};

/// Enum /Game/Voting/Enum_Vote_DisplayMode.Enum_Vote_DisplayMode
/// Size: 0x01 (1 bytes)
enum class Enum_Vote_DisplayMode : uint8_t
{
	Enum_Vote_DisplayMode__NewEnumerator0                                            = 0,
	Enum_Vote_DisplayMode__NewEnumerator1                                            = 1
};

/// Class /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 8 MaxSize: 0x0180
class UGameplayVoteOptionBase_C : public UGameplayVoteOptionComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0130   (0x0008)  
	FText                                              ButtonText;                                                 // 0x0138   (0x0018)  
	FText                                              ResultsDescription;                                         // 0x0150   (0x0018)  
	FText                                              ResultsDescriptionObserver;                                 // 0x0168   (0x0018)  


	/// Functions
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetVoteOptionDebugText
	// FText GetVoteOptionDebugText();                                                                                          // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.FormatTextForResultsScreen
	// void FormatTextForResultsScreen(class UTextBlock* TextWidget);                                                           // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetButtonCheckAndTextVisibility
	// void GetButtonCheckAndTextVisibility(ESlateVisibility& TextVisibility, ESlateVisibility& CheckVisibility);               // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetButtonTextWithKeybind
	// void GetButtonTextWithKeybind(FText& ButtonTextWithKeybind);                                                             // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.AuthNotifyAllObservers
	// void AuthNotifyAllObservers(FText NotificationText);                                                                     // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.AuthNotifyAllParticipants
	// void AuthNotifyAllParticipants(FText NotificationText);                                                                  // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteOptionBase.GameplayVoteOptionBase_C.ExecuteUbergraph_GameplayVoteOptionBase
	// void ExecuteUbergraph_GameplayVoteOptionBase(int32_t EntryPoint);                                                        // [0x1a821d0] Final                
};

/// Class /Game/Voting/GameplayVoteBase.GameplayVoteBase_C
/// Size: 0x06F8 (1784 bytes) (0x000588 - 0x0006F8) align 8 MaxSize: 0x06F8
class AGameplayVoteBase_C : public AGameplayVote
{ 
public:
	TEnumAsByte<Enum_Vote_DisplayMode>                 DisplayMode;                                                // 0x0588   (0x0001)  
	TEnumAsByte<Enum_Vote_Max_Participants>            MaxParticipants;                                            // 0x0589   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x058A   (0x0006)  MISSED
	FText                                              VoteTitle;                                                  // 0x0590   (0x0018)  
	FText                                              ObserverTitle;                                              // 0x05A8   (0x0018)  
	FText                                              Description;                                                // 0x05C0   (0x0018)  
	FText                                              ObserverDescription;                                        // 0x05D8   (0x0018)  
	FText                                              BannerText;                                                 // 0x05F0   (0x0018)  
	FText                                              YesVotesNeeded;                                             // 0x0608   (0x0018)  
	FText                                              NumVotedYes;                                                // 0x0620   (0x0018)  
	FText                                              OnVoteStartedNotification;                                  // 0x0638   (0x0018)  
	FText                                              OnVoteStartedNotificationObserveer;                         // 0x0650   (0x0018)  
	FText                                              OnVoteQueuedNotification;                                   // 0x0668   (0x0018)  
	FText                                              OnVoteRateLimitedNotification;                              // 0x0680   (0x0018)  
	FText                                              OnVoteCoachesCannotVoteNotification;                        // 0x0698   (0x0018)  
	FText                                              OnVoteAFKPlayersCannotQueueVoteNotification;                // 0x06B0   (0x0018)  
	FText                                              WidgetResultSuccessConsole;                                 // 0x06C8   (0x0018)  
	FText                                              WidgetResultFailConsole;                                    // 0x06E0   (0x0018)  


	/// Functions
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetAFKNotification
	// FText GetAFKNotification();                                                                                              // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetCoachesCannotVoteNotification
	// FText GetCoachesCannotVoteNotification();                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetRateLimitedNotification
	// FText GetRateLimitedNotification();                                                                                      // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetVoteQueuedNotification
	// FText GetVoteQueuedNotification();                                                                                       // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetOnStartedNotificationObserver
	// FText GetOnStartedNotificationObserver();                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetOnStartedNotification
	// FText GetOnStartedNotification();                                                                                        // [0x1a821d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetNumParticipantsVotedYesTextFormatted
	// void GetNumParticipantsVotedYesTextFormatted(FText& NumVotedYes);                                                        // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetYesVotesNeededTextFormatted
	// void GetYesVotesNeededTextFormatted(FText& NumVotesNeeded);                                                              // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetNoOption
	// void GetNoOption(class UGameplayVoteOptionBase_C*& NoOption);                                                            // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetYesOption
	// void GetYesOption(class UGameplayVoteOptionBase_C*& YesOption);                                                          // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.AuthNotifyAllObservers
	// void AuthNotifyAllObservers(FText NotificationText);                                                                     // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.GetVoteResult
	// void GetVoteResult(bool& HasVoteFinished, class UGameplayVoteOptionComponent*& SelectedOption);                          // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.AuthNotifyAllParticipants
	// void AuthNotifyAllParticipants(FText NotificationText);                                                                  // [0x1a821d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/GameplayVoteBase.GameplayVoteBase_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Voting/DrawVote/VoteOption_Draw_ContinueMatch.VoteOption_Draw_ContinueMatch_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class UVoteOption_Draw_ContinueMatch_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/DrawVote/VoteOption_Draw_ContinueMatch.VoteOption_Draw_ContinueMatch_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/DrawVote/VoteOption_Draw_ContinueMatch.VoteOption_Draw_ContinueMatch_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/DrawVote/VoteOption_Draw_ContinueMatch.VoteOption_Draw_ContinueMatch_C.ExecuteUbergraph_VoteOption_Draw_ContinueMatch
	// void ExecuteUbergraph_VoteOption_Draw_ContinueMatch(int32_t EntryPoint);                                                 // [0x1a821d0] Final                
};

/// Class /Game/Voting/Remake/RemakeNoOption.RemakeNoOption_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class URemakeNoOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/Remake/RemakeNoOption.RemakeNoOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/Remake/RemakeNoOption.RemakeNoOption_C.ExecuteUbergraph_RemakeNoOption
	// void ExecuteUbergraph_RemakeNoOption(int32_t EntryPoint);                                                                // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C
/// Size: 0x01B8 (440 bytes) (0x000180 - 0x0001B8) align 8 MaxSize: 0x01B8
class UOTPriority_VoteOption_StartDefender_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  
	FText                                              SelectedAllyNotificationText;                               // 0x0188   (0x0018)  
	FText                                              SelectedEnemyNotificationText;                              // 0x01A0   (0x0018)  


	/// Functions
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.ExecuteUbergraph_OTPriority_VoteOption_StartDefender
	// void ExecuteUbergraph_OTPriority_VoteOption_StartDefender(int32_t EntryPoint);                                           // [0x1a821d0] Final                
};

/// Class /Game/Voting/DrawVote/Vote_Draw_Base.Vote_Draw_Base_C
/// Size: 0x0718 (1816 bytes) (0x0006F8 - 0x000718) align 8 MaxSize: 0x0718
class AVote_Draw_Base_C : public AGameplayVoteBase_C
{ 
public:
	class UVoteOption_Draw_DrawMatch_C*                VoteOption_Draw_DrawMatch;                                  // 0x06F8   (0x0008)  
	class UVoteOption_Draw_ContinueMatch_C*            VoteOption_Draw_ContinueMatch;                              // 0x0700   (0x0008)  
	SDK_UNDEFINED(16,3457) /* FMulticastInlineDelegate */ __um(OnVotingPhaseComplete);                             // 0x0708   (0x0010)  


	/// Functions
	// Function /Game/Voting/DrawVote/Vote_Draw_Base.Vote_Draw_Base_C.GetOnStartedNotification
	// FText GetOnStartedNotification();                                                                                        // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/DrawVote/Vote_Draw_Base.Vote_Draw_Base_C.GenerateParticipants
	// TArray<AShooterPlayerState*> GenerateParticipants(class AShooterPlayerState* RequestingPlayer);                          // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/DrawVote/Vote_Draw_Base.Vote_Draw_Base_C.OnVotingPhaseComplete__DelegateSignature
	// void OnVotingPhaseComplete__DelegateSignature(bool HasPassed);                                                           // [0x1a821d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Voting/DrawVote/Vote_Draw_Round1.Vote_Draw_Round1_C
/// Size: 0x0718 (1816 bytes) (0x000718 - 0x000718) align 8 MaxSize: 0x0718
class AVote_Draw_Round1_C : public AVote_Draw_Base_C
{ 
public:


	/// Functions
	// Function /Game/Voting/DrawVote/Vote_Draw_Round1.Vote_Draw_Round1_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Voting/DrawVote/VoteOption_Draw_DrawMatch.VoteOption_Draw_DrawMatch_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class UVoteOption_Draw_DrawMatch_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/DrawVote/VoteOption_Draw_DrawMatch.VoteOption_Draw_DrawMatch_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/DrawVote/VoteOption_Draw_DrawMatch.VoteOption_Draw_DrawMatch_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/DrawVote/VoteOption_Draw_DrawMatch.VoteOption_Draw_DrawMatch_C.ExecuteUbergraph_VoteOption_Draw_DrawMatch
	// void ExecuteUbergraph_VoteOption_Draw_DrawMatch(int32_t EntryPoint);                                                     // [0x1a821d0] Final                
};

/// Class /Game/Voting/DrawVote/Vote_Draw_Round2.Vote_Draw_Round2_C
/// Size: 0x0718 (1816 bytes) (0x000718 - 0x000718) align 8 MaxSize: 0x0718
class AVote_Draw_Round2_C : public AVote_Draw_Base_C
{ 
public:


	/// Functions
	// Function /Game/Voting/DrawVote/Vote_Draw_Round2.Vote_Draw_Round2_C.GetUnanimousVoteTolerence
	// int32_t GetUnanimousVoteTolerence();                                                                                     // [0x1a821d0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/DrawVote/Vote_Draw_Round2.Vote_Draw_Round2_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/DrawVote/Vote_Draw_Round2.Vote_Draw_Round2_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C
/// Size: 0x0710 (1808 bytes) (0x0006F8 - 0x000710) align 8 MaxSize: 0x0710
class ARemakeVoteNew_C : public AGameplayVoteBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06F8   (0x0008)  
	class URemakeYesOption_C*                          RemakeYesOption;                                            // 0x0700   (0x0008)  
	class URemakeNoOption_C*                           RemakeNoOption;                                             // 0x0708   (0x0008)  


	/// Functions
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.GenerateParticipantsFromTeam
	// TArray<AShooterPlayerState*> GenerateParticipantsFromTeam(class UBaseTeamComponent* RequestingTeam);                     // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.ValidateTeamVote
	// bool ValidateTeamVote(class UBaseTeamComponent* RequestingTeam, class AShooterGameState* GameState, FText& OutInvalidText); // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.GenerateParticipants
	// TArray<AShooterPlayerState*> GenerateParticipants(class AShooterPlayerState* RequestingPlayer);                          // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/Remake/RemakeVoteNew.RemakeVoteNew_C.ExecuteUbergraph_RemakeVoteNew
	// void ExecuteUbergraph_RemakeVoteNew(int32_t EntryPoint);                                                                 // [0x1a821d0] Final                
};

/// Class /Game/Voting/Remake/RemakeVoteNew_Debug.RemakeVoteNew_Debug_C
/// Size: 0x0718 (1816 bytes) (0x000710 - 0x000718) align 8 MaxSize: 0x0718
class ARemakeVoteNew_Debug_C : public ARemakeVoteNew_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0710   (0x0008)  


	/// Functions
	// Function /Game/Voting/Remake/RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Remake/RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/Remake/RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.ExecuteUbergraph_RemakeVoteNew_Debug
	// void ExecuteUbergraph_RemakeVoteNew_Debug(int32_t EntryPoint);                                                           // [0x1a821d0] Final                
};

/// Class /Game/Voting/Remake/RemakeYesOption.RemakeYesOption_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class URemakeYesOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/Remake/RemakeYesOption.RemakeYesOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/Remake/RemakeYesOption.RemakeYesOption_C.ExecuteUbergraph_RemakeYesOption
	// void ExecuteUbergraph_RemakeYesOption(int32_t EntryPoint);                                                               // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Voting/TimeoutVote.TimeoutVote_C
/// Size: 0x0714 (1812 bytes) (0x0006F8 - 0x000714) align 8 MaxSize: 0x0714
class ATimeoutVote_C : public AGameplayVoteBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06F8   (0x0008)  
	class UTimeoutYesOption_C*                         TimeoutYesOption;                                           // 0x0700   (0x0008)  
	class UTimeoutNoOption_C*                          TimeoutNoOption;                                            // 0x0708   (0x0008)  
	int32_t                                            TeamMaxVotesAllowedPreOvertime;                             // 0x0710   (0x0004)  


	/// Functions
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.GetTeamNumSuccessfulTimeoutVotesCalled
	// void GetTeamNumSuccessfulTimeoutVotesCalled(class UBaseTeamComponent* RequestingTeam, int32_t& NumTimeoutVotesCalled);   // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.AuthDoesVotePreventTimeout
	// void AuthDoesVotePreventTimeout(class UVoteManagerComponent* VoteManagerComponent, int32_t Round, class UClass* VoteClass, class AShooterPlayerState* Requester, class UClass* VoteOptionClass, class UBaseTeamComponent* Team, bool VoteInOvertime, bool ShouldUseFlexableTimeoutRules, bool& DoesBlockTimeout, FText& Reason); // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.GetTimeoutGamePhaseText
	// void GetTimeoutGamePhaseText(int32_t Round, FText& GameMode);                                                            // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.GetRoundHalf
	// void GetRoundHalf(int32_t Round, int32_t& half);                                                                         // [0x1a821d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.AuthIsTimeoutAvailableForPlayer
	// void AuthIsTimeoutAvailableForPlayer(class AShooterGameState* GameState, class UBaseTeamComponent* Team, bool& TimeoutIsAvailable, FText& Reason); // [0x1a821d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.GenerateParticipants
	// TArray<AShooterPlayerState*> GenerateParticipants(class AShooterPlayerState* RequestingPlayer);                          // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/TimeoutVote.TimeoutVote_C.ExecuteUbergraph_TimeoutVote
	// void ExecuteUbergraph_TimeoutVote(int32_t EntryPoint);                                                                   // [0x1a821d0] Final                
};

/// Class /Game/Voting/TimeoutNoOption.TimeoutNoOption_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class UTimeoutNoOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/TimeoutNoOption.TimeoutNoOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/TimeoutNoOption.TimeoutNoOption_C.ExecuteUbergraph_TimeoutNoOption
	// void ExecuteUbergraph_TimeoutNoOption(int32_t EntryPoint);                                                               // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Voting/TimeoutYesOption.TimeoutYesOption_C
/// Size: 0x0190 (400 bytes) (0x000180 - 0x000190) align 8 MaxSize: 0x0190
class UTimeoutYesOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  
	double                                             TimeoutDuration;                                            // 0x0188   (0x0008)  


	/// Functions
	// Function /Game/Voting/TimeoutYesOption.TimeoutYesOption_C.AuthSendTimeoutClientNotifications
	// void AuthSendTimeoutClientNotifications(class UBaseTeamComponent* RequestingTeam, class ATimeoutVote_C* TimeoutVote);    // [0x1a821d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/TimeoutYesOption.TimeoutYesOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/TimeoutYesOption.TimeoutYesOption_C.ExecuteUbergraph_TimeoutYesOption
	// void ExecuteUbergraph_TimeoutYesOption(int32_t EntryPoint);                                                              // [0x1a821d0] Final                
};

/// Class /Game/Voting/Surrender/SurrenderNoOption.SurrenderNoOption_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class USurrenderNoOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/Surrender/SurrenderNoOption.SurrenderNoOption_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderNoOption.SurrenderNoOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderNoOption.SurrenderNoOption_C.ExecuteUbergraph_SurrenderNoOption
	// void ExecuteUbergraph_SurrenderNoOption(int32_t EntryPoint);                                                             // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C
/// Size: 0x0720 (1824 bytes) (0x0006F8 - 0x000720) align 8 MaxSize: 0x0720
class ASurrenderVote_C : public AGameplayVoteBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06F8   (0x0008)  
	class USurrenderYesOption_C*                       SurrenderYesOption;                                         // 0x0700   (0x0008)  
	class USurrenderNoOption_C*                        SurrenderNoOption;                                          // 0x0708   (0x0008)  
	TArray<bool>                                       TeamHasAttemptedSurrender;                                  // 0x0710   (0x0010)  


	/// Functions
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.GetUnanimousVoteTolerence
	// int32_t GetUnanimousVoteTolerence();                                                                                     // [0x1a821d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.GenerateParticipants
	// TArray<AShooterPlayerState*> GenerateParticipants(class AShooterPlayerState* RequestingPlayer);                          // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1a821d0] Event|Protected|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderVote.SurrenderVote_C.ExecuteUbergraph_SurrenderVote
	// void ExecuteUbergraph_SurrenderVote(int32_t EntryPoint);                                                                 // [0x1a821d0] Final                
};

/// Class /Game/Voting/Surrender/SurrenderYesOption.SurrenderYesOption_C
/// Size: 0x0188 (392 bytes) (0x000180 - 0x000188) align 8 MaxSize: 0x0188
class USurrenderYesOption_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  


	/// Functions
	// Function /Game/Voting/Surrender/SurrenderYesOption.SurrenderYesOption_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderYesOption.SurrenderYesOption_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderYesOption.SurrenderYesOption_C.ExecuteUbergraph_SurrenderYesOption
	// void ExecuteUbergraph_SurrenderYesOption(int32_t EntryPoint);                                                            // [0x1a821d0] Final|HasDefaults    
};

/// Class /Game/Voting/Surrender/SurrenderVote_Debug.SurrenderVote_Debug_C
/// Size: 0x0728 (1832 bytes) (0x000720 - 0x000728) align 8 MaxSize: 0x0728
class ASurrenderVote_Debug_C : public ASurrenderVote_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  


	/// Functions
	// Function /Game/Voting/Surrender/SurrenderVote_Debug.SurrenderVote_Debug_C.Validate
	// bool Validate(class AShooterPlayerState* RequestingPlayer, class AShooterGameState* GameState, FText& OutInvalidText);   // [0x1a821d0] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/Surrender/SurrenderVote_Debug.SurrenderVote_Debug_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/Surrender/SurrenderVote_Debug.SurrenderVote_Debug_C.ExecuteUbergraph_SurrenderVote_Debug
	// void ExecuteUbergraph_SurrenderVote_Debug(int32_t EntryPoint);                                                           // [0x1a821d0] Final                
};

/// Class /Game/Voting/DrawVote/Vote_Draw_Round3.Vote_Draw_Round3_C
/// Size: 0x0718 (1816 bytes) (0x000718 - 0x000718) align 8 MaxSize: 0x0718
class AVote_Draw_Round3_C : public AVote_Draw_Base_C
{ 
public:


	/// Functions
	// Function /Game/Voting/DrawVote/Vote_Draw_Round3.Vote_Draw_Round3_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C
/// Size: 0x0710 (1808 bytes) (0x0006F8 - 0x000710) align 8 MaxSize: 0x0710
class AOTPriority_Vote_C : public AGameplayVoteBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06F8   (0x0008)  
	class UOTPriority_VoteOption_StartAttacker_C*      OTPriority_VoteOption_StartAttacker;                        // 0x0700   (0x0008)  
	class UOTPriority_VoteOption_StartDefender_C*      OTPriority_VoteOption_StartDefender;                        // 0x0708   (0x0008)  


	/// Functions
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.GenerateParticipantsFromTeam
	// TArray<AShooterPlayerState*> GenerateParticipantsFromTeam(class UBaseTeamComponent* RequestingTeam);                     // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.GetOnStartedNotification
	// FText GetOnStartedNotification();                                                                                        // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.GetVoteDebugText
	// FText GetVoteDebugText();                                                                                                // [0x1a821d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.GenerateObservers
	// TArray<AShooterPlayerState*> GenerateObservers(class AShooterPlayerState* RequestingPlayer);                             // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.GenerateParticipants
	// TArray<AShooterPlayerState*> GenerateParticipants(class AShooterPlayerState* RequestingPlayer);                          // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.AuthOnStarted
	// void AuthOnStarted();                                                                                                    // [0x1a821d0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Voting/OvertimePriority/OTPriority_Vote.OTPriority_Vote_C.ExecuteUbergraph_OTPriority_Vote
	// void ExecuteUbergraph_OTPriority_Vote(int32_t EntryPoint);                                                               // [0x1a821d0] Final                
};

/// Class /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C
/// Size: 0x01B8 (440 bytes) (0x000180 - 0x0001B8) align 8 MaxSize: 0x01B8
class UOTPriority_VoteOption_StartAttacker_C : public UGameplayVoteOptionBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0180   (0x0008)  
	FText                                              SelectedAllyNotificationText;                               // 0x0188   (0x0018)  
	FText                                              SelectedEnemyNotificationText;                              // 0x01A0   (0x0018)  


	/// Functions
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.AuthUpdateVotesNeeded
	// void AuthUpdateVotesNeeded();                                                                                            // [0x1a821d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.OnSelected
	// void OnSelected();                                                                                                       // [0x1a821d0] Event|Public|BlueprintEvent 
	// Function /Game/Voting/OvertimePriority/OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.ExecuteUbergraph_OTPriority_VoteOption_StartAttacker
	// void ExecuteUbergraph_OTPriority_VoteOption_StartAttacker(int32_t EntryPoint);                                           // [0x1a821d0] Final                
};

#pragma pack(pop)


static_assert(sizeof(UGameplayVoteOptionBase_C) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(AGameplayVoteBase_C) == 0x06F8); // 1784 bytes (0x000588 - 0x0006F8)
static_assert(sizeof(UVoteOption_Draw_ContinueMatch_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(URemakeNoOption_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(UOTPriority_VoteOption_StartDefender_C) == 0x01B8); // 440 bytes (0x000180 - 0x0001B8)
static_assert(sizeof(AVote_Draw_Base_C) == 0x0718); // 1816 bytes (0x0006F8 - 0x000718)
static_assert(sizeof(AVote_Draw_Round1_C) == 0x0718); // 1816 bytes (0x000718 - 0x000718)
static_assert(sizeof(UVoteOption_Draw_DrawMatch_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(AVote_Draw_Round2_C) == 0x0718); // 1816 bytes (0x000718 - 0x000718)
static_assert(sizeof(ARemakeVoteNew_C) == 0x0710); // 1808 bytes (0x0006F8 - 0x000710)
static_assert(sizeof(ARemakeVoteNew_Debug_C) == 0x0718); // 1816 bytes (0x000710 - 0x000718)
static_assert(sizeof(URemakeYesOption_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(ATimeoutVote_C) == 0x0714); // 1812 bytes (0x0006F8 - 0x000714)
static_assert(sizeof(UTimeoutNoOption_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(UTimeoutYesOption_C) == 0x0190); // 400 bytes (0x000180 - 0x000190)
static_assert(sizeof(USurrenderNoOption_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(ASurrenderVote_C) == 0x0720); // 1824 bytes (0x0006F8 - 0x000720)
static_assert(sizeof(USurrenderYesOption_C) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(ASurrenderVote_Debug_C) == 0x0728); // 1832 bytes (0x000720 - 0x000728)
static_assert(sizeof(AVote_Draw_Round3_C) == 0x0718); // 1816 bytes (0x000718 - 0x000718)
static_assert(sizeof(AOTPriority_Vote_C) == 0x0710); // 1808 bytes (0x0006F8 - 0x000710)
static_assert(sizeof(UOTPriority_VoteOption_StartAttacker_C) == 0x01B8); // 440 bytes (0x000180 - 0x0001B8)
static_assert(offsetof(UGameplayVoteOptionBase_C, UberGraphFrame) == 0x0130);
static_assert(offsetof(UGameplayVoteOptionBase_C, ButtonText) == 0x0138);
static_assert(offsetof(UGameplayVoteOptionBase_C, ResultsDescription) == 0x0150);
static_assert(offsetof(UGameplayVoteOptionBase_C, ResultsDescriptionObserver) == 0x0168);
static_assert(offsetof(AGameplayVoteBase_C, DisplayMode) == 0x0588);
static_assert(offsetof(AGameplayVoteBase_C, MaxParticipants) == 0x0589);
static_assert(offsetof(AGameplayVoteBase_C, VoteTitle) == 0x0590);
static_assert(offsetof(AGameplayVoteBase_C, ObserverTitle) == 0x05A8);
static_assert(offsetof(AGameplayVoteBase_C, Description) == 0x05C0);
static_assert(offsetof(AGameplayVoteBase_C, ObserverDescription) == 0x05D8);
static_assert(offsetof(AGameplayVoteBase_C, BannerText) == 0x05F0);
static_assert(offsetof(AGameplayVoteBase_C, YesVotesNeeded) == 0x0608);
static_assert(offsetof(AGameplayVoteBase_C, NumVotedYes) == 0x0620);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteStartedNotification) == 0x0638);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteStartedNotificationObserveer) == 0x0650);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteQueuedNotification) == 0x0668);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteRateLimitedNotification) == 0x0680);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteCoachesCannotVoteNotification) == 0x0698);
static_assert(offsetof(AGameplayVoteBase_C, OnVoteAFKPlayersCannotQueueVoteNotification) == 0x06B0);
static_assert(offsetof(AGameplayVoteBase_C, WidgetResultSuccessConsole) == 0x06C8);
static_assert(offsetof(AGameplayVoteBase_C, WidgetResultFailConsole) == 0x06E0);
static_assert(offsetof(UVoteOption_Draw_ContinueMatch_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(URemakeNoOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(UOTPriority_VoteOption_StartDefender_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(UOTPriority_VoteOption_StartDefender_C, SelectedAllyNotificationText) == 0x0188);
static_assert(offsetof(UOTPriority_VoteOption_StartDefender_C, SelectedEnemyNotificationText) == 0x01A0);
static_assert(offsetof(AVote_Draw_Base_C, VoteOption_Draw_DrawMatch) == 0x06F8);
static_assert(offsetof(AVote_Draw_Base_C, VoteOption_Draw_ContinueMatch) == 0x0700);
static_assert(offsetof(UVoteOption_Draw_DrawMatch_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(ARemakeVoteNew_C, UberGraphFrame) == 0x06F8);
static_assert(offsetof(ARemakeVoteNew_C, RemakeYesOption) == 0x0700);
static_assert(offsetof(ARemakeVoteNew_C, RemakeNoOption) == 0x0708);
static_assert(offsetof(ARemakeVoteNew_Debug_C, UberGraphFrame) == 0x0710);
static_assert(offsetof(URemakeYesOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(ATimeoutVote_C, UberGraphFrame) == 0x06F8);
static_assert(offsetof(ATimeoutVote_C, TimeoutYesOption) == 0x0700);
static_assert(offsetof(ATimeoutVote_C, TimeoutNoOption) == 0x0708);
static_assert(offsetof(UTimeoutNoOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(UTimeoutYesOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(USurrenderNoOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(ASurrenderVote_C, UberGraphFrame) == 0x06F8);
static_assert(offsetof(ASurrenderVote_C, SurrenderYesOption) == 0x0700);
static_assert(offsetof(ASurrenderVote_C, SurrenderNoOption) == 0x0708);
static_assert(offsetof(ASurrenderVote_C, TeamHasAttemptedSurrender) == 0x0710);
static_assert(offsetof(USurrenderYesOption_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(ASurrenderVote_Debug_C, UberGraphFrame) == 0x0720);
static_assert(offsetof(AOTPriority_Vote_C, UberGraphFrame) == 0x06F8);
static_assert(offsetof(AOTPriority_Vote_C, OTPriority_VoteOption_StartAttacker) == 0x0700);
static_assert(offsetof(AOTPriority_Vote_C, OTPriority_VoteOption_StartDefender) == 0x0708);
static_assert(offsetof(UOTPriority_VoteOption_StartAttacker_C, UberGraphFrame) == 0x0180);
static_assert(offsetof(UOTPriority_VoteOption_StartAttacker_C, SelectedAllyNotificationText) == 0x0188);
static_assert(offsetof(UOTPriority_VoteOption_StartAttacker_C, SelectedEnemyNotificationText) == 0x01A0);
