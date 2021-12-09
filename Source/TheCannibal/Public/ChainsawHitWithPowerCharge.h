#pragma once
#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawHitWithPowerCharge.generated.h"

USTRUCT(BlueprintType)
struct THECANNIBAL_API FChainsawHitWithPowerCharge : public FChainsawEvent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 NumPowerCharges;
    
    FChainsawHitWithPowerCharge();
};

