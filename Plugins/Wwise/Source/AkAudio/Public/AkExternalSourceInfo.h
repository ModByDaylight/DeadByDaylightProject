#pragma once
#include "CoreMinimal.h"
#include "AkCodecId.h"
#include "AkExternalSourceInfo.generated.h"

class UAkExternalMediaAsset;

USTRUCT(BlueprintType)
struct FAkExternalSourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ExternalSrcName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AkCodecId CodecID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkExternalMediaAsset* ExternalSourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStreamed;
    
    AKAUDIO_API FAkExternalSourceInfo();
};

