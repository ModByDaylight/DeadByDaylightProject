#pragma once
#include "CoreMinimal.h"
#include "PurchaseCurrencyData.h"
#include "PromoPackPurchaseUIData.generated.h"

USTRUCT(BlueprintType)
struct FPromoPackPurchaseUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPurchaseCurrencyData AuricCellsPurchaseData;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasAuricCellsData;
    
    UPROPERTY(BlueprintReadWrite)
    FPurchaseCurrencyData IridescentShardsPurchaseData;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasIridescentShards;
    
    DEADBYDAYLIGHT_API FPromoPackPurchaseUIData();
};

