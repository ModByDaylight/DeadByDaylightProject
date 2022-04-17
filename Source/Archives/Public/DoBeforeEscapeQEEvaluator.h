#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "DoBeforeEscapeQEEvaluator.generated.h"

UCLASS()
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UDoBeforeEscapeQEEvaluator();
    UFUNCTION()
    void OnEscaped(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

