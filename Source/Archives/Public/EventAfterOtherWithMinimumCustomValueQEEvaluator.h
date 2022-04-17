#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventAfterOtherWithMinimumCustomValueQEEvaluator.generated.h"

UCLASS()
class UEventAfterOtherWithMinimumCustomValueQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _startEvent;
    
public:
    UEventAfterOtherWithMinimumCustomValueQEEvaluator();
};

