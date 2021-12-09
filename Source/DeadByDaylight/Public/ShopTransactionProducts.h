#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrency.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionProducts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FShopTransactionVirtualCurrency> virtualCurrencies;
    
    UPROPERTY()
    TArray<FShopTransactionItem> items;
    
    DEADBYDAYLIGHT_API FShopTransactionProducts();
};

