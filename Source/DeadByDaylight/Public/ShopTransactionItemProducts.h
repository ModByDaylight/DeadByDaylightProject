#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionItemProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItemProducts {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FShopTransactionItem> items;
    
    DEADBYDAYLIGHT_API FShopTransactionItemProducts();
};

