#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "BlinkInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UBlinkInteraction();
};

