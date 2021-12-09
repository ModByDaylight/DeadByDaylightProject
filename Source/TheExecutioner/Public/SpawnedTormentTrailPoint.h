#pragma once
#include "CoreMinimal.h"
#include "SpawnedTormentTrailPoint.generated.h"

class ATormentTrailPoint;

USTRUCT()
struct FSpawnedTormentTrailPoint {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATormentTrailPoint* TrailPoint;
    
    THEEXECUTIONER_API FSpawnedTormentTrailPoint();
};

