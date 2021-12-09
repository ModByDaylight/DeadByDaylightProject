#pragma once
#include "CoreMinimal.h"
#include "FootStep.generated.h"

class UDecalComponent;

USTRUCT(BlueprintType)
struct FFootStep {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDecalComponent* Decal;
    
    DEADBYDAYLIGHT_API FFootStep();
};

