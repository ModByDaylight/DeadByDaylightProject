#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnAtlantaRequestContentSucceeded.h"
#include "OnAtlantaRequestContentFailed.h"
#include "AtlantaPatchingLibrary.generated.h"

class UAtlantaInstalledContent;
class UAtlantaPendingContent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaPatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtlantaPatchingLibrary();
    UFUNCTION(BlueprintCallable)
    static void RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FOnAtlantaRequestContentSucceeded OnSucceeded, FOnAtlantaRequestContentFailed OnFailed, UAtlantaPendingContent* MobilePendingContent);
    
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
    
};

