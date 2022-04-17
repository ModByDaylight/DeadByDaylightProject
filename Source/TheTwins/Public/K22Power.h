#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "K22Power.generated.h"

class UK22PowerChargePresentationItemProgressComponent;
class UChargeableComponent;
class AConjoinedTwin;
class UPowerChargeComponent;

UCLASS()
class AK22Power : public ACollectable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _releaseConjoinedTwinChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _possessConjoinedTwinChargeable;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ConjoinedTwin)
    AConjoinedTwin* _conjoinedTwin;
    
    UPROPERTY()
    AConjoinedTwin* _conjoinedTwinParadise;
    
    UPROPERTY(Export, Transient)
    UPowerChargeComponent* _powerCharge;
    
    UPROPERTY(Export, Transient)
    UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AConjoinedTwin> _conjoinedTwinClass;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerRechargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeBeforeAutoDestroy;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeBeforeRecallAvailable;
    
public:
    AK22Power();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ConjoinedTwin();
    
    UFUNCTION()
    void OnPowerChargeEmpty();
    
    UFUNCTION()
    void OnFirstAttachmentToSister();
    
public:
    UFUNCTION(BlueprintPure)
    AConjoinedTwin* GetConjoinedTwin() const;
    
private:
    UFUNCTION()
    void Authority_OnPossessTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
    UFUNCTION()
    void Authority_OnDestroyTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
};

