#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.h"
#include "ShopTransactionItem.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FShopTransactionItemParameters item;
    
    DEADBYDAYLIGHT_API FShopTransactionItem();
};

