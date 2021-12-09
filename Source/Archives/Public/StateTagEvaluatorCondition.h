#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "StateTagEvaluatorCondition.generated.h"

UCLASS()
class UStateTagEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _gameplayTag;
    
public:
    UStateTagEvaluatorCondition();
};

