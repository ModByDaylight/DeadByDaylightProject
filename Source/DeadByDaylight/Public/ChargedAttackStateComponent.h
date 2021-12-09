#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargedAttackStateComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UChargedAttackStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetIsCharging(bool isCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetChargingPercent(float chargePercent);
    
    UFUNCTION(BlueprintPure)
    bool GetIsCharging() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargingPercent() const;
    
    UChargedAttackStateComponent();
};

