#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EConditionSubject.h"
#include "EvaluatorCondition.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEvaluatorCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EConditionSubject _conditionSubject;
    
public:
    UEvaluatorCondition();
};

