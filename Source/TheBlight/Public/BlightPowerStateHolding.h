#pragma once
#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "SecondaryInteractionProperties.h"
#include "BlightPowerStateHolding.generated.h"

UCLASS()
class UBlightPowerStateHolding : public UBlightPowerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSecondaryInteractionProperties _secondaryInteractionProperties;
    
    UPROPERTY(EditAnywhere)
    bool _allowNavigation;
    
    UPROPERTY(EditAnywhere)
    float _dashSpeedForProjection;
    
public:
    UBlightPowerStateHolding();
};

