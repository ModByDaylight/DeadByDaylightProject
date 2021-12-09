#pragma once
#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "BlightPowerStateNonLethalDash.generated.h"

UCLASS()
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _smashBreakables;
    
public:
    UBlightPowerStateNonLethalDash();
};

