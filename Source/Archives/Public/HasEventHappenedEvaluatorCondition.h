#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasEventHappenedEvaluatorCondition.generated.h"

UCLASS()
class UHasEventHappenedEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag _firstGameEvent;
    
public:
    UHasEventHappenedEvaluatorCondition();
};

