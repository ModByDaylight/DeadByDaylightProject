#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGasCloudTrackerComponent.generated.h"

class ABaseGasCloudProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class UActiveGasCloudTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ABaseGasCloudProjectile*> _activeToxinClouds;
    
    UPROPERTY(Transient)
    TArray<ABaseGasCloudProjectile*> _activeAntidoteClouds;
    
public:
    UActiveGasCloudTrackerComponent();
};

