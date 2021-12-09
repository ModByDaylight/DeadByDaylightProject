#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionVirtualCurrencyParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 virtualCurrencyAmount;
    
    UPROPERTY()
    FString virtualCurrencyName;
    
    UPROPERTY()
    FString virtualCurrencyType;
    
    DEADBYDAYLIGHT_API FShopTransactionVirtualCurrencyParameters();
};

