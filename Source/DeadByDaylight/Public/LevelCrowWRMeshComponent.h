#pragma once
#include "CoreMinimal.h"
#include "WorldRunawayMeshComponent.h"
#include "LevelCrowWRMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULevelCrowWRMeshComponent : public UWorldRunawayMeshComponent {
    GENERATED_BODY()
public:
    ULevelCrowWRMeshComponent();
};

