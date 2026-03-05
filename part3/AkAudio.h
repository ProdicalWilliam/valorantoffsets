
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WwiseObjectUtils
/// dependency: WwiseResourceLoader

#pragma pack(push, 0x1)

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x01 (1 bytes)
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x01 (1 bytes)
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16,
	EAkCallbackType__EnableGetSourcePlayPosition                                     = 20
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioEventDurationType
/// Size: 0x01 (1 bytes)
enum class EAkAudioEventDurationType : uint8_t
{
	EAkAudioEventDurationType__Unknown                                               = 0,
	EAkAudioEventDurationType__OneShot                                               = 1,
	EAkAudioEventDurationType__Infinite                                              = 2,
	EAkAudioEventDurationType__Mixed                                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x01 (1 bytes)
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x01 (1 bytes)
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x01 (1 bytes)
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x01 (1 bytes)
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x01 (1 bytes)
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x01 (1 bytes)
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x04 (4 bytes)
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x01 (1 bytes)
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x01 (1 bytes)
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x01 (1 bytes)
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x01 (1 bytes)
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x01 (1 bytes)
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x01 (1 bytes)
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x01 (1 bytes)
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x01 (1 bytes)
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x04 (4 bytes)
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04 (4 bytes)
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x01 (1 bytes)
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x04 (4 bytes)
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkCollisionChannel
/// Size: 0x01 (1 bytes)
enum class EAkCollisionChannel : uint8_t
{
	EAKCC_WorldStatic                                                                = 0,
	EAKCC_WorldDynamic                                                               = 1,
	EAKCC_Pawn                                                                       = 2,
	EAKCC_Visibility                                                                 = 3,
	EAKCC_Camera                                                                     = 4,
	EAKCC_PhysicsBody                                                                = 5,
	EAKCC_Vehicle                                                                    = 6,
	EAKCC_Destructible                                                               = 7,
	EAKCC_UseIntegrationSettingsDefault                                              = 8
};

/// Enum /Script/AkAudio.EAkUnrealAudioRouting
/// Size: 0x04 (4 bytes)
enum class EAkUnrealAudioRouting : uint32_t
{
	EAkUnrealAudioRouting__Custom                                                    = 0,
	EAkUnrealAudioRouting__Separate                                                  = 1,
	EAkUnrealAudioRouting__AudioLink                                                 = 2,
	EAkUnrealAudioRouting__AudioMixer                                                = 3,
	EAkUnrealAudioRouting__EnableWwiseOnly                                           = 4,
	EAkUnrealAudioRouting__EnableUnrealOnly                                          = 5
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x01 (1 bytes)
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x0410 (1040 bytes) (0x000330 - 0x000410) align 16 MaxSize: 0x0410
class UAkPortalComponent : public USceneComponent
{ 
public:
	bool                                               bDynamic;                                                   // 0x0330   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x0331   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0332   (0x0002)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x0334   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                                // 0x0338   (0x0001)  
	unsigned char                                      UnknownData01_7[0xD7];                                      // 0x0339   (0x00D7)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.SetDynamic
	// void SetDynamic(bool bInDynamic);                                                                                        // [0x4f8b9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	// bool PortalPlacementValid();                                                                                             // [0x4f8bad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	// void OpenPortal();                                                                                                       // [0x4f8bc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x4f8bb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x4f8bbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	// void ClosePortal();                                                                                                      // [0x4f8bbd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x04A8 (1192 bytes) (0x000498 - 0x0004A8) align 8 MaxSize: 0x04A8
class AAkAcousticPortal : public AVolume
{ 
public:
	class UAkPortalComponent*                          Portal;                                                     // 0x0498   (0x0008)  
	bool                                               bValidForOcclusionPaths;                                    // 0x04A0   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x04A1   (0x0001)  
	bool                                               bRequiresStateMigration;                                    // 0x04A2   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x04A3   (0x0005)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0x4f8c0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x4f8bed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0x4f8bfb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UAkAudioType : public UObject
{ 
public:
	bool                                               bAutoLoad;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioType.UnloadData
	// void UnloadData(bool bAsync);                                                                                            // [0x3962b20] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.LoadData
	// void LoadData();                                                                                                         // [0x3b206a0] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.GetWwiseShortId
	// int32_t GetWwiseShortId();                                                                                               // [0x3c53f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UAkAcousticTexture : public UAkAudioType
{ 
public:
	FWwiseAcousticTextureCookedData                    AcousticTextureCookedData;                                  // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0350 (848 bytes) (0x000330 - 0x000350) align 16 MaxSize: 0x0348
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0330   (0x0018)  MISSED
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x04A0 (1184 bytes) (0x000460 - 0x0004A0) align 8 MaxSize: 0x04A0
class AAkAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0460   (0x0008)  
	class UAkComponent*                                AkComponent;                                                // 0x0468   (0x0008)  
	bool                                               bDisableAkComponentTick;                                    // 0x0470   (0x0001)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x0471   (0x0001)  
	bool                                               AutoPost;                                                   // 0x0472   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2D];                                      // 0x0473   (0x002D)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0x4f8c750] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0x4f8c7b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkMainOutputSettings
{ 
	FString                                            AudioDeviceShareSet;                                        // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0004   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x0008   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x000C   (0x0004)  
	uint32_t                                           DiffractionOrder;                                           // 0x0010   (0x0004)  
	uint32_t                                           DiffractionOnReflectionsOrder;                              // 0x0014   (0x0004)  
	float                                              MaximumPathLength;                                          // 0x0018   (0x0004)  
	float                                              CPULimitPercentage;                                         // 0x001C   (0x0004)  
	uint32_t                                           LoadBalancingSpread;                                        // 0x0020   (0x0004)  
	bool                                               EnableGeometricDiffractionAndTransmission;                  // 0x0024   (0x0001)  
	bool                                               CalcEmitterVirtualPosition;                                 // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0028)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	FString                                            NetworkName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
	uint32_t                                           VmPageSize;                                                 // 0x002C   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x003C (60 bytes) (0x000030 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           MaxNumJobWorkers;                                           // 0x0034   (0x0004)  
	uint32_t                                           JobWorkerMaxExecutionTimeUSec;                              // 0x0038   (0x0004)  
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x003C   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x0040   (0x0001)  
	bool                                               bVerboseSink;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0042   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x010C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0030   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UAkAudioBank : public UAkAudioType
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/AkAudio.AkAudioDeviceShareSet
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UAkAudioDeviceShareSet : public UAkAudioType
{ 
public:
	FWwiseAudioDeviceShareSetCookedData                AudioDeviceShareSetCookedData;                              // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x00E0 (224 bytes) (0x000058 - 0x0000E0) align 8 MaxSize: 0x00E0
class UAkAudioEvent : public UAkAudioType
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0058   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x0060   (0x0004)  
	float                                              MaximumDuration;                                            // 0x0064   (0x0004)  
	EAkAudioEventDurationType                          DurationType;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FWwiseLocalizedEventCookedData                     EventCookedData;                                            // 0x0070   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObjectAndWait
	// int32_t PostOnGameObjectAndWait(class UAkGameObject* GameObject, FLatentActionInfo LatentActionInfo);                    // [0x4f8e170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObject
	// int32_t PostOnGameObject(class UAkGameObject* GameObject, FDelegateProperty& Delegate, int32_t CallbackMask);            // [0x4f8f040] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponentAndWait
	// int32_t PostOnComponentAndWait(class UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x4f8e540] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponent
	// int32_t PostOnComponent(class UAkComponent* Component, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x4f8f2e0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActorAndWait
	// int32_t PostOnActorAndWait(class AActor* Actor, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x4f8ea80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActor
	// int32_t PostOnActor(class AActor* Actor, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x4f8f6c0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostAtLocation
	// int32_t PostAtLocation(FVector Location, FRotator Orientation, FDelegateProperty& Callback, int32_t CallbackMask, class UObject* WorldContextObject); // [0x4f8ddc0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.IsLocalized
	// bool IsLocalized();                                                                                                      // [0x4f8d9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.ExecuteAction
	// int32_t ExecuteAction(AkActionOnEventType ActionType, class AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x4f8da50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0350 (848 bytes) (0x000330 - 0x000350) align 16 MaxSize: 0x0350
class UAkGameObject : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0330   (0x0008)  
	FString                                            EventName;                                                  // 0x0338   (0x0010)  
	bool                                               bIsPersistent;                                              // 0x0348   (0x0001)  
	bool                                               bIsPreview;                                                 // 0x0349   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x034A   (0x0006)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0x3edbeb0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x4f97540] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x4f98010] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback);                               // [0x4f983c0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo); // [0x4f97870] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FString InEventName); // [0x4f97cd0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x4f970b0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x0500 (1280 bytes) (0x000350 - 0x000500) align 16 MaxSize: 0x0500
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               bUseSpatialAudio;                                           // 0x0350   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0351   (0x0007)  MISSED
	TEnumAsByte<EAkCollisionChannel>                   OcclusionCollisionChannel;                                  // 0x0358   (0x0001)  
	bool                                               EnableSpotReflectors;                                       // 0x0359   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x035A   (0x0002)  MISSED
	float                                              OuterRadius;                                                // 0x035C   (0x0004)  
	float                                              InnerRadius;                                                // 0x0360   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0364   (0x0004)  MISSED
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0368   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0370   (0x0010)  
	int32_t                                            EarlyReflectionOrder;                                       // 0x0380   (0x0004)  
	float                                              EarlyReflectionBusSendGain;                                 // 0x0384   (0x0004)  
	float                                              EarlyReflectionMaxPathLength;                               // 0x0388   (0x0004)  
	float                                              roomReverbAuxBusGain;                                       // 0x038C   (0x0004)  
	int32_t                                            diffractionMaxEdges;                                        // 0x0390   (0x0004)  
	int32_t                                            diffractionMaxPaths;                                        // 0x0394   (0x0004)  
	float                                              diffractionMaxPathLength;                                   // 0x0398   (0x0004)  
	bool                                               DrawFirstOrderReflections;                                  // 0x039C   (0x0001)  
	bool                                               DrawSecondOrderReflections;                                 // 0x039D   (0x0001)  
	bool                                               DrawHigherOrderReflections;                                 // 0x039E   (0x0001)  
	bool                                               DrawDiffraction;                                            // 0x039F   (0x0001)  
	bool                                               StopWhenOwnerDestroyed;                                     // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x03A1   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x03A4   (0x0004)  
	float                                              OcclusionRefreshInterval;                                   // 0x03A8   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData04_7[0x153];                                     // 0x03AD   (0x0153)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x4f930d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x4f92cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x4f933e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x4f932f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x4f92910] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x4f931c0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	// void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                    // [0x4f943b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEnableSpotReflectors
	// void SetEnableSpotReflectors(bool in_enable);                                                                            // [0x4f942b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x4f92a00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x4f92b30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x4f92820] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SeekOnPlayingID
	// bool SeekOnPlayingID(int32_t Milliseconds, int32_t PlayingID);                                                           // [0x4f921b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SeekOnEvent
	// void SeekOnEvent(int32_t Milliseconds, int32_t PlayingID);                                                               // [0x4f92020] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x4f93710] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, FLatentActionInfo LatentInfo);                          // [0x4f93f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);                                                // [0x4f94170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventById
	// int32_t PostAkEventById(int32_t EventId);                                                                                // [0x4f939a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, FLatentActionInfo LatentInfo);      // [0x4f93aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FLatentActionInfo LatentInfo);                            // [0x4f93d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.HasActiveEventsPlaying
	// bool HasActiveEventsPlaying();                                                                                           // [0x4f927b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkComponent.GetSourcePlayPosition
	// int32_t GetSourcePlayPosition(int32_t PlayingID);                                                                        // [0x4f92470] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetOcclusionCollisionChannel
	// TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();                                                           // [0x4f94590] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetEventIDFromPlayingID
	// int32_t GetEventIDFromPlayingID(int32_t PlayingID);                                                                      // [0x4f925e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetEmitterPlayingIDs
	// TArray<int32_t> GetEmitterPlayingIDs();                                                                                  // [0x4f92730] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0x4f927e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0530 (1328 bytes) (0x000500 - 0x000530) align 16 MaxSize: 0x0530
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0500   (0x0030)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x4f902a0] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x00D0 (208 bytes) (0x000058 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAkAuxBus : public UAkAudioType
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FWwiseLocalizedAuxBusCookedData                    AuxBusCookedData;                                           // 0x0060   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkBoolPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkWwiseObjectDetails
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemPath;                                                   // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	FString                                            ItemPath;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x1060 (4192 bytes) (0x0001D0 - 0x001060) align 16 MaxSize: 0x1060
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x2B8];                                     // 0x01D0   (0x02B8)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x0488   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0489   (0x0003)  MISSED
	SDK_UNDEFINED(20,384) /* FDelegateProperty */      __um(CheckedStateDelegate);                                 // 0x048C   (0x0014)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x04A0   (0x0AE0)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0F80   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0F81   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0F82   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0F88   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0F98   (0x0040)  
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(AkOnCheckStateChanged);                              // 0x0FD8   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0FE8   (0x0010)  
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0FF8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x58];                                      // 0x1008   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x4f91680] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x4f91490] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x4f91390] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x4f911a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x4f91820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x4f917d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x4f91780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0x4f910b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0x4f91330] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UAkAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAkAssetPlatformData : public UObject
{ 
public:
	class UAkAssetData*                                CurrentAssetData;                                           // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAkMediaAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAkMediaAsset : public UObject
{ 
public:
	TMap<FString, class UAkMediaAssetData*>            MediaAssetDataPerPlatform;                                  // 0x0030   (0x0050)  
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UAkFolder : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0690 (1680 bytes) (0x000688 - 0x000690) align 16 MaxSize: 0x0690
class UDrawPortalComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0688   (0x0008)  MISSED
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0690 (1680 bytes) (0x000688 - 0x000690) align 16 MaxSize: 0x0690
class UDrawRoomComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0688   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkEffectShareSet
/// Size: 0x00C0 (192 bytes) (0x000058 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAkEffectShareSet : public UAkAudioType
{ 
public:
	FWwiseLocalizedShareSetCookedData                  ShareSetCookedData;                                         // 0x0058   (0x0060)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0x4f9a8a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0x4f9a3a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0x4f9a520] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x4f9aa80] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0x4f9ade0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0x4f9a400] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0x4f9a780] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x4f9ab60] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x4f9d2e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);                          // [0x4f9ae10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x4f9ddf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRandomSeed
	// void SetRandomSeed(int32_t Seed);                                                                                        // [0x4f9e2a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0x4f9bd70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0x4f9c310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x4f9ba40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputDeviceEffect
	// bool SetOutputDeviceEffect(FAkOutputDeviceID InDeviceId, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet); // [0x4f99720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4f9cf80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4f9c640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4f9cae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0x4f9c040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetDistanceProbe
	// void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);                                              // [0x4f98910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x4f99be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x4f99ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByName
	// bool SetBusEffectByName(FString InBusName, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x4f99360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByID
	// bool SetBusEffectByID(FAkUniqueID InBusID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x4f990d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x4f9bb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetAuxBusEffect
	// bool SetAuxBusEffect(class UAkAuxBus* InAuxBus, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);       // [0x4f98e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetActorMixerEffect
	// bool SetActorMixerEffect(FAkUniqueID InAudioNodeID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);   // [0x4f98b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);             // [0x4f9d520] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                           // [0x4f9b4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.RemoveOutput
	// void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);                                                                  // [0x4f9b690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x4f9ea80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0x3b9c6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);                         // [0x4f9b140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x4f9d7f0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x4f9a200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x4f9a120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x4f999c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x4f9e3a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x4f9e690] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia
	// void ClearSoundBanksAndMedia();                                                                                          // [0x4f9aa50] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0x4f9aa50] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x4f9ac40] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x4f9a580] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutput
	// void AddOutput(FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<UAkComponent*>& in_ListenerIDs);  // [0x4f9b7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAkCallbackInfo : public UObject
{ 
public:
	class UAkComponent*                                AkComponent;                                                // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	int32_t                                            EventId;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0x4fa2020] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x4fa1590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x4fa1960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x4fa1d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x4fa1c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x4fa1810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x4fa1ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x4fa16d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0x4fa2000] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x4fa1ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0040   (0x0004)  
	int32_t                                            Position;                                                   // 0x0044   (0x0004)  
	FString                                            Label;                                                      // 0x0048   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0040   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x0044   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0048   (0x0004)  
	int32_t                                            MediaId;                                                    // 0x004C   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x003C   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            UserCueName;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkGeometrySurfaceOverride
{ 
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x04D0 (1232 bytes) (0x000348 - 0x0004D0) align 16 MaxSize: 0x04D0
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0348   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0349   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x034C   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0354   (0x0004)  MISSED
	TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x0358   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x03A8   (0x0018)  
	bool                                               bEnableDiffraction;                                         // 0x03C0   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x03C1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x03C2   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x03D0   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x03E0   (0x0050)  
	TMap<int32_t, double>                              SurfaceAreas;                                               // 0x0430   (0x0050)  
	unsigned char                                      UnknownData04_7[0x50];                                      // 0x0480   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0x4fa3c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	// void SendGeometry();                                                                                                     // [0x4fa3c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0x4fa3c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0x4fa3c60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class UAkGroupValue : public UAkAudioType
{ 
public:
	FWwiseGroupValueCookedData                         GroupValueCookedData;                                       // 0x0058   (0x0018)  
	uint32_t                                           GroupShortId;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x00003C - 0x000040) align 4 MaxSize: 0x0040
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkHololensInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x00B8 (184 bytes) (0x000058 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAkInitBank : public UAkAudioType
{ 
public:
	FWwiseInitBankCookedData                           InitBankCookedData;                                         // 0x0058   (0x0058)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UAkIOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D8   (0x003C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x4fa7600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x4fa7750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x01F8 (504 bytes) (0x0001B8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UAkItemBoolProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x01D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x4fa7a00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x4fa7e80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x4fa7d30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x4fa7600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x4fa7750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x01F8 (504 bytes) (0x0001B8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UAkItemProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x01D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x4fa7a00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x4fa8510] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x4fa7d30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x03C0 (960 bytes) (0x000330 - 0x0003C0) align 16 MaxSize: 0x03C0
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0331   (0x0003)  MISSED
	float                                              SendLevel;                                                  // 0x0334   (0x0004)  
	float                                              FadeRate;                                                   // 0x0338   (0x0004)  
	float                                              Priority;                                                   // 0x033C   (0x0004)  
	bool                                               AutoAssignAuxBus;                                           // 0x0340   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0341   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0348   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0350   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0360   (0x0008)  MISSED
	class UAkAuxBus*                                   AuxBusManual;                                               // 0x0368   (0x0008)  
	unsigned char                                      UnknownData03_7[0x50];                                      // 0x0370   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                          // [0x4fa8910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxArm64InitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkLinuxArm64InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLinuxArm64InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxArm64PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkLinuxArm64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkMacInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
public:
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           ACPBatchBufferSize;                                         // 0x003C   (0x0004)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0040   (0x0001)  
	bool                                               bPlotQueueLevel;                                            // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0042   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkPS4InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkPS4AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4fac110] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x0050 (80 bytes) (0x00003C - 0x000050) align 4 MaxSize: 0x0050
struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003C   (0x0001)  
	bool                                               bVorbisHwAcceleration;                                      // 0x003D   (0x0001)  
	bool                                               bEnable3DAudioSync;                                         // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003F   (0x0001)  MISSED
	uint32_t                                           uNumOperationsForHwMixing;                                  // 0x0040   (0x0004)  
	bool                                               bPlotQueueLevel;                                            // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	uint32_t                                           NumAudioOut2Ports;                                          // 0x0048   (0x0004)  
	uint32_t                                           NumAudioOut2ObjectPorts;                                    // 0x004C   (0x0004)  
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkPS5InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkPS5AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0050)  
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkPS5PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x04D0 (1232 bytes) (0x000498 - 0x0004D0) align 8 MaxSize: 0x04D0
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled;                                                   // 0x0498   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0499   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x04A0   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x04A8   (0x0010)  
	float                                              SendLevel;                                                  // 0x04B8   (0x0004)  
	float                                              FadeRate;                                                   // 0x04BC   (0x0004)  
	float                                              Priority;                                                   // 0x04C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x04C4   (0x0004)  MISSED
	class UAkLateReverbComponent*                      LateReverbComponent;                                        // 0x04C8   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0390 (912 bytes) (0x000350 - 0x000390) align 16 MaxSize: 0x0390
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable;                                                    // 0x0350   (0x0001)  
	bool                                               bDynamic;                                                   // 0x0351   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0352   (0x0002)  MISSED
	float                                              Priority;                                                   // 0x0354   (0x0004)  
	float                                              WallOcclusion;                                              // 0x0358   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x035C   (0x0004)  
	bool                                               AutoPost;                                                   // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UAkAudioEvent*                               AmbientEvent;                                               // 0x0368   (0x0008)  
	float                                              AuxSendLevelToSelf;                                         // 0x0370   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0374   (0x000C)  MISSED
	class UAkAcousticTextureSetComponent*              GeometryComponent;                                          // 0x0380   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0388   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                    // [0x4fadac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.SetDynamic
	// void SetDynamic(bool bInDynamic);                                                                                        // [0x4fadc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x4fadc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UAkRtpc : public UAkAudioType
{ 
public:
	FWwiseGameParameterCookedData                      GameParameterCookedData;                                    // 0x0058   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAkGeometrySurfacePropertiesToMap
{ 
	TWeakObjectPtr<class UAkAcousticTexture*>          AcousticTexture;                                            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	float                                              OcclusionValue;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FAkAcousticTextureParams
{ 
	FVector4                                           AbsorptionValues;                                           // 0x0000   (0x0020)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x03B8 (952 bytes) (0x000030 - 0x0003B8) align 8 MaxSize: 0x03B8
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0038   (0x0010)  
	FFilePath                                          TemporaryAudioFileStubPath;                                 // 0x0048   (0x0010)  
	FFilePath                                          ReportOutputPath;                                           // 0x0058   (0x0010)  
	FFilePath                                          ReportIgnoreListPath;                                       // 0x0068   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0078   (0x0010)  
	FDirectoryPath                                     RootOutputPath;                                             // 0x0088   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolder;                                  // 0x0098   (0x0010)  
	FDirectoryPath                                     WwiseStagingDirectory;                                      // 0x00A8   (0x0010)  
	bool                                               bSoundBanksTransfered;                                      // 0x00B8   (0x0001)  
	bool                                               bAssetsMigrated;                                            // 0x00B9   (0x0001)  
	bool                                               bProjectMigrated;                                           // 0x00BA   (0x0001)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x00BB   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                           // 0x00BC   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultFitToGeometryCollisionChannel;                       // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
	SDK_UNDEFINED(80,392) /* TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap> */ __um(AkGeometryMap); // 0x00C0   (0x0050)  
	float                                              GlobalDecayAbsorption;                                      // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TWeakObjectPtr<class UAkAuxBus*>                   DefaultReverbAuxBus;                                        // 0x0118   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0120   (0x0028)  MISSED
	SDK_UNDEFINED(80,393) /* TMap<float, TWeakObjectPtr<UAkAuxBus*>> */ __um(EnvironmentDecayAuxBusMap);           // 0x0148   (0x0050)  
	FString                                            HFDampingName;                                              // 0x0198   (0x0010)  
	FString                                            DecayEstimateName;                                          // 0x01A8   (0x0010)  
	FString                                            TimeToFirstReflectionName;                                  // 0x01B8   (0x0010)  
	TWeakObjectPtr<class UAkRtpc*>                     HFDampingRTPC;                                              // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x01D0   (0x0028)  MISSED
	TWeakObjectPtr<class UAkRtpc*>                     DecayEstimateRTPC;                                          // 0x01F8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0200   (0x0028)  MISSED
	TWeakObjectPtr<class UAkRtpc*>                     TimeToFirstReflectionRTPC;                                  // 0x0228   (0x0008)  
	unsigned char                                      UnknownData06_6[0x28];                                      // 0x0230   (0x0028)  MISSED
	TWeakObjectPtr<class UAkAudioEvent*>               AudioInputEvent;                                            // 0x0258   (0x0008)  
	unsigned char                                      UnknownData07_6[0x28];                                      // 0x0260   (0x0028)  MISSED
	TMap<FGuid, FAkAcousticTextureParams>              AcousticTextureParamsMap;                                   // 0x0288   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x02D8   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x02D9   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x02DA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x02DB   (0x0005)  MISSED
	FString                                            CommandletCommitMessage;                                    // 0x02E0   (0x0010)  
	TMap<FString, FString>                             UnrealCultureToWwiseCulture;                                // 0x02F0   (0x0050)  
	FString                                            DefaultAssetCreationPath;                                   // 0x0340   (0x0010)  
	TWeakObjectPtr<class UAkInitBank*>                 InitBank;                                                   // 0x0350   (0x0008)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x0358   (0x0028)  MISSED
	EAkUnrealAudioRouting                              AudioRouting;                                               // 0x0380   (0x0004)  
	bool                                               bWwiseSoundEngineEnabled;                                   // 0x0384   (0x0001)  
	bool                                               bWwiseAudioLinkEnabled;                                     // 0x0385   (0x0001)  
	bool                                               bAkAudioMixerEnabled;                                       // 0x0386   (0x0001)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x0387   (0x0001)  MISSED
	float                                              DefaultScalingFactor;                                       // 0x0388   (0x0004)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x038C   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x038D   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x038E   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x038F   (0x0001)  
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0390   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData11_7[0x8];                                       // 0x03B0   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0030   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0040   (0x0010)  
	FDirectoryPath                                     RootOutputPathOverride;                                     // 0x0050   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolderOverride;                          // 0x0060   (0x0010)  
	FString                                            WaapiIPAddress;                                             // 0x0070   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0080   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0084   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x0085   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	uint32_t                                           WaapiTranslatorTimeout;                                     // 0x0088   (0x0004)  
	bool                                               SuppressGeneratedSoundBanksPathWarnings;                    // 0x008C   (0x0001)  
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x008D   (0x0001)  
	bool                                               SoundDataGenerationAutoImport;                              // 0x008E   (0x0001)  
	bool                                               SoundDataGenerationReconcileOriginals;                      // 0x008F   (0x0001)  
	bool                                               AskForWwiseAssetReload;                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x07A0 (1952 bytes) (0x0001B8 - 0x0007A0) align 16 MaxSize: 0x07A0
class UAkSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x01B8   (0x0004)  
	SDK_UNDEFINED(20,394) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x01BC   (0x0014)  
	FSliderStyle                                       WidgetStyle;                                                // 0x01D0   (0x0500)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x06D4   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x06E4   (0x0010)  
	bool                                               IndentHandle;                                               // 0x06F4   (0x0001)  
	bool                                               Locked;                                                     // 0x06F5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x06F6   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x06F8   (0x0004)  
	bool                                               IsFocusable;                                                // 0x06FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x06FD   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x0700   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0710   (0x0040)  
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0750   (0x0010)  
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0760   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0770   (0x0010)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0780   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x4fafd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x4faf890] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x4faf550] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x4faf6f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x4fafa30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x4fafbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x4faf1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x4faf450] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0x4fafe60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0x4faf0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0x4faf3e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x04A8 (1192 bytes) (0x000498 - 0x0004A8) align 8 MaxSize: 0x04A8
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	class UAkLateReverbComponent*                      LateReverb;                                                 // 0x0498   (0x0008)  
	class UAkRoomComponent*                            Room;                                                       // 0x04A0   (0x0008)  
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0498 (1176 bytes) (0x000460 - 0x000498) align 8 MaxSize: 0x0498
class AAkSpotReflector : public AActor
{ 
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0460   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0468   (0x0010)  
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0478   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x0480   (0x0004)  
	float                                              Level;                                                      // 0x0484   (0x0004)  
	bool                                               SameRoomOnly;                                               // 0x0488   (0x0001)  
	bool                                               EnableRoomOverride;                                         // 0x0489   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x048A   (0x0006)  MISSED
	class AActor*                                      RoomOverride;                                               // 0x0490   (0x0008)  
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0550 (1360 bytes) (0x000530 - 0x000550) align 16 MaxSize: 0x0550
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
public:
	class USoundSubmix*                                SubmixToRecord;                                             // 0x0530   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0538   (0x0018)  MISSED
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkSurfacePoly
{ 
	class UAkAcousticTexture*                          Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0380 (896 bytes) (0x000348 - 0x000380) align 16 MaxSize: 0x0380
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors;                                   // 0x0348   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0349   (0x0007)  MISSED
	TArray<FAkSurfacePoly>                             AcousticPolys;                                              // 0x0350   (0x0010)  
	bool                                               bEnableDiffraction;                                         // 0x0360   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0361   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0362   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0368   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0370   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x4fb1fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
	// void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);                                                  // [0x4fb1d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0x4fb1fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x4fa3c00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkSwitchInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithCommSelection          CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UAkTrigger : public UAkAudioType
{ 
public:
	FWwiseTriggerCookedData                            TriggerCookedData;                                          // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D8   (0x003C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x4fb40a0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x4fb4250] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x4fb4cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& Callback);                                                    // [0x4fb4a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& Callback);                                                   // [0x4fb4940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x4fb4bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x4fb3e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x4fb3f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x4fb4650] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x4fa7600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x4fa7750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x4fb7760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x4fb6de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x4fb7160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x4fb7450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x4fb6a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x4fb6740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x4fb64a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x4fb5b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x4fb6010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x4fb5dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x4fb6260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x4fb5830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x4fb5570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x4fb56b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x4fa7600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x4fa7750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	uint32_t                                           MaxSystemAudioObjects;                                      // 0x0040   (0x0004)  
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x010C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	uint32_t                                           uMaxSystemAudioObjects;                                     // 0x0040   (0x0004)  
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkWinGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkWinGDKAdvancedInitializationSettings            AdvancedSettings;                                           // 0x00C8   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x010C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x01F8 (504 bytes) (0x0001B8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UAkWwiseTree : public UWidget
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x01D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x4fa7a00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x4fbaed0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x4fa7d30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0218 (536 bytes) (0x0001B8 - 0x000218) align 8 MaxSize: 0x0218
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x01D8   (0x0040)  MISSED
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXboxOneGDKApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x00003C - 0x000040) align 4 MaxSize: 0x0040
struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x003C   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x003F   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkXboxOneGDKApuHeapInitializationSettings         ApuHeapSettings;                                            // 0x00A0   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkXboxOneGDKAdvancedInitializationSettings        AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXB1InitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXB1PlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXboxOneApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x00003C - 0x000040) align 4 MaxSize: 0x0040
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x003C   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x003F   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAkXboxOneInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkXboxOneApuHeapInitializationSettings            ApuHeapSettings;                                            // 0x00A0   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkXboxOneAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXSXApuHeapInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAkXSXApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXSXAdvancedInitializationSettings
/// Size: 0x0048 (72 bytes) (0x00003C - 0x000048) align 4 MaxSize: 0x0048
struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x003C   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003F   (0x0001)  MISSED
	uint16_t                                           MaximumNumberOfOpusVoices;                                  // 0x0040   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	uint32_t                                           uMaxSystemAudioObjects;                                     // 0x0044   (0x0004)  
};

/// Class /Script/AkAudio.AkXSXInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UAkXSXInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkXSXApuHeapInitializationSettings                ApuHeapSettings;                                            // 0x00A0   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkXSXAdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C8   (0x0048)  


	/// Functions
	// Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x4f8cce0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMPXInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXSXPlatformInfo
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkXSXPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x0178 (376 bytes) (0x0000F8 - 0x000178) align 8 MaxSize: 0x0178
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x00F8   (0x0028)  MISSED
	class UAkAudioEvent*                               event;                                                      // 0x0120   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x012C   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0131   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0138   (0x0010)  
	float                                              MaxSourceDuration;                                          // 0x0148   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	FString                                            MaxDurationSourceID;                                        // 0x0150   (0x0010)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x0160   (0x0018)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  
	bool                                               bIsAMasterTrack;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0004   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0000   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              DefaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x02D0 (720 bytes) (0x0000F8 - 0x0002D0) align 8 MaxSize: 0x02D0
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	class UAkRtpc*                                     RTPC;                                                       // 0x00F8   (0x0008)  
	FString                                            Name;                                                       // 0x0100   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0110   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0190   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01C0   (0x0110)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x4fbf910] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x4fbf8f0] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0048   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x4fc00d0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x4fc00b0] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkOutputSettings
{ 
	class UAkAudioDeviceShareSet*                      AudioDeviceShareSet;                                        // 0x0000   (0x0008)  
	int32_t                                            IdDevice;                                                   // 0x0008   (0x0004)  
	PanningRule                                        PanRule;                                                    // 0x000C   (0x0001)  
	AkChannelConfiguration                             ChannelConfig;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               Param1;                                                     // 0x0002   (0x0001)  
	char                                               Param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0008 (8 bytes) (0x000002 - 0x000008) align 4 MaxSize: 0x0008
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               Value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAkExternalSourceInfo
{ 
	FString                                            ExternalSrcName;                                            // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkIOSAdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x00003C - 0x00003C) align 4 MaxSize: 0x003C
struct FAkIOSAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkReverbDescriptor
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	class UPrimitiveComponent*                         Primitive;                                                  // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkSurfaceEdgeVerts
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAkSurfaceEdgeInfo
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiFieldNames
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiUri
{ 
	FString                                            Uri;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioEventSection*              Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioRTPCSection*               Section;                                                    // 0x0020   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UAkPortalComponent) == 0x0410); // 1040 bytes (0x000330 - 0x000410)
static_assert(sizeof(AAkAcousticPortal) == 0x04A8); // 1192 bytes (0x000498 - 0x0004A8)
static_assert(sizeof(UAkAudioType) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UAkAcousticTexture) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UAkAcousticTextureSetComponent) == 0x0348); // 840 bytes (0x000330 - 0x000348)
static_assert(sizeof(AAkAmbientSound) == 0x04A0); // 1184 bytes (0x000460 - 0x0004A0)
static_assert(sizeof(FAkMainOutputSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSpatialAudioSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkCommonInitializationSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAkCommonInitializationSettingsWithSampleRate) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FAkCommunicationSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkCommunicationSettingsWithSystemInitialization) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAkAdvancedInitializationSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering) == 0x003C); // 60 bytes (0x000030 - 0x00003C)
static_assert(sizeof(FAkAndroidAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkAndroidInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkPlatformInfo) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UAkAndroidPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkAudioBank) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UAkAudioDeviceShareSet) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UAkAudioEvent) == 0x00E0); // 224 bytes (0x000058 - 0x0000E0)
static_assert(sizeof(UAkGameObject) == 0x0350); // 848 bytes (0x000330 - 0x000350)
static_assert(sizeof(UAkComponent) == 0x0500); // 1280 bytes (0x000350 - 0x000500)
static_assert(sizeof(UAkAudioInputComponent) == 0x0530); // 1328 bytes (0x000500 - 0x000530)
static_assert(sizeof(UAkAuxBus) == 0x00D0); // 208 bytes (0x000058 - 0x0000D0)
static_assert(sizeof(FAkBoolPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWwiseObjectDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkWwiseItemToControl) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAkCheckBox) == 0x1060); // 4192 bytes (0x0001D0 - 0x001060)
static_assert(sizeof(UAkAssetData) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UAkAssetPlatformData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkMediaAssetData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAkMediaAsset) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UAkLocalizedMediaAsset) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UAkExternalMediaAsset) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UAkFolder) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UDrawPortalComponent) == 0x0690); // 1680 bytes (0x000688 - 0x000690)
static_assert(sizeof(UDrawRoomComponent) == 0x0690); // 1680 bytes (0x000688 - 0x000690)
static_assert(sizeof(UAkEffectShareSet) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UAkGameplayStatics) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkCallbackInfo) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkEventCallbackInfo) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkMIDIEventCallbackInfo) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAkMarkerCallbackInfo) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UAkDurationCallbackInfo) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(FAkSegmentInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UAkMusicSyncCallbackInfo) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(FAkGeometrySurfaceOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkAcousticSurface) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkTriangle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkGeometryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAkGeometryComponent) == 0x04D0); // 1232 bytes (0x000348 - 0x0004D0)
static_assert(sizeof(UAkGroupValue) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(FAkHololensAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x00003C - 0x000040)
static_assert(sizeof(UAkHololensInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkHololensPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkInitBank) == 0x00B8); // 184 bytes (0x000058 - 0x0000B8)
static_assert(sizeof(FAkAudioSession) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAkIOSInitializationSettings) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UAkIOSPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkItemBoolPropertiesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkItemBoolProperties) == 0x01F8); // 504 bytes (0x0001B8 - 0x0001F8)
static_assert(sizeof(UAkItemPropertiesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkItemProperties) == 0x01F8); // 504 bytes (0x0001B8 - 0x0001F8)
static_assert(sizeof(UAkLateReverbComponent) == 0x03C0); // 960 bytes (0x000330 - 0x0003C0)
static_assert(sizeof(UAkLinuxArm64InitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkLinuxArm64PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkLinuxInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkLinuxPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkMacInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkMacPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkPlatformInitialisationSettingsBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAkPS4AdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkPS4InitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkPS4PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkPS5AdvancedInitializationSettings) == 0x0050); // 80 bytes (0x00003C - 0x000050)
static_assert(sizeof(UAkPS5InitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkDPXInitializationSettings) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(UAkPS5PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(AAkReverbVolume) == 0x04D0); // 1232 bytes (0x000498 - 0x0004D0)
static_assert(sizeof(UAkRoomComponent) == 0x0390); // 912 bytes (0x000350 - 0x000390)
static_assert(sizeof(UAkRtpc) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(FAkGeometrySurfacePropertiesToMap) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAkAcousticTextureParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAkSettings) == 0x03B8); // 952 bytes (0x000030 - 0x0003B8)
static_assert(sizeof(UAkSettingsPerUser) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FAkPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAkSlider) == 0x07A0); // 1952 bytes (0x0001B8 - 0x0007A0)
static_assert(sizeof(AAkSpatialAudioVolume) == 0x04A8); // 1192 bytes (0x000498 - 0x0004A8)
static_assert(sizeof(AAkSpotReflector) == 0x0498); // 1176 bytes (0x000460 - 0x000498)
static_assert(sizeof(UAkStateValue) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UAkSubmixInputComponent) == 0x0550); // 1360 bytes (0x000530 - 0x000550)
static_assert(sizeof(FAkSurfacePoly) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAkSurfaceReflectorSetComponent) == 0x0380); // 896 bytes (0x000348 - 0x000380)
static_assert(sizeof(FAkCommunicationSettingsWithCommSelection) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(UAkSwitchInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkSwitchPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkSwitchValue) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UAkTrigger) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UAkTVOSInitializationSettings) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UAkTVOSPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWaapiCalls) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USAkWaapiFieldNamesConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkWaapiJsonManager) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAkWaapiUriConv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FAkWindowsAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkWindowsInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkWin32PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWin64PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWindowsPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkWinGDKAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkWinGDKInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkWinAnvilInitializationSettings) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(UAkWinGDKPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWinAnvilPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkWwiseTree) == 0x01F8); // 504 bytes (0x0001B8 - 0x0001F8)
static_assert(sizeof(UAkWwiseTreeSelector) == 0x0218); // 536 bytes (0x0001B8 - 0x000218)
static_assert(sizeof(FAkXboxOneGDKApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXboxOneGDKAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x00003C - 0x000040)
static_assert(sizeof(UAkXboxOneGDKInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkXboxOneAnvilInitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAkXB1InitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAkXboxOneGDKPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkXboxOneAnvilPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkXB1PlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkXboxOneApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXboxOneAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x00003C - 0x000040)
static_assert(sizeof(UAkXboxOneInitializationSettings) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UAkXboxOnePlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FAkXSXApuHeapInitializationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkXSXAdvancedInitializationSettings) == 0x0048); // 72 bytes (0x00003C - 0x000048)
static_assert(sizeof(UAkXSXInitializationSettings) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UAkMPXInitializationSettings) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(UAkXSXPlatformInfo) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0x0178); // 376 bytes (0x0000F8 - 0x000178)
static_assert(sizeof(UMovieSceneAkTrack) == 0x00B8); // 184 bytes (0x0000A0 - 0x0000B8)
static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(FMovieSceneTangentDataSerializationHelper) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneFloatValueSerializationHelper) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneFloatChannelSerializationHelper) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x02D0); // 720 bytes (0x0000F8 - 0x0002D0)
static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UPostEventAsync) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UPostEventAtLocationAsync) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(FAKWaapiJsonObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiSubscriptionId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkChannelMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAkOutputSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkMidiEventBase) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAkMidiGeneric) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiNoteOnOff) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiCc) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiPitchBend) == 0x0008); // 8 bytes (0x000002 - 0x000008)
static_assert(sizeof(FAkMidiNoteAftertouch) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiChannelAftertouch) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiProgramChange) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkExternalSourceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAkIOSAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x00003C - 0x00003C)
static_assert(sizeof(FAkReverbDescriptor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSurfaceEdgeVerts) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkSurfaceEdgeInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAkWaapiFieldNames) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiUri) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneAkAudioEventTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneAkAudioRTPCTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(offsetof(UAkPortalComponent, InitialState) == 0x0331);
static_assert(offsetof(UAkPortalComponent, ObstructionCollisionChannel) == 0x0338);
static_assert(offsetof(AAkAcousticPortal, Portal) == 0x0498);
static_assert(offsetof(AAkAcousticPortal, InitialState) == 0x04A1);
static_assert(offsetof(UAkAudioType, UserData) == 0x0038);
static_assert(offsetof(UAkAcousticTexture, AcousticTextureCookedData) == 0x0058);
static_assert(offsetof(AAkAmbientSound, AkAudioEvent) == 0x0460);
static_assert(offsetof(AAkAmbientSound, AkComponent) == 0x0468);
static_assert(offsetof(FAkMainOutputSettings, AudioDeviceShareSet) == 0x0000);
static_assert(offsetof(FAkMainOutputSettings, PanningRule) == 0x0014);
static_assert(offsetof(FAkMainOutputSettings, ChannelConfigType) == 0x0018);
static_assert(offsetof(FAkCommonInitializationSettings, MainOutputSettings) == 0x0010);
static_assert(offsetof(FAkCommonInitializationSettings, SpatialAudioSettings) == 0x0040);
static_assert(offsetof(FAkCommunicationSettings, NetworkName) == 0x0008);
static_assert(offsetof(UAkAndroidInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkAndroidInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkAndroidInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkAudioDeviceShareSet, AudioDeviceShareSetCookedData) == 0x0058);
static_assert(offsetof(UAkAudioEvent, DurationType) == 0x0068);
static_assert(offsetof(UAkAudioEvent, EventCookedData) == 0x0070);
static_assert(offsetof(UAkAudioEvent, RequiredBank) == 0x00D0);
static_assert(offsetof(UAkGameObject, AkAudioEvent) == 0x0330);
static_assert(offsetof(UAkGameObject, EventName) == 0x0338);
static_assert(offsetof(UAkComponent, OcclusionCollisionChannel) == 0x0358);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBus) == 0x0368);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBusName) == 0x0370);
static_assert(offsetof(UAkAuxBus, AuxBusCookedData) == 0x0060);
static_assert(offsetof(UAkAuxBus, RequiredBank) == 0x00C0);
static_assert(offsetof(FAkBoolPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemName) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemPath) == 0x0010);
static_assert(offsetof(FAkWwiseObjectDetails, ItemId) == 0x0020);
static_assert(offsetof(FAkWwiseItemToControl, ItemPicked) == 0x0000);
static_assert(offsetof(FAkWwiseItemToControl, ItemPath) == 0x0030);
static_assert(offsetof(UAkCheckBox, CheckedState) == 0x0488);
static_assert(offsetof(UAkCheckBox, WidgetStyle) == 0x04A0);
static_assert(offsetof(UAkCheckBox, HorizontalAlignment) == 0x0F80);
static_assert(offsetof(UAkCheckBox, ThePropertyToControl) == 0x0F88);
static_assert(offsetof(UAkCheckBox, ItemToControl) == 0x0F98);
static_assert(offsetof(UAkAssetPlatformData, CurrentAssetData) == 0x0030);
static_assert(offsetof(UAkMediaAsset, MediaAssetDataPerPlatform) == 0x0030);
static_assert(offsetof(UAkEffectShareSet, ShareSetCookedData) == 0x0058);
static_assert(offsetof(UAkCallbackInfo, AkComponent) == 0x0030);
static_assert(offsetof(UAkMarkerCallbackInfo, Label) == 0x0048);
static_assert(offsetof(UAkMusicSyncCallbackInfo, SegmentInfo) == 0x003C);
static_assert(offsetof(UAkMusicSyncCallbackInfo, MusicSyncType) == 0x0060);
static_assert(offsetof(UAkMusicSyncCallbackInfo, UserCueName) == 0x0068);
static_assert(offsetof(FAkGeometrySurfaceOverride, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticSurface, Name) == 0x0008);
static_assert(offsetof(FAkGeometryData, Vertices) == 0x0000);
static_assert(offsetof(FAkGeometryData, Surfaces) == 0x0010);
static_assert(offsetof(FAkGeometryData, Triangles) == 0x0020);
static_assert(offsetof(FAkGeometryData, ToOverrideAcousticTexture) == 0x0030);
static_assert(offsetof(FAkGeometryData, ToOverrideOcclusion) == 0x0040);
static_assert(offsetof(UAkGeometryComponent, MeshType) == 0x0348);
static_assert(offsetof(UAkGeometryComponent, StaticMeshSurfaceOverride) == 0x0358);
static_assert(offsetof(UAkGeometryComponent, CollisionMeshSurfaceOverride) == 0x03A8);
static_assert(offsetof(UAkGeometryComponent, AssociatedRoom) == 0x03C8);
static_assert(offsetof(UAkGeometryComponent, GeometryData) == 0x03E0);
static_assert(offsetof(UAkGeometryComponent, SurfaceAreas) == 0x0430);
static_assert(offsetof(UAkGroupValue, GroupValueCookedData) == 0x0058);
static_assert(offsetof(UAkHololensInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkHololensInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkHololensInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkInitBank, InitBankCookedData) == 0x0058);
static_assert(offsetof(FAkAudioSession, AudioSessionCategory) == 0x0000);
static_assert(offsetof(FAkAudioSession, AudioSessionMode) == 0x0008);
static_assert(offsetof(UAkIOSInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkIOSInitializationSettings, AudioSession) == 0x00A8);
static_assert(offsetof(UAkIOSInitializationSettings, CommunicationSettings) == 0x00B8);
static_assert(offsetof(UAkIOSInitializationSettings, AdvancedSettings) == 0x00D8);
static_assert(offsetof(UAkLateReverbComponent, AuxBus) == 0x0348);
static_assert(offsetof(UAkLateReverbComponent, AuxBusName) == 0x0350);
static_assert(offsetof(UAkLateReverbComponent, AuxBusManual) == 0x0368);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkLinuxInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkLinuxInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkLinuxInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkMacInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkMacInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkMacInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkPS4InitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkPS4InitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkPS4InitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkPS5InitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkPS5InitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkPS5InitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(AAkReverbVolume, AuxBus) == 0x04A0);
static_assert(offsetof(AAkReverbVolume, AuxBusName) == 0x04A8);
static_assert(offsetof(AAkReverbVolume, LateReverbComponent) == 0x04C8);
static_assert(offsetof(UAkRoomComponent, AmbientEvent) == 0x0368);
static_assert(offsetof(UAkRoomComponent, GeometryComponent) == 0x0380);
static_assert(offsetof(UAkRtpc, GameParameterCookedData) == 0x0058);
static_assert(offsetof(FAkGeometrySurfacePropertiesToMap, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticTextureParams, AbsorptionValues) == 0x0000);
static_assert(offsetof(UAkSettings, WwiseProjectPath) == 0x0038);
static_assert(offsetof(UAkSettings, TemporaryAudioFileStubPath) == 0x0048);
static_assert(offsetof(UAkSettings, ReportOutputPath) == 0x0058);
static_assert(offsetof(UAkSettings, ReportIgnoreListPath) == 0x0068);
static_assert(offsetof(UAkSettings, WwiseSoundDataFolder) == 0x0078);
static_assert(offsetof(UAkSettings, RootOutputPath) == 0x0088);
static_assert(offsetof(UAkSettings, GeneratedSoundBanksFolder) == 0x0098);
static_assert(offsetof(UAkSettings, WwiseStagingDirectory) == 0x00A8);
static_assert(offsetof(UAkSettings, DefaultOcclusionCollisionChannel) == 0x00BC);
static_assert(offsetof(UAkSettings, DefaultFitToGeometryCollisionChannel) == 0x00BD);
static_assert(offsetof(UAkSettings, DefaultReverbAuxBus) == 0x0118);
static_assert(offsetof(UAkSettings, HFDampingName) == 0x0198);
static_assert(offsetof(UAkSettings, DecayEstimateName) == 0x01A8);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionName) == 0x01B8);
static_assert(offsetof(UAkSettings, HFDampingRTPC) == 0x01C8);
static_assert(offsetof(UAkSettings, DecayEstimateRTPC) == 0x01F8);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionRTPC) == 0x0228);
static_assert(offsetof(UAkSettings, AudioInputEvent) == 0x0258);
static_assert(offsetof(UAkSettings, AcousticTextureParamsMap) == 0x0288);
static_assert(offsetof(UAkSettings, CommandletCommitMessage) == 0x02E0);
static_assert(offsetof(UAkSettings, UnrealCultureToWwiseCulture) == 0x02F0);
static_assert(offsetof(UAkSettings, DefaultAssetCreationPath) == 0x0340);
static_assert(offsetof(UAkSettings, InitBank) == 0x0350);
static_assert(offsetof(UAkSettings, AudioRouting) == 0x0380);
static_assert(offsetof(UAkSettings, WwiseWindowsInstallationPath) == 0x0390);
static_assert(offsetof(UAkSettings, WwiseMacInstallationPath) == 0x03A0);
static_assert(offsetof(UAkSettingsPerUser, WwiseWindowsInstallationPath) == 0x0030);
static_assert(offsetof(UAkSettingsPerUser, WwiseMacInstallationPath) == 0x0040);
static_assert(offsetof(UAkSettingsPerUser, RootOutputPathOverride) == 0x0050);
static_assert(offsetof(UAkSettingsPerUser, GeneratedSoundBanksFolderOverride) == 0x0060);
static_assert(offsetof(UAkSettingsPerUser, WaapiIPAddress) == 0x0070);
static_assert(offsetof(FAkPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(UAkSlider, WidgetStyle) == 0x01D0);
static_assert(offsetof(UAkSlider, Orientation) == 0x06D0);
static_assert(offsetof(UAkSlider, SliderBarColor) == 0x06D4);
static_assert(offsetof(UAkSlider, SliderHandleColor) == 0x06E4);
static_assert(offsetof(UAkSlider, ThePropertyToControl) == 0x0700);
static_assert(offsetof(UAkSlider, ItemToControl) == 0x0710);
static_assert(offsetof(AAkSpatialAudioVolume, LateReverb) == 0x0498);
static_assert(offsetof(AAkSpatialAudioVolume, Room) == 0x04A0);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBus) == 0x0460);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBusName) == 0x0468);
static_assert(offsetof(AAkSpotReflector, AcousticTexture) == 0x0478);
static_assert(offsetof(AAkSpotReflector, RoomOverride) == 0x0490);
static_assert(offsetof(UAkSubmixInputComponent, SubmixToRecord) == 0x0530);
static_assert(offsetof(FAkSurfacePoly, Texture) == 0x0000);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AcousticPolys) == 0x0350);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AssociatedRoom) == 0x0368);
static_assert(offsetof(FAkCommunicationSettingsWithCommSelection, CommunicationSystem) == 0x0018);
static_assert(offsetof(UAkSwitchInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkSwitchInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkSwitchInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkTrigger, TriggerCookedData) == 0x0058);
static_assert(offsetof(UAkTVOSInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkTVOSInitializationSettings, AudioSession) == 0x00A8);
static_assert(offsetof(UAkTVOSInitializationSettings, CommunicationSettings) == 0x00B8);
static_assert(offsetof(UAkTVOSInitializationSettings, AdvancedSettings) == 0x00D8);
static_assert(offsetof(UAkWindowsInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkWindowsInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkWindowsInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkWinGDKInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, ApuHeapSettings) == 0x00A0);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkXboxOneGDKInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXboxOneInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXboxOneInitializationSettings, ApuHeapSettings) == 0x00A0);
static_assert(offsetof(UAkXboxOneInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkXboxOneInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UAkXSXInitializationSettings, CommonSettings) == 0x0038);
static_assert(offsetof(UAkXSXInitializationSettings, ApuHeapSettings) == 0x00A0);
static_assert(offsetof(UAkXSXInitializationSettings, CommunicationSettings) == 0x00A8);
static_assert(offsetof(UAkXSXInitializationSettings, AdvancedSettings) == 0x00C8);
static_assert(offsetof(UMovieSceneAkAudioEventSection, event) == 0x0120);
static_assert(offsetof(UMovieSceneAkAudioEventSection, EventName) == 0x0138);
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxDurationSourceID) == 0x0150);
static_assert(offsetof(UMovieSceneAkTrack, Sections) == 0x00A0);
static_assert(offsetof(FMovieSceneTangentDataSerializationHelper, TangentWeightMode) == 0x0008);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, InterpMode) == 0x0004);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, TangentMode) == 0x0005);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, Tangent) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap) == 0x0000);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap) == 0x0001);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Times) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Values) == 0x0018);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPC) == 0x00F8);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, Name) == 0x0100);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve) == 0x0110);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper) == 0x0190);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPCChannel) == 0x01C0);
static_assert(offsetof(FAkOutputSettings, AudioDeviceShareSet) == 0x0000);
static_assert(offsetof(FAkOutputSettings, PanRule) == 0x000C);
static_assert(offsetof(FAkOutputSettings, ChannelConfig) == 0x000D);
static_assert(offsetof(FAkMidiEventBase, Type) == 0x0000);
static_assert(offsetof(FAkMidiCc, Cc) == 0x0002);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSrcName) == 0x0000);
static_assert(offsetof(FAkExternalSourceInfo, CodecID) == 0x0010);
static_assert(offsetof(FAkExternalSourceInfo, Filename) == 0x0018);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSourceAsset) == 0x0028);
static_assert(offsetof(FAkReverbDescriptor, Primitive) == 0x0018);
static_assert(offsetof(FAkWaapiFieldNames, FieldName) == 0x0000);
static_assert(offsetof(FAkWaapiUri, Uri) == 0x0000);
static_assert(offsetof(FMovieSceneAkAudioEventTemplate, Section) == 0x0020);
static_assert(offsetof(FMovieSceneAkAudioRTPCTemplate, Section) == 0x0020);
