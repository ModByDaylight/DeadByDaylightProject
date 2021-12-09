#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SelectableTileSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FSelectableTileSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FComponentReference ComponentReference;
    
    DEADBYDAYLIGHT_API FSelectableTileSpawnPoint();
};

