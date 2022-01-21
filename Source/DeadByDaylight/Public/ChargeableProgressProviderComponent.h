#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargeableProgressProviderComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableProgressProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UChargeableProgressProviderComponent();
};

