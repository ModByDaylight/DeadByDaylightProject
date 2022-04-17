#pragma once
#include "CoreMinimal.h"
#include "ChargedAttackStateComponent.h"
#include "OnChargedAttackReadyChangedDelegate.h"
#include "OniDemonModeAttackStateComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOniDemonModeAttackStateComponent : public UChargedAttackStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnChargedAttackReadyChanged OnChargedAttackReadyChanged;
    
    UOniDemonModeAttackStateComponent();
private:
    UFUNCTION(Reliable, Server)
    void Server_ClearChargingState();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearChargingState();
    
};

