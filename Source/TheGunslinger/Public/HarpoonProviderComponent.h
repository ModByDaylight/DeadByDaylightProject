#pragma once
#include "CoreMinimal.h"
#include "SingleProjectileProviderComponent.h"
#include "HarpoonProviderComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonProviderComponent : public USingleProjectileProviderComponent {
    GENERATED_BODY()
public:
    UHarpoonProviderComponent();
};

