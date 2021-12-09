#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Madgrit.generated.h"

class UCurveFloat;

UCLASS()
class UMadgrit : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _slashHittingSpeedCurve;
    
public:
    UMadgrit();
};

