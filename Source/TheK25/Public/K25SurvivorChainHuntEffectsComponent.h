#pragma once
#include "CoreMinimal.h"
#include "K25ChainHuntEffectsComponent.h"
#include "SurvivorStatusInterface.h"
#include "K25SurvivorChainHuntEffectsComponent.generated.h"

class ACamperPlayer;

UCLASS()
class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent, public ISurvivorStatusInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
    UK25SurvivorChainHuntEffectsComponent();
};

