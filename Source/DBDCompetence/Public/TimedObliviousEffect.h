#pragma once
#include "CoreMinimal.h"
#include "ObliviousEffect.h"
#include "TimedObliviousEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTimedObliviousEffect : public UObliviousEffect {
    GENERATED_BODY()
public:
    UTimedObliviousEffect();
};

