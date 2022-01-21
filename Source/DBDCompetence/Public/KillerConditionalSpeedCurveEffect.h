#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "KillerConditionalSpeedCurveEffect.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UKillerConditionalSpeedCurveEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _speedCurve;
    
public:
    UKillerConditionalSpeedCurveEffect();
};

