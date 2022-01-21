#pragma once
#include "CoreMinimal.h"
#include "ActivateOnEventTimedStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K25ChainStrikeImmunityEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25ChainStrikeImmunityEffect : public UActivateOnEventTimedStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _chainStrikeImmunityDuration;
    
public:
    UK25ChainStrikeImmunityEffect();
};

