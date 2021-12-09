#pragma once
#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItemParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 itemAmount;
    
    UPROPERTY()
    FString itemName;
    
    UPROPERTY()
    FString itemType;
    
    DEADBYDAYLIGHT_API FShopTransactionItemParameters();
};

