#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.generated.h"

class UObject;
class ADBDPlayer;
class UGameplayModifierContainer;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelperInitParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    ADBDPlayer* OrininatingPlayer;
    
    UPROPERTY(Export)
    UGameplayModifierContainer* OriginatingEffect;
    
    UPROPERTY()
    TArray<FStatusEffectSpawnData> EffectsToSpawn;
    
    DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelperInitParams();
};

