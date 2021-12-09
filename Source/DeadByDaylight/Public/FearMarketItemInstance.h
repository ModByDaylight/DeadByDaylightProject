#pragma once
#include "CoreMinimal.h"
#include "FearMarketItemInstance.generated.h"

USTRUCT(BlueprintType)
struct FFearMarketItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ItemId;
    
    UPROPERTY()
    int32 Cost;
    
    UPROPERTY()
    int32 BloodpointConversion;
    
    UPROPERTY()
    bool Purchased;
    
    DEADBYDAYLIGHT_API FFearMarketItemInstance();
};

