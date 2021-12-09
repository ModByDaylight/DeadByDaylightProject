#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasModifierOfTypeEvaluatorCondition.generated.h"

UCLASS()
class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _gameplayModifierList;
    
public:
    UHasModifierOfTypeEvaluatorCondition();
};

