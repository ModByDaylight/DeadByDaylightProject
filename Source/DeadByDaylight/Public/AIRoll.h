#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRoll.generated.h"

USTRUCT(BlueprintType)
struct FAIRoll {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAITunableParameter Random;
    
    UPROPERTY(EditAnywhere)
    FAITunableParameter OnFailCooldown;
    
    DEADBYDAYLIGHT_API FAIRoll();
};

