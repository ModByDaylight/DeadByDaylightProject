#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SetDreamSnareInteraction.generated.h"

UCLASS(EditInlineNew)
class USetDreamSnareInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float MinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float MinPlacementDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxPlacementDistance;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasCancelledDreamSnare() const;
    
    UFUNCTION(BlueprintPure)
    float GetTrapDistanceFromControlRotation() const;
    
    USetDreamSnareInteraction();
};

