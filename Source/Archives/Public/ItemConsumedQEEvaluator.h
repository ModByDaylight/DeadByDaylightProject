#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ItemConsumedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnItemConsumed(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UItemConsumedQEEvaluator();
};

