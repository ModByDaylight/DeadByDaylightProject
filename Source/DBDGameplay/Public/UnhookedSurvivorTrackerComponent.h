#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnhookedSurvivorTrackerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UUnhookedSurvivorTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUnhookedSurvivorTrackerComponent();
};

