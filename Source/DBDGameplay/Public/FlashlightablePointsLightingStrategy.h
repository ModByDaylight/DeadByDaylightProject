#pragma once
#include "CoreMinimal.h"
#include "FlashlightableLightingStrategy.h"
#include "FlashlightablePointsLightingStrategy.generated.h"

class UPointsProvider;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced, NoClear)
    UPointsProvider* _pointsProvider;
    
    UPROPERTY(EditAnywhere)
    float _impactPointDistanceError;
    
public:
    UFlashlightablePointsLightingStrategy();
};

