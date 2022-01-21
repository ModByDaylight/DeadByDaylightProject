#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "StationaryPointLightComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStationaryPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UStationaryPointLightComponent();
};

