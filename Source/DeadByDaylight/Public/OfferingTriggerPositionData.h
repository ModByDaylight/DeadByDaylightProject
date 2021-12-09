#pragma once
#include "CoreMinimal.h"
#include "OfferingTriggerPositionData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingTriggerPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PosX;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PosY;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CardIndex;
    
    DEADBYDAYLIGHT_API FOfferingTriggerPositionData();
};

