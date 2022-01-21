#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnhookReplicationComponent.generated.h"

class UUnhook;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UUnhookReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUnhookReplicationComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetPlayerBeingUnhooked(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked);
    
};

