#pragma once
#include "CoreMinimal.h"
#include "K25ChainHuntEffectsComponent.h"
#include "SurvivorStatusInterface.h"
#include "K25SurvivorChainHuntEffectsComponent.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent, public ISurvivorStatusInterface {
    GENERATED_BODY()
public:
    UK25SurvivorChainHuntEffectsComponent();
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

