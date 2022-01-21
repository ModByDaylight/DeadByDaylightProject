#pragma once
#include "CoreMinimal.h"
#include "BasePushStrategyComponent.h"
#include "SidePushStrategyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API USidePushStrategyComponent : public UBasePushStrategyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _maxImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    float _minImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    float _detectorCapsuleInflation;
    
    USidePushStrategyComponent();
};

