#pragma once
#include "CoreMinimal.h"
#include "RandomizableActorSpawner.h"
#include "PotentialRandomizableSpawnerPool.generated.h"

USTRUCT(BlueprintType)
struct FPotentialRandomizableSpawnerPool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRandomizableActorSpawner> SpawnerPool;
    
    DEADBYDAYLIGHT_API FPotentialRandomizableSpawnerPool();
};

