#pragma once
#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_RefCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_RefCondition : public UFSM_Condition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFSM_Condition* _refcondition;
    
public:
    UFSM_RefCondition();
};

