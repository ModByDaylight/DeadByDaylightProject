#pragma once
#include "CoreMinimal.h"
#include "ESurvivorGrouping.h"
#include "SurvivorGroupingProbability.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorGroupingProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESurvivorGrouping Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Probability;
    
    DEADBYDAYLIGHT_API FSurvivorGroupingProbability();
};

