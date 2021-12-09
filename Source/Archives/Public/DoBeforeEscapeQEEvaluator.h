#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "DoBeforeEscapeQEEvaluator.generated.h"

UCLASS()
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnEscaped(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UDoBeforeEscapeQEEvaluator();
};

