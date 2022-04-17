#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ItemConsumedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UItemConsumedQEEvaluator();
private:
    UFUNCTION()
    void OnItemConsumed(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

