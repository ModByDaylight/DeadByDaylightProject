#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EndOfGameQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UEndOfGameQEEvaluator();
};

