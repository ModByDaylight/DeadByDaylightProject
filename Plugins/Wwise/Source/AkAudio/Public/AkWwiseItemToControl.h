#pragma once
#include "CoreMinimal.h"
#include "AkWwiseObjectDetails.h"
#include "AkWwiseItemToControl.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkWwiseItemToControl {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FAkWwiseObjectDetails ItemPicked;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ItemPath;
    
    FAkWwiseItemToControl();
};

