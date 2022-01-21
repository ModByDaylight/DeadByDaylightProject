#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TileVisitedAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTileVisitedAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTileVisitedAnalyticsComponent();
};

