#pragma once
#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "NearMeEvaluatorCondition.generated.h"

UCLASS()
class UNearMeEvaluatorCondition : public UEvaluatorCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool _questOwnerCanBeSubjectOfEvent;
    
public:
    UNearMeEvaluatorCondition();
};

