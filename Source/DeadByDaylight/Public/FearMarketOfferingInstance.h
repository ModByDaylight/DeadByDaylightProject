#pragma once
#include "CoreMinimal.h"
#include "FearMarketItemInstance.h"
#include "UObject/NoExportTypes.h"
#include "FearMarketOfferingInstance.generated.h"

USTRUCT(BlueprintType)
struct FFearMarketOfferingInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFearMarketItemInstance> ObjectsForSale;
    
    UPROPERTY()
    FDateTime StartTime;
    
    UPROPERTY()
    FDateTime EndTime;
    
    DEADBYDAYLIGHT_API FFearMarketOfferingInstance();
};

