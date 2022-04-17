#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "EWallGrabState.h"
#include "BlightPower.generated.h"

class UBlightPowerStateComponent;
class UPowerChargeComponent;
class UPowerToggleComponent;
class UChargeableComponent;

UCLASS()
class ABlightPower : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UPowerChargeComponent* _blightPowerCharge;
    
    UPROPERTY(Export)
    UPowerToggleComponent* _blightPowerToggle;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _blightPowerActivateChargeable;
    
    UPROPERTY(Export, Transient)
    UBlightPowerStateComponent* _blightPowerStateComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blightPowerActivateMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _blightPowerMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blightPowerDechargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blightPowerRechargeRate;
    
public:
    ABlightPower();
private:
    UFUNCTION()
    void OnPowerStateChanged(const EWallGrabState previousState, const EWallGrabState newState);
    
};

