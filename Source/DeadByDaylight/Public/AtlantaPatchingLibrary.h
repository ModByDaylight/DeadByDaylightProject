#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlantaPatchingLibrary.generated.h"

class UAtlantaPendingContent;
class UAtlantaInstalledContent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAtlantaPatchingLibraryOnFailed, FText, ErrorText, int32, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAtlantaPatchingLibraryOnSucceeded, UAtlantaPendingContent*, MobilePendingContent);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaPatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FAtlantaPatchingLibraryOnSucceeded OnSucceeded, FAtlantaPatchingLibraryOnFailed OnFailed, UAtlantaPendingContent* MobilePendingContent);
    
    UFUNCTION()
    static void PrintPakLocations();
    
    UFUNCTION(BlueprintPure)
    static bool HasActiveWiFiConnection();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetSupportedPlatformNames();
    
    UFUNCTION(BlueprintPure)
    static UAtlantaInstalledContent* GetInstalledContent(const FString& InstallDirectory, const FString& ManifestFilename);
    
    UFUNCTION(BlueprintPure)
    static FString GetActiveDeviceProfileName();
    
    UAtlantaPatchingLibrary();
};

