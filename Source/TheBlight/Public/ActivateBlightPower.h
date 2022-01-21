#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ActivateBlightPower.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateBlightPower : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UActivateBlightPower();
};

