#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "RecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS()
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _stateTag;
    
public:
    URecentlyActiveStateTagEvaluatorCondition();
};

