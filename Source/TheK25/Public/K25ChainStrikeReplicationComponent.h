#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EChainStrikeEndReason.h"
#include "K25ChainStrikeReplicationComponent.generated.h"

class UK25ChainStrikeInteraction;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25ChainStrikeReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UK25ChainStrikeReplicationComponent();
private:
    UFUNCTION(Reliable, Server)
    void Server_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndChainStrike(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason);
    
};

