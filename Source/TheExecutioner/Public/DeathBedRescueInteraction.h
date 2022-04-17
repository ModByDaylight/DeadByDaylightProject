#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "DeathBedRescueInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDeathBedRescueInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _loudNoiseRange;
    
public:
    UDeathBedRescueInteraction();
private:
    UFUNCTION(BlueprintPure)
    FVector GetRescuerSnapPosition() const;
    
};

