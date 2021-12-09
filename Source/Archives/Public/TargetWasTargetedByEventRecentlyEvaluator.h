#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetWasTargetedByEventRecentlyEvaluator.generated.h"

UCLASS()
class UTargetWasTargetedByEventRecentlyEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _gameEventsToTriggerFirst;
    
public:
    UTargetWasTargetedByEventRecentlyEvaluator();
};

