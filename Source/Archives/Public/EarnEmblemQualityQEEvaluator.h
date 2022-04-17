#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EarnEmblemQualityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UEarnEmblemQualityQEEvaluator();
    UFUNCTION()
    void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

