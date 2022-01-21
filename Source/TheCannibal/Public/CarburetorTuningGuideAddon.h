#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "CarburetorTuningGuideAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCarburetorTuningGuideAddon : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
    UCarburetorTuningGuideAddon();
};

