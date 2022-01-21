#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DeadHardDashInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDeadHardDashInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UDeadHardDashInteraction();
};

