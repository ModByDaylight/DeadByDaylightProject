#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MaxSameTargetQEEvaluator.generated.h"

class AActor;

UCLASS()
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, int32> _targetList;
    
    UMaxSameTargetQEEvaluator();
};

