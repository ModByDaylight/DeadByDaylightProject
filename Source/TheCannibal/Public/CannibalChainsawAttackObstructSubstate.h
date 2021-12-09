#pragma once
#include "CoreMinimal.h"
#include "HillbillyChainsawAttackObstructSubstate.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttackObstructSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackObstructSubstate : public UHillbillyChainsawAttackObstructSubstate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTagStateBool _isInTantrum;
    
public:
    UCannibalChainsawAttackObstructSubstate();
};

