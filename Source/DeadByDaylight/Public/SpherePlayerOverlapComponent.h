#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SpherePlayerOverlapComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpherePlayerOverlapComponent : public USphereComponent {
    GENERATED_BODY()
public:
    USpherePlayerOverlapComponent();
};

