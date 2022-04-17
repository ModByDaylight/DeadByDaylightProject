#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IgnorePlayersCollisionsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UIgnorePlayersCollisionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIgnorePlayersCollisionsComponent();
};

