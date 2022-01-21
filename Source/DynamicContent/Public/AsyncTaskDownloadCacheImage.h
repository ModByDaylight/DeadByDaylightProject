#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "AsyncTaskDownloadCacheImage.generated.h"

UCLASS()
class DYNAMICCONTENT_API UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDownloadImageDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FDownloadImageDelegate OnFail;
    
private:
    UPROPERTY(Transient)
    FString _url;
    
public:
    UAsyncTaskDownloadCacheImage();
};

