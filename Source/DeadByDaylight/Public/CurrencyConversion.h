#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyConversion.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyConversion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ECurrencyType, float> AmountInOtherCurrency;
    
    DEADBYDAYLIGHT_API FCurrencyConversion();
};

