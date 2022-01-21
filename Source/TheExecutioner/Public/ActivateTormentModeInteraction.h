#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ActivateTormentModeInteraction.generated.h"

class ATormentMode;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UActivateTormentModeInteraction();
    UFUNCTION(BlueprintCallable)
    void SetTormentMode(ATormentMode* tormentModeComponent);
    
};

