#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EndOfGameQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UEndOfGameQEEvaluator();
    UFUNCTION()
    void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

