
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/WebBrowserWidget.WebBrowser
/// Size: 0x0220 (544 bytes) (0x0001B8 - 0x000220) align 8 MaxSize: 0x0220
class UWebBrowser : public UWidget
{ 
public:
	SDK_UNDEFINED(16,3458) /* FMulticastInlineDelegate */ __um(OnUrlChanged);                                      // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,3459) /* FMulticastInlineDelegate */ __um(OnBeforePopup);                                     // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,3460) /* FMulticastInlineDelegate */ __um(OnConsoleMessage);                                  // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,3461) /* FMulticastInlineDelegate */ __um(OnLoadError);                                       // 0x01E8   (0x0010)  
	FString                                            InitialURL;                                                 // 0x01F8   (0x0010)  
	bool                                               bSupportsTransparency;                                      // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0209   (0x0017)  MISSED


	/// Functions
	// Function /Script/WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	// void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x1a821d0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebBrowserWidget.WebBrowser.OnLoadError__DelegateSignature
	// void OnLoadError__DelegateSignature();                                                                                   // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.OnConsoleMessage__DelegateSignature
	// void OnConsoleMessage__DelegateSignature(FString Message, FString Source, int32_t Line);                                 // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	// void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x1a821d0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadURL
	// void LoadURL(FString NewUrl);                                                                                            // [0x6f7ca30] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadString
	// void LoadString(FString Contents, FString DummyURL);                                                                     // [0x6f7c7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.GetUrl
	// FString GetUrl();                                                                                                        // [0x6f7c4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.GetTitleText
	// FText GetTitleText();                                                                                                    // [0x6f7c5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.ExecuteJavascript
	// void ExecuteJavascript(FString ScriptText);                                                                              // [0x6f7c640] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.BindUObject
	// void BindUObject(FString Name, class UObject* Object, bool bIsPermanent);                                                // [0x6f7c220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WebBrowserWidget.WebBrowserAssetManager
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UWebBrowserAssetManager : public UObject
{ 
public:
	TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0038   (0x0058)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebBrowser) == 0x0220); // 544 bytes (0x0001B8 - 0x000220)
static_assert(sizeof(UWebBrowserAssetManager) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(offsetof(UWebBrowser, InitialURL) == 0x01F8);
static_assert(offsetof(UWebBrowserAssetManager, DefaultMaterial) == 0x0030);
