#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.h"
#include "ShopTransactionVirtualCurrency.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionVirtualCurrency {
    GENERATED_BODY()
public:
    UPROPERTY()
    FShopTransactionVirtualCurrencyParameters virtualCurrency;
    
    DEADBYDAYLIGHT_API FShopTransactionVirtualCurrency();
};

