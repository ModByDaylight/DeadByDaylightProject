#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetOfEventRecentlyQEEvaluator.generated.h"

UCLASS()
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _firstGameEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool _secondEventOnSelf;
    
public:
    UTargetOfEventRecentlyQEEvaluator();
};

