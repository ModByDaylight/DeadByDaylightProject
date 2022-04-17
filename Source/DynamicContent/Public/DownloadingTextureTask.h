#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DownloadingTextureTask.generated.h"

class UAsyncTaskDownloadCacheImage;
class UTexture2DDynamic;

UCLASS()
class DYNAMICCONTENT_API UDownloadingTextureTask : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAsyncTaskDownloadCacheImage* _downloadingTask;
    
    UPROPERTY(Transient)
    FString _url;
    
    UPROPERTY(Transient)
    UTexture2DDynamic* _downloadedTexture;
    
public:
    UDownloadingTextureTask();
private:
    UFUNCTION()
    void OnDownloadSucceeded(UTexture2DDynamic* textureDownloaded);
    
    UFUNCTION()
    void OnDownloadFailed(UTexture2DDynamic* textureDownloaded);
    
};

