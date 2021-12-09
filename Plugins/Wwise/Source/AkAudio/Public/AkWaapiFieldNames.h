#pragma once
#include "CoreMinimal.h"
#include "AkWaapiFieldNames.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkWaapiFieldNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FieldName;
    
    FAkWaapiFieldNames();
};

