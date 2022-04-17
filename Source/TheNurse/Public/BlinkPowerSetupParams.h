#pragma once
#include "CoreMinimal.h"
#include "BlinkPowerSetupParams.generated.h"

class UTimerObject;

USTRUCT(BlueprintType)
struct FBlinkPowerSetupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UTimerObject* ChainBlinkTimer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTimerObject* CooldownTimer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTimerObject* RechargeTimer;
    
    THENURSE_API FBlinkPowerSetupParams();
};

