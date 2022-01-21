#pragma once
#include "CoreMinimal.h"
#include "ExhaustedEffect.h"
#include "MindbreakerExhaustedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UMindbreakerExhaustedEffect : public UExhaustedEffect {
    GENERATED_BODY()
public:
    UMindbreakerExhaustedEffect();
};

