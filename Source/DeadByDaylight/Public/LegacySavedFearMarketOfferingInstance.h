#pragma once
#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedFearMarketOfferingInstance.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedFearMarketOfferingInstance {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale;
    
    UPROPERTY(SaveGame)
    FDateTime StartTime;
    
    UPROPERTY(SaveGame)
    FDateTime EndTime;
    
    DEADBYDAYLIGHT_API FLegacySavedFearMarketOfferingInstance();
};

