#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "ActorPathFollowingComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UActorPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UActorPathFollowingComponent();
};

