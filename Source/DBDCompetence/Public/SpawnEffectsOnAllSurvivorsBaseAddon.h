#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _canCreateMultipleInstances;
    
public:
    USpawnEffectsOnAllSurvivorsBaseAddon();
};

