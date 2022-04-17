#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "DuringEndGameCollapseQEEvaluator.generated.h"

UCLASS()
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UDuringEndGameCollapseQEEvaluator();
private:
    UFUNCTION()
    void OnEndGameCollapseStart(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

