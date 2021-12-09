#pragma once
#include "CoreMinimal.h"
#include "AkWaapiUri.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkWaapiUri {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Uri;
    
    FAkWaapiUri();
};

