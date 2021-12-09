#pragma once
#include "CoreMinimal.h"
#include "SpawnedAttackPoint.generated.h"

class ABaseTormentTrailPoint;

USTRUCT(BlueprintType)
struct FSpawnedAttackPoint {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ABaseTormentTrailPoint* AttackTrailPoint;
    
    THEEXECUTIONER_API FSpawnedAttackPoint();
};

