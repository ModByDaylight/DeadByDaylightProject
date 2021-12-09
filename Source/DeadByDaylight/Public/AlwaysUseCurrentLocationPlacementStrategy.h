#pragma once
#include "CoreMinimal.h"
#include "ObjectPlacementUpdateStrategy.h"
#include "AlwaysUseCurrentLocationPlacementStrategy.generated.h"

UCLASS(EditInlineNew)
class UAlwaysUseCurrentLocationPlacementStrategy : public UObjectPlacementUpdateStrategy {
    GENERATED_BODY()
public:
    UAlwaysUseCurrentLocationPlacementStrategy();
};

