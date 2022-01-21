#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "FoliageDensityHISM.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFoliageDensityHISM : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UFoliageDensityHISM();
};

