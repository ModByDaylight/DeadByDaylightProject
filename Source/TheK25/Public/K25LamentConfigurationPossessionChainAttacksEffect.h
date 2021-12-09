#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "K25LamentConfigurationPossessionChainAttacksEffect.generated.h"

UCLASS()
class UK25LamentConfigurationPossessionChainAttacksEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _timeBetweenChainTargettingAttempt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _numberOfChainsToTriggerTowardsSurvivor;
    
public:
    UK25LamentConfigurationPossessionChainAttacksEffect();
};

