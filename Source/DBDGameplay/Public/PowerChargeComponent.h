#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "PowerChargeComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPowerChargeComponentOnPowerChargeChanged, float, currentChargePercent);

UCLASS()
class DBDGAMEPLAY_API UPowerChargeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPowerChargeComponentOnPowerChargeChanged OnPowerChargeChanged;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentCharge)
    FSpeedBasedNetSyncedValue _currentCharge;
    
    UPROPERTY(Replicated)
    bool _forceFullCharge;
    
    UFUNCTION()
    void OnRep_CurrentCharge();
    
    UFUNCTION()
    void OnCurrentChargeChanged(float value);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPowerChargeComponent();
};

