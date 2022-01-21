#pragma once
#include "CoreMinimal.h"
#include "K25ChainStrikeBaseState.h"
#include "EChainStrikeEndReason.h"
#include "K25ChainStrikeState_EndChainStrike.generated.h"

UCLASS(Abstract)
class UK25ChainStrikeState_EndChainStrike : public UK25ChainStrikeBaseState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EChainStrikeEndReason _chainStrikeEndReason;
    
public:
    UK25ChainStrikeState_EndChainStrike();
};

