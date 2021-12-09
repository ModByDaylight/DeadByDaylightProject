#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorDisconnectionComponent.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API USurvivorDisconnectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    void Authority_OnPlayerDisconnected(ADBDPlayer* player);
    
public:
    USurvivorDisconnectionComponent();
};

