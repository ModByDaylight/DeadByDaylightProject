#pragma once
#include "CoreMinimal.h"
#include "AIGoalWeight.h"
#include "AIGoalWeightContainer.generated.h"

USTRUCT(BlueprintType)
struct FAIGoalWeightContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIGoalWeight> WeightedGoals;
    
    DBDBOTS_API FAIGoalWeightContainer();
};

