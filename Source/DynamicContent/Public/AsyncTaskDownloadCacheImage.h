#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskDownloadCacheImage.generated.h"

class UTexture2DDynamic;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskDownloadCacheImageOnSuccess, UTexture2DDynamic*, Texture);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskDownloadCacheImageOnFail, UTexture2DDynamic*, Texture);

UCLASS()
class DYNAMICCONTENT_API UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskDownloadCacheImageOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskDownloadCacheImageOnFail OnFail;
    
private:
    UPROPERTY(Transient)
    FString _url;
    
public:
    UAsyncTaskDownloadCacheImage();
};

