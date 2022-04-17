#pragma once
#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.h"
#include "PlayerStatusEffectSpawnerHelper.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FPlayerStatusEffectSpawnerHelperInitParams _initParams;
    
    UPROPERTY(Export, Transient)
    TSet<UStatusEffect*> _spawnedEffects;
    
public:
    DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelper();
};

