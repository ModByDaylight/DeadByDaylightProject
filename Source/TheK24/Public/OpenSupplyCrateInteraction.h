#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OpenSupplyCrateInteraction.generated.h"

class UAnimSequence;
class ASupplyCrateInteractable;

UCLASS(EditInlineNew)
class UOpenSupplyCrateInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASupplyCrateInteractable* _owningSupplyCrate;
    
    UPROPERTY(Transient)
    bool _interactionWasComplete;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* _successExitTimeAnimSequenceReference;
    
public:
    UOpenSupplyCrateInteraction();
};

