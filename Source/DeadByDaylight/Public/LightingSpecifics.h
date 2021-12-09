#pragma once
#include "CoreMinimal.h"
#include "LightingSpecifics.generated.h"

class ABaseSky;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FLightingSpecifics {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ABaseSky> LightBlueprint;
    
    FLightingSpecifics();
};

