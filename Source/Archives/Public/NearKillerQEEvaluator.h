#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "NearKillerQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UNearKillerQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UNearKillerQEEvaluator();
private:
    UFUNCTION()
    void OnRangeChanged(const bool inRange);
    
};

