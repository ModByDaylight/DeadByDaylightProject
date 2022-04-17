#pragma once
#include "CoreMinimal.h"
#include "AtlantaInstalledContent.h"
#include "OnContentInstallSucceededDelegate.h"
#include "OnContentInstallFailedDelegate.h"
#include "AtlantaPendingContent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaPendingContent : public UAtlantaInstalledContent {
    GENERATED_BODY()
public:
    UAtlantaPendingContent();
    UFUNCTION(BlueprintCallable)
    void StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed);
    
    UFUNCTION(BlueprintPure)
    float GetTotalDownloadedSize();
    
    UFUNCTION(BlueprintPure)
    float GetRequiredDiskSpace();
    
    UFUNCTION(BlueprintPure)
    bool GetIsDownloading();
    
    UFUNCTION(BlueprintPure)
    float GetInstallProgress();
    
    UFUNCTION(BlueprintPure)
    FText GetDownloadStatusText();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSize();
    
};

