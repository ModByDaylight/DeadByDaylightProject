#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionItemProducts.h"
#include "ShopTransactionItemCustomData.generated.h"

USTRUCT()
struct FShopTransactionItemCustomData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FShopTransactionItemProducts productsReceived;
    
    UPROPERTY()
    FString transactionName;
    
    UPROPERTY()
    FString transactionType;
    
    DEADBYDAYLIGHT_API FShopTransactionItemCustomData();
};

