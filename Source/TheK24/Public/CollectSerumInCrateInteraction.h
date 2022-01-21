#pragma once
#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "CollectSerumInCrateInteraction.generated.h"

class ASupplyCrateInteractable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCollectSerumInCrateInteraction : public UCollectItemInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASupplyCrateInteractable* _owningSupplyCrate;
    
public:
    UCollectSerumInCrateInteraction();
};

