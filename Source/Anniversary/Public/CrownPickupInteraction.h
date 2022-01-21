#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CrownPickupInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPickupInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName _attachToSocketName;
    
private:
    UPROPERTY(Transient)
    bool _isInteractionChargeComplete;
    
public:
    UCrownPickupInteraction();
};

