#pragma once
#include "CoreMinimal.h"
#include "SecondaryInteractionProperties.h"
#include "BlightPowerStateDash.h"
#include "BlightPowerStateLethalDash.generated.h"

UCLASS()
class UBlightPowerStateLethalDash : public UBlightPowerStateDash {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSecondaryInteractionProperties _secondaryInteractionProperties;
    
    UPROPERTY(EditAnywhere)
    bool _smashBreakables;
    
public:
    UBlightPowerStateLethalDash();
};

