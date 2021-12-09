#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasGameplayTagEvaluatorCondition.generated.h"

UCLASS()
class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _gameplayTagList;
    
public:
    UHasGameplayTagEvaluatorCondition();
};

