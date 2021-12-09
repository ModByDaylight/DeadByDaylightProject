#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "UniqueTargetIncrementQEEvaluator.generated.h"

class AActor;

UCLASS()
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TSet<TWeakObjectPtr<AActor>> _targetList;
    
public:
    UUniqueTargetIncrementQEEvaluator();
};

