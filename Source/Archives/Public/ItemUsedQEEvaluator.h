#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ItemUsedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemUsedQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UItemUsedQEEvaluator();
private:
    UFUNCTION()
    void OnItemUsed(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

