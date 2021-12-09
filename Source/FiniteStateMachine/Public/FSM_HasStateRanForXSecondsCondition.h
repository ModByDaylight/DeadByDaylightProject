#pragma once
#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "DBDTunableRowHandle.h"
#include "FSM_HasStateRanForXSecondsCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_HasStateRanForXSecondsCondition : public UFSM_Condition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minTimeInSecondsToSatisfyCondition;
    
public:
    UFSM_HasStateRanForXSecondsCondition();
};

