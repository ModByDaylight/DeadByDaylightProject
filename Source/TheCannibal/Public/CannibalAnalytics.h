#pragma once
#include "CoreMinimal.h"
#include "ChainsawAnalytics.h"
#include "ChainsawHitWithPowerCharge.h"
#include "ChainsawEvent.h"
#include "CannibalAnalytics.generated.h"

USTRUCT()
struct FCannibalAnalytics : public FChainsawAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FChainsawHitWithPowerCharge> HitWithPowerChargeEvents;
    
    UPROPERTY(Transient)
    TArray<FChainsawEvent> RevToTantrumEvents;
    
    THECANNIBAL_API FCannibalAnalytics();
};

