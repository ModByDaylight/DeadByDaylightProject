#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LoudNoiseEventSystem.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULoudNoiseEventSystem : public UActorComponent {
    GENERATED_BODY()
public:
    ULoudNoiseEventSystem();
};

