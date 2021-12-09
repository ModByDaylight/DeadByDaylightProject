#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAITunableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float DefaultValue;
    
    UPROPERTY(EditInstanceOnly)
    FName TunableName;
    
    FAITunableParameter();
};

