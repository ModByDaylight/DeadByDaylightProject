#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "IsPerformingInteractionEvaluatorCondition.generated.h"

UCLASS()
class UIsPerformingInteractionEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _semanticTags;
    
    UIsPerformingInteractionEvaluatorCondition();
};

