#pragma once
#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "SearchOpenedChestInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USearchOpenedChestInteraction : public USearchChestInteractionBase {
    GENERATED_BODY()
public:
    USearchOpenedChestInteraction();
};

