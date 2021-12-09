#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "DuringEndGameCollapseQEEvaluator.generated.h"

UCLASS()
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnEndGameCollapseStart(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UDuringEndGameCollapseQEEvaluator();
};

