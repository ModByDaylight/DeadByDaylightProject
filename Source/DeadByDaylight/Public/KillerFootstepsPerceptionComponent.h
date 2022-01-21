#pragma once
#include "CoreMinimal.h"
#include "FootstepsPerceptionComponent.h"
#include "KillerFootstepsPerceptionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerFootstepsPerceptionComponent : public UFootstepsPerceptionComponent {
    GENERATED_BODY()
public:
    UKillerFootstepsPerceptionComponent();
};

