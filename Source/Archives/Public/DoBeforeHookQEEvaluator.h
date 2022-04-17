#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "DoBeforeHookQEEvaluator.generated.h"

UCLASS()
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UDoBeforeHookQEEvaluator();
    UFUNCTION()
    void OnHooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

