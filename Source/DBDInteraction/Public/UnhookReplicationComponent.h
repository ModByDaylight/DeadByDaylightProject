#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnhookReplicationComponent.generated.h"

class UUnhook;
class ACamperPlayer;

UCLASS()
class UUnhookReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetPlayerBeingUnhooked(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked);
    
public:
    UUnhookReplicationComponent();
};

