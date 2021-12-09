#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionCurrencyProducts.h"
#include "ShopTransactionCurrencyCustomData.generated.h"

USTRUCT()
struct FShopTransactionCurrencyCustomData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FShopTransactionCurrencyProducts productsReceived;
    
    UPROPERTY()
    FString transactionName;
    
    UPROPERTY()
    FString transactionType;
    
    DEADBYDAYLIGHT_API FShopTransactionCurrencyCustomData();
};

