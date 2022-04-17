#pragma once
#include "CoreMinimal.h"
#include "ActionPredictionKey.h"
#include "ExecuteInstantActionParams.generated.h"

USTRUCT()
struct REVERSIBLEACTIONSYSTEM_API FExecuteInstantActionParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FActionPredictionKey PredictionKey;
    
    UPROPERTY()
    float PredictionDelay;
    
    FExecuteInstantActionParams();
};

