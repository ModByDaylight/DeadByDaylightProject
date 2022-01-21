#pragma once
#include "CoreMinimal.h"
#include "BeingPossessedInteraction.h"
#include "TwinBeingPossessedInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTwinBeingPossessedInteraction : public UBeingPossessedInteraction {
    GENERATED_BODY()
public:
    UTwinBeingPossessedInteraction();
};

