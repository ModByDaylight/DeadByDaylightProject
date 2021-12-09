#pragma once
#include "CoreMinimal.h"
#include "AkWwiseObjectDetails.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkWwiseObjectDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ItemPath;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ItemId;
    
    FAkWwiseObjectDetails();
};

