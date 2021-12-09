#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "TunableStat.h"
#include "BeingPossessedInteraction.generated.h"

UCLASS(EditInlineNew)
class UBeingPossessedInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _beingPossessedMaxCharge;
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UBeingPossessedInteraction();
};

