#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "RedEnvelopeInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LUNAR2022_API URedEnvelopeInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    URedEnvelopeInteraction();
};

