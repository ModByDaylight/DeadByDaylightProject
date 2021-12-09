#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InflictMadnessBaseQEEvaluator.generated.h"

UCLASS()
class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 _requiredTier;
    
public:
    UInflictMadnessBaseQEEvaluator();
};

