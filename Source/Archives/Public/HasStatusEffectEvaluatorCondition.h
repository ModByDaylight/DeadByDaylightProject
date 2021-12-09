#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "HasStatusEffectEvaluatorCondition.generated.h"

UCLASS()
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FName> _statusEffectList;
    
public:
    UHasStatusEffectEvaluatorCondition();
};

