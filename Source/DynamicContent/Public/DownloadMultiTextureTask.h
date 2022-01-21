#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DownloadMultiTextureTask.generated.h"

class UDownloadingTextureTask;
class UTexture2DDynamic;

UCLASS()
class DYNAMICCONTENT_API UDownloadMultiTextureTask : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UDownloadingTextureTask*> _downloadingTasks;
    
    UPROPERTY(Transient)
    TMap<FName, UTexture2DDynamic*> _downloadedTextures;
    
    UPROPERTY(Transient)
    int32 _remainingTasks;
    
public:
    UDownloadMultiTextureTask();
private:
    UFUNCTION()
    void OnTextureDownloadComplete(UDownloadingTextureTask* taskCompleted);
    
};

