#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "DoBeforeHookQEEvaluator.generated.h"

UCLASS()
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnHooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UDoBeforeHookQEEvaluator();
};

