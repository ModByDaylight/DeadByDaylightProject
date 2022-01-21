#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ReloadHarpoonRifleInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UReloadHarpoonRifleInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _reloadTime;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _movementSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _rotationScaleMultiplier;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _rotationScaleAdjustmentTime;
    
public:
    UReloadHarpoonRifleInteraction();
};

