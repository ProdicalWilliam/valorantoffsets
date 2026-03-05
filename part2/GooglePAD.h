
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

/// Enum /Script/GooglePAD.EGooglePADErrorCode
/// Size: 0x01 (1 bytes)
enum class EGooglePADErrorCode : uint8_t
{
	EGooglePADErrorCode__AssetPack_NO_ERROR                                          = 0,
	EGooglePADErrorCode__AssetPack_APP_UNAVAILABLE                                   = 1,
	EGooglePADErrorCode__AssetPack_UNAVAILABLE                                       = 2,
	EGooglePADErrorCode__AssetPack_INVALID_REQUEST                                   = 3,
	EGooglePADErrorCode__AssetPack_DOWNLOAD_NOT_FOUND                                = 4,
	EGooglePADErrorCode__AssetPack_API_NOT_AVAILABLE                                 = 5,
	EGooglePADErrorCode__AssetPack_NETWORK_ERROR                                     = 6,
	EGooglePADErrorCode__AssetPack_ACCESS_DENIED                                     = 7,
	EGooglePADErrorCode__AssetPack_INSUFFICIENT_STORAGE                              = 8,
	EGooglePADErrorCode__AssetPack_PLAY_STORE_NOT_FOUND                              = 9,
	EGooglePADErrorCode__AssetPack_NETWORK_UNRESTRICTED                              = 10,
	EGooglePADErrorCode__AssetPack_INTERNAL_ERROR                                    = 11,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_NEEDED                             = 12,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_FAILED                             = 13
};

/// Enum /Script/GooglePAD.EGooglePADDownloadStatus
/// Size: 0x01 (1 bytes)
enum class EGooglePADDownloadStatus : uint8_t
{
	EGooglePADDownloadStatus__AssetPack_UNKNOWN                                      = 0,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_PENDING                             = 1,
	EGooglePADDownloadStatus__AssetPack_DOWNLOADING                                  = 2,
	EGooglePADDownloadStatus__AssetPack_TRANSFERRING                                 = 3,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_COMPLETED                           = 4,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_FAILED                              = 5,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_CANCELED                            = 6,
	EGooglePADDownloadStatus__AssetPack_WAITING_FOR_WIFI                             = 7,
	EGooglePADDownloadStatus__AssetPack_NOT_INSTALLED                                = 8,
	EGooglePADDownloadStatus__AssetPack_INFO_PENDING                                 = 9,
	EGooglePADDownloadStatus__AssetPack_INFO_FAILED                                  = 10,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_PENDING                              = 11,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_FAILED                               = 12
};

/// Enum /Script/GooglePAD.EGooglePADStorageMethod
/// Size: 0x01 (1 bytes)
enum class EGooglePADStorageMethod : uint8_t
{
	EGooglePADStorageMethod__AssetPack_STORAGE_FILES                                 = 0,
	EGooglePADStorageMethod__AssetPack_STORAGE_APK                                   = 1,
	EGooglePADStorageMethod__AssetPack_STORAGE_UNKNOWN                               = 2,
	EGooglePADStorageMethod__AssetPack_STORAGE_NOT_INSTALLED                         = 3
};

/// Enum /Script/GooglePAD.EGooglePADCellularDataConfirmStatus
/// Size: 0x01 (1 bytes)
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_UNKNOWN                   = 0,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_PENDING                   = 1,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_APPROVED             = 2,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_CANCELED             = 3
};

/// Class /Script/GooglePAD.GooglePADFunctionLibrary
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	// EGooglePADErrorCode ShowCellularDataConfirmation();                                                                      // [0x7a635d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	// EGooglePADErrorCode RequestRemoval(FString Name);                                                                        // [0x7a635f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestInfo
	// EGooglePADErrorCode RequestInfo(TArray<FString> AssetPacks);                                                             // [0x7a63710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestDownload
	// EGooglePADErrorCode RequestDownload(TArray<FString> AssetPacks);                                                         // [0x7a63710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	// void ReleaseDownloadState(int32_t State);                                                                                // [0x4357240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	// void ReleaseAssetPackLocation(int32_t Location);                                                                         // [0x4357240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	// int32_t GetTotalBytesToDownload(int32_t State);                                                                          // [0x3c49450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	// EGooglePADStorageMethod GetStorageMethod(int32_t Location);                                                              // [0x7a63230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	// EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status);                  // [0x7a634e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	// EGooglePADDownloadStatus GetDownloadStatus(int32_t State);                                                               // [0x56e64b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	// EGooglePADErrorCode GetDownloadState(FString Name, int32_t& State);                                                      // [0x7a63310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	// int32_t GetBytesDownloaded(int32_t State);                                                                               // [0x3c49450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	// FString GetAssetsPath(int32_t Location);                                                                                 // [0x7a63120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	// EGooglePADErrorCode GetAssetPackLocation(FString Name, int32_t& Location);                                               // [0x7a63310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.CancelDownload
	// EGooglePADErrorCode CancelDownload(TArray<FString> AssetPacks);                                                          // [0x7a63710] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UGooglePADFunctionLibrary) == 0x0030); // 48 bytes (0x000030 - 0x000030)
