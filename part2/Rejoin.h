
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/Rejoin.ERejoinStatus
/// Size: 0x01 (1 bytes)
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin                                                   = 0,
	ERejoinStatus__RejoinAvailable                                                   = 1,
	ERejoinStatus__UpdatingStatus                                                    = 2,
	ERejoinStatus__NeedsRecheck                                                      = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded                                        = 4
};

/// Class /Script/Rejoin.RejoinCheck
/// Size: 0x0190 (400 bytes) (0x000030 - 0x000190) align 8 MaxSize: 0x0190
class URejoinCheck : public UObject
{ 
public:
	ERejoinStatus                                      LastKnownStatus;                                            // 0x0030   (0x0001)  
	bool                                               bRejoinAfterCheck;                                          // 0x0031   (0x0001)  
	bool                                               bAttemptingRejoin;                                          // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x15D];                                     // 0x0033   (0x015D)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URejoinCheck) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(offsetof(URejoinCheck, LastKnownStatus) == 0x0030);
