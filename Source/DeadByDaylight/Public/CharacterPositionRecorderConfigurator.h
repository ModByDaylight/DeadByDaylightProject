#pragma once
#include "CoreMinimal.h"
#include "BaseHitValidationConfigurator.h"
#include "CharacterPositionRecorderConfigurator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCharacterPositionRecorderConfigurator : public UBaseHitValidationConfigurator {
    GENERATED_BODY()
public:
    UCharacterPositionRecorderConfigurator();
};

