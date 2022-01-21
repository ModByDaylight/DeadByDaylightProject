#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ActivateK24PowerInteraction.generated.h"

class AK24Power;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateK24PowerInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _interactionViewPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _interactionViewPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maximumTimeToTriggerRegularAttack;
    
public:
    UActivateK24PowerInteraction();
    UFUNCTION(BlueprintCallable)
    void SetK24Power(AK24Power* k24Power);
    
};

