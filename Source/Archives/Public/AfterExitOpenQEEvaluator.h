#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "AfterExitOpenQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UAfterExitOpenQEEvaluator();
    UFUNCTION()
    void OnExitGateOpened(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

