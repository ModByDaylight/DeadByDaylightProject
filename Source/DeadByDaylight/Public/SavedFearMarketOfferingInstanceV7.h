#pragma once
#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.h"
#include "SavedFearMarketOfferingInstanceV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedFearMarketOfferingInstanceV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale;
    
    UPROPERTY(SaveGame)
    FString StartTime;
    
    UPROPERTY(SaveGame)
    FString EndTime;
    
    DEADBYDAYLIGHT_API FSavedFearMarketOfferingInstanceV7();
};

