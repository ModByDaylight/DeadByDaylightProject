#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorDisconnectionComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorDisconnectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USurvivorDisconnectionComponent();
protected:
    UFUNCTION()
    void Authority_OnPlayerDisconnected(ADBDPlayer* player);
    
};

