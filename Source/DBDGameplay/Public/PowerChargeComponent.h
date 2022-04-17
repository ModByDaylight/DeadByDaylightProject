#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "PowerChargeChangedDelegateDelegate.h"
#include "PowerChargeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPowerChargeChangedDelegate OnPowerChargeChanged;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentCharge)
    FSpeedBasedNetSyncedValue _currentCharge;
    
    UPROPERTY(Replicated)
    bool _forceFullCharge;
    
public:
    UPowerChargeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_CurrentCharge();
    
    UFUNCTION()
    void OnCurrentChargeChanged(float value);
    
};

