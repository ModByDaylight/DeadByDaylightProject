#pragma once
#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "K25ChainStrike_IsGatewayOrientationTimerExpired.generated.h"

UCLASS(EditInlineNew)
class UK25ChainStrike_IsGatewayOrientationTimerExpired : public UFSM_Condition {
    GENERATED_BODY()
public:
    UK25ChainStrike_IsGatewayOrientationTimerExpired();
};

