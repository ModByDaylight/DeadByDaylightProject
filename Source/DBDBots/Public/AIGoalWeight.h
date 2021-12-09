#pragma once
#include "CoreMinimal.h"
#include "AIGoal.h"
#include "AIGoalWeight.generated.h"

USTRUCT(BlueprintType)
struct FAIGoalWeight {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAIGoal GoalInfo;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FString WeightDebug;
    
    DBDBOTS_API FAIGoalWeight();
};

