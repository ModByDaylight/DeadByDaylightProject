#pragma once
#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "AttackSubstateRequestResult.generated.h"

USTRUCT(BlueprintType)
struct FAttackSubstateRequestResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsValid;
    
    UPROPERTY()
    EAttackSubstate RequestedNextSubstate;
    
    UPROPERTY()
    EAttackSubstate ServerNextSubstate;
    
    DEADBYDAYLIGHT_API FAttackSubstateRequestResult();
};

