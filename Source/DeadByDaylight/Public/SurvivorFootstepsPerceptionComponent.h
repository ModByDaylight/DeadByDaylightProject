#pragma once
#include "CoreMinimal.h"
#include "FootstepsPerceptionComponent.h"
#include "SurvivorFootstepsPerceptionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorFootstepsPerceptionComponent : public UFootstepsPerceptionComponent {
    GENERATED_BODY()
public:
    USurvivorFootstepsPerceptionComponent();
};

