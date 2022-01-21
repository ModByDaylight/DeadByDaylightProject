#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TileEventComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTileEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTileEventComponent();
};

