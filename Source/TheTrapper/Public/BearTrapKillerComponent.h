#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BearTrapKillerComponent.generated.h"

class ABearTrap;

UCLASS()
class UBearTrapKillerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server)
    void Server_TryDisarmTrap(ABearTrap* trapToDisarm);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DisarmTrap(ABearTrap* trapToDisarm);
    
public:
    UBearTrapKillerComponent();
};

