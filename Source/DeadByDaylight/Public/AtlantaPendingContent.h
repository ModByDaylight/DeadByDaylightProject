#pragma once
#include "CoreMinimal.h"
#include "AtlantaInstalledContent.h"
#include "AtlantaPendingContent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAtlantaPendingContentOnFailed, FText, ErrorText, int32, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FAtlantaPendingContentOnSucceeded);

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaPendingContent : public UAtlantaInstalledContent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartInstall(FAtlantaPendingContentOnSucceeded OnSucceeded, FAtlantaPendingContentOnFailed OnFailed);
    
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
    
    UAtlantaPendingContent();
};

