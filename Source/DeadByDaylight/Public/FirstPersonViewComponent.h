#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FirstPersonViewComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirstPersonViewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFirstPersonViewComponent();
};

