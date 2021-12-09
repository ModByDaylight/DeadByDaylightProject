#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrency.h"
#include "ShopTransactionCurrencyProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionCurrencyProducts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FShopTransactionVirtualCurrency> virtualCurrencies;
    
    DEADBYDAYLIGHT_API FShopTransactionCurrencyProducts();
};

