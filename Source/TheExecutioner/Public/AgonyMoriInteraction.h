#pragma once
#include "CoreMinimal.h"
#include "KillInteractionDefinition.h"
#include "AgonyMoriInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAgonyMoriInteraction : public UKillInteractionDefinition {
    GENERATED_BODY()
public:
    UAgonyMoriInteraction();
};

