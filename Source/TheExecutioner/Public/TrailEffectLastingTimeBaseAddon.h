#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "TrailEffectLastingTimeBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _trailEffectLastingTimeModifierValue;
    
public:
    UTrailEffectLastingTimeBaseAddon();
};

