#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CDNPatchManager.generated.h"

class UAtlantaPendingContent;
class UGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCDNPatchManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString InstallDirectory;
    
    UPROPERTY()
    int32 PakOrder;
    
    UPROPERTY()
    FString PakMountPoint;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGameInstance> _gameInstance;
    
    UPROPERTY(Transient)
    UAtlantaPendingContent* _currentContentToInstall;
    
    UPROPERTY(Transient)
    TArray<FString> _remainingManifestsToInstall;
    
    UPROPERTY(Transient)
    TMap<FString, UAtlantaPendingContent*> _contentToInstall;
    
    UPROPERTY(Transient)
    UAtlantaPendingContent* _MobilePendingContent;
    
public:
    UCDNPatchManager();
private:
    UFUNCTION()
    void OnRequestSucceeded(UAtlantaPendingContent* pendingContent);
    
    UFUNCTION()
    void OnRequestFailed(FText errorText, int32 errorCode);
    
    UFUNCTION()
    void OnInstallSucceeded();
    
    UFUNCTION()
    void OnInstallFailed(FText errorText, int32 errorCode);
    
};

