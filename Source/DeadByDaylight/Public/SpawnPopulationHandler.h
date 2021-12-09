#pragma once
#include "CoreMinimal.h"
#include "SpawnPopulationHandler.generated.h"

class USceneComponent;

USTRUCT()
struct FSpawnPopulationHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<USceneComponent*> _allAvailableSpawners;
    
public:
    DEADBYDAYLIGHT_API FSpawnPopulationHandler();
};

