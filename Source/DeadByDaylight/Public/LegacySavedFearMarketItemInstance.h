#pragma once
#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedFearMarketItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName ItemId;
    
    UPROPERTY(SaveGame)
    int32 Cost;
    
    UPROPERTY(SaveGame)
    int32 BloodpointConversion;
    
    UPROPERTY(SaveGame)
    bool Purchased;
    
    DEADBYDAYLIGHT_API FLegacySavedFearMarketItemInstance();
};

