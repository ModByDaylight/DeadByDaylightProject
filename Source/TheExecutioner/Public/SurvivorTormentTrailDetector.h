#pragma once
#include "CoreMinimal.h"
#include "TormentTrailDetectorComponent.h"
#include "SurvivorTormentTrailDetector.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent {
    GENERATED_BODY()
public:
    USurvivorTormentTrailDetector();
};

