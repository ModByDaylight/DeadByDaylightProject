#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "ExecutionerTormentAttack.generated.h"

class ADBDPlayer;

UCLASS()
class THEEXECUTIONER_API UExecutionerTormentAttack : public UPounceAttack {
    GENERATED_BODY()
public:
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TormentTryHitTargetNotInCoolDown(ADBDPlayer* target);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TormentHitTarget(ADBDPlayer* target);
    
public:
    UExecutionerTormentAttack();
};

