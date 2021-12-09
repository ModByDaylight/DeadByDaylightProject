#pragma once
#include "CoreMinimal.h"
#include "GeneratorQueryHandlePair.generated.h"

class AGenerator;

USTRUCT(BlueprintType)
struct FGeneratorQueryHandlePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGenerator* generator;
    
    DEADBYDAYLIGHT_API FGeneratorQueryHandlePair();
};

