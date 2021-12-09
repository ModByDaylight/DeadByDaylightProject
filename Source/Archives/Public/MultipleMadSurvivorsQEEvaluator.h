#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MultipleMadSurvivorsQEEvaluator.generated.h"

class AActor;

UCLASS()
class UMultipleMadSurvivorsQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 _requiredTier;
    
private:
    UPROPERTY(Transient)
    TSet<TWeakObjectPtr<AActor>> _madSurvivors;
    
public:
    UMultipleMadSurvivorsQEEvaluator();
};

