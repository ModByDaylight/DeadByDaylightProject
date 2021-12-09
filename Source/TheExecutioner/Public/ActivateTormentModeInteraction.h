#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ActivateTormentModeInteraction.generated.h"

class ATormentMode;

UCLASS(EditInlineNew)
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetTormentMode(ATormentMode* tormentModeComponent);
    
    UActivateTormentModeInteraction();
};

