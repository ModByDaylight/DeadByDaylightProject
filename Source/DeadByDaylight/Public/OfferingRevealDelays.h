#pragma once
#include "CoreMinimal.h"
#include "EOfferingSequenceState.h"
#include "OfferingRevealDelays.generated.h"

USTRUCT(BlueprintType)
struct FOfferingRevealDelays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOfferingSequenceState RevealState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    DEADBYDAYLIGHT_API FOfferingRevealDelays();
};

