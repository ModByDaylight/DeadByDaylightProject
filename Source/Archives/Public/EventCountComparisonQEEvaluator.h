#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventCountComparisonOperator.h"
#include "EventCountComparisonQEEvaluator.generated.h"

UCLASS()
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _incrementCountEvents;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _resetCountEvents;
    
    UPROPERTY(EditDefaultsOnly)
    EventCountComparisonOperator _comparisonOperator;
    
public:
    UEventCountComparisonQEEvaluator();
};

