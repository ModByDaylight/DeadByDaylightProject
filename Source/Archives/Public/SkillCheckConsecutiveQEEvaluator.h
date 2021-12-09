#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "SkillCheckConsecutiveQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnSkillCheckSuccess(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnSkillCheckFail(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    USkillCheckConsecutiveQEEvaluator();
};

