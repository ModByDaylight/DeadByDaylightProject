#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LRUTextureCache.h"
#include "TaskContainer.h"
#include "DynamicContentHolder.generated.h"

class ULoopBannerProvider;
class ULoadingImagesDataProvider;
class UDownloadMultiTextureTask;

UCLASS()
class DYNAMICCONTENT_API UDynamicContentHolder : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FLRUTextureCache _loadedTextures;
    
    UPROPERTY(Transient)
    TArray<FTaskContainer> _currentTasks;
    
    UPROPERTY(Transient)
    ULoopBannerProvider* _marketingBannerProvider;
    
    UPROPERTY(Transient)
    ULoopBannerProvider* _eventsBannerProvider;
    
    UPROPERTY(Transient)
    ULoadingImagesDataProvider* _loadingImagesDataProvider;
    
    UFUNCTION()
    void OnDownloadingTaskComplete(UDownloadMultiTextureTask* completeTask);
    
public:
    UDynamicContentHolder();
};

