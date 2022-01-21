#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawnableTrigger.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnableTrigger : public UActorComponent {
    GENERATED_BODY()
public:
    URespawnableTrigger();
};

