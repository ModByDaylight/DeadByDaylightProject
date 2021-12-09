#pragma once
#include "CoreMinimal.h"
#include "ChargedAttackStateComponent.h"
#include "OniDemonModeAttackStateComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOniDemonModeAttackStateComponentOnChargedAttackReadyChanged, bool, bIsReady);

UCLASS()
class DEADBYDAYLIGHT_API UOniDemonModeAttackStateComponent : public UChargedAttackStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOniDemonModeAttackStateComponentOnChargedAttackReadyChanged OnChargedAttackReadyChanged;
    
private:
    UFUNCTION(Reliable, Server)
    void Server_ClearChargingState();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearChargingState();
    
public:
    UOniDemonModeAttackStateComponent();
};

