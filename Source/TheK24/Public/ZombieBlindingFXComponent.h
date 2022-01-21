#pragma once
#include "CoreMinimal.h"
#include "KillerBlindingFXComponent.h"
#include "ZombieBlindingFXComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieBlindingFXComponent : public UKillerBlindingFXComponent {
    GENERATED_BODY()
public:
    UZombieBlindingFXComponent();
};

