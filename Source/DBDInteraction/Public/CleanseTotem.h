#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CleanseTotem.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCleanseTotem : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UCleanseTotem();
};

