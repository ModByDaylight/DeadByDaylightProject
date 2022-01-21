#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PresentationPowerFadeComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPresentationPowerFadeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPresentationPowerFadeComponent();
};

