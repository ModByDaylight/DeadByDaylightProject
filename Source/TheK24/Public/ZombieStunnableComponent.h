#pragma once
#include "CoreMinimal.h"
#include "StunnableComponent.h"
#include "ZombieStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieStunnableComponent : public UStunnableComponent {
    GENERATED_BODY()
public:
    UZombieStunnableComponent();
};

