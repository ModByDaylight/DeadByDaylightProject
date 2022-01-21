#pragma once
#include "CoreMinimal.h"
#include "FlashlightTargetFXComponent.h"
#include "BlindFlashlightTargetFXComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent {
    GENERATED_BODY()
public:
    UBlindFlashlightTargetFXComponent();
};

