#pragma once
#include "CoreMinimal.h"
#include "ObjectRandomizer.h"
#include "PotentialRandomizableSpawnerPool.h"
#include "NatObjectRandomizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UNatObjectRandomizer : public UObjectRandomizer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPotentialRandomizableSpawnerPool> PotentialRandomizableSpawnerPools;
    
    UNatObjectRandomizer();
};

